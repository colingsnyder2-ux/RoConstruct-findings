// roc 2008-06 0050eea0  unit: seg_00500000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050eea0
//
// 0050eea0  56                   push esi
// 0050eea1  8bf1                 mov esi, ecx
// 0050eea3  57                   push edi
// 0050eea4  33ff                 xor edi, edi
// 0050eea6  57                   push edi
// 0050eea7  c7065c978100         mov dword ptr [esi], 0x81975c
// 0050eead  897e04               mov dword ptr [esi + 4], edi
// 0050eeb0  897e08               mov dword ptr [esi + 8], edi
// 0050eeb3  897e0c               mov dword ptr [esi + 0xc], edi
// 0050eeb6  e8458effff           call 0x507d00
// 0050eebb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050eebf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050eec3  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050eec7  894608               mov dword ptr [esi + 8], eax
// 0050eeca  0fafc1               imul eax, ecx
// 0050eecd  0fafc2               imul eax, edx
// 0050eed0  6a01                 push 1
// 0050eed2  50                   push eax
// 0050eed3  897e04               mov dword ptr [esi + 4], edi
// 0050eed6  894e0c               mov dword ptr [esi + 0xc], ecx
// 0050eed9  895610               mov dword ptr [esi + 0x10], edx
// 0050eedc  e83f9cffff           call 0x508b20
// 0050eee1  83c40c               add esp, 0xc
// 0050eee4  894604               mov dword ptr [esi + 4], eax
// 0050eee7  5f                   pop edi
// 0050eee8  8bc6                 mov eax, esi
// 0050eeea  5e                   pop esi
// 0050eeeb  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
