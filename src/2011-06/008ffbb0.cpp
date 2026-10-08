// from server: 100% by auto
// roc 2011-06 008ffbb0  unit: CXTPRibbonSystemPopupBar  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ffbb0
//
// 008ffbb0  8b4604               mov eax, dword ptr [esi + 4]
// 008ffbb3  57                   push edi
// 008ffbb4  8bf8                 mov edi, eax
// 008ffbb6  3bf9                 cmp edi, ecx
// 008ffbb8  7602                 jbe 0x8ffbbc
// 008ffbba  8bf9                 mov edi, ecx
// 008ffbbc  85ff                 test edi, edi
// 008ffbbe  7504                 jne 0x8ffbc4
// 008ffbc0  33c0                 xor eax, eax
// 008ffbc2  5f                   pop edi
// 008ffbc3  c3                   ret 
// 008ffbc4  2bc7                 sub eax, edi
// 008ffbc6  894604               mov dword ptr [esi + 4], eax
// 008ffbc9  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008ffbcc  8b4018               mov eax, dword ptr [eax + 0x18]
// 008ffbcf  83f801               cmp eax, 1
// 008ffbd2  750f                 jne 0x8ffbe3
// 008ffbd4  8b0e                 mov ecx, dword ptr [esi]
// 008ffbd6  8b5630               mov edx, dword ptr [esi + 0x30]
// 008ffbd9  57                   push edi
// 008ffbda  51                   push ecx
// 008ffbdb  52                   push edx
// 008ffbdc  e8ff350000           call 0x9031e0
// 008ffbe1  eb12                 jmp 0x8ffbf5
// 008ffbe3  83f802               cmp eax, 2
// 008ffbe6  7513                 jne 0x8ffbfb
// 008ffbe8  8b06                 mov eax, dword ptr [esi]
// 008ffbea  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008ffbed  57                   push edi
// 008ffbee  50                   push eax
// 008ffbef  51                   push ecx
// 008ffbf0  e83b3b0000           call 0x903730
// 008ffbf5  894630               mov dword ptr [esi + 0x30], eax
// 008ffbf8  83c40c               add esp, 0xc
// 008ffbfb  8b16                 mov edx, dword ptr [esi]
// 008ffbfd  8b442408             mov eax, dword ptr [esp + 8]
// 008ffc01  57                   push edi
// 008ffc02  52                   push edx
// 008ffc03  50                   push eax
// 008ffc04  e8d3b9f0ff           call 0x80b5dc
// 008ffc09  013e                 add dword ptr [esi], edi
// 008ffc0b  017e08               add dword ptr [esi + 8], edi
// 008ffc0e  83c40c               add esp, 0xc
// 008ffc11  8bc7                 mov eax, edi
// 008ffc13  5f                   pop edi
// 008ffc14  c3                   ret 
// library zlib-1.2.3/deflate.c (function _read_buf)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
