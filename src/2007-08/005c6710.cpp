// from server: 100% by auto
// roc 2007-08 005c6710  unit: lua_exception  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6710
//
// 005c6710  51                   push ecx
// 005c6711  56                   push esi
// 005c6712  33f6                 xor esi, esi
// 005c6714  3bde                 cmp ebx, esi
// 005c6716  7461                 je 0x5c6779
// 005c6718  807b0600             cmp byte ptr [ebx + 6], 0
// 005c671c  755b                 jne 0x5c6779
// 005c671e  55                   push ebp
// 005c671f  56                   push esi
// 005c6720  56                   push esi
// 005c6721  57                   push edi
// 005c6722  e859bc0400           call 0x612380
// 005c6727  8be8                 mov ebp, eax
// 005c6729  8b4310               mov eax, dword ptr [ebx + 0x10]
// 005c672c  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005c672f  83c40c               add esp, 0xc
// 005c6732  397030               cmp dword ptr [eax + 0x30], esi
// 005c6735  894c2408             mov dword ptr [esp + 8], ecx
// 005c6739  7e2f                 jle 0x5c676a
// 005c673b  eb03                 jmp 0x5c6740
// 005c673d  8d4900               lea ecx, [ecx]
// 005c6740  8b542408             mov edx, dword ptr [esp + 8]
// 005c6744  8b04b2               mov eax, dword ptr [edx + esi*4]
// 005c6747  50                   push eax
// 005c6748  55                   push ebp
// 005c6749  57                   push edi
// 005c674a  e8e1be0400           call 0x612630
// 005c674f  c70001000000         mov dword ptr [eax], 1
// 005c6755  c7400801000000       mov dword ptr [eax + 8], 1
// 005c675c  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 005c675f  83c601               add esi, 1
// 005c6762  83c40c               add esp, 0xc
// 005c6765  3b7130               cmp esi, dword ptr [ecx + 0x30]
// 005c6768  7cd6                 jl 0x5c6740
// 005c676a  8b4708               mov eax, dword ptr [edi + 8]
// 005c676d  8928                 mov dword ptr [eax], ebp
// 005c676f  c7400805000000       mov dword ptr [eax + 8], 5
// 005c6776  5d                   pop ebp
// 005c6777  eb06                 jmp 0x5c677f
// 005c6779  8b5708               mov edx, dword ptr [edi + 8]
// 005c677c  897208               mov dword ptr [edx + 8], esi
// 005c677f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005c6782  2b4708               sub eax, dword ptr [edi + 8]
// 005c6785  be10000000           mov esi, 0x10
// 005c678a  3bc6                 cmp eax, esi
// 005c678c  7f0b                 jg 0x5c6799
// 005c678e  6a01                 push 1
// 005c6790  57                   push edi
// 005c6791  e87af3ffff           call 0x5c5b10
// 005c6796  83c408               add esp, 8
// 005c6799  017708               add dword ptr [edi + 8], esi
// 005c679c  5e                   pop esi
// 005c679d  59                   pop ecx
// 005c679e  c3                   ret 
// library lua-5.1.4/ldebug.c (function _collectvalidlines)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
