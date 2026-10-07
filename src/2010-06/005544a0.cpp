// roc 2010-06 005544a0  unit: seg_00550000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005544a0
//
// 005544a0  56                   push esi
// 005544a1  8bf1                 mov esi, ecx
// 005544a3  57                   push edi
// 005544a4  33ff                 xor edi, edi
// 005544a6  57                   push edi
// 005544a7  c7064832a100         mov dword ptr [esi], 0xa13248
// 005544ad  897e04               mov dword ptr [esi + 4], edi
// 005544b0  897e08               mov dword ptr [esi + 8], edi
// 005544b3  897e0c               mov dword ptr [esi + 0xc], edi
// 005544b6  e8f566fbff           call 0x50abb0
// 005544bb  8b442410             mov eax, dword ptr [esp + 0x10]
// 005544bf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005544c3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005544c7  894608               mov dword ptr [esi + 8], eax
// 005544ca  0fafc1               imul eax, ecx
// 005544cd  0fafc2               imul eax, edx
// 005544d0  6a01                 push 1
// 005544d2  50                   push eax
// 005544d3  897e04               mov dword ptr [esi + 4], edi
// 005544d6  894e0c               mov dword ptr [esi + 0xc], ecx
// 005544d9  895610               mov dword ptr [esi + 0x10], edx
// 005544dc  e89f93ffff           call 0x54d880
// 005544e1  83c40c               add esp, 0xc
// 005544e4  894604               mov dword ptr [esi + 4], eax
// 005544e7  5f                   pop edi
// 005544e8  8bc6                 mov eax, esi
// 005544ea  5e                   pop esi
// 005544eb  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
