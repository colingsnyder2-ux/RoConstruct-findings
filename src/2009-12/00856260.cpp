// roc 2009-12 00856260  unit: CXTPTabClientWnd  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856260
//
// 00856260  6aff                 push -1
// 00856262  68395a9600           push 0x965a39
// 00856267  64a100000000         mov eax, dword ptr fs:[0]
// 0085626d  50                   push eax
// 0085626e  51                   push ecx
// 0085626f  56                   push esi
// 00856270  57                   push edi
// 00856271  a10052b600           mov eax, dword ptr [0xb65200]
// 00856276  33c4                 xor eax, esp
// 00856278  50                   push eax
// 00856279  8d442410             lea eax, [esp + 0x10]
// 0085627d  64a300000000         mov dword ptr fs:[0], eax
// 00856283  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00856287  8d4758               lea eax, [edi + 0x58]
// 0085628a  50                   push eax
// 0085628b  8d4c2428             lea ecx, [esp + 0x28]
// 0085628f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00856297  ff1594de9800         call dword ptr [0x98de94]
// 0085629d  8d4c2424             lea ecx, [esp + 0x24]
// 008562a1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008562a9  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008562af  84c0                 test al, al
// 008562b1  7516                 jne 0x8562c9
// 008562b3  8b742420             mov esi, dword ptr [esp + 0x20]
// 008562b7  8d4c2424             lea ecx, [esp + 0x24]
// 008562bb  51                   push ecx
// 008562bc  8bce                 mov ecx, esi
// 008562be  ff1594de9800         call dword ptr [0x98de94]
// 008562c4  e9a8000000           jmp 0x856371
// 008562c9  8bcf                 mov ecx, edi
// 008562cb  e8b0a1eeff           call 0x740480
// 008562d0  50                   push eax
// 008562d1  e854d8f9ff           call 0x7f3b2a
// 008562d6  50                   push eax
// 008562d7  e81adcf9ff           call 0x7f3ef6
// 008562dc  50                   push eax
// 008562dd  e85cd9f9ff           call 0x7f3c3e
// 008562e2  8bf0                 mov esi, eax
// 008562e4  83c408               add esp, 8
// 008562e7  85f6                 test esi, esi
// 008562e9  747a                 je 0x856365
// 008562eb  8b5620               mov edx, dword ptr [esi + 0x20]
// 008562ee  6a00                 push 0
// 008562f0  57                   push edi
// 008562f1  686b280000           push 0x286b
// 008562f6  52                   push edx
// 008562f7  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008562fd  50                   push eax
// 008562fe  8d4c2428             lea ecx, [esp + 0x28]
// 00856302  ff155cde9800         call dword ptr [0x98de5c]
// 00856308  8d4c2424             lea ecx, [esp + 0x24]
// 0085630c  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00856312  84c0                 test al, al
// 00856314  7513                 jne 0x856329
// 00856316  8b742420             mov esi, dword ptr [esp + 0x20]
// 0085631a  8d442424             lea eax, [esp + 0x24]
// 0085631e  50                   push eax
// 0085631f  8bce                 mov ecx, esi
// 00856321  ff1594de9800         call dword ptr [0x98de94]
// 00856327  eb48                 jmp 0x856371
// 00856329  8b16                 mov edx, dword ptr [esi]
// 0085632b  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00856331  8bce                 mov ecx, esi
// 00856333  ffd0                 call eax
// 00856335  85c0                 test eax, eax
// 00856337  741a                 je 0x856353
// 00856339  8b16                 mov edx, dword ptr [esi]
// 0085633b  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00856341  8bce                 mov ecx, esi
// 00856343  ffd0                 call eax
// 00856345  83c024               add eax, 0x24
// 00856348  50                   push eax
// 00856349  8d4c2428             lea ecx, [esp + 0x28]
// 0085634d  ff1538d59800         call dword ptr [0x98d538]
// 00856353  8d4c2424             lea ecx, [esp + 0x24]
// 00856357  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0085635d  84c0                 test al, al
// 0085635f  0f844effffff         je 0x8562b3
// 00856365  8b742420             mov esi, dword ptr [esp + 0x20]
// 00856369  56                   push esi
// 0085636a  8bcf                 mov ecx, edi
// 0085636c  e85f7c0700           call 0x8cdfd0
// 00856371  8d4c2424             lea ecx, [esp + 0x24]
// 00856375  ff15c0de9800         call dword ptr [0x98dec0]
// 0085637b  8bc6                 mov eax, esi
// 0085637d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00856381  64890d00000000       mov dword ptr fs:[0], ecx
// 00856388  59                   pop ecx
// 00856389  5f                   pop edi
// 0085638a  5e                   pop esi
// 0085638b  83c410               add esp, 0x10
// 0085638e  c20800               ret 8
// copied from an identical function in another client (function ?GetItemTooltip@CXTPTabClientWnd@@MBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPTabClientWnd.cpp