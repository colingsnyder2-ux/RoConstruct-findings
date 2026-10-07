// roc 2007-08 00665320  unit: CXTTreeBase  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665320
//
// 00665320  53                   push ebx
// 00665321  56                   push esi
// 00665322  8bf1                 mov esi, ecx
// 00665324  57                   push edi
// 00665325  8b7e04               mov edi, dword ptr [esi + 4]
// 00665328  33db                 xor ebx, ebx
// 0066532a  3bfb                 cmp edi, ebx
// 0066532c  7421                 je 0x66534f
// 0066532e  395e08               cmp dword ptr [esi + 8], ebx
// 00665331  761c                 jbe 0x66534f
// 00665333  8b5608               mov edx, dword ptr [esi + 8]
// 00665336  8bcf                 mov ecx, edi
// 00665338  8b01                 mov eax, dword ptr [ecx]
// 0066533a  3bc3                 cmp eax, ebx
// 0066533c  7409                 je 0x665347
// 0066533e  8bff                 mov edi, edi
// 00665340  8b4048               mov eax, dword ptr [eax + 0x48]
// 00665343  3bc3                 cmp eax, ebx
// 00665345  75f9                 jne 0x665340
// 00665347  83c104               add ecx, 4
// 0066534a  83ea01               sub edx, 1
// 0066534d  75e9                 jne 0x665338
// 0066534f  57                   push edi
// 00665350  e8d1abfcff           call 0x62ff26
// 00665355  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00665358  83c404               add esp, 4
// 0066535b  895e04               mov dword ptr [esi + 4], ebx
// 0066535e  895e0c               mov dword ptr [esi + 0xc], ebx
// 00665361  895e10               mov dword ptr [esi + 0x10], ebx
// 00665364  e813b3fcff           call 0x63067c
// 00665369  5f                   pop edi
// 0066536a  895e14               mov dword ptr [esi + 0x14], ebx
// 0066536d  5e                   pop esi
// 0066536e  5b                   pop ebx
// 0066536f  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?RemoveAll@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
