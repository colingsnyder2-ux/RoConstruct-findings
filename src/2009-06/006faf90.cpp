// roc 2009-06 006faf90  unit: RBX::GroupDragTool  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006faf90
//
// 006faf90  83ec18               sub esp, 0x18
// 006faf93  d9ee                 fldz 
// 006faf95  8b442420             mov eax, dword ptr [esp + 0x20]
// 006faf99  83c9ff               or ecx, 0xffffffff
// 006faf9c  dd5c2408             fstp qword ptr [esp + 8]
// 006fafa0  83e800               sub eax, 0
// 006fafa3  53                   push ebx
// 006fafa4  57                   push edi
// 006fafa5  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006fafa9  894c2418             mov dword ptr [esp + 0x18], ecx
// 006fafad  c744240805000000     mov dword ptr [esp + 8], 5
// 006fafb5  7443                 je 0x6faffa
// 006fafb7  83e801               sub eax, 1
// 006fafba  7429                 je 0x6fafe5
// 006fafbc  83e801               sub eax, 1
// 006fafbf  7569                 jne 0x6fb02a
// 006fafc1  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006fafc5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006fafc9  53                   push ebx
// 006fafca  57                   push edi
// 006fafcb  e890f8ffff           call 0x6fa860
// 006fafd0  8d442410             lea eax, [esp + 0x10]
// 006fafd4  50                   push eax
// 006fafd5  6a14                 push 0x14
// 006fafd7  e834feffff           call 0x6fae10
// 006fafdc  83c410               add esp, 0x10
// 006fafdf  5f                   pop edi
// 006fafe0  5b                   pop ebx
// 006fafe1  83c418               add esp, 0x18
// 006fafe4  c3                   ret 
// 006fafe5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006fafe9  56                   push esi
// 006fafea  8b742430             mov esi, dword ptr [esp + 0x30]
// 006fafee  e83dfdffff           call 0x6fad30
// 006faff3  5e                   pop esi
// 006faff4  5f                   pop edi
// 006faff5  5b                   pop ebx
// 006faff6  83c418               add esp, 0x18
// 006faff9  c3                   ret 
// 006faffa  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006faffe  833b05               cmp dword ptr [ebx], 5
// 006fb001  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006fb005  750a                 jne 0x6fb011
// 006fb007  394b10               cmp dword ptr [ebx + 0x10], ecx
// 006fb00a  7505                 jne 0x6fb011
// 006fb00c  394b14               cmp dword ptr [ebx + 0x14], ecx
// 006fb00f  740a                 je 0x6fb01b
// 006fb011  53                   push ebx
// 006fb012  57                   push edi
// 006fb013  e848f8ffff           call 0x6fa860
// 006fb018  83c408               add esp, 8
// 006fb01b  8d4c2408             lea ecx, [esp + 8]
// 006fb01f  51                   push ecx
// 006fb020  6a12                 push 0x12
// 006fb022  e8e9fdffff           call 0x6fae10
// 006fb027  83c408               add esp, 8
// 006fb02a  5f                   pop edi
// 006fb02b  5b                   pop ebx
// 006fb02c  83c418               add esp, 0x18
// 006fb02f  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_prefix)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
