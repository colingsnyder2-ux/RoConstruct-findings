// roc 2009-12 0085c570  unit: CXTPStatusBar::CStatusCmdUI  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c570
//
// 0085c570  6aff                 push -1
// 0085c572  68c4e49500           push 0x95e4c4
// 0085c577  64a100000000         mov eax, dword ptr fs:[0]
// 0085c57d  50                   push eax
// 0085c57e  51                   push ecx
// 0085c57f  56                   push esi
// 0085c580  a10052b600           mov eax, dword ptr [0xb65200]
// 0085c585  33c4                 xor eax, esp
// 0085c587  50                   push eax
// 0085c588  8d44240c             lea eax, [esp + 0xc]
// 0085c58c  64a300000000         mov dword ptr fs:[0], eax
// 0085c592  8bf1                 mov esi, ecx
// 0085c594  89742408             mov dword ptr [esp + 8], esi
// 0085c598  c70614d39f00         mov dword ptr [esi], 0x9fd314
// 0085c59e  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0085c5a6  e8f5fdffff           call 0x85c3a0
// 0085c5ab  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0085c5b1  85c9                 test ecx, ecx
// 0085c5b3  740f                 je 0x85c5c4
// 0085c5b5  e82278f9ff           call 0x7f3ddc
// 0085c5ba  c786d000000000000000 mov dword ptr [esi + 0xd0], 0
// 0085c5c4  8d8eb0000000         lea ecx, [esi + 0xb0]
// 0085c5ca  c644241401           mov byte ptr [esp + 0x14], 1
// 0085c5cf  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 0085c5d5  e8562cbbff           call 0x40f230
// 0085c5da  8d8e98000000         lea ecx, [esi + 0x98]
// 0085c5e0  c644241400           mov byte ptr [esp + 0x14], 0
// 0085c5e5  e8e6eaffff           call 0x85b0d0
// 0085c5ea  8bce                 mov ecx, esi
// 0085c5ec  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0085c5f4  e821a50c00           call 0x926b1a
// 0085c5f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085c5fd  64890d00000000       mov dword ptr fs:[0], ecx
// 0085c604  59                   pop ecx
// 0085c605  5e                   pop esi
// 0085c606  83c410               add esp, 0x10
// 0085c609  c3                   ret 
// copied from an identical function in another client (function ??1CXTPStatusBar@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp