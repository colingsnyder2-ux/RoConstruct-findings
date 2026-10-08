// roc 2007-03 004fea30  unit: seg_004f0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fea30
//
// 004fea30  8b442404             mov eax, dword ptr [esp + 4]
// 004fea34  53                   push ebx
// 004fea35  56                   push esi
// 004fea36  57                   push edi
// 004fea37  8bd9                 mov ebx, ecx
// 004fea39  33ff                 xor edi, edi
// 004fea3b  2bd8                 sub ebx, eax
// 004fea3d  8bf0                 mov esi, eax
// 004fea3f  90                   nop 
// 004fea40  33c9                 xor ecx, ecx
// 004fea42  8bd6                 mov edx, esi
// 004fea44  d90413               fld dword ptr [ebx + edx]
// 004fea47  d902                 fld dword ptr [edx]
// 004fea49  dae9                 fucompp 
// 004fea4b  dfe0                 fnstsw ax
// 004fea4d  f6c444               test ah, 0x44
// 004fea50  7a1e                 jp 0x4fea70
// 004fea52  83c101               add ecx, 1
// 004fea55  83c204               add edx, 4
// 004fea58  83f903               cmp ecx, 3
// 004fea5b  7ce7                 jl 0x4fea44
// 004fea5d  83c701               add edi, 1
// 004fea60  83c60c               add esi, 0xc
// 004fea63  83ff03               cmp edi, 3
// 004fea66  7cd8                 jl 0x4fea40
// 004fea68  5f                   pop edi
// 004fea69  5e                   pop esi
// 004fea6a  b001                 mov al, 1
// 004fea6c  5b                   pop ebx
// 004fea6d  c20400               ret 4
// 004fea70  5f                   pop edi
// 004fea71  5e                   pop esi
// 004fea72  32c0                 xor al, al
// 004fea74  5b                   pop ebx
// 004fea75  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ??8Matrix3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
