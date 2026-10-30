// roc 2011-06 008c2200  unit: CXTPDockingPaneAutoHidePanel  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c2200
//
// 008c2200  6aff                 push -1
// 008c2202  68a3c0a000           push 0xa0c0a3
// 008c2207  64a100000000         mov eax, dword ptr fs:[0]
// 008c220d  50                   push eax
// 008c220e  81ecac000000         sub esp, 0xac
// 008c2214  a12058c900           mov eax, dword ptr [0xc95820]
// 008c2219  33c4                 xor eax, esp
// 008c221b  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 008c2222  53                   push ebx
// 008c2223  55                   push ebp
// 008c2224  56                   push esi
// 008c2225  57                   push edi
// 008c2226  a12058c900           mov eax, dword ptr [0xc95820]
// 008c222b  33c4                 xor eax, esp
// 008c222d  50                   push eax
// 008c222e  8d8424c0000000       lea eax, [esp + 0xc0]
// 008c2235  64a300000000         mov dword ptr fs:[0], eax
// 008c223b  8bf1                 mov esi, ecx
// 008c223d  56                   push esi
// 008c223e  8d4c246c             lea ecx, [esp + 0x6c]
// 008c2242  e8a787f4ff           call 0x80a9ee
// 008c2247  56                   push esi
// 008c2248  8d4c241c             lea ecx, [esp + 0x1c]
// 008c224c  c78424cc00000000000000 mov dword ptr [esp + 0xcc], 0
// 008c2257  e834abf9ff           call 0x85cd90
// 008c225c  8d442468             lea eax, [esp + 0x68]
// 008c2260  50                   push eax
// 008c2261  8d4c243c             lea ecx, [esp + 0x3c]
// 008c2265  e856acf9ff           call 0x85cec0
// 008c226a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c226e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008c2272  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008c2276  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008c227a  894c2434             mov dword ptr [esp + 0x34], ecx
// 008c227e  8d4e54               lea ecx, [esi + 0x54]
// 008c2281  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 008c2289  e8e2faffff           call 0x8c1d70
// 008c228e  83ec10               sub esp, 0x10
// 008c2291  8bd4                 mov edx, esp
// 008c2293  893a                 mov dword ptr [edx], edi
// 008c2295  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008c2299  896a04               mov dword ptr [edx + 4], ebp
// 008c229c  895a08               mov dword ptr [edx + 8], ebx
// 008c229f  8bc8                 mov ecx, eax
// 008c22a1  8b00                 mov eax, dword ptr [eax]
// 008c22a3  8b4058               mov eax, dword ptr [eax + 0x58]
// 008c22a6  897a0c               mov dword ptr [edx + 0xc], edi
// 008c22a9  56                   push esi
// 008c22aa  8d54244c             lea edx, [esp + 0x4c]
// 008c22ae  52                   push edx
// 008c22af  ffd0                 call eax
// 008c22b1  8d4c2438             lea ecx, [esp + 0x38]
// 008c22b5  c68424c800000000     mov byte ptr [esp + 0xc8], 0
// 008c22bd  e83eadf9ff           call 0x85d000
// 008c22c2  8d4c2468             lea ecx, [esp + 0x68]
// 008c22c6  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 008c22d1  e81287f4ff           call 0x80a9e8
// 008c22d6  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 008c22dd  64890d00000000       mov dword ptr fs:[0], ecx
// 008c22e4  59                   pop ecx
// 008c22e5  5f                   pop edi
// 008c22e6  5e                   pop esi
// 008c22e7  5d                   pop ebp
// 008c22e8  5b                   pop ebx
// 008c22e9  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 008c22f0  33cc                 xor ecx, esp
// 008c22f2  e80096f4ff           call 0x80b8f7
// 008c22f7  81c4b8000000         add esp, 0xb8
// 008c22fd  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp