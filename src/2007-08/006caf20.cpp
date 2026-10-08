// from server: 100% by auto
// roc 2007-08 006caf20  unit: CXTPDockContext  size: 408 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006caf20
//
// 006caf20  83ec20               sub esp, 0x20
// 006caf23  53                   push ebx
// 006caf24  55                   push ebp
// 006caf25  56                   push esi
// 006caf26  57                   push edi
// 006caf27  8b3d44ec7700         mov edi, dword ptr [0x77ec44]
// 006caf2d  8bf1                 mov esi, ecx
// 006caf2f  ffd7                 call edi
// 006caf31  85c0                 test eax, eax
// 006caf33  0f8577010000         jne 0x6cb0b0
// 006caf39  8b4604               mov eax, dword ptr [esi + 4]
// 006caf3c  8b4020               mov eax, dword ptr [eax + 0x20]
// 006caf3f  50                   push eax
// 006caf40  ff1548ec7700         call dword ptr [0x77ec48]
// 006caf46  50                   push eax
// 006caf47  e87452f6ff           call 0x6301c0
// 006caf4c  8b4e04               mov ecx, dword ptr [esi + 4]
// 006caf4f  e82c8af7ff           call 0x643980
// 006caf54  85c0                 test eax, eax
// 006caf56  89442410             mov dword ptr [esp + 0x10], eax
// 006caf5a  0f8450010000         je 0x6cb0b0
// 006caf60  33db                 xor ebx, ebx
// 006caf62  33ed                 xor ebp, ebp
// 006caf64  ffd7                 call edi
// 006caf66  50                   push eax
// 006caf67  e85452f6ff           call 0x6301c0
// 006caf6c  3b4604               cmp eax, dword ptr [esi + 4]
// 006caf6f  0f8527010000         jne 0x6cb09c
// 006caf75  8b3d40ec7700         mov edi, dword ptr [0x77ec40]
// 006caf7b  eb03                 jmp 0x6caf80
// 006caf7d  8d4900               lea ecx, [ecx]
// 006caf80  6a00                 push 0
// 006caf82  6a0f                 push 0xf
// 006caf84  6a0f                 push 0xf
// 006caf86  6a00                 push 0
// 006caf88  8d4c2424             lea ecx, [esp + 0x24]
// 006caf8c  51                   push ecx
// 006caf8d  ffd7                 call edi
// 006caf8f  85c0                 test eax, eax
// 006caf91  7433                 je 0x6cafc6
// 006caf93  6a0f                 push 0xf
// 006caf95  6a0f                 push 0xf
// 006caf97  6a00                 push 0
// 006caf99  8d542420             lea edx, [esp + 0x20]
// 006caf9d  52                   push edx
// 006caf9e  ff1510ee7700         call dword ptr [0x77ee10]
// 006cafa4  85c0                 test eax, eax
// 006cafa6  741e                 je 0x6cafc6
// 006cafa8  8d442414             lea eax, [esp + 0x14]
// 006cafac  50                   push eax
// 006cafad  ff152ced7700         call dword ptr [0x77ed2c]
// 006cafb3  6a00                 push 0
// 006cafb5  6a0f                 push 0xf
// 006cafb7  6a0f                 push 0xf
// 006cafb9  6a00                 push 0
// 006cafbb  8d4c2424             lea ecx, [esp + 0x24]
// 006cafbf  51                   push ecx
// 006cafc0  ffd7                 call edi
// 006cafc2  85c0                 test eax, eax
// 006cafc4  75cd                 jne 0x6caf93
// 006cafc6  6a00                 push 0
// 006cafc8  6a00                 push 0
// 006cafca  6a00                 push 0
// 006cafcc  8d542420             lea edx, [esp + 0x20]
// 006cafd0  52                   push edx
// 006cafd1  ff1510ee7700         call dword ptr [0x77ee10]
// 006cafd7  85c0                 test eax, eax
// 006cafd9  0f84b3000000         je 0x6cb092
// 006cafdf  8b442418             mov eax, dword ptr [esp + 0x18]
// 006cafe3  3d02020000           cmp eax, 0x202
// 006cafe8  0f84ae000000         je 0x6cb09c
// 006cafee  3d00020000           cmp eax, 0x200
// 006caff3  7562                 jne 0x6cb057
// 006caff5  8b442428             mov eax, dword ptr [esp + 0x28]
// 006caff9  3bd8                 cmp ebx, eax
// 006caffb  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006cafff  7504                 jne 0x6cb005
// 006cb001  3be9                 cmp ebp, ecx
// 006cb003  7462                 je 0x6cb067
// 006cb005  837e0801             cmp dword ptr [esi + 8], 1
// 006cb009  8bd8                 mov ebx, eax
// 006cb00b  8be9                 mov ebp, ecx
// 006cb00d  7515                 jne 0x6cb024
// 006cb00f  8bd0                 mov edx, eax
// 006cb011  83ec08               sub esp, 8
// 006cb014  8bc4                 mov eax, esp
// 006cb016  894804               mov dword ptr [eax + 4], ecx
// 006cb019  8bce                 mov ecx, esi
// 006cb01b  8910                 mov dword ptr [eax], edx
// 006cb01d  e8eef7ffff           call 0x6ca810
// 006cb022  eb4e                 jmp 0x6cb072
// 006cb024  8b4e04               mov ecx, dword ptr [esi + 4]
// 006cb027  8b01                 mov eax, dword ptr [ecx]
// 006cb029  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 006cb02f  ffd2                 call edx
// 006cb031  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006cb035  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006cb039  83ec08               sub esp, 8
// 006cb03c  85c0                 test eax, eax
// 006cb03e  8bc4                 mov eax, esp
// 006cb040  8908                 mov dword ptr [eax], ecx
// 006cb042  895004               mov dword ptr [eax + 4], edx
// 006cb045  8bce                 mov ecx, esi
// 006cb047  7407                 je 0x6cb050
// 006cb049  e862f9ffff           call 0x6ca9b0
// 006cb04e  eb22                 jmp 0x6cb072
// 006cb050  e87bfaffff           call 0x6caad0
// 006cb055  eb1b                 jmp 0x6cb072
// 006cb057  3d00010000           cmp eax, 0x100
// 006cb05c  7509                 jne 0x6cb067
// 006cb05e  837c241c1b           cmp dword ptr [esp + 0x1c], 0x1b
// 006cb063  7437                 je 0x6cb09c
// 006cb065  eb0b                 jmp 0x6cb072
// 006cb067  8d442414             lea eax, [esp + 0x14]
// 006cb06b  50                   push eax
// 006cb06c  ff152ced7700         call dword ptr [0x77ed2c]
// 006cb072  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006cb076  e8d56bf6ff           call 0x631c50
// 006cb07b  ff1544ec7700         call dword ptr [0x77ec44]
// 006cb081  50                   push eax
// 006cb082  e83951f6ff           call 0x6301c0
// 006cb087  3b4604               cmp eax, dword ptr [esi + 4]
// 006cb08a  0f84f0feffff         je 0x6caf80
// 006cb090  eb0a                 jmp 0x6cb09c
// 006cb092  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006cb096  51                   push ecx
// 006cb097  e81656f6ff           call 0x6306b2
// 006cb09c  ff153cec7700         call dword ptr [0x77ec3c]
// 006cb0a2  8b542410             mov edx, dword ptr [esp + 0x10]
// 006cb0a6  8b4274               mov eax, dword ptr [edx + 0x74]
// 006cb0a9  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 006cb0b0  5f                   pop edi
// 006cb0b1  5e                   pop esi
// 006cb0b2  5d                   pop ebp
// 006cb0b3  5b                   pop ebx
// 006cb0b4  83c420               add esp, 0x20
// 006cb0b7  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockContext.cpp (function ?Track@CXTPDockContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockContext.cpp
