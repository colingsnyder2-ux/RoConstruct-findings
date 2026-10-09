// roc 2007-03 006b58b0  unit: seg_006b0000  size: 408 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b58b0
//
// 006b58b0  83ec20               sub esp, 0x20
// 006b58b3  53                   push ebx
// 006b58b4  55                   push ebp
// 006b58b5  56                   push esi
// 006b58b6  57                   push edi
// 006b58b7  8b3d14ed7700         mov edi, dword ptr [0x77ed14]
// 006b58bd  8bf1                 mov esi, ecx
// 006b58bf  ffd7                 call edi
// 006b58c1  85c0                 test eax, eax
// 006b58c3  0f8577010000         jne 0x6b5a40
// 006b58c9  8b4604               mov eax, dword ptr [esi + 4]
// 006b58cc  8b4020               mov eax, dword ptr [eax + 0x20]
// 006b58cf  50                   push eax
// 006b58d0  ff1518ed7700         call dword ptr [0x77ed18]
// 006b58d6  50                   push eax
// 006b58d7  e8728df6ff           call 0x61e64e
// 006b58dc  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b58df  e82c34f8ff           call 0x638d10
// 006b58e4  85c0                 test eax, eax
// 006b58e6  89442410             mov dword ptr [esp + 0x10], eax
// 006b58ea  0f8450010000         je 0x6b5a40
// 006b58f0  33db                 xor ebx, ebx
// 006b58f2  33ed                 xor ebp, ebp
// 006b58f4  ffd7                 call edi
// 006b58f6  50                   push eax
// 006b58f7  e8528df6ff           call 0x61e64e
// 006b58fc  3b4604               cmp eax, dword ptr [esi + 4]
// 006b58ff  0f8527010000         jne 0x6b5a2c
// 006b5905  8b3d10ed7700         mov edi, dword ptr [0x77ed10]
// 006b590b  eb03                 jmp 0x6b5910
// 006b590d  8d4900               lea ecx, [ecx]
// 006b5910  6a00                 push 0
// 006b5912  6a0f                 push 0xf
// 006b5914  6a0f                 push 0xf
// 006b5916  6a00                 push 0
// 006b5918  8d4c2424             lea ecx, [esp + 0x24]
// 006b591c  51                   push ecx
// 006b591d  ffd7                 call edi
// 006b591f  85c0                 test eax, eax
// 006b5921  7433                 je 0x6b5956
// 006b5923  6a0f                 push 0xf
// 006b5925  6a0f                 push 0xf
// 006b5927  6a00                 push 0
// 006b5929  8d542420             lea edx, [esp + 0x20]
// 006b592d  52                   push edx
// 006b592e  ff1510ef7700         call dword ptr [0x77ef10]
// 006b5934  85c0                 test eax, eax
// 006b5936  741e                 je 0x6b5956
// 006b5938  8d442414             lea eax, [esp + 0x14]
// 006b593c  50                   push eax
// 006b593d  ff1504ee7700         call dword ptr [0x77ee04]
// 006b5943  6a00                 push 0
// 006b5945  6a0f                 push 0xf
// 006b5947  6a0f                 push 0xf
// 006b5949  6a00                 push 0
// 006b594b  8d4c2424             lea ecx, [esp + 0x24]
// 006b594f  51                   push ecx
// 006b5950  ffd7                 call edi
// 006b5952  85c0                 test eax, eax
// 006b5954  75cd                 jne 0x6b5923
// 006b5956  6a00                 push 0
// 006b5958  6a00                 push 0
// 006b595a  6a00                 push 0
// 006b595c  8d542420             lea edx, [esp + 0x20]
// 006b5960  52                   push edx
// 006b5961  ff1510ef7700         call dword ptr [0x77ef10]
// 006b5967  85c0                 test eax, eax
// 006b5969  0f84b3000000         je 0x6b5a22
// 006b596f  8b442418             mov eax, dword ptr [esp + 0x18]
// 006b5973  3d02020000           cmp eax, 0x202
// 006b5978  0f84ae000000         je 0x6b5a2c
// 006b597e  3d00020000           cmp eax, 0x200
// 006b5983  7562                 jne 0x6b59e7
// 006b5985  8b442428             mov eax, dword ptr [esp + 0x28]
// 006b5989  3bd8                 cmp ebx, eax
// 006b598b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006b598f  7504                 jne 0x6b5995
// 006b5991  3be9                 cmp ebp, ecx
// 006b5993  7462                 je 0x6b59f7
// 006b5995  837e0801             cmp dword ptr [esi + 8], 1
// 006b5999  8bd8                 mov ebx, eax
// 006b599b  8be9                 mov ebp, ecx
// 006b599d  7515                 jne 0x6b59b4
// 006b599f  8bd0                 mov edx, eax
// 006b59a1  83ec08               sub esp, 8
// 006b59a4  8bc4                 mov eax, esp
// 006b59a6  894804               mov dword ptr [eax + 4], ecx
// 006b59a9  8bce                 mov ecx, esi
// 006b59ab  8910                 mov dword ptr [eax], edx
// 006b59ad  e84ef8ffff           call 0x6b5200
// 006b59b2  eb4e                 jmp 0x6b5a02
// 006b59b4  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b59b7  8b01                 mov eax, dword ptr [ecx]
// 006b59b9  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 006b59bf  ffd2                 call edx
// 006b59c1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006b59c5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006b59c9  83ec08               sub esp, 8
// 006b59cc  85c0                 test eax, eax
// 006b59ce  8bc4                 mov eax, esp
// 006b59d0  8908                 mov dword ptr [eax], ecx
// 006b59d2  895004               mov dword ptr [eax + 4], edx
// 006b59d5  8bce                 mov ecx, esi
// 006b59d7  7407                 je 0x6b59e0
// 006b59d9  e8c2f9ffff           call 0x6b53a0
// 006b59de  eb22                 jmp 0x6b5a02
// 006b59e0  e8dbfaffff           call 0x6b54c0
// 006b59e5  eb1b                 jmp 0x6b5a02
// 006b59e7  3d00010000           cmp eax, 0x100
// 006b59ec  7509                 jne 0x6b59f7
// 006b59ee  837c241c1b           cmp dword ptr [esp + 0x1c], 0x1b
// 006b59f3  7437                 je 0x6b5a2c
// 006b59f5  eb0b                 jmp 0x6b5a02
// 006b59f7  8d442414             lea eax, [esp + 0x14]
// 006b59fb  50                   push eax
// 006b59fc  ff1504ee7700         call dword ptr [0x77ee04]
// 006b5a02  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b5a06  e8055af7ff           call 0x62b410
// 006b5a0b  ff1514ed7700         call dword ptr [0x77ed14]
// 006b5a11  50                   push eax
// 006b5a12  e8378cf6ff           call 0x61e64e
// 006b5a17  3b4604               cmp eax, dword ptr [esi + 4]
// 006b5a1a  0f84f0feffff         je 0x6b5910
// 006b5a20  eb0a                 jmp 0x6b5a2c
// 006b5a22  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006b5a26  51                   push ecx
// 006b5a27  e8e490f6ff           call 0x61eb10
// 006b5a2c  ff150ced7700         call dword ptr [0x77ed0c]
// 006b5a32  8b542410             mov edx, dword ptr [esp + 0x10]
// 006b5a36  8b4274               mov eax, dword ptr [edx + 0x74]
// 006b5a39  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 006b5a40  5f                   pop edi
// 006b5a41  5e                   pop esi
// 006b5a42  5d                   pop ebp
// 006b5a43  5b                   pop ebx
// 006b5a44  83c420               add esp, 0x20
// 006b5a47  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockContext.cpp (function ?Track@CXTPDockContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockContext.cpp
