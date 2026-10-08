// roc 2009-06 007d80e0  unit: CXTPDockingPaneTabbedContainer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d80e0
//
// 007d80e0  83ec18               sub esp, 0x18
// 007d80e3  53                   push ebx
// 007d80e4  57                   push edi
// 007d80e5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007d80e9  8bd9                 mov ebx, ecx
// 007d80eb  85ff                 test edi, edi
// 007d80ed  750d                 jne 0x7d80fc
// 007d80ef  5f                   pop edi
// 007d80f0  b857000780           mov eax, 0x80070057
// 007d80f5  5b                   pop ebx
// 007d80f6  83c418               add esp, 0x18
// 007d80f9  c20c00               ret 0xc
// 007d80fc  56                   push esi
// 007d80fd  33c0                 xor eax, eax
// 007d80ff  8db3c8feffff         lea esi, [ebx - 0x138]
// 007d8105  668907               mov word ptr [edi], ax
// 007d8108  85f6                 test esi, esi
// 007d810a  7405                 je 0x7d8111
// 007d810c  394620               cmp dword ptr [esi + 0x20], eax
// 007d810f  750e                 jne 0x7d811f
// 007d8111  5e                   pop esi
// 007d8112  5f                   pop edi
// 007d8113  b801000000           mov eax, 1
// 007d8118  5b                   pop ebx
// 007d8119  83c418               add esp, 0x18
// 007d811c  c20c00               ret 0xc
// 007d811f  55                   push ebp
// 007d8120  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007d8124  56                   push esi
// 007d8125  8d4c241c             lea ecx, [esp + 0x1c]
// 007d8129  e84283f9ff           call 0x770470
// 007d812e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007d8132  51                   push ecx
// 007d8133  55                   push ebp
// 007d8134  50                   push eax
// 007d8135  ff15c0ed8900         call dword ptr [0x89edc0]
// 007d813b  85c0                 test eax, eax
// 007d813d  0f8486000000         je 0x7d81c9
// 007d8143  8b8be8feffff         mov ecx, dword ptr [ebx - 0x118]
// 007d8149  8b542430             mov edx, dword ptr [esp + 0x30]
// 007d814d  8d442410             lea eax, [esp + 0x10]
// 007d8151  50                   push eax
// 007d8152  51                   push ecx
// 007d8153  896c2418             mov dword ptr [esp + 0x18], ebp
// 007d8157  8954241c             mov dword ptr [esp + 0x1c], edx
// 007d815b  ff1530ee8900         call dword ptr [0x89ee30]
// 007d8161  8b542414             mov edx, dword ptr [esp + 0x14]
// 007d8165  8b442410             mov eax, dword ptr [esp + 0x10]
// 007d8169  52                   push edx
// 007d816a  50                   push eax
// 007d816b  8bce                 mov ecx, esi
// 007d816d  e82eecffff           call 0x7d6da0
// 007d8172  83f8fe               cmp eax, -2
// 007d8175  751b                 jne 0x7d8192
// 007d8177  5d                   pop ebp
// 007d8178  b903000000           mov ecx, 3
// 007d817d  5e                   pop esi
// 007d817e  66890f               mov word ptr [edi], cx
// 007d8181  c7470800000000       mov dword ptr [edi + 8], 0
// 007d8188  5f                   pop edi
// 007d8189  33c0                 xor eax, eax
// 007d818b  5b                   pop ebx
// 007d818c  83c418               add esp, 0x18
// 007d818f  c20c00               ret 0xc
// 007d8192  83f8ff               cmp eax, -1
// 007d8195  7541                 jne 0x7d81d8
// 007d8197  ba09000000           mov edx, 9
// 007d819c  668917               mov word ptr [edi], dx
// 007d819f  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 007d81a2  85c0                 test eax, eax
// 007d81a4  7423                 je 0x7d81c9
// 007d81a6  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 007d81ac  83c708               add edi, 8
// 007d81af  57                   push edi
// 007d81b0  68e04e9200           push 0x924ee0
// 007d81b5  6a00                 push 0
// 007d81b7  50                   push eax
// 007d81b8  8bcb                 mov ecx, ebx
// 007d81ba  e8d194f8ff           call 0x761690
// 007d81bf  5d                   pop ebp
// 007d81c0  5e                   pop esi
// 007d81c1  5f                   pop edi
// 007d81c2  5b                   pop ebx
// 007d81c3  83c418               add esp, 0x18
// 007d81c6  c20c00               ret 0xc
// 007d81c9  5d                   pop ebp
// 007d81ca  5e                   pop esi
// 007d81cb  5f                   pop edi
// 007d81cc  b801000000           mov eax, 1
// 007d81d1  5b                   pop ebx
// 007d81d2  83c418               add esp, 0x18
// 007d81d5  c20c00               ret 0xc
// 007d81d8  b909000000           mov ecx, 9
// 007d81dd  6a01                 push 1
// 007d81df  66890f               mov word ptr [edi], cx
// 007d81e2  50                   push eax
// 007d81e3  8bce                 mov ecx, esi
// 007d81e5  e8c6f6ffff           call 0x7d78b0
// 007d81ea  8bc8                 mov ecx, eax
// 007d81ec  e8333d0700           call 0x84bf24
// 007d81f1  5d                   pop ebp
// 007d81f2  5e                   pop esi
// 007d81f3  894708               mov dword ptr [edi + 8], eax
// 007d81f6  5f                   pop edi
// 007d81f7  33c0                 xor eax, eax
// 007d81f9  5b                   pop ebx
// 007d81fa  83c418               add esp, 0x18
// 007d81fd  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AccessibleHitTest@CXTPDockingPaneTabbedContainer@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
