// roc 2007-03 0047b130  unit: seg_00470000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047b130
//
// 0047b130  53                   push ebx
// 0047b131  57                   push edi
// 0047b132  8bf9                 mov edi, ecx
// 0047b134  33db                 xor ebx, ebx
// 0047b136  395f0c               cmp dword ptr [edi + 0xc], ebx
// 0047b139  7e30                 jle 0x47b16b
// 0047b13b  56                   push esi
// 0047b13c  8d642400             lea esp, [esp]
// 0047b140  8b4708               mov eax, dword ptr [edi + 8]
// 0047b143  8b0498               mov eax, dword ptr [eax + ebx*4]
// 0047b146  85c0                 test eax, eax
// 0047b148  7418                 je 0x47b162
// 0047b14a  8d9b00000000         lea ebx, [ebx]
// 0047b150  8b700c               mov esi, dword ptr [eax + 0xc]
// 0047b153  50                   push eax
// 0047b154  e807820700           call 0x4f3360
// 0047b159  83c404               add esp, 4
// 0047b15c  85f6                 test esi, esi
// 0047b15e  8bc6                 mov eax, esi
// 0047b160  75ee                 jne 0x47b150
// 0047b162  83c301               add ebx, 1
// 0047b165  3b5f0c               cmp ebx, dword ptr [edi + 0xc]
// 0047b168  7cd6                 jl 0x47b140
// 0047b16a  5e                   pop esi
// 0047b16b  8b4f08               mov ecx, dword ptr [edi + 8]
// 0047b16e  51                   push ecx
// 0047b16f  e80c820700           call 0x4f3380
// 0047b174  83c404               add esp, 4
// 0047b177  c7470800000000       mov dword ptr [edi + 8], 0
// 0047b17e  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 0047b185  c7470400000000       mov dword ptr [edi + 4], 0
// 0047b18c  5f                   pop edi
// 0047b18d  5b                   pop ebx
// 0047b18e  c3                   ret 
// library rbxgs-g3d/G3Dcpp\MeshAlgWeld.cpp (function ?freeMemory@?$Table@PAV?$Array@H@G3D@@_N@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgWeld.cpp
