// roc 2009-12 0083a120  unit: CXTPDockingPaneManager  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083a120
//
// 0083a120  53                   push ebx
// 0083a121  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0083a125  55                   push ebp
// 0083a126  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0083a12a  56                   push esi
// 0083a12b  57                   push edi
// 0083a12c  8bf1                 mov esi, ecx
// 0083a12e  83fd02               cmp ebp, 2
// 0083a131  754f                 jne 0x83a182
// 0083a133  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 0083a13a  742c                 je 0x83a168
// 0083a13c  68b0888300           push 0x8388b0
// 0083a141  b920bbb900           mov ecx, 0xb9bb20
// 0083a146  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 0083a150  e8e7c20e00           call 0x92643c
// 0083a155  85c0                 test eax, eax
// 0083a157  7505                 jne 0x83a15e
// 0083a159  e8ae99fbff           call 0x7f3b0c
// 0083a15e  6a00                 push 0
// 0083a160  56                   push esi
// 0083a161  8bc8                 mov ecx, eax
// 0083a163  e878420700           call 0x8ae3e0
// 0083a168  8b542420             mov edx, dword ptr [esp + 0x20]
// 0083a16c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083a170  52                   push edx
// 0083a171  50                   push eax
// 0083a172  53                   push ebx
// 0083a173  55                   push ebp
// 0083a174  8bce                 mov ecx, esi
// 0083a176  e85f98fbff           call 0x7f39da
// 0083a17b  5f                   pop edi
// 0083a17c  5e                   pop esi
// 0083a17d  5d                   pop ebp
// 0083a17e  5b                   pop ebx
// 0083a17f  c21000               ret 0x10
// 0083a182  81fd12010000         cmp ebp, 0x112
// 0083a188  75de                 jne 0x83a168
// 0083a18a  81fb00f10000         cmp ebx, 0xf100
// 0083a190  7540                 jne 0x83a1d2
// 0083a192  66837c241c2d         cmp word ptr [esp + 0x1c], 0x2d
// 0083a198  75ce                 jne 0x83a168
// 0083a19a  8bbed8000000         mov edi, dword ptr [esi + 0xd8]
// 0083a1a0  85ff                 test edi, edi
// 0083a1a2  74c4                 je 0x83a168
// 0083a1a4  8bcf                 mov ecx, edi
// 0083a1a6  e855280200           call 0x85ca00
// 0083a1ab  85c0                 test eax, eax
// 0083a1ad  75b9                 jne 0x83a168
// 0083a1af  8b4720               mov eax, dword ptr [edi + 0x20]
// 0083a1b2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0083a1b5  8d4f20               lea ecx, [edi + 0x20]
// 0083a1b8  ffd2                 call edx
// 0083a1ba  85c0                 test eax, eax
// 0083a1bc  75aa                 jne 0x83a168
// 0083a1be  57                   push edi
// 0083a1bf  8bce                 mov ecx, esi
// 0083a1c1  e82af2ffff           call 0x8393f0
// 0083a1c6  5f                   pop edi
// 0083a1c7  5e                   pop esi
// 0083a1c8  5d                   pop ebp
// 0083a1c9  b801000000           mov eax, 1
// 0083a1ce  5b                   pop ebx
// 0083a1cf  c21000               ret 0x10
// 0083a1d2  81fb40f00000         cmp ebx, 0xf040
// 0083a1d8  7408                 je 0x83a1e2
// 0083a1da  81fb50f00000         cmp ebx, 0xf050
// 0083a1e0  7586                 jne 0x83a168
// 0083a1e2  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0083a1e8  33c9                 xor ecx, ecx
// 0083a1ea  81fb40f00000         cmp ebx, 0xf040
// 0083a1f0  0f94c1               sete cl
// 0083a1f3  51                   push ecx
// 0083a1f4  50                   push eax
// 0083a1f5  8bce                 mov ecx, esi
// 0083a1f7  e864f3ffff           call 0x839560
// 0083a1fc  5f                   pop edi
// 0083a1fd  5e                   pop esi
// 0083a1fe  5d                   pop ebp
// 0083a1ff  5b                   pop ebx
// 0083a200  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnWndMsg@CXTPDockingPaneManager@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
