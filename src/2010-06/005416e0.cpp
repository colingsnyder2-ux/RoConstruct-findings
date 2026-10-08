// roc 2010-06 005416e0  unit: RBX::AggregatingSceneManager  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005416e0
//
// 005416e0  6aff                 push -1
// 005416e2  6890fa9800           push 0x98fa90
// 005416e7  64a100000000         mov eax, dword ptr fs:[0]
// 005416ed  50                   push eax
// 005416ee  64892500000000       mov dword ptr fs:[0], esp
// 005416f5  83ec08               sub esp, 8
// 005416f8  53                   push ebx
// 005416f9  56                   push esi
// 005416fa  8bf1                 mov esi, ecx
// 005416fc  33db                 xor ebx, ebx
// 005416fe  c7065032a100         mov dword ptr [esi], 0xa13250
// 00541704  895e04               mov dword ptr [esi + 4], ebx
// 00541707  57                   push edi
// 00541708  89742410             mov dword ptr [esp + 0x10], esi
// 0054170c  895e08               mov dword ptr [esi + 8], ebx
// 0054170f  6a04                 push 4
// 00541711  895c2420             mov dword ptr [esp + 0x20], ebx
// 00541715  c706a8f2a100         mov dword ptr [esi], 0xa1f2a8
// 0054171b  8d7e0c               lea edi, [esi + 0xc]
// 0054171e  e87d622600           call 0x7a79a0
// 00541723  83c404               add esp, 4
// 00541726  3bc3                 cmp eax, ebx
// 00541728  7404                 je 0x54172e
// 0054172a  8938                 mov dword ptr [eax], edi
// 0054172c  eb02                 jmp 0x541730
// 0054172e  33c0                 xor eax, eax
// 00541730  8907                 mov dword ptr [edi], eax
// 00541732  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00541736  895f0c               mov dword ptr [edi + 0xc], ebx
// 00541739  895f10               mov dword ptr [edi + 0x10], ebx
// 0054173c  895f14               mov dword ptr [edi + 0x14], ebx
// 0054173f  5f                   pop edi
// 00541740  8bc6                 mov eax, esi
// 00541742  5e                   pop esi
// 00541743  5b                   pop ebx
// 00541744  64890d00000000       mov dword ptr fs:[0], ecx
// 0054174b  83c414               add esp, 0x14
// 0054174e  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??0Bucket@AggregatingSceneManager@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
