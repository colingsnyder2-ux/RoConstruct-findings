// roc 2007-03 00714730  unit: seg_00710000  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00714730
//
// 00714730  53                   push ebx
// 00714731  56                   push esi
// 00714732  57                   push edi
// 00714733  8bf9                 mov edi, ecx
// 00714735  ff154cee7700         call dword ptr [0x77ee4c]
// 0071473b  50                   push eax
// 0071473c  e80d9ff0ff           call 0x61e64e
// 00714741  8bf0                 mov esi, eax
// 00714743  85f6                 test esi, esi
// 00714745  7463                 je 0x7147aa
// 00714747  8b4620               mov eax, dword ptr [esi + 0x20]
// 0071474a  85c0                 test eax, eax
// 0071474c  745c                 je 0x7147aa
// 0071474e  3bf7                 cmp esi, edi
// 00714750  7451                 je 0x7147a3
// 00714752  50                   push eax
// 00714753  8b4720               mov eax, dword ptr [edi + 0x20]
// 00714756  50                   push eax
// 00714757  ff1554ef7700         call dword ptr [0x77ef54]
// 0071475d  85c0                 test eax, eax
// 0071475f  7542                 jne 0x7147a3
// 00714761  8b4638               mov eax, dword ptr [esi + 0x38]
// 00714764  85c0                 test eax, eax
// 00714766  8b1dc8ec7700         mov ebx, dword ptr [0x77ecc8]
// 0071476c  7506                 jne 0x714774
// 0071476e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00714771  51                   push ecx
// 00714772  ffd3                 call ebx
// 00714774  50                   push eax
// 00714775  e8d49ef0ff           call 0x61e64e
// 0071477a  85c0                 test eax, eax
// 0071477c  742c                 je 0x7147aa
// 0071477e  83782000             cmp dword ptr [eax + 0x20], 0
// 00714782  7426                 je 0x7147aa
// 00714784  8b4638               mov eax, dword ptr [esi + 0x38]
// 00714787  85c0                 test eax, eax
// 00714789  7506                 jne 0x714791
// 0071478b  8b5620               mov edx, dword ptr [esi + 0x20]
// 0071478e  52                   push edx
// 0071478f  ffd3                 call ebx
// 00714791  50                   push eax
// 00714792  e8b79ef0ff           call 0x61e64e
// 00714797  50                   push eax
// 00714798  8bcf                 mov ecx, edi
// 0071479a  e8019ff5ff           call 0x66e6a0
// 0071479f  85c0                 test eax, eax
// 007147a1  7407                 je 0x7147aa
// 007147a3  b801000000           mov eax, 1
// 007147a8  eb02                 jmp 0x7147ac
// 007147aa  33c0                 xor eax, eax
// 007147ac  3b87ec010000         cmp eax, dword ptr [edi + 0x1ec]
// 007147b2  7416                 je 0x7147ca
// 007147b4  8987ec010000         mov dword ptr [edi + 0x1ec], eax
// 007147ba  8b07                 mov eax, dword ptr [edi]
// 007147bc  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 007147c2  6a01                 push 1
// 007147c4  6a00                 push 0
// 007147c6  8bcf                 mov ecx, edi
// 007147c8  ffd2                 call edx
// 007147ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 007147ce  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007147d2  50                   push eax
// 007147d3  51                   push ecx
// 007147d4  8bcf                 mov ecx, edi
// 007147d6  e82580f2ff           call 0x63c800
// 007147db  5f                   pop edi
// 007147dc  5e                   pop esi
// 007147dd  5b                   pop ebx
// 007147de  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDialogBar.cpp (function ?OnIdleUpdateCmdUI@CXTPDialogBar@@MAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDialogBar.cpp
