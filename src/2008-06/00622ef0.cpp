// from server: 100% by auto
// roc 2008-06 00622ef0  unit: lua_exception  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622ef0
//
// 00622ef0  51                   push ecx
// 00622ef1  56                   push esi
// 00622ef2  33f6                 xor esi, esi
// 00622ef4  3bde                 cmp ebx, esi
// 00622ef6  745f                 je 0x622f57
// 00622ef8  807b0600             cmp byte ptr [ebx + 6], 0
// 00622efc  7559                 jne 0x622f57
// 00622efe  55                   push ebp
// 00622eff  56                   push esi
// 00622f00  56                   push esi
// 00622f01  57                   push edi
// 00622f02  e809ba0300           call 0x65e910
// 00622f07  8be8                 mov ebp, eax
// 00622f09  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00622f0c  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00622f0f  83c40c               add esp, 0xc
// 00622f12  397030               cmp dword ptr [eax + 0x30], esi
// 00622f15  894c2408             mov dword ptr [esp + 8], ecx
// 00622f19  7e2d                 jle 0x622f48
// 00622f1b  eb03                 jmp 0x622f20
// 00622f1d  8d4900               lea ecx, [ecx]
// 00622f20  8b542408             mov edx, dword ptr [esp + 8]
// 00622f24  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00622f27  50                   push eax
// 00622f28  55                   push ebp
// 00622f29  57                   push edi
// 00622f2a  e891bc0300           call 0x65ebc0
// 00622f2f  c70001000000         mov dword ptr [eax], 1
// 00622f35  c7400801000000       mov dword ptr [eax + 8], 1
// 00622f3c  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 00622f3f  46                   inc esi
// 00622f40  83c40c               add esp, 0xc
// 00622f43  3b7130               cmp esi, dword ptr [ecx + 0x30]
// 00622f46  7cd8                 jl 0x622f20
// 00622f48  8b4708               mov eax, dword ptr [edi + 8]
// 00622f4b  8928                 mov dword ptr [eax], ebp
// 00622f4d  c7400805000000       mov dword ptr [eax + 8], 5
// 00622f54  5d                   pop ebp
// 00622f55  eb06                 jmp 0x622f5d
// 00622f57  8b5708               mov edx, dword ptr [edi + 8]
// 00622f5a  897208               mov dword ptr [edx + 8], esi
// 00622f5d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00622f60  2b4708               sub eax, dword ptr [edi + 8]
// 00622f63  be10000000           mov esi, 0x10
// 00622f68  3bc6                 cmp eax, esi
// 00622f6a  7f0b                 jg 0x622f77
// 00622f6c  6a01                 push 1
// 00622f6e  57                   push edi
// 00622f6f  e8dcebffff           call 0x621b50
// 00622f74  83c408               add esp, 8
// 00622f77  017708               add dword ptr [edi + 8], esi
// 00622f7a  5e                   pop esi
// 00622f7b  59                   pop ecx
// 00622f7c  c3                   ret 
// library lua-5.1.4/ldebug.c (function _collectvalidlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
