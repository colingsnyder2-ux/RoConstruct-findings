// roc 2007-03 00409690  unit: seg_00400000  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00409690
//
// 00409690  53                   push ebx
// 00409691  56                   push esi
// 00409692  8bf1                 mov esi, ecx
// 00409694  33db                 xor ebx, ebx
// 00409696  395e10               cmp dword ptr [esi + 0x10], ebx
// 00409699  57                   push edi
// 0040969a  7434                 je 0x4096d0
// 0040969c  83cfff               or edi, 0xffffffff
// 0040969f  90                   nop 
// 004096a0  8b4610               mov eax, dword ptr [esi + 0x10]
// 004096a3  3bc3                 cmp eax, ebx
// 004096a5  7424                 je 0x4096cb
// 004096a7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004096aa  8d4408ff             lea eax, [eax + ecx - 1]
// 004096ae  8b4e08               mov ecx, dword ptr [esi + 8]
// 004096b1  3bc8                 cmp ecx, eax
// 004096b3  7702                 ja 0x4096b7
// 004096b5  2bc1                 sub eax, ecx
// 004096b7  8b5604               mov edx, dword ptr [esi + 4]
// 004096ba  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004096bd  ff158ce77700         call dword ptr [0x77e78c]
// 004096c3  017e10               add dword ptr [esi + 0x10], edi
// 004096c6  7503                 jne 0x4096cb
// 004096c8  895e0c               mov dword ptr [esi + 0xc], ebx
// 004096cb  395e10               cmp dword ptr [esi + 0x10], ebx
// 004096ce  75d0                 jne 0x4096a0
// 004096d0  8b7e08               mov edi, dword ptr [esi + 8]
// 004096d3  3bfb                 cmp edi, ebx
// 004096d5  761d                 jbe 0x4096f4
// 004096d7  8b4604               mov eax, dword ptr [esi + 4]
// 004096da  83ef01               sub edi, 1
// 004096dd  391cb8               cmp dword ptr [eax + edi*4], ebx
// 004096e0  8d04b8               lea eax, [eax + edi*4]
// 004096e3  740b                 je 0x4096f0
// 004096e5  8b08                 mov ecx, dword ptr [eax]
// 004096e7  51                   push ecx
// 004096e8  e8034a2100           call 0x61e0f0
// 004096ed  83c404               add esp, 4
// 004096f0  3bfb                 cmp edi, ebx
// 004096f2  77e3                 ja 0x4096d7
// 004096f4  8b4604               mov eax, dword ptr [esi + 4]
// 004096f7  3bc3                 cmp eax, ebx
// 004096f9  7409                 je 0x409704
// 004096fb  50                   push eax
// 004096fc  e8ef492100           call 0x61e0f0
// 00409701  83c404               add esp, 4
// 00409704  5f                   pop edi
// 00409705  895e04               mov dword ptr [esi + 4], ebx
// 00409708  895e08               mov dword ptr [esi + 8], ebx
// 0040970b  5e                   pop esi
// 0040970c  5b                   pop ebx
// 0040970d  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GImage_ppm.cpp (function ?_Tidy@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_ppm.cpp
