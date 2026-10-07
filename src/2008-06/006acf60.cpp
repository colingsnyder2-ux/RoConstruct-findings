// roc 2008-06 006acf60  unit: PAVCXTPControlAction::?$CArray  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006acf60
//
// 006acf60  56                   push esi
// 006acf61  8bf1                 mov esi, ecx
// 006acf63  e842f01000           call 0x7bbfaa
// 006acf68  8d4e20               lea ecx, [esi + 0x20]
// 006acf6b  c70644178500         mov dword ptr [esi], 0x851744
// 006acf71  e85afbffff           call 0x6acad0
// 006acf76  8b442408             mov eax, dword ptr [esp + 8]
// 006acf7a  894634               mov dword ptr [esi + 0x34], eax
// 006acf7d  8bc6                 mov eax, esi
// 006acf7f  5e                   pop esi
// 006acf80  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ??0CXTPControlActions@@IAE@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
