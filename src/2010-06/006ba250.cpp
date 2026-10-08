// roc 2010-06 006ba250  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ba250
//
// 006ba250  6aff                 push -1
// 006ba252  68eb1d9900           push 0x991deb
// 006ba257  64a100000000         mov eax, dword ptr fs:[0]
// 006ba25d  50                   push eax
// 006ba25e  64892500000000       mov dword ptr fs:[0], esp
// 006ba265  51                   push ecx
// 006ba266  56                   push esi
// 006ba267  8bf1                 mov esi, ecx
// 006ba269  89742404             mov dword ptr [esp + 4], esi
// 006ba26d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006ba275  e856ffffff           call 0x6ba1d0
// 006ba27a  8b7608               mov esi, dword ptr [esi + 8]
// 006ba27d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006ba285  85f6                 test esi, esi
// 006ba287  742a                 je 0x6ba2b3
// 006ba289  8d4604               lea eax, [esi + 4]
// 006ba28c  83c9ff               or ecx, 0xffffffff
// 006ba28f  f00fc108             lock xadd dword ptr [eax], ecx
// 006ba293  751e                 jne 0x6ba2b3
// 006ba295  8b16                 mov edx, dword ptr [esi]
// 006ba297  8b4204               mov eax, dword ptr [edx + 4]
// 006ba29a  8bce                 mov ecx, esi
// 006ba29c  ffd0                 call eax
// 006ba29e  8d4e08               lea ecx, [esi + 8]
// 006ba2a1  83caff               or edx, 0xffffffff
// 006ba2a4  f00fc111             lock xadd dword ptr [ecx], edx
// 006ba2a8  7509                 jne 0x6ba2b3
// 006ba2aa  8b06                 mov eax, dword ptr [esi]
// 006ba2ac  8b5008               mov edx, dword ptr [eax + 8]
// 006ba2af  8bce                 mov ecx, esi
// 006ba2b1  ffd2                 call edx
// 006ba2b3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ba2b7  5e                   pop esi
// 006ba2b8  64890d00000000       mov dword ptr fs:[0], ecx
// 006ba2bf  83c410               add esp, 0x10
// 006ba2c2  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??1Node@ThreadRef@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
