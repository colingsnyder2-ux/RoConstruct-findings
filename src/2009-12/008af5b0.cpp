// roc 2009-12 008af5b0  unit: CXTPDockingPaneMiniWnd  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008af5b0
//
// 008af5b0  53                   push ebx
// 008af5b1  57                   push edi
// 008af5b2  8bf9                 mov edi, ecx
// 008af5b4  8d9f08ffffff         lea ebx, [edi - 0xf8]
// 008af5ba  85db                 test ebx, ebx
// 008af5bc  0f84b5000000         je 0x8af677
// 008af5c2  837b2000             cmp dword ptr [ebx + 0x20], 0
// 008af5c6  0f84ab000000         je 0x8af677
// 008af5cc  56                   push esi
// 008af5cd  ff15eccb9800         call dword ptr [0x98cbec]
// 008af5d3  50                   push eax
// 008af5d4  e85145f4ff           call 0x7f3b2a
// 008af5d9  8bf0                 mov esi, eax
// 008af5db  85f6                 test esi, esi
// 008af5dd  745e                 je 0x8af63d
// 008af5df  8b4620               mov eax, dword ptr [esi + 0x20]
// 008af5e2  85c0                 test eax, eax
// 008af5e4  7457                 je 0x8af63d
// 008af5e6  8d8f08ffffff         lea ecx, [edi - 0xf8]
// 008af5ec  3bf1                 cmp esi, ecx
// 008af5ee  7446                 je 0x8af636
// 008af5f0  8b9728ffffff         mov edx, dword ptr [edi - 0xd8]
// 008af5f6  50                   push eax
// 008af5f7  52                   push edx
// 008af5f8  ff15f4ca9800         call dword ptr [0x98caf4]
// 008af5fe  85c0                 test eax, eax
// 008af600  7534                 jne 0x8af636
// 008af602  8b4638               mov eax, dword ptr [esi + 0x38]
// 008af605  85c0                 test eax, eax
// 008af607  750a                 jne 0x8af613
// 008af609  8b4620               mov eax, dword ptr [esi + 0x20]
// 008af60c  50                   push eax
// 008af60d  ff15bccb9800         call dword ptr [0x98cbbc]
// 008af613  50                   push eax
// 008af614  e81145f4ff           call 0x7f3b2a
// 008af619  85c0                 test eax, eax
// 008af61b  7420                 je 0x8af63d
// 008af61d  83782000             cmp dword ptr [eax + 0x20], 0
// 008af621  741a                 je 0x8af63d
// 008af623  8bce                 mov ecx, esi
// 008af625  e8b66cf5ff           call 0x8062e0
// 008af62a  50                   push eax
// 008af62b  8bcb                 mov ecx, ebx
// 008af62d  e86e61faff           call 0x8557a0
// 008af632  85c0                 test eax, eax
// 008af634  7407                 je 0x8af63d
// 008af636  b801000000           mov eax, 1
// 008af63b  eb02                 jmp 0x8af63f
// 008af63d  33c0                 xor eax, eax
// 008af63f  5e                   pop esi
// 008af640  3b47f8               cmp eax, dword ptr [edi - 8]
// 008af643  7432                 je 0x8af677
// 008af645  8bcb                 mov ecx, ebx
// 008af647  8947f8               mov dword ptr [edi - 8], eax
// 008af64a  e8b1f0ffff           call 0x8ae700
// 008af64f  85c0                 test eax, eax
// 008af651  7416                 je 0x8af669
// 008af653  8b8f28ffffff         mov ecx, dword ptr [edi - 0xd8]
// 008af659  6a00                 push 0
// 008af65b  6a00                 push 0
// 008af65d  6885000000           push 0x85
// 008af662  51                   push ecx
// 008af663  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008af669  8b13                 mov edx, dword ptr [ebx]
// 008af66b  8b82b4010000         mov eax, dword ptr [edx + 0x1b4]
// 008af671  5f                   pop edi
// 008af672  8bcb                 mov ecx, ebx
// 008af674  5b                   pop ebx
// 008af675  ffe0                 jmp eax
// 008af677  5f                   pop edi
// 008af678  5b                   pop ebx
// 008af679  c3                   ret 
// copied from an identical function in another client (function ?OnFocusChanged@CXTPDockingPaneMiniWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp