// roc 2009-12 00805cb0  unit: CXTPCommandBar  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805cb0
//
// 00805cb0  6aff                 push -1
// 00805cb2  6828969500           push 0x959628
// 00805cb7  64a100000000         mov eax, dword ptr fs:[0]
// 00805cbd  50                   push eax
// 00805cbe  83ec18               sub esp, 0x18
// 00805cc1  53                   push ebx
// 00805cc2  56                   push esi
// 00805cc3  a10052b600           mov eax, dword ptr [0xb65200]
// 00805cc8  33c4                 xor eax, esp
// 00805cca  50                   push eax
// 00805ccb  8d442424             lea eax, [esp + 0x24]
// 00805ccf  64a300000000         mov dword ptr fs:[0], eax
// 00805cd5  8bf1                 mov esi, ecx
// 00805cd7  56                   push esi
// 00805cd8  8d4c2418             lea ecx, [esp + 0x18]
// 00805cdc  e88f550400           call 0x84b270
// 00805ce1  8b442438             mov eax, dword ptr [esp + 0x38]
// 00805ce5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00805ce9  50                   push eax
// 00805cea  51                   push ecx
// 00805ceb  8d54241c             lea edx, [esp + 0x1c]
// 00805cef  52                   push edx
// 00805cf0  ff155cca9800         call dword ptr [0x98ca5c]
// 00805cf6  85c0                 test eax, eax
// 00805cf8  0f849c000000         je 0x805d9a
// 00805cfe  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 00805d05  0f85ba000000         jne 0x805dc5
// 00805d0b  bbf82a9f00           mov ebx, 0x9f2af8
// 00805d10  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00805d18  895c240c             mov dword ptr [esp + 0xc], ebx
// 00805d1c  6a00                 push 0
// 00805d1e  6a00                 push 0
// 00805d20  6a00                 push 0
// 00805d22  6a00                 push 0
// 00805d24  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00805d2c  ff150cb19800         call dword ptr [0x98b10c]
// 00805d32  50                   push eax
// 00805d33  8d4c2410             lea ecx, [esp + 0x10]
// 00805d37  e8eee0feff           call 0x7f3e2a
// 00805d3c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00805d40  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00805d43  50                   push eax
// 00805d44  51                   push ecx
// 00805d45  ff15e0ca9800         call dword ptr [0x98cae0]
// 00805d4b  85c0                 test eax, eax
// 00805d4d  7461                 je 0x805db0
// 00805d4f  83f801               cmp eax, 1
// 00805d52  745c                 je 0x805db0
// 00805d54  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00805d58  8b542434             mov edx, dword ptr [esp + 0x34]
// 00805d5c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00805d60  f7d9                 neg ecx
// 00805d62  03d1                 add edx, ecx
// 00805d64  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00805d68  f7d8                 neg eax
// 00805d6a  03c8                 add ecx, eax
// 00805d6c  51                   push ecx
// 00805d6d  52                   push edx
// 00805d6e  8954243c             mov dword ptr [esp + 0x3c], edx
// 00805d72  8b542418             mov edx, dword ptr [esp + 0x18]
// 00805d76  52                   push edx
// 00805d77  894c2444             mov dword ptr [esp + 0x44], ecx
// 00805d7b  ff1504b19800         call dword ptr [0x98b104]
// 00805d81  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00805d89  895c240c             mov dword ptr [esp + 0xc], ebx
// 00805d8d  8d4c240c             lea ecx, [esp + 0xc]
// 00805d91  85c0                 test eax, eax
// 00805d93  752b                 jne 0x805dc0
// 00805d95  e89694c0ff           call 0x40f230
// 00805d9a  33c0                 xor eax, eax
// 00805d9c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00805da0  64890d00000000       mov dword ptr fs:[0], ecx
// 00805da7  59                   pop ecx
// 00805da8  5e                   pop esi
// 00805da9  5b                   pop ebx
// 00805daa  83c424               add esp, 0x24
// 00805dad  c20800               ret 8
// 00805db0  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00805db8  895c240c             mov dword ptr [esp + 0xc], ebx
// 00805dbc  8d4c240c             lea ecx, [esp + 0xc]
// 00805dc0  e86b94c0ff           call 0x40f230
// 00805dc5  b801000000           mov eax, 1
// 00805dca  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00805dce  64890d00000000       mov dword ptr fs:[0], ecx
// 00805dd5  59                   pop ecx
// 00805dd6  5e                   pop esi
// 00805dd7  5b                   pop ebx
// 00805dd8  83c424               add esp, 0x24
// 00805ddb  c20800               ret 8
// copied from an identical function in another client (function ?OnMouseHitTest@CXTPCommandBar@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp