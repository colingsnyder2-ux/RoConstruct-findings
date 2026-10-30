// roc 2009-06 005bbb80  unit: seg_005b0000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bbb80
//
// 005bbb80  55                   push ebp
// 005bbb81  8bec                 mov ebp, esp
// 005bbb83  6aff                 push -1
// 005bbb85  6870198600           push 0x861970
// 005bbb8a  64a100000000         mov eax, dword ptr fs:[0]
// 005bbb90  50                   push eax
// 005bbb91  64892500000000       mov dword ptr fs:[0], esp
// 005bbb98  51                   push ecx
// 005bbb99  51                   push ecx
// 005bbb9a  53                   push ebx
// 005bbb9b  56                   push esi
// 005bbb9c  57                   push edi
// 005bbb9d  8965f0               mov dword ptr [ebp - 0x10], esp
// 005bbba0  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005bbba3  8945ec               mov dword ptr [ebp - 0x14], eax
// 005bbba6  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005bbbad  eb12                 jmp 0x5bbbc1
// 005bbbaf  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005bbbb2  83c148               add ecx, 0x48
// 005bbbb5  894d10               mov dword ptr [ebp + 0x10], ecx
// 005bbbb8  8b5508               mov edx, dword ptr [ebp + 8]
// 005bbbbb  83c248               add edx, 0x48
// 005bbbbe  895508               mov dword ptr [ebp + 8], edx
// 005bbbc1  8b4508               mov eax, dword ptr [ebp + 8]
// 005bbbc4  3b450c               cmp eax, dword ptr [ebp + 0xc]
// 005bbbc7  7412                 je 0x5bbbdb
// 005bbbc9  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bbbcc  51                   push ecx
// 005bbbcd  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005bbbd0  52                   push edx
// 005bbbd1  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005bbbd4  e877e0ffff           call 0x5b9c50
// 005bbbd9  ebd4                 jmp 0x5bbbaf
// 005bbbdb  eb37                 jmp 0x5bbc14
// 005bbbdd  eb09                 jmp 0x5bbbe8
// 005bbbdf  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 005bbbe2  83c048               add eax, 0x48
// 005bbbe5  8945ec               mov dword ptr [ebp - 0x14], eax
// 005bbbe8  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005bbbeb  3b4d10               cmp ecx, dword ptr [ebp + 0x10]
// 005bbbee  740e                 je 0x5bbbfe
// 005bbbf0  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005bbbf3  52                   push edx
// 005bbbf4  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005bbbf7  e88489ffff           call 0x5b4580
// 005bbbfc  ebe1                 jmp 0x5bbbdf
// 005bbbfe  6a00                 push 0
// 005bbc00  6a00                 push 0
// 005bbc02  e843de1500           call 0x719a4a
// 005bbc07  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 005bbc0e  b81bbc5b00           mov eax, 0x5bbc1b
// 005bbc13  c3                   ret 
// 005bbc14  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 005bbc1b  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005bbc1e  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005bbc21  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbc28  5f                   pop edi
// 005bbc29  5e                   pop esi
// 005bbc2a  5b                   pop ebx
// 005bbc2b  8be5                 mov esp, ebp
// 005bbc2d  5d                   pop ebp
// 005bbc2e  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_copy@PAVFace@?$ConvexClipper@N@Wml@@PAV123@V?$allocator@VFace@?$ConvexClipper@N@Wml@@@std@@@std@@YAPAVFace@?$ConvexClipper@N@Wml@@PAV123@00AAV?$allocator@VFace@?$ConvexClipper@N@Wml@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp