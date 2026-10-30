// roc 2009-12 008bd9c0  unit: IIPAVCRgn::?$CMap  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bd9c0
//
// 008bd9c0  6aff                 push -1
// 008bd9c2  689b3b9600           push 0x963b9b
// 008bd9c7  64a100000000         mov eax, dword ptr fs:[0]
// 008bd9cd  50                   push eax
// 008bd9ce  51                   push ecx
// 008bd9cf  56                   push esi
// 008bd9d0  57                   push edi
// 008bd9d1  a10052b600           mov eax, dword ptr [0xb65200]
// 008bd9d6  33c4                 xor eax, esp
// 008bd9d8  50                   push eax
// 008bd9d9  8d442410             lea eax, [esp + 0x10]
// 008bd9dd  64a300000000         mov dword ptr fs:[0], eax
// 008bd9e3  8bf1                 mov esi, ecx
// 008bd9e5  8974240c             mov dword ptr [esp + 0xc], esi
// 008bd9e9  8d4e04               lea ecx, [esi + 4]
// 008bd9ec  c7067487a000         mov dword ptr [esi], 0xa08774
// 008bd9f2  e8d9e6ffff           call 0x8bc0d0
// 008bd9f7  33ff                 xor edi, edi
// 008bd9f9  8d4e58               lea ecx, [esi + 0x58]
// 008bd9fc  897c2418             mov dword ptr [esp + 0x18], edi
// 008bda00  e8cbe6ffff           call 0x8bc0d0
// 008bda05  6a0a                 push 0xa
// 008bda07  8d8ed0000000         lea ecx, [esi + 0xd0]
// 008bda0d  e8cefeffff           call 0x8bd8e0
// 008bda12  6a0a                 push 0xa
// 008bda14  8d8e6c010000         lea ecx, [esi + 0x16c]
// 008bda1a  e801ffffff           call 0x8bd920
// 008bda1f  b801000000           mov eax, 1
// 008bda24  6874299f00           push 0x9f2974
// 008bda29  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 008bda2f  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 008bda35  89be24010000         mov dword ptr [esi + 0x124], edi
// 008bda3b  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 008bda41  89becc000000         mov dword ptr [esi + 0xcc], edi
// 008bda47  89be1c010000         mov dword ptr [esi + 0x11c], edi
// 008bda4d  89be20010000         mov dword ptr [esi + 0x120], edi
// 008bda53  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 008bda59  89be40010000         mov dword ptr [esi + 0x140], edi
// 008bda5f  89be44010000         mov dword ptr [esi + 0x144], edi
// 008bda65  898648010000         mov dword ptr [esi + 0x148], eax
// 008bda6b  89864c010000         mov dword ptr [esi + 0x14c], eax
// 008bda71  89be68010000         mov dword ptr [esi + 0x168], edi
// 008bda77  c78688010000ffffffff mov dword ptr [esi + 0x188], 0xffffffff
// 008bda81  89be8c010000         mov dword ptr [esi + 0x18c], edi
// 008bda87  89beac000000         mov dword ptr [esi + 0xac], edi
// 008bda8d  ff151cb29800         call dword ptr [0x98b21c]
// 008bda93  3bc7                 cmp eax, edi
// 008bda95  7412                 je 0x8bdaa9
// 008bda97  6858299f00           push 0x9f2958
// 008bda9c  50                   push eax
// 008bda9d  ff1520b29800         call dword ptr [0x98b220]
// 008bdaa3  8986ac000000         mov dword ptr [esi + 0xac], eax
// 008bdaa9  8bc6                 mov eax, esi
// 008bdaab  89be28010000         mov dword ptr [esi + 0x128], edi
// 008bdab1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008bdab5  64890d00000000       mov dword ptr fs:[0], ecx
// 008bdabc  59                   pop ecx
// 008bdabd  5f                   pop edi
// 008bdabe  5e                   pop esi
// 008bdabf  83c410               add esp, 0x10
// 008bdac2  c3                   ret 
// copied from an identical function in another client (function ??0CXTPDockingPaneContext@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp