// from server: 100% by auto
// roc 2007-08 00637190  unit: CPatchedControlComboBox  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637190
//
// 00637190  8b442404             mov eax, dword ptr [esp + 4]
// 00637194  56                   push esi
// 00637195  8bf1                 mov esi, ecx
// 00637197  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 0063719d  7412                 je 0x6371b1
// 0063719f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 006371a5  e8f6feffff           call 0x6370a0
// 006371aa  8bce                 mov ecx, esi
// 006371ac  e8ff2b0000           call 0x639db0
// 006371b1  5e                   pop esi
// 006371b2  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
