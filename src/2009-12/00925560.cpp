// roc 2009-12 00925560  unit: seg_00920000  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00925560
//
// 00925560  55                   push ebp
// 00925561  8bec                 mov ebp, esp
// 00925563  6aff                 push -1
// 00925565  6812699500           push 0x956912
// 0092556a  64a100000000         mov eax, dword ptr fs:[0]
// 00925570  50                   push eax
// 00925571  64892500000000       mov dword ptr fs:[0], esp
// 00925578  83ec50               sub esp, 0x50
// 0092557b  894da8               mov dword ptr [ebp - 0x58], ecx
// 0092557e  c745acffffff3f       mov dword ptr [ebp - 0x54], 0x3fffffff
// 00925585  837dac00             cmp dword ptr [ebp - 0x54], 0
// 00925589  7608                 jbe 0x925593
// 0092558b  8b45ac               mov eax, dword ptr [ebp - 0x54]
// 0092558e  8945a4               mov dword ptr [ebp - 0x5c], eax
// 00925591  eb07                 jmp 0x92559a
// 00925593  c745a401000000       mov dword ptr [ebp - 0x5c], 1
// 0092559a  8b4da8               mov ecx, dword ptr [ebp - 0x58]
// 0092559d  8b55a4               mov edx, dword ptr [ebp - 0x5c]
// 009255a0  2b5118               sub edx, dword ptr [ecx + 0x18]
// 009255a3  3b5508               cmp edx, dword ptr [ebp + 8]
// 009255a6  735f                 jae 0x925607
// 009255a8  6884389a00           push 0x9a3884
// 009255ad  8d4db0               lea ecx, [ebp - 0x50]
// 009255b0  ff15f4b69800         call dword ptr [0x98b6f4]
// 009255b6  c745fc00000000       mov dword ptr [ebp - 4], 0
// 009255bd  8d4dcc               lea ecx, [ebp - 0x34]
// 009255c0  ff1554b79800         call dword ptr [0x98b754]
// 009255c6  c645fc01             mov byte ptr [ebp - 4], 1
// 009255ca  c745cc84f49900       mov dword ptr [ebp - 0x34], 0x99f484
// 009255d1  8d45b0               lea eax, [ebp - 0x50]
// 009255d4  50                   push eax
// 009255d5  8d4dd8               lea ecx, [ebp - 0x28]
// 009255d8  ff15f0b69800         call dword ptr [0x98b6f0]
// 009255de  c645fc00             mov byte ptr [ebp - 4], 0
// 009255e2  c745cc90f49900       mov dword ptr [ebp - 0x34], 0x99f490
// 009255e9  68e4efa800           push 0xa8efe4
// 009255ee  8d4dcc               lea ecx, [ebp - 0x34]
// 009255f1  51                   push ecx
// 009255f2  e881f2ecff           call 0x7f4878
// 009255f7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 009255fe  8d4db0               lea ecx, [ebp - 0x50]
// 00925601  ff15e4b69800         call dword ptr [0x98b6e4]
// 00925607  8b55a8               mov edx, dword ptr [ebp - 0x58]
// 0092560a  8b4218               mov eax, dword ptr [edx + 0x18]
// 0092560d  034508               add eax, dword ptr [ebp + 8]
// 00925610  8b4da8               mov ecx, dword ptr [ebp - 0x58]
// 00925613  894118               mov dword ptr [ecx + 0x18], eax
// 00925616  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00925619  64890d00000000       mov dword ptr fs:[0], ecx
// 00925620  8be5                 mov esp, ebp
// 00925622  5d                   pop ebp
// 00925623  c20400               ret 4
// copied from an identical function in another client (function ?_Incsize@?$list@PAVAnimationState@Ogre@@V?$allocator@PAVAnimationState@Ogre@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp