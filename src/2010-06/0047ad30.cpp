// roc 2010-06 0047ad30  unit: DxUserInput  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047ad30
//
// 0047ad30  6aff                 push -1
// 0047ad32  64a100000000         mov eax, dword ptr fs:[0]
// 0047ad38  6849ff9700           push 0x97ff49
// 0047ad3d  50                   push eax
// 0047ad3e  64892500000000       mov dword ptr fs:[0], esp
// 0047ad45  83ec0c               sub esp, 0xc
// 0047ad48  53                   push ebx
// 0047ad49  55                   push ebp
// 0047ad4a  56                   push esi
// 0047ad4b  8bf1                 mov esi, ecx
// 0047ad4d  8b4604               mov eax, dword ptr [esi + 4]
// 0047ad50  33ed                 xor ebp, ebp
// 0047ad52  57                   push edi
// 0047ad53  896e10               mov dword ptr [esi + 0x10], ebp
// 0047ad56  3bc5                 cmp eax, ebp
// 0047ad58  740c                 je 0x47ad66
// 0047ad5a  50                   push eax
// 0047ad5b  e8e6ce3200           call 0x7a7c46
// 0047ad60  83c404               add esp, 4
// 0047ad63  896e04               mov dword ptr [esi + 4], ebp
// 0047ad66  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0047ad6a  b9e4040000           mov ecx, 0x4e4
// 0047ad6f  33c0                 xor eax, eax
// 0047ad71  66894e02             mov word ptr [esi + 2], cx
// 0047ad75  8d5e08               lea ebx, [esi + 8]
// 0047ad78  52                   push edx
// 0047ad79  8d4c2414             lea ecx, [esp + 0x14]
// 0047ad7d  668906               mov word ptr [esi], ax
// 0047ad80  892b                 mov dword ptr [ebx], ebp
// 0047ad82  896e0c               mov dword ptr [esi + 0xc], ebp
// 0047ad85  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 0047ad8b  8d442414             lea eax, [esp + 0x14]
// 0047ad8f  50                   push eax
// 0047ad90  8d4c2414             lea ecx, [esp + 0x14]
// 0047ad94  896c2428             mov dword ptr [esp + 0x28], ebp
// 0047ad98  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0047ad9c  896c2418             mov dword ptr [esp + 0x18], ebp
// 0047ada0  ff1548c39e00         call dword ptr [0x9ec348]
// 0047ada6  50                   push eax
// 0047ada7  e85ef24200           call 0x8aa00a
// 0047adac  8bf8                 mov edi, eax
// 0047adae  3bfd                 cmp edi, ebp
// 0047adb0  0f8487000000         je 0x47ae3d
// 0047adb6  57                   push edi
// 0047adb7  e8c6ce3200           call 0x7a7c82
// 0047adbc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047adc0  83c404               add esp, 4
// 0047adc3  50                   push eax
// 0047adc4  57                   push edi
// 0047adc5  51                   push ecx
// 0047adc6  8d4c241c             lea ecx, [esp + 0x1c]
// 0047adca  894604               mov dword ptr [esi + 4], eax
// 0047adcd  ff1548c39e00         call dword ptr [0x9ec348]
// 0047add3  50                   push eax
// 0047add4  e82bf24200           call 0x8aa004
// 0047add9  85c0                 test eax, eax
// 0047addb  7460                 je 0x47ae3d
// 0047addd  8d54242c             lea edx, [esp + 0x2c]
// 0047ade1  52                   push edx
// 0047ade2  8d4610               lea eax, [esi + 0x10]
// 0047ade5  50                   push eax
// 0047ade6  8b4604               mov eax, dword ptr [esi + 4]
// 0047ade9  688446a000           push 0xa04684
// 0047adee  50                   push eax
// 0047adef  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0047adf3  e806f24200           call 0x8a9ffe
// 0047adf8  85c0                 test eax, eax
// 0047adfa  7441                 je 0x47ae3d
// 0047adfc  8b5604               mov edx, dword ptr [esi + 4]
// 0047adff  8d4c242c             lea ecx, [esp + 0x2c]
// 0047ae03  51                   push ecx
// 0047ae04  53                   push ebx
// 0047ae05  68e027a100           push 0xa127e0
// 0047ae0a  52                   push edx
// 0047ae0b  e8eef14200           call 0x8a9ffe
// 0047ae10  85c0                 test eax, eax
// 0047ae12  741f                 je 0x47ae33
// 0047ae14  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0047ae18  83f804               cmp eax, 4
// 0047ae1b  7216                 jb 0x47ae33
// 0047ae1d  8b1b                 mov ebx, dword ptr [ebx]
// 0047ae1f  c1e802               shr eax, 2
// 0047ae22  89460c               mov dword ptr [esi + 0xc], eax
// 0047ae25  668b03               mov ax, word ptr [ebx]
// 0047ae28  668906               mov word ptr [esi], ax
// 0047ae2b  668b4b02             mov cx, word ptr [ebx + 2]
// 0047ae2f  66894e02             mov word ptr [esi + 2], cx
// 0047ae33  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0047ae3b  eb13                 jmp 0x47ae50
// 0047ae3d  8b4604               mov eax, dword ptr [esi + 4]
// 0047ae40  3bc5                 cmp eax, ebp
// 0047ae42  740c                 je 0x47ae50
// 0047ae44  50                   push eax
// 0047ae45  e8fccd3200           call 0x7a7c46
// 0047ae4a  83c404               add esp, 4
// 0047ae4d  896e04               mov dword ptr [esi + 4], ebp
// 0047ae50  8d4c2410             lea ecx, [esp + 0x10]
// 0047ae54  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0047ae5a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047ae5e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047ae62  5f                   pop edi
// 0047ae63  5e                   pop esi
// 0047ae64  5d                   pop ebp
// 0047ae65  5b                   pop ebx
// 0047ae66  64890d00000000       mov dword ptr fs:[0], ecx
// 0047ae6d  83c418               add esp, 0x18
// 0047ae70  c20400               ret 4
// copied from an identical function in another client (function ?Create@CFileVersionInfo@@QAEHABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_819913a7344f1e19.cpp