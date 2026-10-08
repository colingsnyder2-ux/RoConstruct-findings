// from server: 100% by auto
// roc 2008-06 00514590  unit: G3D::GCamera  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514590
//
// 00514590  53                   push ebx
// 00514591  55                   push ebp
// 00514592  8bc1                 mov eax, ecx
// 00514594  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00514598  56                   push esi
// 00514599  57                   push edi
// 0051459a  8d580c               lea ebx, [eax + 0xc]
// 0051459d  8d7924               lea edi, [ecx + 0x24]
// 005145a0  8d7008               lea esi, [eax + 8]
// 005145a3  8d5108               lea edx, [ecx + 8]
// 005145a6  bd03000000           mov ebp, 3
// 005145ab  eb03                 jmp 0x5145b0
// 005145ad  8d4900               lea ecx, [ecx]
// 005145b0  d942f8               fld dword ptr [edx - 8]
// 005145b3  83c20c               add edx, 0xc
// 005145b6  d95ef8               fstp dword ptr [esi - 8]
// 005145b9  83c610               add esi, 0x10
// 005145bc  d942f0               fld dword ptr [edx - 0x10]
// 005145bf  83c704               add edi, 4
// 005145c2  d95eec               fstp dword ptr [esi - 0x14]
// 005145c5  83c310               add ebx, 0x10
// 005145c8  83ed01               sub ebp, 1
// 005145cb  d942f4               fld dword ptr [edx - 0xc]
// 005145ce  d95ef0               fstp dword ptr [esi - 0x10]
// 005145d1  d947fc               fld dword ptr [edi - 4]
// 005145d4  d95bf0               fstp dword ptr [ebx - 0x10]
// 005145d7  75d7                 jne 0x5145b0
// 005145d9  d9ee                 fldz 
// 005145db  5f                   pop edi
// 005145dc  d95030               fst dword ptr [eax + 0x30]
// 005145df  5e                   pop esi
// 005145e0  d95034               fst dword ptr [eax + 0x34]
// 005145e3  5d                   pop ebp
// 005145e4  d95838               fstp dword ptr [eax + 0x38]
// 005145e7  5b                   pop ebx
// 005145e8  d9e8                 fld1 
// 005145ea  d9583c               fstp dword ptr [eax + 0x3c]
// 005145ed  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@ABVCoordinateFrame@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
