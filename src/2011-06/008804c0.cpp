// from server: 100% by auto
// roc 2011-06 008804c0  unit: CXTPResourceManager  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008804c0
//
// 008804c0  83ec18               sub esp, 0x18
// 008804c3  56                   push esi
// 008804c4  8b742420             mov esi, dword ptr [esp + 0x20]
// 008804c8  56                   push esi
// 008804c9  ff15ec1ba400         call dword ptr [0xa41bec]
// 008804cf  85c0                 test eax, eax
// 008804d1  7532                 jne 0x880505
// 008804d3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008804d7  50                   push eax
// 008804d8  56                   push esi
// 008804d9  ff15d019a400         call dword ptr [0xa419d0]
// 008804df  68b0cb8000           push 0x80cbb0
// 008804e4  b9e88ed100           mov ecx, 0xd18ee8
// 008804e9  e8d6c01400           call 0x9cc5c4
// 008804ee  85c0                 test eax, eax
// 008804f0  7505                 jne 0x8804f7
// 008804f2  e8139ef8ff           call 0x80a30a
// 008804f7  c7402400000000       mov dword ptr [eax + 0x24], 0
// 008804fe  5e                   pop esi
// 008804ff  83c418               add esp, 0x18
// 00880502  c21000               ret 0x10
// 00880505  57                   push edi
// 00880506  8d4c2410             lea ecx, [esp + 0x10]
// 0088050a  51                   push ecx
// 0088050b  56                   push esi
// 0088050c  ff155c1ca400         call dword ptr [0xa41c5c]
// 00880512  8d542408             lea edx, [esp + 8]
// 00880516  52                   push edx
// 00880517  ff15c819a400         call dword ptr [0xa419c8]
// 0088051d  56                   push esi
// 0088051e  ff15b819a400         call dword ptr [0xa419b8]
// 00880524  85c0                 test eax, eax
// 00880526  741e                 je 0x880546
// 00880528  6af0                 push -0x10
// 0088052a  56                   push esi
// 0088052b  ff15981ca400         call dword ptr [0xa41c98]
// 00880531  85c0                 test eax, eax
// 00880533  7811                 js 0x880546
// 00880535  56                   push esi
// 00880536  e845ffffff           call 0x880480
// 0088053b  83c404               add esp, 4
// 0088053e  85c0                 test eax, eax
// 00880540  7504                 jne 0x880546
// 00880542  33ff                 xor edi, edi
// 00880544  eb05                 jmp 0x88054b
// 00880546  bf01000000           mov edi, 1
// 0088054b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0088054f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00880553  50                   push eax
// 00880554  51                   push ecx
// 00880555  8d542418             lea edx, [esp + 0x18]
// 00880559  52                   push edx
// 0088055a  ff15101ca400         call dword ptr [0xa41c10]
// 00880560  85c0                 test eax, eax
// 00880562  7404                 je 0x880568
// 00880564  85ff                 test edi, edi
// 00880566  753b                 jne 0x8805a3
// 00880568  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088056c  50                   push eax
// 0088056d  56                   push esi
// 0088056e  ff15d019a400         call dword ptr [0xa419d0]
// 00880574  68b0cb8000           push 0x80cbb0
// 00880579  b9e88ed100           mov ecx, 0xd18ee8
// 0088057e  e841c01400           call 0x9cc5c4
// 00880583  85c0                 test eax, eax
// 00880585  7505                 jne 0x88058c
// 00880587  e87e9df8ff           call 0x80a30a
// 0088058c  6a00                 push 0
// 0088058e  6a00                 push 0
// 00880590  68a3020000           push 0x2a3
// 00880595  56                   push esi
// 00880596  c7402400000000       mov dword ptr [eax + 0x24], 0
// 0088059d  ff15b419a400         call dword ptr [0xa419b4]
// 008805a3  5f                   pop edi
// 008805a4  5e                   pop esi
// 008805a5  83c418               add esp, 0x18
// 008805a8  c21000               ret 0x10
// library xtp-15.2.1/Source\CommandBars\XTPMouseManager.cpp (function ?TrackMouseTimerProc@CXTPMouseManager@@CGXPAUHWND__@@IIK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMouseManager.cpp
