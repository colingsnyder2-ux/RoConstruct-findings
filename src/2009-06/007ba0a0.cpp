// roc 2009-06 007ba0a0  unit: CXTPRibbonBar  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ba0a0
//
// 007ba0a0  53                   push ebx
// 007ba0a1  56                   push esi
// 007ba0a2  57                   push edi
// 007ba0a3  8bf1                 mov esi, ecx
// 007ba0a5  e8e632f7ff           call 0x72d390
// 007ba0aa  8bc8                 mov ecx, eax
// 007ba0ac  e80f0ef7ff           call 0x72aec0
// 007ba0b1  8bf8                 mov edi, eax
// 007ba0b3  837f0400             cmp dword ptr [edi + 4], 0
// 007ba0b7  7f53                 jg 0x7ba10c
// 007ba0b9  8b4620               mov eax, dword ptr [esi + 0x20]
// 007ba0bc  50                   push eax
// 007ba0bd  e8fe9bfdff           call 0x793cc0
// 007ba0c2  83c404               add esp, 4
// 007ba0c5  85c0                 test eax, eax
// 007ba0c7  7443                 je 0x7ba10c
// 007ba0c9  56                   push esi
// 007ba0ca  8bcf                 mov ecx, edi
// 007ba0cc  e86f9dfdff           call 0x793e40
// 007ba0d1  85c0                 test eax, eax
// 007ba0d3  7537                 jne 0x7ba10c
// 007ba0d5  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 007ba0dc  752e                 jne 0x7ba10c
// 007ba0de  8bce                 mov ecx, esi
// 007ba0e0  33db                 xor ebx, ebx
// 007ba0e2  e839d9ffff           call 0x7b7a20
// 007ba0e7  39984c060000         cmp dword ptr [eax + 0x64c], ebx
// 007ba0ed  7422                 je 0x7ba111
// 007ba0ef  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ba0f3  8b96c4010000         mov edx, dword ptr [esi + 0x1c4]
// 007ba0f9  8b5208               mov edx, dword ptr [edx + 8]
// 007ba0fc  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 007ba102  50                   push eax
// 007ba103  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ba107  50                   push eax
// 007ba108  ffd2                 call edx
// 007ba10a  eb07                 jmp 0x7ba113
// 007ba10c  bb01000000           mov ebx, 1
// 007ba111  33c0                 xor eax, eax
// 007ba113  3b86d8010000         cmp eax, dword ptr [esi + 0x1d8]
// 007ba119  7420                 je 0x7ba13b
// 007ba11b  50                   push eax
// 007ba11c  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 007ba122  e8d99a0500           call 0x813c00
// 007ba127  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 007ba12e  740b                 je 0x7ba13b
// 007ba130  8b4620               mov eax, dword ptr [esi + 0x20]
// 007ba133  50                   push eax
// 007ba134  8bcf                 mov ecx, edi
// 007ba136  e8b59cfdff           call 0x793df0
// 007ba13b  85db                 test ebx, ebx
// 007ba13d  7523                 jne 0x7ba162
// 007ba13f  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 007ba145  85c0                 test eax, eax
// 007ba147  7419                 je 0x7ba162
// 007ba149  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ba14d  8b542414             mov edx, dword ptr [esp + 0x14]
// 007ba151  51                   push ecx
// 007ba152  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007ba155  52                   push edx
// 007ba156  51                   push ecx
// 007ba157  8d8884010000         lea ecx, [eax + 0x184]
// 007ba15d  e82ead0300           call 0x7f4e90
// 007ba162  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ba166  8b442414             mov eax, dword ptr [esp + 0x14]
// 007ba16a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ba16e  52                   push edx
// 007ba16f  50                   push eax
// 007ba170  51                   push ecx
// 007ba171  8bce                 mov ecx, esi
// 007ba173  e8183bf7ff           call 0x72dc90
// 007ba178  5f                   pop edi
// 007ba179  5e                   pop esi
// 007ba17a  5b                   pop ebx
// 007ba17b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnMouseMove@CXTPRibbonBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
