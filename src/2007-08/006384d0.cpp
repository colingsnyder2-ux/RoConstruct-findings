// roc 2007-08 006384d0  unit: CXTPControlEditCtrl  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006384d0
//
// 006384d0  56                   push esi
// 006384d1  8b742408             mov esi, dword ptr [esp + 8]
// 006384d5  57                   push edi
// 006384d6  8bf9                 mov edi, ecx
// 006384d8  397708               cmp dword ptr [edi + 8], esi
// 006384db  7443                 je 0x638520
// 006384dd  6880226300           push 0x632280
// 006384e2  b914938c00           mov ecx, 0x8c9314
// 006384e7  e87efe0f00           call 0x73836a
// 006384ec  85f6                 test esi, esi
// 006384ee  7419                 je 0x638509
// 006384f0  85c0                 test eax, eax
// 006384f2  7505                 jne 0x6384f9
// 006384f4  e8277affff           call 0x62ff20
// 006384f9  56                   push esi
// 006384fa  8bc8                 mov ecx, eax
// 006384fc  e8bfba0600           call 0x6a3fc0
// 00638501  897708               mov dword ptr [edi + 8], esi
// 00638504  5f                   pop edi
// 00638505  5e                   pop esi
// 00638506  c20400               ret 4
// 00638509  85c0                 test eax, eax
// 0063850b  7505                 jne 0x638512
// 0063850d  e80e7affff           call 0x62ff20
// 00638512  8b4f08               mov ecx, dword ptr [edi + 8]
// 00638515  51                   push ecx
// 00638516  8bc8                 mov ecx, eax
// 00638518  e873b50600           call 0x6a3a90
// 0063851d  897708               mov dword ptr [edi + 8], esi
// 00638520  5f                   pop edi
// 00638521  5e                   pop esi
// 00638522  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?SetAutoCompeteHandle@CXTPControlComboBoxAutoCompleteWnd@@AAEXPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
