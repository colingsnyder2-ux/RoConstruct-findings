// roc 2009-06 00577bf0  unit: G3D::LineSegment  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577bf0
//
// 00577bf0  8b442404             mov eax, dword ptr [esp + 4]
// 00577bf4  53                   push ebx
// 00577bf5  56                   push esi
// 00577bf6  57                   push edi
// 00577bf7  8bd9                 mov ebx, ecx
// 00577bf9  33ff                 xor edi, edi
// 00577bfb  2bd8                 sub ebx, eax
// 00577bfd  8bf0                 mov esi, eax
// 00577bff  90                   nop 
// 00577c00  33c9                 xor ecx, ecx
// 00577c02  8bd6                 mov edx, esi
// 00577c04  d902                 fld dword ptr [edx]
// 00577c06  d81c13               fcomp dword ptr [ebx + edx]
// 00577c09  dfe0                 fnstsw ax
// 00577c0b  f6c444               test ah, 0x44
// 00577c0e  7a1a                 jp 0x577c2a
// 00577c10  41                   inc ecx
// 00577c11  83c204               add edx, 4
// 00577c14  83f903               cmp ecx, 3
// 00577c17  7ceb                 jl 0x577c04
// 00577c19  47                   inc edi
// 00577c1a  83c60c               add esi, 0xc
// 00577c1d  83ff03               cmp edi, 3
// 00577c20  7cde                 jl 0x577c00
// 00577c22  5f                   pop edi
// 00577c23  5e                   pop esi
// 00577c24  b001                 mov al, 1
// 00577c26  5b                   pop ebx
// 00577c27  c20400               ret 4
// 00577c2a  5f                   pop edi
// 00577c2b  5e                   pop esi
// 00577c2c  32c0                 xor al, al
// 00577c2e  5b                   pop ebx
// 00577c2f  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ??8Matrix3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
