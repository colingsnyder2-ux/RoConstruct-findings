// roc 2007-03 006068d0  unit: seg_00600000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006068d0
//
// 006068d0  6aff                 push -1
// 006068d2  68bccc7500           push 0x75ccbc
// 006068d7  64a100000000         mov eax, dword ptr fs:[0]
// 006068dd  50                   push eax
// 006068de  64892500000000       mov dword ptr fs:[0], esp
// 006068e5  51                   push ecx
// 006068e6  56                   push esi
// 006068e7  8bf1                 mov esi, ecx
// 006068e9  89742404             mov dword ptr [esp + 4], esi
// 006068ed  8d4e28               lea ecx, [esi + 0x28]
// 006068f0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006068f8  ff158ce77700         call dword ptr [0x77e78c]
// 006068fe  8d4e0c               lea ecx, [esi + 0xc]
// 00606901  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00606909  ff158ce77700         call dword ptr [0x77e78c]
// 0060690f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00606913  5e                   pop esi
// 00606914  64890d00000000       mov dword ptr fs:[0], ecx
// 0060691b  83c410               add esp, 0x10
// 0060691e  c3                   ret 
// copied from an identical function in another client (function ??1RenderSystemCapabilities@Ogre@@QAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreRenderSystemCapabilities.cpp