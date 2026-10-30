// roc 2007-03 0071f980  unit: seg_00710000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071f980
//
// 0071f980  53                   push ebx
// 0071f981  56                   push esi
// 0071f982  8b35c8ec7700         mov esi, dword ptr [0x77ecc8]
// 0071f988  57                   push edi
// 0071f989  8bf9                 mov edi, ecx
// 0071f98b  8b4720               mov eax, dword ptr [edi + 0x20]
// 0071f98e  50                   push eax
// 0071f98f  ffd6                 call esi
// 0071f991  85c0                 test eax, eax
// 0071f993  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0071f997  746b                 je 0x71fa04
// 0071f999  85db                 test ebx, ebx
// 0071f99b  7504                 jne 0x71f9a1
// 0071f99d  33c9                 xor ecx, ecx
// 0071f99f  eb03                 jmp 0x71f9a4
// 0071f9a1  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0071f9a4  8b4720               mov eax, dword ptr [edi + 0x20]
// 0071f9a7  50                   push eax
// 0071f9a8  51                   push ecx
// 0071f9a9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071f9ad  51                   push ecx
// 0071f9ae  50                   push eax
// 0071f9af  ffd6                 call esi
// 0071f9b1  50                   push eax
// 0071f9b2  ff1550ee7700         call dword ptr [0x77ee50]
// 0071f9b8  8bf0                 mov esi, eax
// 0071f9ba  85f6                 test esi, esi
// 0071f9bc  7446                 je 0x71fa04
// 0071f9be  83fe1f               cmp esi, 0x1f
// 0071f9c1  730e                 jae 0x71f9d1
// 0071f9c3  8bcf                 mov ecx, edi
// 0071f9c5  e8f645fdff           call 0x6f3fc0
// 0071f9ca  8bb4b0b0000000       mov esi, dword ptr [eax + esi*4 + 0xb0]
// 0071f9d1  85db                 test ebx, ebx
// 0071f9d3  7517                 jne 0x71f9ec
// 0071f9d5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0071f9d9  56                   push esi
// 0071f9da  33c0                 xor eax, eax
// 0071f9dc  52                   push edx
// 0071f9dd  50                   push eax
// 0071f9de  ff15c8ee7700         call dword ptr [0x77eec8]
// 0071f9e4  5f                   pop edi
// 0071f9e5  8bc6                 mov eax, esi
// 0071f9e7  5e                   pop esi
// 0071f9e8  5b                   pop ebx
// 0071f9e9  c20c00               ret 0xc
// 0071f9ec  8b542414             mov edx, dword ptr [esp + 0x14]
// 0071f9f0  8b4304               mov eax, dword ptr [ebx + 4]
// 0071f9f3  56                   push esi
// 0071f9f4  52                   push edx
// 0071f9f5  50                   push eax
// 0071f9f6  ff15c8ee7700         call dword ptr [0x77eec8]
// 0071f9fc  5f                   pop edi
// 0071f9fd  8bc6                 mov eax, esi
// 0071f9ff  5e                   pop esi
// 0071fa00  5b                   pop ebx
// 0071fa01  c20c00               ret 0xc
// 0071fa04  6a0f                 push 0xf
// 0071fa06  8bcf                 mov ecx, edi
// 0071fa08  e8c345fdff           call 0x6f3fd0
// 0071fa0d  50                   push eax
// 0071fa0e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0071fa12  50                   push eax
// 0071fa13  8bcb                 mov ecx, ebx
// 0071fa15  e800f3efff           call 0x61ed1a
// 0071fa1a  8bcf                 mov ecx, edi
// 0071fa1c  e89f45fdff           call 0x6f3fc0
// 0071fa21  8b80f0000000         mov eax, dword ptr [eax + 0xf0]
// 0071fa27  5f                   pop edi
// 0071fa28  5e                   pop esi
// 0071fa29  5b                   pop ebx
// 0071fa2a  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectFrame.cpp (function ?FillBackground@CXTPSkinObjectFrame@@IAEPAUHBRUSH__@@PAVCDC@@PBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectFrame.cpp
