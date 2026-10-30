// roc 2009-12 00859f60  unit: CXTThemeManagerStyle  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00859f60
//
// 00859f60  6aff                 push -1
// 00859f62  6818e29500           push 0x95e218
// 00859f67  64a100000000         mov eax, dword ptr fs:[0]
// 00859f6d  50                   push eax
// 00859f6e  83ec2c               sub esp, 0x2c
// 00859f71  53                   push ebx
// 00859f72  55                   push ebp
// 00859f73  56                   push esi
// 00859f74  57                   push edi
// 00859f75  a10052b600           mov eax, dword ptr [0xb65200]
// 00859f7a  33c4                 xor eax, esp
// 00859f7c  50                   push eax
// 00859f7d  8d442440             lea eax, [esp + 0x40]
// 00859f81  64a300000000         mov dword ptr fs:[0], eax
// 00859f87  8bf9                 mov edi, ecx
// 00859f89  8b742450             mov esi, dword ptr [esp + 0x50]
// 00859f8d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00859f90  50                   push eax
// 00859f91  ff15bccb9800         call dword ptr [0x98cbbc]
// 00859f97  50                   push eax
// 00859f98  e88d9bf9ff           call 0x7f3b2a
// 00859f9d  8be8                 mov ebp, eax
// 00859f9f  85ed                 test ebp, ebp
// 00859fa1  7403                 je 0x859fa6
// 00859fa3  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00859fa6  50                   push eax
// 00859fa7  ff1584cc9800         call dword ptr [0x98cc84]
// 00859fad  85c0                 test eax, eax
// 00859faf  0f84f9000000         je 0x85a0ae
// 00859fb5  83c70c               add edi, 0xc
// 00859fb8  740d                 je 0x859fc7
// 00859fba  837f0400             cmp dword ptr [edi + 4], 0
// 00859fbe  7407                 je 0x859fc7
// 00859fc0  8bcf                 mov ecx, edi
// 00859fc2  e8579ef9ff           call 0x7f3e1e
// 00859fc7  56                   push esi
// 00859fc8  8d4c2424             lea ecx, [esp + 0x24]
// 00859fcc  e89f12ffff           call 0x84b270
// 00859fd1  8d4c2420             lea ecx, [esp + 0x20]
// 00859fd5  51                   push ecx
// 00859fd6  8bcd                 mov ecx, ebp
// 00859fd8  e8fba7f9ff           call 0x7f47d8
// 00859fdd  8b5520               mov edx, dword ptr [ebp + 0x20]
// 00859fe0  52                   push edx
// 00859fe1  ff15e0cb9800         call dword ptr [0x98cbe0]
// 00859fe7  50                   push eax
// 00859fe8  e843c40c00           call 0x926430
// 00859fed  8d4c2430             lea ecx, [esp + 0x30]
// 00859ff1  8bf0                 mov esi, eax
// 00859ff3  e8b6c40c00           call 0x9264ae
// 00859ff8  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0085a000  85f6                 test esi, esi
// 0085a002  7504                 jne 0x85a008
// 0085a004  33c0                 xor eax, eax
// 0085a006  eb03                 jmp 0x85a00b
// 0085a008  8b4604               mov eax, dword ptr [esi + 4]
// 0085a00b  50                   push eax
// 0085a00c  ff1554b19800         call dword ptr [0x98b154]
// 0085a012  50                   push eax
// 0085a013  8d4c2434             lea ecx, [esp + 0x34]
// 0085a017  e880c40c00           call 0x92649c
// 0085a01c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0085a020  2b442424             sub eax, dword ptr [esp + 0x24]
// 0085a024  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085a028  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 0085a02c  50                   push eax
// 0085a02d  8b4604               mov eax, dword ptr [esi + 4]
// 0085a030  51                   push ecx
// 0085a031  50                   push eax
// 0085a032  ff1550b19800         call dword ptr [0x98b150]
// 0085a038  50                   push eax
// 0085a039  8bcf                 mov ecx, edi
// 0085a03b  e8ea9df9ff           call 0x7f3e2a
// 0085a040  57                   push edi
// 0085a041  8d4c2434             lea ecx, [esp + 0x34]
// 0085a045  51                   push ecx
// 0085a046  8d4c241c             lea ecx, [esp + 0x1c]
// 0085a04a  e8a115ffff           call 0x84b5f0
// 0085a04f  8b542424             mov edx, dword ptr [esp + 0x24]
// 0085a053  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0085a057  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0085a05b  8b5e04               mov ebx, dword ptr [esi + 4]
// 0085a05e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085a062  682000cc00           push 0xcc0020
// 0085a067  52                   push edx
// 0085a068  57                   push edi
// 0085a069  53                   push ebx
// 0085a06a  2bc2                 sub eax, edx
// 0085a06c  8b542444             mov edx, dword ptr [esp + 0x44]
// 0085a070  50                   push eax
// 0085a071  2bcf                 sub ecx, edi
// 0085a073  51                   push ecx
// 0085a074  6a00                 push 0
// 0085a076  6a00                 push 0
// 0085a078  52                   push edx
// 0085a079  ff1548b19800         call dword ptr [0x98b148]
// 0085a07f  8b4604               mov eax, dword ptr [esi + 4]
// 0085a082  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0085a085  50                   push eax
// 0085a086  51                   push ecx
// 0085a087  ff15d8cb9800         call dword ptr [0x98cbd8]
// 0085a08d  8d4c2414             lea ecx, [esp + 0x14]
// 0085a091  e8ca00ffff           call 0x84a160
// 0085a096  8d4c2430             lea ecx, [esp + 0x30]
// 0085a09a  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0085a0a2  e801c40c00           call 0x9264a8
// 0085a0a7  b801000000           mov eax, 1
// 0085a0ac  eb02                 jmp 0x85a0b0
// 0085a0ae  33c0                 xor eax, eax
// 0085a0b0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0085a0b4  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a0bb  59                   pop ecx
// 0085a0bc  5f                   pop edi
// 0085a0bd  5e                   pop esi
// 0085a0be  5d                   pop ebp
// 0085a0bf  5b                   pop ebx
// 0085a0c0  83c438               add esp, 0x38
// 0085a0c3  c20400               ret 4
// copied from an identical function in another client (function ?TakeSnapShot@CXTThemeManagerStyle@@UAEHPAVCWnd@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp