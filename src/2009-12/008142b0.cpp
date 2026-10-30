// roc 2009-12 008142b0  unit: CXTPCommandBar  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008142b0
//
// 008142b0  6aff                 push -1
// 008142b2  686ca39500           push 0x95a36c
// 008142b7  64a100000000         mov eax, dword ptr fs:[0]
// 008142bd  50                   push eax
// 008142be  51                   push ecx
// 008142bf  53                   push ebx
// 008142c0  56                   push esi
// 008142c1  57                   push edi
// 008142c2  a10052b600           mov eax, dword ptr [0xb65200]
// 008142c7  33c4                 xor eax, esp
// 008142c9  50                   push eax
// 008142ca  8d442414             lea eax, [esp + 0x14]
// 008142ce  64a300000000         mov dword ptr fs:[0], eax
// 008142d4  8bf1                 mov esi, ecx
// 008142d6  89742410             mov dword ptr [esp + 0x10], esi
// 008142da  e869fefdff           call 0x7f4148
// 008142df  8d7e54               lea edi, [esi + 0x54]
// 008142e2  8bcf                 mov ecx, edi
// 008142e4  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008142ec  c706343c9f00         mov dword ptr [esi], 0x9f3c34
// 008142f2  ff1574de9800         call dword ptr [0x98de74]
// 008142f8  8d5e58               lea ebx, [esi + 0x58]
// 008142fb  8bcb                 mov ecx, ebx
// 008142fd  ff1574de9800         call dword ptr [0x98de74]
// 00814303  8d4e5c               lea ecx, [esi + 0x5c]
// 00814306  ff1574de9800         call dword ptr [0x98de74]
// 0081430c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00814310  8b442428             mov eax, dword ptr [esp + 0x28]
// 00814314  51                   push ecx
// 00814315  8bcb                 mov ecx, ebx
// 00814317  c644242003           mov byte ptr [esp + 0x20], 3
// 0081431c  894660               mov dword ptr [esi + 0x60], eax
// 0081431f  ff155cde9800         call dword ptr [0x98de5c]
// 00814325  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00814329  8b542424             mov edx, dword ptr [esp + 0x24]
// 0081432d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00814331  894e68               mov dword ptr [esi + 0x68], ecx
// 00814334  8bcf                 mov ecx, edi
// 00814336  895674               mov dword ptr [esi + 0x74], edx
// 00814339  894664               mov dword ptr [esi + 0x64], eax
// 0081433c  ff1590d69800         call dword ptr [0x98d690]
// 00814342  8b442438             mov eax, dword ptr [esp + 0x38]
// 00814346  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0081434a  894678               mov dword ptr [esi + 0x78], eax
// 0081434d  89566c               mov dword ptr [esi + 0x6c], edx
// 00814350  c7467001000000       mov dword ptr [esi + 0x70], 1
// 00814357  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 0081435e  8bc6                 mov eax, esi
// 00814360  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00814364  64890d00000000       mov dword ptr fs:[0], ecx
// 0081436b  59                   pop ecx
// 0081436c  5f                   pop edi
// 0081436d  5e                   pop esi
// 0081436e  5b                   pop ebx
// 0081436f  83c410               add esp, 0x10
// 00814372  c21c00               ret 0x1c
// copied from an identical function in another client (function ??0CXTPCommandBarKeyboardTip@@QAE@PAVCXTPCommandBars@@PAVCCmdTarget@@PBDVCPoint@@KH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp