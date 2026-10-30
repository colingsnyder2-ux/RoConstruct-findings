// roc 2009-12 008b0cd0  unit: CXTPDockingPaneTabbedContainer  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0cd0
//
// 008b0cd0  6aff                 push -1
// 008b0cd2  68c32e9600           push 0x962ec3
// 008b0cd7  64a100000000         mov eax, dword ptr fs:[0]
// 008b0cdd  50                   push eax
// 008b0cde  81ecac000000         sub esp, 0xac
// 008b0ce4  a10052b600           mov eax, dword ptr [0xb65200]
// 008b0ce9  33c4                 xor eax, esp
// 008b0ceb  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 008b0cf2  53                   push ebx
// 008b0cf3  55                   push ebp
// 008b0cf4  56                   push esi
// 008b0cf5  57                   push edi
// 008b0cf6  a10052b600           mov eax, dword ptr [0xb65200]
// 008b0cfb  33c4                 xor eax, esp
// 008b0cfd  50                   push eax
// 008b0cfe  8d8424c0000000       lea eax, [esp + 0xc0]
// 008b0d05  64a300000000         mov dword ptr fs:[0], eax
// 008b0d0b  8bf1                 mov esi, ecx
// 008b0d0d  56                   push esi
// 008b0d0e  8d4c246c             lea ecx, [esp + 0x6c]
// 008b0d12  e8d934f4ff           call 0x7f41f0
// 008b0d17  56                   push esi
// 008b0d18  8d4c241c             lea ecx, [esp + 0x1c]
// 008b0d1c  c78424cc00000000000000 mov dword ptr [esp + 0xcc], 0
// 008b0d27  e8a4a5f9ff           call 0x84b2d0
// 008b0d2c  8d442468             lea eax, [esp + 0x68]
// 008b0d30  50                   push eax
// 008b0d31  8d4c243c             lea ecx, [esp + 0x3c]
// 008b0d35  e8c6a6f9ff           call 0x84b400
// 008b0d3a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b0d3e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008b0d42  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008b0d46  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008b0d4a  894c2434             mov dword ptr [esp + 0x34], ecx
// 008b0d4e  8d4e54               lea ecx, [esi + 0x54]
// 008b0d51  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 008b0d59  e8f2faffff           call 0x8b0850
// 008b0d5e  83ec10               sub esp, 0x10
// 008b0d61  8bd4                 mov edx, esp
// 008b0d63  893a                 mov dword ptr [edx], edi
// 008b0d65  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008b0d69  896a04               mov dword ptr [edx + 4], ebp
// 008b0d6c  895a08               mov dword ptr [edx + 8], ebx
// 008b0d6f  8bc8                 mov ecx, eax
// 008b0d71  8b00                 mov eax, dword ptr [eax]
// 008b0d73  8b4058               mov eax, dword ptr [eax + 0x58]
// 008b0d76  897a0c               mov dword ptr [edx + 0xc], edi
// 008b0d79  56                   push esi
// 008b0d7a  8d54244c             lea edx, [esp + 0x4c]
// 008b0d7e  52                   push edx
// 008b0d7f  ffd0                 call eax
// 008b0d81  8d4c2438             lea ecx, [esp + 0x38]
// 008b0d85  c68424c800000000     mov byte ptr [esp + 0xc8], 0
// 008b0d8d  e8aea7f9ff           call 0x84b540
// 008b0d92  8d4c2468             lea ecx, [esp + 0x68]
// 008b0d96  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 008b0da1  e84434f4ff           call 0x7f41ea
// 008b0da6  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 008b0dad  64890d00000000       mov dword ptr fs:[0], ecx
// 008b0db4  59                   pop ecx
// 008b0db5  5f                   pop edi
// 008b0db6  5e                   pop esi
// 008b0db7  5d                   pop ebp
// 008b0db8  5b                   pop ebx
// 008b0db9  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 008b0dc0  33cc                 xor ecx, esp
// 008b0dc2  e8d345f4ff           call 0x7f539a
// 008b0dc7  81c4b8000000         add esp, 0xb8
// 008b0dcd  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp