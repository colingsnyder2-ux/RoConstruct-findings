// from server: 100% by auto
// roc 2007-08 006288f0  unit: RBX::AssemblyStage  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006288f0
//
// 006288f0  83380c               cmp dword ptr [eax], 0xc
// 006288f3  7516                 jne 0x62890b
// 006288f5  8b4008               mov eax, dword ptr [eax + 8]
// 006288f8  a900010000           test eax, 0x100
// 006288fd  750c                 jne 0x62890b
// 006288ff  0fb65132             movzx edx, byte ptr [ecx + 0x32]
// 00628903  3bc2                 cmp eax, edx
// 00628905  7c04                 jl 0x62890b
// 00628907  834124ff             add dword ptr [ecx + 0x24], -1
// 0062890b  c3                   ret 
// library lua-5.1.4/lcode.c (function _freeexp)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
