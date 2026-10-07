// roc 2007-08 004585d0  unit: CRobloxWnd  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004585d0
//
// 004585d0  6aff                 push -1
// 004585d2  68081f7400           push 0x741f08
// 004585d7  64a100000000         mov eax, dword ptr fs:[0]
// 004585dd  50                   push eax
// 004585de  51                   push ecx
// 004585df  56                   push esi
// 004585e0  a188518b00           mov eax, dword ptr [0x8b5188]
// 004585e5  33c4                 xor eax, esp
// 004585e7  50                   push eax
// 004585e8  8d44240c             lea eax, [esp + 0xc]
// 004585ec  64a300000000         mov dword ptr fs:[0], eax
// 004585f2  8bf1                 mov esi, ecx
// 004585f4  89742408             mov dword ptr [esp + 8], esi
// 004585f8  8b4638               mov eax, dword ptr [esi + 0x38]
// 004585fb  85c0                 test eax, eax
// 004585fd  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00458605  742c                 je 0x458633
// 00458607  83c004               add eax, 4
// 0045860a  50                   push eax
// 0045860b  ff15e8d27700         call dword ptr [0x77d2e8]
// 00458611  85c0                 test eax, eax
// 00458613  7517                 jne 0x45862c
// 00458615  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00458618  e8b3f7ffff           call 0x457dd0
// 0045861d  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00458620  85c9                 test ecx, ecx
// 00458622  7408                 je 0x45862c
// 00458624  8b01                 mov eax, dword ptr [ecx]
// 00458626  8b10                 mov edx, dword ptr [eax]
// 00458628  6a01                 push 1
// 0045862a  ffd2                 call edx
// 0045862c  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00458633  8bce                 mov ecx, esi
// 00458635  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0045863d  e8bef7ffff           call 0x457e00
// 00458642  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00458646  64890d00000000       mov dword ptr fs:[0], ecx
// 0045864d  59                   pop ecx
// 0045864e  5e                   pop esi
// 0045864f  83c410               add esp, 0x10
// 00458652  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1Entry@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
