// roc 2008-06 005690f0  unit: RBX::ServiceProvider  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005690f0
//
// 005690f0  6aff                 push -1
// 005690f2  684ff87c00           push 0x7cf84f
// 005690f7  64a100000000         mov eax, dword ptr fs:[0]
// 005690fd  50                   push eax
// 005690fe  64892500000000       mov dword ptr fs:[0], esp
// 00569105  83ec0c               sub esp, 0xc
// 00569108  53                   push ebx
// 00569109  c744240400000000     mov dword ptr [esp + 4], 0
// 00569111  56                   push esi
// 00569112  b9a04a9700           mov ecx, 0x974aa0
// 00569117  c744240ca04a9700     mov dword ptr [esp + 0xc], 0x974aa0
// 0056911f  e86c9fffff           call 0x563090
// 00569124  bb01000000           mov ebx, 1
// 00569129  885c2410             mov byte ptr [esp + 0x10], bl
// 0056912d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00569131  841d984a9700         test byte ptr [0x974a98], bl
// 00569137  7522                 jne 0x56915b
// 00569139  091d984a9700         or dword ptr [0x974a98], ebx
// 0056913f  68904a9700           push 0x974a90
// 00569144  c644242002           mov byte ptr [esp + 0x20], 2
// 00569149  e822ffffff           call 0x569070
// 0056914e  68d0d07f00           push 0x7fd0d0
// 00569153  e857861300           call 0x6a17af
// 00569158  83c408               add esp, 8
// 0056915b  a1904a9700           mov eax, dword ptr [0x974a90]
// 00569160  8b742424             mov esi, dword ptr [esp + 0x24]
// 00569164  8906                 mov dword ptr [esi], eax
// 00569166  8b0d944a9700         mov ecx, dword ptr [0x974a94]
// 0056916c  894e04               mov dword ptr [esi + 4], ecx
// 0056916f  a1944a9700           mov eax, dword ptr [0x974a94]
// 00569174  85c0                 test eax, eax
// 00569176  7409                 je 0x569181
// 00569178  83c004               add eax, 4
// 0056917b  8bd3                 mov edx, ebx
// 0056917d  f00fc110             lock xadd dword ptr [eax], edx
// 00569181  b9a04a9700           mov ecx, 0x974aa0
// 00569186  895c2408             mov dword ptr [esp + 8], ebx
// 0056918a  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0056918f  e84c9fffff           call 0x5630e0
// 00569194  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00569198  8bc6                 mov eax, esi
// 0056919a  5e                   pop esi
// 0056919b  5b                   pop ebx
// 0056919c  64890d00000000       mov dword ptr fs:[0], ecx
// 005691a3  83c418               add esp, 0x18
// 005691a6  c3                   ret 
// library rbxgs/v8datamodel\GlobalSettings.cpp (function ?singleton@GlobalSettings@RBX@@SA?AV?$shared_ptr@VGlobalSettings@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GlobalSettings.cpp
