// roc 2010-06 0087c440  unit: VCEdit::?$CXTMaskEditT  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087c440
//
// 0087c440  8b442404             mov eax, dword ptr [esp + 4]
// 0087c444  53                   push ebx
// 0087c445  55                   push ebp
// 0087c446  56                   push esi
// 0087c447  8bf1                 mov esi, ecx
// 0087c449  57                   push edi
// 0087c44a  8d7e70               lea edi, [esi + 0x70]
// 0087c44d  50                   push eax
// 0087c44e  8bcf                 mov ecx, edi
// 0087c450  ff158cce9e00         call dword ptr [0x9ece8c]
// 0087c456  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0087c45a  8dae84000000         lea ebp, [esi + 0x84]
// 0087c460  53                   push ebx
// 0087c461  8bcd                 mov ecx, ebp
// 0087c463  ff158cce9e00         call dword ptr [0x9ece8c]
// 0087c469  8bcd                 mov ecx, ebp
// 0087c46b  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087c471  8bcf                 mov ecx, edi
// 0087c473  89442414             mov dword ptr [esp + 0x14], eax
// 0087c477  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087c47d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087c481  3bc1                 cmp eax, ecx
// 0087c483  7409                 je 0x87c48e
// 0087c485  5f                   pop edi
// 0087c486  5e                   pop esi
// 0087c487  5d                   pop ebp
// 0087c488  33c0                 xor eax, eax
// 0087c48a  5b                   pop ebx
// 0087c48b  c20c00               ret 0xc
// 0087c48e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087c492  8dbe80000000         lea edi, [esi + 0x80]
// 0087c498  85c0                 test eax, eax
// 0087c49a  750f                 jne 0x87c4ab
// 0087c49c  53                   push ebx
// 0087c49d  8d4e74               lea ecx, [esi + 0x74]
// 0087c4a0  ff158cce9e00         call dword ptr [0x9ece8c]
// 0087c4a6  50                   push eax
// 0087c4a7  8bcf                 mov ecx, edi
// 0087c4a9  eb48                 jmp 0x87c4f3
// 0087c4ab  8d5e74               lea ebx, [esi + 0x74]
// 0087c4ae  50                   push eax
// 0087c4af  8bcb                 mov ecx, ebx
// 0087c4b1  ff158cce9e00         call dword ptr [0x9ece8c]
// 0087c4b7  50                   push eax
// 0087c4b8  8bcf                 mov ecx, edi
// 0087c4ba  ff1580c59e00         call dword ptr [0x9ec580]
// 0087c4c0  8bcb                 mov ecx, ebx
// 0087c4c2  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087c4c8  8bcd                 mov ecx, ebp
// 0087c4ca  89442414             mov dword ptr [esp + 0x14], eax
// 0087c4ce  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087c4d4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087c4d8  3bc8                 cmp ecx, eax
// 0087c4da  741d                 je 0x87c4f9
// 0087c4dc  6a00                 push 0
// 0087c4de  6a00                 push 0
// 0087c4e0  8bcb                 mov ecx, ebx
// 0087c4e2  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087c4e8  50                   push eax
// 0087c4e9  8bce                 mov ecx, esi
// 0087c4eb  e870f8ffff           call 0x87bd60
// 0087c4f0  57                   push edi
// 0087c4f1  8bcb                 mov ecx, ebx
// 0087c4f3  ff1580c59e00         call dword ptr [0x9ec580]
// 0087c4f9  33c0                 xor eax, eax
// 0087c4fb  8bcf                 mov ecx, edi
// 0087c4fd  894664               mov dword ptr [esi + 0x64], eax
// 0087c500  894668               mov dword ptr [esi + 0x68], eax
// 0087c503  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087c509  50                   push eax
// 0087c50a  8bce                 mov ecx, esi
// 0087c50c  e843b8f2ff           call 0x7a7d54
// 0087c511  57                   push edi
// 0087c512  8d4e78               lea ecx, [esi + 0x78]
// 0087c515  ff1580c59e00         call dword ptr [0x9ec580]
// 0087c51b  5f                   pop edi
// 0087c51c  5e                   pop esi
// 0087c51d  5d                   pop ebp
// 0087c51e  b801000000           mov eax, 1
// 0087c523  5b                   pop ebx
// 0087c524  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetEditMask@?$CXTMaskEditT@VCEdit@@@@UAEHPBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp