// roc 2007-03 007145a0  unit: seg_00710000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007145a0
//
// 007145a0  83ec10               sub esp, 0x10
// 007145a3  56                   push esi
// 007145a4  8bf1                 mov esi, ecx
// 007145a6  83bee001000000       cmp dword ptr [esi + 0x1e0], 0
// 007145ad  7454                 je 0x714603
// 007145af  8d442404             lea eax, [esp + 4]
// 007145b3  50                   push eax
// 007145b4  e817f4ffff           call 0x7139d0
// 007145b9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007145bd  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 007145c1  8b542408             mov edx, dword ptr [esp + 8]
// 007145c5  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 007145c9  8b442420             mov eax, dword ptr [esp + 0x20]
// 007145cd  2b442418             sub eax, dword ptr [esp + 0x18]
// 007145d1  6a14                 push 0x14
// 007145d3  2b442410             sub eax, dword ptr [esp + 0x10]
// 007145d7  2bca                 sub ecx, edx
// 007145d9  51                   push ecx
// 007145da  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007145de  2bc1                 sub eax, ecx
// 007145e0  50                   push eax
// 007145e1  52                   push edx
// 007145e2  51                   push ecx
// 007145e3  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 007145e9  6a00                 push 0
// 007145eb  51                   push ecx
// 007145ec  ff156cef7700         call dword ptr [0x77ef6c]
// 007145f2  8b96e0010000         mov edx, dword ptr [esi + 0x1e0]
// 007145f8  6a00                 push 0
// 007145fa  6a00                 push 0
// 007145fc  52                   push edx
// 007145fd  ff1554ee7700         call dword ptr [0x77ee54]
// 00714603  5e                   pop esi
// 00714604  83c410               add esp, 0x10
// 00714607  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDialogBar.cpp (function ?MoveChildWindow@CXTPDialogBar@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDialogBar.cpp
