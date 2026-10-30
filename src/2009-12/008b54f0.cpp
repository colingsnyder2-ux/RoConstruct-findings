// roc 2009-12 008b54f0  unit: CXTPDockingPaneSplitterContainer  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b54f0
//
// 008b54f0  6aff                 push -1
// 008b54f2  6858319600           push 0x963158
// 008b54f7  64a100000000         mov eax, dword ptr fs:[0]
// 008b54fd  50                   push eax
// 008b54fe  83ec2c               sub esp, 0x2c
// 008b5501  53                   push ebx
// 008b5502  56                   push esi
// 008b5503  57                   push edi
// 008b5504  a10052b600           mov eax, dword ptr [0xb65200]
// 008b5509  33c4                 xor eax, esp
// 008b550b  50                   push eax
// 008b550c  8d44243c             lea eax, [esp + 0x3c]
// 008b5510  64a300000000         mov dword ptr fs:[0], eax
// 008b5516  8b442458             mov eax, dword ptr [esp + 0x58]
// 008b551a  83f801               cmp eax, 1
// 008b551d  7409                 je 0x8b5528
// 008b551f  83f803               cmp eax, 3
// 008b5522  7404                 je 0x8b5528
// 008b5524  33f6                 xor esi, esi
// 008b5526  eb05                 jmp 0x8b552d
// 008b5528  be01000000           mov esi, 1
// 008b552d  85c0                 test eax, eax
// 008b552f  7409                 je 0x8b553a
// 008b5531  83f801               cmp eax, 1
// 008b5534  7404                 je 0x8b553a
// 008b5536  33db                 xor ebx, ebx
// 008b5538  eb05                 jmp 0x8b553f
// 008b553a  bb01000000           mov ebx, 1
// 008b553f  6a0a                 push 0xa
// 008b5541  8d4c2424             lea ecx, [esp + 0x24]
// 008b5545  e87641f8ff           call 0x8396c0
// 008b554a  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 008b554e  57                   push edi
// 008b554f  8d4c2424             lea ecx, [esp + 0x24]
// 008b5553  c744244800000000     mov dword ptr [esp + 0x48], 0
// 008b555b  e820e60000           call 0x8c3b80
// 008b5560  85f6                 test esi, esi
// 008b5562  8b742454             mov esi, dword ptr [esp + 0x54]
// 008b5566  8d4c2420             lea ecx, [esp + 0x20]
// 008b556a  56                   push esi
// 008b556b  7407                 je 0x8b5574
// 008b556d  e80ee60000           call 0x8c3b80
// 008b5572  eb05                 jmp 0x8b5579
// 008b5574  e81733ffff           call 0x8a8890
// 008b5579  8d442410             lea eax, [esp + 0x10]
// 008b557d  50                   push eax
// 008b557e  8bcf                 mov ecx, edi
// 008b5580  e81bb2ffff           call 0x8b07a0
// 008b5585  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008b5589  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b558d  56                   push esi
// 008b558e  8b742450             mov esi, dword ptr [esp + 0x50]
// 008b5592  83ec10               sub esp, 0x10
// 008b5595  8bc4                 mov eax, esp
// 008b5597  8908                 mov dword ptr [eax], ecx
// 008b5599  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008b559d  895004               mov dword ptr [eax + 4], edx
// 008b55a0  8b542430             mov edx, dword ptr [esp + 0x30]
// 008b55a4  894808               mov dword ptr [eax + 8], ecx
// 008b55a7  89500c               mov dword ptr [eax + 0xc], edx
// 008b55aa  8d442434             lea eax, [esp + 0x34]
// 008b55ae  50                   push eax
// 008b55af  53                   push ebx
// 008b55b0  56                   push esi
// 008b55b1  e89af1ffff           call 0x8b4750
// 008b55b6  83c420               add esp, 0x20
// 008b55b9  8d4c2420             lea ecx, [esp + 0x20]
// 008b55bd  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 008b55c5  e82641f8ff           call 0x8396f0
// 008b55ca  8bc6                 mov eax, esi
// 008b55cc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008b55d0  64890d00000000       mov dword ptr fs:[0], ecx
// 008b55d7  59                   pop ecx
// 008b55d8  5f                   pop edi
// 008b55d9  5e                   pop esi
// 008b55da  5b                   pop ebx
// 008b55db  83c438               add esp, 0x38
// 008b55de  c3                   ret 
// copied from an identical function in another client (function ?_CalculateResultDockingRectChild@CXTPDockingPaneSplitterContainer@@CA?AVCRect@@PAVCXTPDockingPaneBase@@0W4XTPDockingPaneDirection@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp