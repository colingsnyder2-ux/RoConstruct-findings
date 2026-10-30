// roc 2009-06 006e0220  unit: RBX::ImageButton  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e0220
//
// 006e0220  6aff                 push -1
// 006e0222  683c1a8700           push 0x871a3c
// 006e0227  64a100000000         mov eax, dword ptr fs:[0]
// 006e022d  50                   push eax
// 006e022e  64892500000000       mov dword ptr fs:[0], esp
// 006e0235  51                   push ecx
// 006e0236  56                   push esi
// 006e0237  8bf1                 mov esi, ecx
// 006e0239  89742404             mov dword ptr [esp + 4], esi
// 006e023d  8d4e28               lea ecx, [esi + 0x28]
// 006e0240  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006e0248  ff15c4e48900         call dword ptr [0x89e4c4]
// 006e024e  8d4e0c               lea ecx, [esi + 0xc]
// 006e0251  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006e0259  ff15c4e48900         call dword ptr [0x89e4c4]
// 006e025f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e0263  5e                   pop esi
// 006e0264  64890d00000000       mov dword ptr fs:[0], ecx
// 006e026b  83c410               add esp, 0x10
// 006e026e  c3                   ret 
// copied from an identical function in another client (function ??1RenderSystemCapabilities@Ogre@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreRenderSystemCapabilities.cpp