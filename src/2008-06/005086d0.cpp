// from server: 100% by auto
// roc 2008-06 005086d0  unit: G3D::Shader  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005086d0
//
// 005086d0  56                   push esi
// 005086d1  57                   push edi
// 005086d2  8bf1                 mov esi, ecx
// 005086d4  33ff                 xor edi, edi
// 005086d6  397e04               cmp dword ptr [esi + 4], edi
// 005086d9  7e19                 jle 0x5086f4
// 005086db  53                   push ebx
// 005086dc  33db                 xor ebx, ebx
// 005086de  8bff                 mov edi, edi
// 005086e0  8b0e                 mov ecx, dword ptr [esi]
// 005086e2  03cb                 add ecx, ebx
// 005086e4  ff1568248000         call dword ptr [0x802468]
// 005086ea  47                   inc edi
// 005086eb  83c31c               add ebx, 0x1c
// 005086ee  3b7e04               cmp edi, dword ptr [esi + 4]
// 005086f1  7ced                 jl 0x5086e0
// 005086f3  5b                   pop ebx
// 005086f4  8b06                 mov eax, dword ptr [esi]
// 005086f6  85c0                 test eax, eax
// 005086f8  740f                 je 0x508709
// 005086fa  8b40fc               mov eax, dword ptr [eax - 4]
// 005086fd  8b0d14359700         mov ecx, dword ptr [0x973514]
// 00508703  50                   push eax
// 00508704  e8f7f4ffff           call 0x507c00
// 00508709  5f                   pop edi
// 0050870a  c70600000000         mov dword ptr [esi], 0
// 00508710  c7460400000000       mov dword ptr [esi + 4], 0
// 00508717  c7460800000000       mov dword ptr [esi + 8], 0
// 0050871e  5e                   pop esi
// 0050871f  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ??1?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
