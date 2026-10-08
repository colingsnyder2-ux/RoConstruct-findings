// roc 2009-12 005f05a0  unit: seg_005f0000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f05a0
//
// 005f05a0  56                   push esi
// 005f05a1  8bf1                 mov esi, ecx
// 005f05a3  57                   push edi
// 005f05a4  33ff                 xor edi, edi
// 005f05a6  57                   push edi
// 005f05a7  c70698559b00         mov dword ptr [esi], 0x9b5598
// 005f05ad  897e04               mov dword ptr [esi + 4], edi
// 005f05b0  897e08               mov dword ptr [esi + 8], edi
// 005f05b3  897e0c               mov dword ptr [esi + 0xc], edi
// 005f05b6  e8e5bbf6ff           call 0x55c1a0
// 005f05bb  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f05bf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f05c3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005f05c7  894608               mov dword ptr [esi + 8], eax
// 005f05ca  0fafc1               imul eax, ecx
// 005f05cd  0fafc2               imul eax, edx
// 005f05d0  6a01                 push 1
// 005f05d2  50                   push eax
// 005f05d3  897e04               mov dword ptr [esi + 4], edi
// 005f05d6  894e0c               mov dword ptr [esi + 0xc], ecx
// 005f05d9  895610               mov dword ptr [esi + 0x10], edx
// 005f05dc  e8cf9cffff           call 0x5ea2b0
// 005f05e1  83c40c               add esp, 0xc
// 005f05e4  894604               mov dword ptr [esi + 4], eax
// 005f05e7  5f                   pop edi
// 005f05e8  8bc6                 mov eax, esi
// 005f05ea  5e                   pop esi
// 005f05eb  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
