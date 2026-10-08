// from server: 100% by auto
// roc 2007-08 00637c50  unit: CXTPControlComboBoxList  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637c50
//
// 00637c50  83ec10               sub esp, 0x10
// 00637c53  56                   push esi
// 00637c54  57                   push edi
// 00637c55  8bf1                 mov esi, ecx
// 00637c57  e814130300           call 0x668f70
// 00637c5c  6a05                 push 5
// 00637c5e  8bc8                 mov ecx, eax
// 00637c60  e80b0b0300           call 0x668770
// 00637c65  56                   push esi
// 00637c66  8d4c240c             lea ecx, [esp + 0xc]
// 00637c6a  8bf8                 mov edi, eax
// 00637c6c  e88f830400           call 0x680000
// 00637c71  57                   push edi
// 00637c72  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00637c76  50                   push eax
// 00637c77  8bcf                 mov ecx, edi
// 00637c79  e8328cffff           call 0x6308b0
// 00637c7e  8b4704               mov eax, dword ptr [edi + 4]
// 00637c81  6a00                 push 0
// 00637c83  50                   push eax
// 00637c84  6a0f                 push 0xf
// 00637c86  8bce                 mov ecx, esi
// 00637c88  e85581ffff           call 0x62fde2
// 00637c8d  5f                   pop edi
// 00637c8e  5e                   pop esi
// 00637c8f  83c410               add esp, 0x10
// 00637c92  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?DrawCommandBar@CXTPControlComboBoxList@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
