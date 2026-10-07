// roc 2007-08 00629410  unit: RBX::AssemblyStage  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629410
//
// 00629410  56                   push esi
// 00629411  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00629415  57                   push edi
// 00629416  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0062941a  56                   push esi
// 0062941b  57                   push edi
// 0062941c  e8dffbffff           call 0x629000
// 00629421  83c408               add esp, 8
// 00629424  833e0c               cmp dword ptr [esi], 0xc
// 00629427  7526                 jne 0x62944f
// 00629429  8b4610               mov eax, dword ptr [esi + 0x10]
// 0062942c  3b4614               cmp eax, dword ptr [esi + 0x14]
// 0062942f  8b4608               mov eax, dword ptr [esi + 8]
// 00629432  7428                 je 0x62945c
// 00629434  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 00629438  3bc1                 cmp eax, ecx
// 0062943a  7c13                 jl 0x62944f
// 0062943c  50                   push eax
// 0062943d  8bc6                 mov eax, esi
// 0062943f  8bcf                 mov ecx, edi
// 00629441  e82afeffff           call 0x629270
// 00629446  8b4608               mov eax, dword ptr [esi + 8]
// 00629449  83c404               add esp, 4
// 0062944c  5f                   pop edi
// 0062944d  5e                   pop esi
// 0062944e  c3                   ret 
// 0062944f  56                   push esi
// 00629450  57                   push edi
// 00629451  e83affffff           call 0x629390
// 00629456  8b4608               mov eax, dword ptr [esi + 8]
// 00629459  83c408               add esp, 8
// 0062945c  5f                   pop edi
// 0062945d  5e                   pop esi
// 0062945e  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_exp2anyreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
