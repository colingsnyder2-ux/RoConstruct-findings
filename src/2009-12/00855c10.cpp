// roc 2009-12 00855c10  unit: CXTPTabClientWnd::CSingleWorkspace  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00855c10
//
// 00855c10  6aff                 push -1
// 00855c12  68f3de9500           push 0x95def3
// 00855c17  64a100000000         mov eax, dword ptr fs:[0]
// 00855c1d  50                   push eax
// 00855c1e  81ecbc000000         sub esp, 0xbc
// 00855c24  a10052b600           mov eax, dword ptr [0xb65200]
// 00855c29  33c4                 xor eax, esp
// 00855c2b  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 00855c32  53                   push ebx
// 00855c33  55                   push ebp
// 00855c34  56                   push esi
// 00855c35  57                   push edi
// 00855c36  a10052b600           mov eax, dword ptr [0xb65200]
// 00855c3b  33c4                 xor eax, esp
// 00855c3d  50                   push eax
// 00855c3e  8d8424d0000000       lea eax, [esp + 0xd0]
// 00855c45  64a300000000         mov dword ptr fs:[0], eax
// 00855c4b  8bf1                 mov esi, ecx
// 00855c4d  56                   push esi
// 00855c4e  8d4c247c             lea ecx, [esp + 0x7c]
// 00855c52  e899e5f9ff           call 0x7f41f0
// 00855c57  56                   push esi
// 00855c58  8d4c241c             lea ecx, [esp + 0x1c]
// 00855c5c  c78424dc00000000000000 mov dword ptr [esp + 0xdc], 0
// 00855c67  e86456ffff           call 0x84b2d0
// 00855c6c  8d442478             lea eax, [esp + 0x78]
// 00855c70  50                   push eax
// 00855c71  8d4c244c             lea ecx, [esp + 0x4c]
// 00855c75  e88657ffff           call 0x84b400
// 00855c7a  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00855c80  c68424d800000001     mov byte ptr [esp + 0xd8], 1
// 00855c88  85c0                 test eax, eax
// 00855c8a  7437                 je 0x855cc3
// 00855c8c  8b5020               mov edx, dword ptr [eax + 0x20]
// 00855c8f  8d4c2428             lea ecx, [esp + 0x28]
// 00855c93  51                   push ecx
// 00855c94  52                   push edx
// 00855c95  ff1570cc9800         call dword ptr [0x98cc70]
// 00855c9b  8d442428             lea eax, [esp + 0x28]
// 00855c9f  50                   push eax
// 00855ca0  8bce                 mov ecx, esi
// 00855ca2  e831ebf9ff           call 0x7f47d8
// 00855ca7  8d4c2428             lea ecx, [esp + 0x28]
// 00855cab  51                   push ecx
// 00855cac  8d4c247c             lea ecx, [esp + 0x7c]
// 00855cb0  e8ff0d0d00           call 0x926ab4
// 00855cb5  8d542428             lea edx, [esp + 0x28]
// 00855cb9  52                   push edx
// 00855cba  8d4c244c             lea ecx, [esp + 0x4c]
// 00855cbe  e8f10d0d00           call 0x926ab4
// 00855cc3  8b442424             mov eax, dword ptr [esp + 0x24]
// 00855cc7  8b5658               mov edx, dword ptr [esi + 0x58]
// 00855cca  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00855cce  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00855cd2  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00855cd6  83c658               add esi, 0x58
// 00855cd9  89442444             mov dword ptr [esp + 0x44], eax
// 00855cdd  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00855ce0  8bce                 mov ecx, esi
// 00855ce2  ffd0                 call eax
// 00855ce4  83ec10               sub esp, 0x10
// 00855ce7  8bd4                 mov edx, esp
// 00855ce9  893a                 mov dword ptr [edx], edi
// 00855ceb  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00855cef  896a04               mov dword ptr [edx + 4], ebp
// 00855cf2  895a08               mov dword ptr [edx + 8], ebx
// 00855cf5  897a0c               mov dword ptr [edx + 0xc], edi
// 00855cf8  8d542458             lea edx, [esp + 0x58]
// 00855cfc  8bc8                 mov ecx, eax
// 00855cfe  8b00                 mov eax, dword ptr [eax]
// 00855d00  8b4058               mov eax, dword ptr [eax + 0x58]
// 00855d03  52                   push edx
// 00855d04  56                   push esi
// 00855d05  ffd0                 call eax
// 00855d07  8d4c2448             lea ecx, [esp + 0x48]
// 00855d0b  c68424d800000000     mov byte ptr [esp + 0xd8], 0
// 00855d13  e82858ffff           call 0x84b540
// 00855d18  8d4c2478             lea ecx, [esp + 0x78]
// 00855d1c  c78424d8000000ffffffff mov dword ptr [esp + 0xd8], 0xffffffff
// 00855d27  e8bee4f9ff           call 0x7f41ea
// 00855d2c  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00855d33  64890d00000000       mov dword ptr fs:[0], ecx
// 00855d3a  59                   pop ecx
// 00855d3b  5f                   pop edi
// 00855d3c  5e                   pop esi
// 00855d3d  5d                   pop ebp
// 00855d3e  5b                   pop ebx
// 00855d3f  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00855d46  33cc                 xor ecx, esp
// 00855d48  e84df6f9ff           call 0x7f539a
// 00855d4d  81c4c8000000         add esp, 0xc8
// 00855d53  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CSingleWorkspace@CXTPTabClientWnd@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp