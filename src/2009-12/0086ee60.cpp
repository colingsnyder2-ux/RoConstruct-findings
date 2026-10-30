// roc 2009-12 0086ee60  unit: CXTPResourceManager  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ee60
//
// 0086ee60  83ec18               sub esp, 0x18
// 0086ee63  56                   push esi
// 0086ee64  8b742420             mov esi, dword ptr [esp + 0x20]
// 0086ee68  56                   push esi
// 0086ee69  ff1584cc9800         call dword ptr [0x98cc84]
// 0086ee6f  85c0                 test eax, eax
// 0086ee71  7532                 jne 0x86eea5
// 0086ee73  8b442428             mov eax, dword ptr [esp + 0x28]
// 0086ee77  50                   push eax
// 0086ee78  56                   push esi
// 0086ee79  ff15d0cb9800         call dword ptr [0x98cbd0]
// 0086ee7f  68b0647f00           push 0x7f64b0
// 0086ee84  b9d0bab900           mov ecx, 0xb9bad0
// 0086ee89  e8ae750b00           call 0x92643c
// 0086ee8e  85c0                 test eax, eax
// 0086ee90  7505                 jne 0x86ee97
// 0086ee92  e8754cf8ff           call 0x7f3b0c
// 0086ee97  c7402400000000       mov dword ptr [eax + 0x24], 0
// 0086ee9e  5e                   pop esi
// 0086ee9f  83c418               add esp, 0x18
// 0086eea2  c21000               ret 0x10
// 0086eea5  57                   push edi
// 0086eea6  8d4c2410             lea ecx, [esp + 0x10]
// 0086eeaa  51                   push ecx
// 0086eeab  56                   push esi
// 0086eeac  ff1570cc9800         call dword ptr [0x98cc70]
// 0086eeb2  8d542408             lea edx, [esp + 8]
// 0086eeb6  52                   push edx
// 0086eeb7  ff1538cc9800         call dword ptr [0x98cc38]
// 0086eebd  56                   push esi
// 0086eebe  ff15bccb9800         call dword ptr [0x98cbbc]
// 0086eec4  85c0                 test eax, eax
// 0086eec6  741e                 je 0x86eee6
// 0086eec8  6af0                 push -0x10
// 0086eeca  56                   push esi
// 0086eecb  ff15d8c99800         call dword ptr [0x98c9d8]
// 0086eed1  85c0                 test eax, eax
// 0086eed3  7811                 js 0x86eee6
// 0086eed5  56                   push esi
// 0086eed6  e805ffffff           call 0x86ede0
// 0086eedb  83c404               add esp, 4
// 0086eede  85c0                 test eax, eax
// 0086eee0  7504                 jne 0x86eee6
// 0086eee2  33ff                 xor edi, edi
// 0086eee4  eb05                 jmp 0x86eeeb
// 0086eee6  bf01000000           mov edi, 1
// 0086eeeb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086eeef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086eef3  50                   push eax
// 0086eef4  51                   push ecx
// 0086eef5  8d542418             lea edx, [esp + 0x18]
// 0086eef9  52                   push edx
// 0086eefa  ff155cca9800         call dword ptr [0x98ca5c]
// 0086ef00  85c0                 test eax, eax
// 0086ef02  7404                 je 0x86ef08
// 0086ef04  85ff                 test edi, edi
// 0086ef06  753b                 jne 0x86ef43
// 0086ef08  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0086ef0c  50                   push eax
// 0086ef0d  56                   push esi
// 0086ef0e  ff15d0cb9800         call dword ptr [0x98cbd0]
// 0086ef14  68b0647f00           push 0x7f64b0
// 0086ef19  b9d0bab900           mov ecx, 0xb9bad0
// 0086ef1e  e819750b00           call 0x92643c
// 0086ef23  85c0                 test eax, eax
// 0086ef25  7505                 jne 0x86ef2c
// 0086ef27  e8e04bf8ff           call 0x7f3b0c
// 0086ef2c  6a00                 push 0
// 0086ef2e  6a00                 push 0
// 0086ef30  68a3020000           push 0x2a3
// 0086ef35  56                   push esi
// 0086ef36  c7402400000000       mov dword ptr [eax + 0x24], 0
// 0086ef3d  ff15b8cb9800         call dword ptr [0x98cbb8]
// 0086ef43  5f                   pop edi
// 0086ef44  5e                   pop esi
// 0086ef45  83c418               add esp, 0x18
// 0086ef48  c21000               ret 0x10
// copied from an identical function in another client (function ?TrackMouseTimerProc@CXTPMouseManager@@CGXPAUHWND__@@IIK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMouseManager.cpp