// roc 2010-06 00733210  unit: lua_exception  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733210
//
// 00733210  51                   push ecx
// 00733211  56                   push esi
// 00733212  33f6                 xor esi, esi
// 00733214  3bde                 cmp ebx, esi
// 00733216  745f                 je 0x733277
// 00733218  807b0600             cmp byte ptr [ebx + 6], 0
// 0073321c  7559                 jne 0x733277
// 0073321e  55                   push ebp
// 0073321f  56                   push esi
// 00733220  56                   push esi
// 00733221  57                   push edi
// 00733222  e8b9a10400           call 0x77d3e0
// 00733227  8be8                 mov ebp, eax
// 00733229  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0073322c  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0073322f  83c40c               add esp, 0xc
// 00733232  397030               cmp dword ptr [eax + 0x30], esi
// 00733235  894c2408             mov dword ptr [esp + 8], ecx
// 00733239  7e2d                 jle 0x733268
// 0073323b  eb03                 jmp 0x733240
// 0073323d  8d4900               lea ecx, [ecx]
// 00733240  8b542408             mov edx, dword ptr [esp + 8]
// 00733244  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00733247  50                   push eax
// 00733248  55                   push ebp
// 00733249  57                   push edi
// 0073324a  e851a40400           call 0x77d6a0
// 0073324f  c70001000000         mov dword ptr [eax], 1
// 00733255  c7400801000000       mov dword ptr [eax + 8], 1
// 0073325c  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0073325f  46                   inc esi
// 00733260  83c40c               add esp, 0xc
// 00733263  3b7130               cmp esi, dword ptr [ecx + 0x30]
// 00733266  7cd8                 jl 0x733240
// 00733268  8b4708               mov eax, dword ptr [edi + 8]
// 0073326b  8928                 mov dword ptr [eax], ebp
// 0073326d  c7400805000000       mov dword ptr [eax + 8], 5
// 00733274  5d                   pop ebp
// 00733275  eb06                 jmp 0x73327d
// 00733277  8b5708               mov edx, dword ptr [edi + 8]
// 0073327a  897208               mov dword ptr [edx + 8], esi
// 0073327d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00733280  2b4708               sub eax, dword ptr [edi + 8]
// 00733283  be10000000           mov esi, 0x10
// 00733288  3bc6                 cmp eax, esi
// 0073328a  7f0b                 jg 0x733297
// 0073328c  6a01                 push 1
// 0073328e  57                   push edi
// 0073328f  e8fcc8ffff           call 0x72fb90
// 00733294  83c408               add esp, 8
// 00733297  017708               add dword ptr [edi + 8], esi
// 0073329a  5e                   pop esi
// 0073329b  59                   pop ecx
// 0073329c  c3                   ret 
// library lua-5.1.4/ldebug.c (function _collectvalidlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
