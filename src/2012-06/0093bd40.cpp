// from server: 100% by auto
// roc 2012-06 0093bd40  unit: seg_00930000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093bd40
//
// 0093bd40  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0093bd44  8a01                 mov al, byte ptr [ecx]
// 0093bd46  83ec10               sub esp, 0x10
// 0093bd49  3c40                 cmp al, 0x40
// 0093bd4b  7412                 je 0x93bd5f
// 0093bd4d  3c3d                 cmp al, 0x3d
// 0093bd4f  740e                 je 0x93bd5f
// 0093bd51  3c1b                 cmp al, 0x1b
// 0093bd53  750b                 jne 0x93bd60
// 0093bd55  c744240c0cfebf00     mov dword ptr [esp + 0xc], 0xbffe0c
// 0093bd5d  eb05                 jmp 0x93bd64
// 0093bd5f  41                   inc ecx
// 0093bd60  894c240c             mov dword ptr [esp + 0xc], ecx
// 0093bd64  8b442418             mov eax, dword ptr [esp + 0x18]
// 0093bd68  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0093bd6c  56                   push esi
// 0093bd6d  57                   push edi
// 0093bd6e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0093bd72  8d742408             lea esi, [esp + 8]
// 0093bd76  897c2408             mov dword ptr [esp + 8], edi
// 0093bd7a  8944240c             mov dword ptr [esp + 0xc], eax
// 0093bd7e  894c2410             mov dword ptr [esp + 0x10], ecx
// 0093bd82  e8f9feffff           call 0x93bc80
// 0093bd87  6a02                 push 2
// 0093bd89  6808febf00           push 0xbffe08
// 0093bd8e  57                   push edi
// 0093bd8f  e89ca5ffff           call 0x936330
// 0093bd94  50                   push eax
// 0093bd95  8bd6                 mov edx, esi
// 0093bd97  52                   push edx
// 0093bd98  e8a3fcffff           call 0x93ba40
// 0093bd9d  83c414               add esp, 0x14
// 0093bda0  5f                   pop edi
// 0093bda1  5e                   pop esi
// 0093bda2  83c410               add esp, 0x10
// 0093bda5  c3                   ret 
// library lua-5.1.4/lundump.c (function _luaU_undump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
