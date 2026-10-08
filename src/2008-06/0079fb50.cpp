// from server: 100% by auto
// roc 2008-06 0079fb50  unit: CXTPDialogBar  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079fb50
//
// 0079fb50  8b4604               mov eax, dword ptr [esi + 4]
// 0079fb53  57                   push edi
// 0079fb54  8bf8                 mov edi, eax
// 0079fb56  3bf9                 cmp edi, ecx
// 0079fb58  7602                 jbe 0x79fb5c
// 0079fb5a  8bf9                 mov edi, ecx
// 0079fb5c  85ff                 test edi, edi
// 0079fb5e  7504                 jne 0x79fb64
// 0079fb60  33c0                 xor eax, eax
// 0079fb62  5f                   pop edi
// 0079fb63  c3                   ret 
// 0079fb64  2bc7                 sub eax, edi
// 0079fb66  894604               mov dword ptr [esi + 4], eax
// 0079fb69  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0079fb6c  8b4018               mov eax, dword ptr [eax + 0x18]
// 0079fb6f  83f801               cmp eax, 1
// 0079fb72  750f                 jne 0x79fb83
// 0079fb74  8b0e                 mov ecx, dword ptr [esi]
// 0079fb76  8b5630               mov edx, dword ptr [esi + 0x30]
// 0079fb79  57                   push edi
// 0079fb7a  51                   push ecx
// 0079fb7b  52                   push edx
// 0079fb7c  e89f400000           call 0x7a3c20
// 0079fb81  eb12                 jmp 0x79fb95
// 0079fb83  83f802               cmp eax, 2
// 0079fb86  7513                 jne 0x79fb9b
// 0079fb88  8b06                 mov eax, dword ptr [esi]
// 0079fb8a  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0079fb8d  57                   push edi
// 0079fb8e  50                   push eax
// 0079fb8f  51                   push ecx
// 0079fb90  e8db450000           call 0x7a4170
// 0079fb95  894630               mov dword ptr [esi + 0x30], eax
// 0079fb98  83c40c               add esp, 0xc
// 0079fb9b  8b16                 mov edx, dword ptr [esi]
// 0079fb9d  8b442408             mov eax, dword ptr [esp + 8]
// 0079fba1  57                   push edi
// 0079fba2  52                   push edx
// 0079fba3  50                   push eax
// 0079fba4  e8371cf0ff           call 0x6a17e0
// 0079fba9  013e                 add dword ptr [esi], edi
// 0079fbab  017e08               add dword ptr [esi + 8], edi
// 0079fbae  83c40c               add esp, 0xc
// 0079fbb1  8bc7                 mov eax, edi
// 0079fbb3  5f                   pop edi
// 0079fbb4  c3                   ret 
// library zlib-1.2.3/deflate.c (function _read_buf)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
