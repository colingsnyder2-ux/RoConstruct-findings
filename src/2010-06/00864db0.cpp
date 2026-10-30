// roc 2010-06 00864db0  unit: CXTPDockingPaneAutoHidePanel  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00864db0
//
// 00864db0  6aff                 push -1
// 00864db2  68238f9b00           push 0x9b8f23
// 00864db7  64a100000000         mov eax, dword ptr fs:[0]
// 00864dbd  50                   push eax
// 00864dbe  81ecac000000         sub esp, 0xac
// 00864dc4  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00864dc9  33c4                 xor eax, esp
// 00864dcb  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 00864dd2  53                   push ebx
// 00864dd3  55                   push ebp
// 00864dd4  56                   push esi
// 00864dd5  57                   push edi
// 00864dd6  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00864ddb  33c4                 xor eax, esp
// 00864ddd  50                   push eax
// 00864dde  8d8424c0000000       lea eax, [esp + 0xc0]
// 00864de5  64a300000000         mov dword ptr fs:[0], eax
// 00864deb  8bf1                 mov esi, ecx
// 00864ded  56                   push esi
// 00864dee  8d4c246c             lea ecx, [esp + 0x6c]
// 00864df2  e83935f4ff           call 0x7a8330
// 00864df7  56                   push esi
// 00864df8  8d4c241c             lea ecx, [esp + 0x1c]
// 00864dfc  c78424cc00000000000000 mov dword ptr [esp + 0xcc], 0
// 00864e07  e804a5f9ff           call 0x7ff310
// 00864e0c  8d442468             lea eax, [esp + 0x68]
// 00864e10  50                   push eax
// 00864e11  8d4c243c             lea ecx, [esp + 0x3c]
// 00864e15  e826a6f9ff           call 0x7ff440
// 00864e1a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00864e1e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00864e22  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00864e26  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00864e2a  894c2434             mov dword ptr [esp + 0x34], ecx
// 00864e2e  8d4e54               lea ecx, [esi + 0x54]
// 00864e31  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 00864e39  e8e2faffff           call 0x864920
// 00864e3e  83ec10               sub esp, 0x10
// 00864e41  8bd4                 mov edx, esp
// 00864e43  893a                 mov dword ptr [edx], edi
// 00864e45  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00864e49  896a04               mov dword ptr [edx + 4], ebp
// 00864e4c  895a08               mov dword ptr [edx + 8], ebx
// 00864e4f  8bc8                 mov ecx, eax
// 00864e51  8b00                 mov eax, dword ptr [eax]
// 00864e53  8b4058               mov eax, dword ptr [eax + 0x58]
// 00864e56  897a0c               mov dword ptr [edx + 0xc], edi
// 00864e59  56                   push esi
// 00864e5a  8d54244c             lea edx, [esp + 0x4c]
// 00864e5e  52                   push edx
// 00864e5f  ffd0                 call eax
// 00864e61  8d4c2438             lea ecx, [esp + 0x38]
// 00864e65  c68424c800000000     mov byte ptr [esp + 0xc8], 0
// 00864e6d  e80ea7f9ff           call 0x7ff580
// 00864e72  8d4c2468             lea ecx, [esp + 0x68]
// 00864e76  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 00864e81  e8a434f4ff           call 0x7a832a
// 00864e86  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 00864e8d  64890d00000000       mov dword ptr fs:[0], ecx
// 00864e94  59                   pop ecx
// 00864e95  5f                   pop edi
// 00864e96  5e                   pop esi
// 00864e97  5d                   pop ebp
// 00864e98  5b                   pop ebx
// 00864e99  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00864ea0  33cc                 xor ecx, esp
// 00864ea2  e82d46f4ff           call 0x7a94d4
// 00864ea7  81c4b8000000         add esp, 0xb8
// 00864ead  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp