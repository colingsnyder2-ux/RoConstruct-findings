// roc 2009-12 007f5a80  unit: ActiveDocView  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5a80
//
// 007f5a80  6aff                 push -1
// 007f5a82  68d40d9600           push 0x960dd4
// 007f5a87  64a100000000         mov eax, dword ptr fs:[0]
// 007f5a8d  50                   push eax
// 007f5a8e  83ec0c               sub esp, 0xc
// 007f5a91  53                   push ebx
// 007f5a92  56                   push esi
// 007f5a93  57                   push edi
// 007f5a94  a10052b600           mov eax, dword ptr [0xb65200]
// 007f5a99  33c4                 xor eax, esp
// 007f5a9b  50                   push eax
// 007f5a9c  8d44241c             lea eax, [esp + 0x1c]
// 007f5aa0  64a300000000         mov dword ptr fs:[0], eax
// 007f5aa6  8bf1                 mov esi, ecx
// 007f5aa8  8dbee0000000         lea edi, [esi + 0xe0]
// 007f5aae  33db                 xor ebx, ebx
// 007f5ab0  8bcf                 mov ecx, edi
// 007f5ab2  895c2410             mov dword ptr [esp + 0x10], ebx
// 007f5ab6  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007f5abc  84c0                 test al, al
// 007f5abe  7504                 jne 0x7f5ac4
// 007f5ac0  8bc7                 mov eax, edi
// 007f5ac2  eb52                 jmp 0x7f5b16
// 007f5ac4  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007f5aca  3bcb                 cmp ecx, ebx
// 007f5acc  7442                 je 0x7f5b10
// 007f5ace  8d442418             lea eax, [esp + 0x18]
// 007f5ad2  50                   push eax
// 007f5ad3  e878ffffff           call 0x7f5a50
// 007f5ad8  895c2424             mov dword ptr [esp + 0x24], ebx
// 007f5adc  bb01000000           mov ebx, 1
// 007f5ae1  8bc8                 mov ecx, eax
// 007f5ae3  895c2410             mov dword ptr [esp + 0x10], ebx
// 007f5ae7  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007f5aed  84c0                 test al, al
// 007f5aef  751f                 jne 0x7f5b10
// 007f5af1  8d4c2414             lea ecx, [esp + 0x14]
// 007f5af5  51                   push ecx
// 007f5af6  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007f5afc  e84fffffff           call 0x7f5a50
// 007f5b01  895c2424             mov dword ptr [esp + 0x24], ebx
// 007f5b05  bb03000000           mov ebx, 3
// 007f5b0a  895c2410             mov dword ptr [esp + 0x10], ebx
// 007f5b0e  eb06                 jmp 0x7f5b16
// 007f5b10  8d86e4000000         lea eax, [esi + 0xe4]
// 007f5b16  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007f5b1a  50                   push eax
// 007f5b1b  8bce                 mov ecx, esi
// 007f5b1d  ff1594de9800         call dword ptr [0x98de94]
// 007f5b23  83cb04               or ebx, 4
// 007f5b26  f6c302               test bl, 2
// 007f5b29  740d                 je 0x7f5b38
// 007f5b2b  8d4c2414             lea ecx, [esp + 0x14]
// 007f5b2f  83e3fd               and ebx, 0xfffffffd
// 007f5b32  ff15c0de9800         call dword ptr [0x98dec0]
// 007f5b38  f6c301               test bl, 1
// 007f5b3b  740a                 je 0x7f5b47
// 007f5b3d  8d4c2418             lea ecx, [esp + 0x18]
// 007f5b41  ff15c0de9800         call dword ptr [0x98dec0]
// 007f5b47  8bc6                 mov eax, esi
// 007f5b49  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f5b4d  64890d00000000       mov dword ptr fs:[0], ecx
// 007f5b54  59                   pop ecx
// 007f5b55  5f                   pop edi
// 007f5b56  5e                   pop esi
// 007f5b57  5b                   pop ebx
// 007f5b58  83c418               add esp, 0x18
// 007f5b5b  c20400               ret 4
// copied from an identical function in another client (function ?GetShortcutText@CXTPControl@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp