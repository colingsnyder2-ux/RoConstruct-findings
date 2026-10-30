// roc 2009-12 00890c30  unit: CXTPDockContext  size: 408 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00890c30
//
// 00890c30  83ec20               sub esp, 0x20
// 00890c33  53                   push ebx
// 00890c34  55                   push ebp
// 00890c35  56                   push esi
// 00890c36  57                   push edi
// 00890c37  8b3d28cc9800         mov edi, dword ptr [0x98cc28]
// 00890c3d  8bf1                 mov esi, ecx
// 00890c3f  ffd7                 call edi
// 00890c41  85c0                 test eax, eax
// 00890c43  0f8577010000         jne 0x890dc0
// 00890c49  8b4604               mov eax, dword ptr [esi + 4]
// 00890c4c  8b4020               mov eax, dword ptr [eax + 0x20]
// 00890c4f  50                   push eax
// 00890c50  ff152ccc9800         call dword ptr [0x98cc2c]
// 00890c56  50                   push eax
// 00890c57  e8ce2ef6ff           call 0x7f3b2a
// 00890c5c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00890c5f  e86c38f7ff           call 0x8044d0
// 00890c64  89442410             mov dword ptr [esp + 0x10], eax
// 00890c68  85c0                 test eax, eax
// 00890c6a  0f8450010000         je 0x890dc0
// 00890c70  33db                 xor ebx, ebx
// 00890c72  33ed                 xor ebp, ebp
// 00890c74  ffd7                 call edi
// 00890c76  50                   push eax
// 00890c77  e8ae2ef6ff           call 0x7f3b2a
// 00890c7c  3b4604               cmp eax, dword ptr [esi + 4]
// 00890c7f  0f8527010000         jne 0x890dac
// 00890c85  8b3d24cc9800         mov edi, dword ptr [0x98cc24]
// 00890c8b  eb03                 jmp 0x890c90
// 00890c8d  8d4900               lea ecx, [ecx]
// 00890c90  6a00                 push 0
// 00890c92  6a0f                 push 0xf
// 00890c94  6a0f                 push 0xf
// 00890c96  6a00                 push 0
// 00890c98  8d4c2424             lea ecx, [esp + 0x24]
// 00890c9c  51                   push ecx
// 00890c9d  ffd7                 call edi
// 00890c9f  85c0                 test eax, eax
// 00890ca1  7433                 je 0x890cd6
// 00890ca3  6a0f                 push 0xf
// 00890ca5  6a0f                 push 0xf
// 00890ca7  6a00                 push 0
// 00890ca9  8d542420             lea edx, [esp + 0x20]
// 00890cad  52                   push edx
// 00890cae  ff15b0ca9800         call dword ptr [0x98cab0]
// 00890cb4  85c0                 test eax, eax
// 00890cb6  741e                 je 0x890cd6
// 00890cb8  8d442414             lea eax, [esp + 0x14]
// 00890cbc  50                   push eax
// 00890cbd  ff1594ca9800         call dword ptr [0x98ca94]
// 00890cc3  6a00                 push 0
// 00890cc5  6a0f                 push 0xf
// 00890cc7  6a0f                 push 0xf
// 00890cc9  6a00                 push 0
// 00890ccb  8d4c2424             lea ecx, [esp + 0x24]
// 00890ccf  51                   push ecx
// 00890cd0  ffd7                 call edi
// 00890cd2  85c0                 test eax, eax
// 00890cd4  75cd                 jne 0x890ca3
// 00890cd6  6a00                 push 0
// 00890cd8  6a00                 push 0
// 00890cda  6a00                 push 0
// 00890cdc  8d542420             lea edx, [esp + 0x20]
// 00890ce0  52                   push edx
// 00890ce1  ff15b0ca9800         call dword ptr [0x98cab0]
// 00890ce7  85c0                 test eax, eax
// 00890ce9  0f84b3000000         je 0x890da2
// 00890cef  8b442418             mov eax, dword ptr [esp + 0x18]
// 00890cf3  3d02020000           cmp eax, 0x202
// 00890cf8  0f84ae000000         je 0x890dac
// 00890cfe  3d00020000           cmp eax, 0x200
// 00890d03  7562                 jne 0x890d67
// 00890d05  8b442428             mov eax, dword ptr [esp + 0x28]
// 00890d09  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00890d0d  3bd8                 cmp ebx, eax
// 00890d0f  7504                 jne 0x890d15
// 00890d11  3be9                 cmp ebp, ecx
// 00890d13  7462                 je 0x890d77
// 00890d15  837e0801             cmp dword ptr [esi + 8], 1
// 00890d19  8bd8                 mov ebx, eax
// 00890d1b  8be9                 mov ebp, ecx
// 00890d1d  7515                 jne 0x890d34
// 00890d1f  8bd0                 mov edx, eax
// 00890d21  83ec08               sub esp, 8
// 00890d24  8bc4                 mov eax, esp
// 00890d26  894804               mov dword ptr [eax + 4], ecx
// 00890d29  8bce                 mov ecx, esi
// 00890d2b  8910                 mov dword ptr [eax], edx
// 00890d2d  e8def7ffff           call 0x890510
// 00890d32  eb4e                 jmp 0x890d82
// 00890d34  8b4e04               mov ecx, dword ptr [esi + 4]
// 00890d37  8b01                 mov eax, dword ptr [ecx]
// 00890d39  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 00890d3f  ffd2                 call edx
// 00890d41  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00890d45  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00890d49  83ec08               sub esp, 8
// 00890d4c  85c0                 test eax, eax
// 00890d4e  8bc4                 mov eax, esp
// 00890d50  8908                 mov dword ptr [eax], ecx
// 00890d52  895004               mov dword ptr [eax + 4], edx
// 00890d55  8bce                 mov ecx, esi
// 00890d57  7407                 je 0x890d60
// 00890d59  e862f9ffff           call 0x8906c0
// 00890d5e  eb22                 jmp 0x890d82
// 00890d60  e87bfaffff           call 0x8907e0
// 00890d65  eb1b                 jmp 0x890d82
// 00890d67  3d00010000           cmp eax, 0x100
// 00890d6c  7509                 jne 0x890d77
// 00890d6e  837c241c1b           cmp dword ptr [esp + 0x1c], 0x1b
// 00890d73  7437                 je 0x890dac
// 00890d75  eb0b                 jmp 0x890d82
// 00890d77  8d442414             lea eax, [esp + 0x14]
// 00890d7b  50                   push eax
// 00890d7c  ff1594ca9800         call dword ptr [0x98ca94]
// 00890d82  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00890d86  e80533f8ff           call 0x814090
// 00890d8b  ff1528cc9800         call dword ptr [0x98cc28]
// 00890d91  50                   push eax
// 00890d92  e8932df6ff           call 0x7f3b2a
// 00890d97  3b4604               cmp eax, dword ptr [esi + 4]
// 00890d9a  0f84f0feffff         je 0x890c90
// 00890da0  eb0a                 jmp 0x890dac
// 00890da2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00890da6  51                   push ecx
// 00890da7  e84e39f6ff           call 0x7f46fa
// 00890dac  ff1520cc9800         call dword ptr [0x98cc20]
// 00890db2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00890db6  8b4274               mov eax, dword ptr [edx + 0x74]
// 00890db9  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 00890dc0  5f                   pop edi
// 00890dc1  5e                   pop esi
// 00890dc2  5d                   pop ebp
// 00890dc3  5b                   pop ebx
// 00890dc4  83c420               add esp, 0x20
// 00890dc7  c3                   ret 
// copied from an identical function in another client (function ?Track@CXTPDockContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockContext.cpp