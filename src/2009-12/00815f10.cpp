// roc 2009-12 00815f10  unit: CXTPCommandBar  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815f10
//
// 00815f10  57                   push edi
// 00815f11  8bf9                 mov edi, ecx
// 00815f13  8b4774               mov eax, dword ptr [edi + 0x74]
// 00815f16  83785c02             cmp dword ptr [eax + 0x5c], 2
// 00815f1a  7506                 jne 0x815f22
// 00815f1c  33c0                 xor eax, eax
// 00815f1e  5f                   pop edi
// 00815f1f  c20400               ret 4
// 00815f22  55                   push ebp
// 00815f23  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00815f27  8d4da0               lea ecx, [ebp - 0x60]
// 00815f2a  83f909               cmp ecx, 9
// 00815f2d  7706                 ja 0x815f35
// 00815f2f  83787c00             cmp dword ptr [eax + 0x7c], 0
// 00815f33  740d                 je 0x815f42
// 00815f35  6a02                 push 2
// 00815f37  55                   push ebp
// 00815f38  ff15fcc99800         call dword ptr [0x98c9fc]
// 00815f3e  85c0                 test eax, eax
// 00815f40  7507                 jne 0x815f49
// 00815f42  5d                   pop ebp
// 00815f43  33c0                 xor eax, eax
// 00815f45  5f                   pop edi
// 00815f46  c20400               ret 4
// 00815f49  8b17                 mov edx, dword ptr [edi]
// 00815f4b  8b4258               mov eax, dword ptr [edx + 0x58]
// 00815f4e  53                   push ebx
// 00815f4f  56                   push esi
// 00815f50  8bcf                 mov ecx, edi
// 00815f52  ffd0                 call eax
// 00815f54  8bd8                 mov ebx, eax
// 00815f56  53                   push ebx
// 00815f57  e8e4e0ffff           call 0x814040
// 00815f5c  83c404               add esp, 4
// 00815f5f  8bf0                 mov esi, eax
// 00815f61  f7de                 neg esi
// 00815f63  1bf6                 sbb esi, esi
// 00815f65  23f3                 and esi, ebx
// 00815f67  33db                 xor ebx, ebx
// 00815f69  399f84000000         cmp dword ptr [edi + 0x84], ebx
// 00815f6f  7e40                 jle 0x815fb1
// 00815f71  53                   push ebx
// 00815f72  8bcf                 mov ecx, edi
// 00815f74  e867edffff           call 0x814ce0
// 00815f79  8be8                 mov ebp, eax
// 00815f7b  83bde000000000       cmp dword ptr [ebp + 0xe0], 0
// 00815f82  7527                 jne 0x815fab
// 00815f84  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 00815f87  f6415c01             test byte ptr [ecx + 0x5c], 1
// 00815f8b  7413                 je 0x815fa0
// 00815f8d  85f6                 test esi, esi
// 00815f8f  750f                 jne 0x815fa0
// 00815f91  55                   push ebp
// 00815f92  e8a9e0ffff           call 0x814040
// 00815f97  83c404               add esp, 4
// 00815f9a  85c0                 test eax, eax
// 00815f9c  7402                 je 0x815fa0
// 00815f9e  8bf5                 mov esi, ebp
// 00815fa0  43                   inc ebx
// 00815fa1  3b9f84000000         cmp ebx, dword ptr [edi + 0x84]
// 00815fa7  7cc8                 jl 0x815f71
// 00815fa9  eb02                 jmp 0x815fad
// 00815fab  8bf5                 mov esi, ebp
// 00815fad  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00815fb1  85f6                 test esi, esi
// 00815fb3  0f84a2000000         je 0x81605b
// 00815fb9  56                   push esi
// 00815fba  e881e0ffff           call 0x814040
// 00815fbf  83c404               add esp, 4
// 00815fc2  85c0                 test eax, eax
// 00815fc4  0f8491000000         je 0x81605b
// 00815fca  8b16                 mov edx, dword ptr [esi]
// 00815fcc  8b82f8010000         mov eax, dword ptr [edx + 0x1f8]
// 00815fd2  55                   push ebp
// 00815fd3  8bce                 mov ecx, esi
// 00815fd5  ffd0                 call eax
// 00815fd7  85c0                 test eax, eax
// 00815fd9  7574                 jne 0x81604f
// 00815fdb  8d4c2414             lea ecx, [esp + 0x14]
// 00815fdf  51                   push ecx
// 00815fe0  55                   push ebp
// 00815fe1  56                   push esi
// 00815fe2  8bcf                 mov ecx, edi
// 00815fe4  e8a7fcffff           call 0x815c90
// 00815fe9  8bd8                 mov ebx, eax
// 00815feb  85db                 test ebx, ebx
// 00815fed  746c                 je 0x81605b
// 00815fef  8bb300010000         mov esi, dword ptr [ebx + 0x100]
// 00815ff5  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 00815ffc  8bab80000000         mov ebp, dword ptr [ebx + 0x80]
// 00816002  7507                 jne 0x81600b
// 00816004  8bcf                 mov ecx, edi
// 00816006  e8d5feffff           call 0x815ee0
// 0081600b  6a01                 push 1
// 0081600d  8bcf                 mov ecx, edi
// 0081600f  e82cfbffff           call 0x815b40
// 00816014  6a01                 push 1
// 00816016  c7474401000000       mov dword ptr [edi + 0x44], 1
// 0081601d  8b16                 mov edx, dword ptr [esi]
// 0081601f  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00816025  6a00                 push 0
// 00816027  6a01                 push 1
// 00816029  8bce                 mov ecx, esi
// 0081602b  ffd0                 call eax
// 0081602d  8b16                 mov edx, dword ptr [esi]
// 0081602f  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00816035  6a01                 push 1
// 00816037  55                   push ebp
// 00816038  8bce                 mov ecx, esi
// 0081603a  ffd0                 call eax
// 0081603c  837c241400           cmp dword ptr [esp + 0x14], 0
// 00816041  750c                 jne 0x81604f
// 00816043  8b13                 mov edx, dword ptr [ebx]
// 00816045  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 0081604b  8bcb                 mov ecx, ebx
// 0081604d  ffd0                 call eax
// 0081604f  5e                   pop esi
// 00816050  5b                   pop ebx
// 00816051  5d                   pop ebp
// 00816052  b801000000           mov eax, 1
// 00816057  5f                   pop edi
// 00816058  c20400               ret 4
// 0081605b  5e                   pop esi
// 0081605c  5b                   pop ebx
// 0081605d  5d                   pop ebp
// 0081605e  33c0                 xor eax, eax
// 00816060  5f                   pop edi
// 00816061  c20400               ret 4
// copied from an identical function in another client (function ?OnFrameAccel@CXTPCommandBars@@QAEHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp