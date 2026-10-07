// roc 2012-06 00a77f30  unit: CXTPRibbonSystemPopupBar  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a77f30
//
// 00a77f30  8b4604               mov eax, dword ptr [esi + 4]
// 00a77f33  57                   push edi
// 00a77f34  8bf8                 mov edi, eax
// 00a77f36  3bf9                 cmp edi, ecx
// 00a77f38  7602                 jbe 0xa77f3c
// 00a77f3a  8bf9                 mov edi, ecx
// 00a77f3c  85ff                 test edi, edi
// 00a77f3e  7504                 jne 0xa77f44
// 00a77f40  33c0                 xor eax, eax
// 00a77f42  5f                   pop edi
// 00a77f43  c3                   ret 
// 00a77f44  2bc7                 sub eax, edi
// 00a77f46  894604               mov dword ptr [esi + 4], eax
// 00a77f49  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a77f4c  8b4018               mov eax, dword ptr [eax + 0x18]
// 00a77f4f  83f801               cmp eax, 1
// 00a77f52  750f                 jne 0xa77f63
// 00a77f54  8b0e                 mov ecx, dword ptr [esi]
// 00a77f56  8b5630               mov edx, dword ptr [esi + 0x30]
// 00a77f59  57                   push edi
// 00a77f5a  51                   push ecx
// 00a77f5b  52                   push edx
// 00a77f5c  e87f340000           call 0xa7b3e0
// 00a77f61  eb12                 jmp 0xa77f75
// 00a77f63  83f802               cmp eax, 2
// 00a77f66  7513                 jne 0xa77f7b
// 00a77f68  8b06                 mov eax, dword ptr [esi]
// 00a77f6a  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00a77f6d  57                   push edi
// 00a77f6e  50                   push eax
// 00a77f6f  51                   push ecx
// 00a77f70  e8bb390000           call 0xa7b930
// 00a77f75  894630               mov dword ptr [esi + 0x30], eax
// 00a77f78  83c40c               add esp, 0xc
// 00a77f7b  8b16                 mov edx, dword ptr [esi]
// 00a77f7d  8b442408             mov eax, dword ptr [esp + 8]
// 00a77f81  57                   push edi
// 00a77f82  52                   push edx
// 00a77f83  50                   push eax
// 00a77f84  e8d3b6f0ff           call 0x98365c
// 00a77f89  013e                 add dword ptr [esi], edi
// 00a77f8b  017e08               add dword ptr [esi + 8], edi
// 00a77f8e  83c40c               add esp, 0xc
// 00a77f91  8bc7                 mov eax, edi
// 00a77f93  5f                   pop edi
// 00a77f94  c3                   ret 
// library zlib-1.2.3/deflate.c (function _read_buf)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
