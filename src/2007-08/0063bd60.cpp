// roc 2007-08 0063bd60  unit: PAVCXTPControlAction::?$CArray  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063bd60
//
// 0063bd60  56                   push esi
// 0063bd61  8bf1                 mov esi, ecx
// 0063bd63  e8d2c50f00           call 0x73833a
// 0063bd68  8d4e20               lea ecx, [esi + 0x20]
// 0063bd6b  c70614637c00         mov dword ptr [esi], 0x7c6314
// 0063bd71  e8bafaffff           call 0x63b830
// 0063bd76  8b442408             mov eax, dword ptr [esp + 8]
// 0063bd7a  894634               mov dword ptr [esi + 0x34], eax
// 0063bd7d  8bc6                 mov eax, esi
// 0063bd7f  5e                   pop esi
// 0063bd80  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControl.cpp (function ??0CXTPControlActions@@IAE@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControl.cpp
