// from server: 100% by auto
// roc 2007-08 0071edf0  unit: CXTPDialogBar  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071edf0
//
// 0071edf0  8b4604               mov eax, dword ptr [esi + 4]
// 0071edf3  57                   push edi
// 0071edf4  8bf8                 mov edi, eax
// 0071edf6  3bf9                 cmp edi, ecx
// 0071edf8  7602                 jbe 0x71edfc
// 0071edfa  8bf9                 mov edi, ecx
// 0071edfc  85ff                 test edi, edi
// 0071edfe  7504                 jne 0x71ee04
// 0071ee00  33c0                 xor eax, eax
// 0071ee02  5f                   pop edi
// 0071ee03  c3                   ret 
// 0071ee04  2bc7                 sub eax, edi
// 0071ee06  894604               mov dword ptr [esi + 4], eax
// 0071ee09  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0071ee0c  8b4018               mov eax, dword ptr [eax + 0x18]
// 0071ee0f  83f801               cmp eax, 1
// 0071ee12  750f                 jne 0x71ee23
// 0071ee14  8b0e                 mov ecx, dword ptr [esi]
// 0071ee16  8b5630               mov edx, dword ptr [esi + 0x30]
// 0071ee19  57                   push edi
// 0071ee1a  51                   push ecx
// 0071ee1b  52                   push edx
// 0071ee1c  e88f3f0000           call 0x722db0
// 0071ee21  eb12                 jmp 0x71ee35
// 0071ee23  83f802               cmp eax, 2
// 0071ee26  7513                 jne 0x71ee3b
// 0071ee28  8b06                 mov eax, dword ptr [esi]
// 0071ee2a  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0071ee2d  57                   push edi
// 0071ee2e  50                   push eax
// 0071ee2f  51                   push ecx
// 0071ee30  e89b440000           call 0x7232d0
// 0071ee35  894630               mov dword ptr [esi + 0x30], eax
// 0071ee38  83c40c               add esp, 0xc
// 0071ee3b  8b16                 mov edx, dword ptr [esi]
// 0071ee3d  8b442408             mov eax, dword ptr [esp + 8]
// 0071ee41  57                   push edi
// 0071ee42  52                   push edx
// 0071ee43  50                   push eax
// 0071ee44  e8031ff1ff           call 0x630d4c
// 0071ee49  013e                 add dword ptr [esi], edi
// 0071ee4b  017e08               add dword ptr [esi + 8], edi
// 0071ee4e  83c40c               add esp, 0xc
// 0071ee51  8bc7                 mov eax, edi
// 0071ee53  5f                   pop edi
// 0071ee54  c3                   ret 
// library zlib-1.2.3/deflate.c (function _read_buf)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
