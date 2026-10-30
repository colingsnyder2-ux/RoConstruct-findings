// roc 2009-12 00863350  unit: CXTPToolTipContext::COffice2007ToolTip  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00863350
//
// 00863350  6aff                 push -1
// 00863352  6814eb9500           push 0x95eb14
// 00863357  64a100000000         mov eax, dword ptr fs:[0]
// 0086335d  50                   push eax
// 0086335e  51                   push ecx
// 0086335f  56                   push esi
// 00863360  a10052b600           mov eax, dword ptr [0xb65200]
// 00863365  33c4                 xor eax, esp
// 00863367  50                   push eax
// 00863368  8d44240c             lea eax, [esp + 0xc]
// 0086336c  64a300000000         mov dword ptr fs:[0], eax
// 00863372  8bf1                 mov esi, ecx
// 00863374  89742408             mov dword ptr [esp + 8], esi
// 00863378  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086337c  50                   push eax
// 0086337d  e86eeaffff           call 0x861df0
// 00863382  c7062ce69f00         mov dword ptr [esi], 0x9fe62c
// 00863388  c786300100007ce19f00 mov dword ptr [esi + 0x130], 0x9fe17c
// 00863392  c78634010000a4e19f00 mov dword ptr [esi + 0x134], 0x9fe1a4
// 0086339c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008633a4  c7863c01000000000000 mov dword ptr [esi + 0x13c], 0
// 008633ae  c7863801000018229a00 mov dword ptr [esi + 0x138], 0x9a2218
// 008633b8  8d8e40010000         lea ecx, [esi + 0x140]
// 008633be  c644241401           mov byte ptr [esp + 0x14], 1
// 008633c3  e8800df9ff           call 0x7f4148
// 008633c8  6a00                 push 0
// 008633ca  c644241802           mov byte ptr [esp + 0x18], 2
// 008633cf  e8ee11f9ff           call 0x7f45c2
// 008633d4  83c404               add esp, 4
// 008633d7  c7869401000000000000 mov dword ptr [esi + 0x194], 0
// 008633e1  8bc6                 mov eax, esi
// 008633e3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008633e7  64890d00000000       mov dword ptr fs:[0], ecx
// 008633ee  59                   pop ecx
// 008633ef  5e                   pop esi
// 008633f0  83c410               add esp, 0x10
// 008633f3  c20400               ret 4
// copied from an identical function in another client (function ??0CHTMLToolTip@CXTPToolTipContext@@QAE@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp