// roc 2007-03 00714800  unit: seg_00710000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00714800
//
// 00714800  8b4604               mov eax, dword ptr [esi + 4]
// 00714803  57                   push edi
// 00714804  8bf8                 mov edi, eax
// 00714806  3bf9                 cmp edi, ecx
// 00714808  7602                 jbe 0x71480c
// 0071480a  8bf9                 mov edi, ecx
// 0071480c  85ff                 test edi, edi
// 0071480e  7504                 jne 0x714814
// 00714810  33c0                 xor eax, eax
// 00714812  5f                   pop edi
// 00714813  c3                   ret 
// 00714814  2bc7                 sub eax, edi
// 00714816  894604               mov dword ptr [esi + 4], eax
// 00714819  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0071481c  8b4018               mov eax, dword ptr [eax + 0x18]
// 0071481f  83f801               cmp eax, 1
// 00714822  750f                 jne 0x714833
// 00714824  8b0e                 mov ecx, dword ptr [esi]
// 00714826  8b5630               mov edx, dword ptr [esi + 0x30]
// 00714829  57                   push edi
// 0071482a  51                   push ecx
// 0071482b  52                   push edx
// 0071482c  e84ff80000           call 0x724080
// 00714831  eb12                 jmp 0x714845
// 00714833  83f802               cmp eax, 2
// 00714836  7513                 jne 0x71484b
// 00714838  8b06                 mov eax, dword ptr [esi]
// 0071483a  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0071483d  57                   push edi
// 0071483e  50                   push eax
// 0071483f  51                   push ecx
// 00714840  e85bfd0000           call 0x7245a0
// 00714845  894630               mov dword ptr [esi + 0x30], eax
// 00714848  83c40c               add esp, 0xc
// 0071484b  8b16                 mov edx, dword ptr [esi]
// 0071484d  8b442408             mov eax, dword ptr [esp + 8]
// 00714851  57                   push edi
// 00714852  52                   push edx
// 00714853  50                   push eax
// 00714854  e889a9f0ff           call 0x61f1e2
// 00714859  013e                 add dword ptr [esi], edi
// 0071485b  017e08               add dword ptr [esi + 8], edi
// 0071485e  83c40c               add esp, 0xc
// 00714861  8bc7                 mov eax, edi
// 00714863  5f                   pop edi
// 00714864  c3                   ret 
// library zlib-1.2.3/deflate.c (function _read_buf)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
