// roc 2009-06 005715c0  unit: seg_00570000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005715c0
//
// 005715c0  56                   push esi
// 005715c1  8bf1                 mov esi, ecx
// 005715c3  57                   push edi
// 005715c4  33ff                 xor edi, edi
// 005715c6  57                   push edi
// 005715c7  c706a0fc8b00         mov dword ptr [esi], 0x8bfca0
// 005715cd  897e04               mov dword ptr [esi + 4], edi
// 005715d0  897e08               mov dword ptr [esi + 8], edi
// 005715d3  897e0c               mov dword ptr [esi + 0xc], edi
// 005715d6  e8859bffff           call 0x56b160
// 005715db  8b442410             mov eax, dword ptr [esp + 0x10]
// 005715df  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005715e3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005715e7  894608               mov dword ptr [esi + 8], eax
// 005715ea  0fafc1               imul eax, ecx
// 005715ed  0fafc2               imul eax, edx
// 005715f0  6a01                 push 1
// 005715f2  50                   push eax
// 005715f3  897e04               mov dword ptr [esi + 4], edi
// 005715f6  894e0c               mov dword ptr [esi + 0xc], ecx
// 005715f9  895610               mov dword ptr [esi + 0x10], edx
// 005715fc  e84f9bffff           call 0x56b150
// 00571601  83c40c               add esp, 0xc
// 00571604  894604               mov dword ptr [esi + 4], eax
// 00571607  5f                   pop edi
// 00571608  8bc6                 mov eax, esi
// 0057160a  5e                   pop esi
// 0057160b  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
