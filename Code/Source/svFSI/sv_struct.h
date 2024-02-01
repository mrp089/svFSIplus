/* Copyright (c) Stanford University, The Regents of the University of California, and others.
 *
 * All Rights Reserved.
 *
 * See Copyright-SimVascular.txt for additional details.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject
 * to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
 * OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef STRUCT_H 
#define STRUCT_H 

#include <set>

#include "ComMod.h"

namespace struct_ns {

void b_struct_2d(const ComMod& com_mod, const int eNoN, const double w, const Vector<double>& N, 
    const Array<double>& Nx, const Array<double>& dl, const Vector<double>& hl, const Vector<double>& nV, 
    Array<double>& lR, Array3<double>& lK);

void b_struct_3d(const ComMod& com_mod, const int eNoN, const double w, const Vector<double>& N, 
    const Array<double>& Nx, const Array<double>& dl, const Vector<double>& hl, const Vector<double>& nV, 
    Array<double>& lR, Array3<double>& lK);

void construct_dsolid(ComMod& com_mod, CepMod& cep_mod, const mshType& lM, const Array<double>& Ag, 
    const Array<double>& Yg, const Array<double>& Dg);

void construct_gr(ComMod& com_mod, CepMod& cep_mod, CmMod& cm_mod, const mshType& lM, const Array<double>& Ag, 
    const Array<double>& Yg, const Array<double>& Dg);

void construct_gr_fd(ComMod& com_mod, CepMod& cep_mod, CmMod& cm_mod, const mshType& lM, const Array<double>& Ag, 
    const Array<double>& Yg, const Array<double>& Dg);

void eval_gr_fd(ComMod& com_mod, CepMod& cep_mod, CmMod& cm_mod, const mshType& lM, const Array<double>& Ag, 
    const Array<double>& Yg, const Array<double>& Dg,
    const std::set<int>& elements_1, const std::set<int>& elements_2, const double eps=0.0, const int dAc=0, const int di=0);

void eval_dsolid(const int& e, ComMod& com_mod, CepMod& cep_mod, const mshType& lM, const Array<double>& Ag,
    const Array<double>& Yg, const Array<double>& Dg, Vector<int>& ptr, Array<double>& lR, Array3<double>& lK,
    const bool eval=true);

void struct_2d(ComMod& com_mod, CepMod& cep_mod, const int eNoN, const int nFn, const double w, 
    const Vector<double>& N, const Array<double>& Nx, const Array<double>& al, const Array<double>& yl, 
    const Array<double>& dl, const Array<double>& bfl, const Array<double>& fN, const Array<double>& pS0l, 
    Vector<double>& pSl, const Vector<double>& ya_l, Vector<double>& gr_int_l, Array<double>& gr_props_l, 
    Array<double>& lR, Array3<double>& lK);

void struct_3d(ComMod& com_mod, CepMod& cep_mod, const int eNoN, const int nFn, const double w, 
    const Vector<double>& N, const Array<double>& Nx, const Array<double>& al, const Array<double>& yl, 
    const Array<double>& dl, const Array<double>& bfl, const Array<double>& fN, const Array<double>& pS0l, 
    Vector<double>& pSl, const Vector<double>& ya_l, Vector<double>& gr_int_l, Array<double>& gr_props_l, 
    Array<double>& lR, Array3<double>& lK, const bool eval=true);

void struct_3d_carray(ComMod& com_mod, CepMod& cep_mod, const int eNoN, const int nFn, const double w, 
    const Vector<double>& N, const Array<double>& Nx, const Array<double>& al, const Array<double>& yl, 
    const Array<double>& dl, const Array<double>& bfl, const Array<double>& fN, const Array<double>& pS0l, 
    Vector<double>& pSl, const Vector<double>& ya_l, Vector<double>& gr_int_l, Array<double>& gr_props_l, 
    Array<double>& lR, Array3<double>& lK, const bool eval=true);

};

#endif

