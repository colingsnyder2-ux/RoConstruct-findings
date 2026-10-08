// from server: 100% by auto
// roc 2007-08 006f5830  unit: CXTPControlCustom  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5830
//
// 006f5830  8b442404             mov eax, dword ptr [esp + 4]
// 006f5834  56                   push esi
// 006f5835  8bf1                 mov esi, ecx
// 006f5837  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 006f583d  7412                 je 0x6f5851
// 006f583f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 006f5845  e856ffffff           call 0x6f57a0
// 006f584a  8bce                 mov ecx, esi
// 006f584c  e85f45f4ff           call 0x639db0
// 006f5851  5e                   pop esi
// 006f5852  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
