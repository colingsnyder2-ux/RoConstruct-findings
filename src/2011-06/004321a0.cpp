// from server: 100% by auto
// roc 2011-06 004321a0  unit: VCMDIFrameWnd::?$CXTPCommandBarsSiteBase  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004321a0
//
// 004321a0  53                   push ebx
// 004321a1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004321a5  55                   push ebp
// 004321a6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004321aa  56                   push esi
// 004321ab  8bf1                 mov esi, ecx
// 004321ad  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 004321b3  57                   push edi
// 004321b4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004321b8  85c9                 test ecx, ecx
// 004321ba  741d                 je 0x4321d9
// 004321bc  8b442414             mov eax, dword ptr [esp + 0x14]
// 004321c0  57                   push edi
// 004321c1  53                   push ebx
// 004321c2  55                   push ebp
// 004321c3  50                   push eax
// 004321c4  e8779c3f00           call 0x82be40
// 004321c9  85c0                 test eax, eax
// 004321cb  740c                 je 0x4321d9
// 004321cd  5f                   pop edi
// 004321ce  5e                   pop esi
// 004321cf  5d                   pop ebp
// 004321d0  b801000000           mov eax, 1
// 004321d5  5b                   pop ebx
// 004321d6  c21000               ret 0x10
// 004321d9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004321dd  57                   push edi
// 004321de  53                   push ebx
// 004321df  55                   push ebp
// 004321e0  51                   push ecx
// 004321e1  8bce                 mov ecx, esi
// 004321e3  e8f07f3d00           call 0x80a1d8
// 004321e8  5f                   pop edi
// 004321e9  5e                   pop esi
// 004321ea  5d                   pop ebp
// 004321eb  5b                   pop ebx
// 004321ec  c21000               ret 0x10
// library xtp-15.2.1/Source\CommandBars\XTPFrameWnd.cpp (function ?OnWndMsg@?$CXTPCommandBarsSiteBase@VCMDIFrameWnd@@@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPFrameWnd.cpp
