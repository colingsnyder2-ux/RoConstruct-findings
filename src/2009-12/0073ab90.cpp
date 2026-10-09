// roc 2009-12 0073ab90  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073ab90
//
// 0073ab90  6aff                 push -1
// 0073ab92  68dbfd9400           push 0x94fddb
// 0073ab97  64a100000000         mov eax, dword ptr fs:[0]
// 0073ab9d  50                   push eax
// 0073ab9e  64892500000000       mov dword ptr fs:[0], esp
// 0073aba5  51                   push ecx
// 0073aba6  56                   push esi
// 0073aba7  8bf1                 mov esi, ecx
// 0073aba9  89742404             mov dword ptr [esp + 4], esi
// 0073abad  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0073abb5  e856ffffff           call 0x73ab10
// 0073abba  8b7608               mov esi, dword ptr [esi + 8]
// 0073abbd  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0073abc5  85f6                 test esi, esi
// 0073abc7  742a                 je 0x73abf3
// 0073abc9  8d4604               lea eax, [esi + 4]
// 0073abcc  83c9ff               or ecx, 0xffffffff
// 0073abcf  f00fc108             lock xadd dword ptr [eax], ecx
// 0073abd3  751e                 jne 0x73abf3
// 0073abd5  8b16                 mov edx, dword ptr [esi]
// 0073abd7  8b4204               mov eax, dword ptr [edx + 4]
// 0073abda  8bce                 mov ecx, esi
// 0073abdc  ffd0                 call eax
// 0073abde  8d4e08               lea ecx, [esi + 8]
// 0073abe1  83caff               or edx, 0xffffffff
// 0073abe4  f00fc111             lock xadd dword ptr [ecx], edx
// 0073abe8  7509                 jne 0x73abf3
// 0073abea  8b06                 mov eax, dword ptr [esi]
// 0073abec  8b5008               mov edx, dword ptr [eax + 8]
// 0073abef  8bce                 mov ecx, esi
// 0073abf1  ffd2                 call edx
// 0073abf3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0073abf7  5e                   pop esi
// 0073abf8  64890d00000000       mov dword ptr fs:[0], ecx
// 0073abff  83c410               add esp, 0x10
// 0073ac02  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??1Node@ThreadRef@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
