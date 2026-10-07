// roc 2011-06 0080e480  unit: PAVCXTPControlAction::?$CArray  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080e480
//
// 0080e480  56                   push esi
// 0080e481  8bf1                 mov esi, ecx
// 0080e483  e842e11b00           call 0x9cc5ca
// 0080e488  8d4e20               lea ecx, [esi + 0x20]
// 0080e48b  c706c417ac00         mov dword ptr [esi], 0xac17c4
// 0080e491  e8fafaffff           call 0x80df90
// 0080e496  8b442408             mov eax, dword ptr [esp + 8]
// 0080e49a  894634               mov dword ptr [esi + 0x34], eax
// 0080e49d  8bc6                 mov eax, esi
// 0080e49f  5e                   pop esi
// 0080e4a0  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ??0CXTPControlActions@@IAE@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
