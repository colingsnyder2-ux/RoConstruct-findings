// roc 2010-06 008a0af0  unit: CXTPDialogBar  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a0af0
//
// 008a0af0  83ec10               sub esp, 0x10
// 008a0af3  56                   push esi
// 008a0af4  8bf1                 mov esi, ecx
// 008a0af6  83bee001000000       cmp dword ptr [esi + 0x1e0], 0
// 008a0afd  7454                 je 0x8a0b53
// 008a0aff  8d442404             lea eax, [esp + 4]
// 008a0b03  50                   push eax
// 008a0b04  e817f4ffff           call 0x89ff20
// 008a0b09  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a0b0d  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 008a0b11  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a0b15  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008a0b19  8b542408             mov edx, dword ptr [esp + 8]
// 008a0b1d  2b442418             sub eax, dword ptr [esp + 0x18]
// 008a0b21  6a14                 push 0x14
// 008a0b23  2b442410             sub eax, dword ptr [esp + 0x10]
// 008a0b27  2bca                 sub ecx, edx
// 008a0b29  51                   push ecx
// 008a0b2a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a0b2e  2bc1                 sub eax, ecx
// 008a0b30  50                   push eax
// 008a0b31  52                   push edx
// 008a0b32  51                   push ecx
// 008a0b33  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 008a0b39  6a00                 push 0
// 008a0b3b  51                   push ecx
// 008a0b3c  ff1544bb9e00         call dword ptr [0x9ebb44]
// 008a0b42  8b96e0010000         mov edx, dword ptr [esi + 0x1e0]
// 008a0b48  6a00                 push 0
// 008a0b4a  6a00                 push 0
// 008a0b4c  52                   push edx
// 008a0b4d  ff1578ba9e00         call dword ptr [0x9eba78]
// 008a0b53  5e                   pop esi
// 008a0b54  83c410               add esp, 0x10
// 008a0b57  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?MoveChildWindow@CXTPDialogBar@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
