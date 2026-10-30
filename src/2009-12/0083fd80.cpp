// roc 2009-12 0083fd80  unit: CXTPCustomizeSheet  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083fd80
//
// 0083fd80  6aff                 push -1
// 0083fd82  6858cc9500           push 0x95cc58
// 0083fd87  64a100000000         mov eax, dword ptr fs:[0]
// 0083fd8d  50                   push eax
// 0083fd8e  51                   push ecx
// 0083fd8f  56                   push esi
// 0083fd90  a10052b600           mov eax, dword ptr [0xb65200]
// 0083fd95  33c4                 xor eax, esp
// 0083fd97  50                   push eax
// 0083fd98  8d44240c             lea eax, [esp + 0xc]
// 0083fd9c  64a300000000         mov dword ptr fs:[0], eax
// 0083fda2  8bf1                 mov esi, ecx
// 0083fda4  89742408             mov dword ptr [esp + 8], esi
// 0083fda8  8d4e54               lea ecx, [esi + 0x54]
// 0083fdab  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0083fdb3  e858c30200           call 0x86c110
// 0083fdb8  8bce                 mov ecx, esi
// 0083fdba  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0083fdc2  e8476a0e00           call 0x92680e
// 0083fdc7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083fdcb  64890d00000000       mov dword ptr fs:[0], ecx
// 0083fdd2  59                   pop ecx
// 0083fdd3  5e                   pop esi
// 0083fdd4  83c410               add esp, 0x10
// 0083fdd7  c3                   ret 
// copied from an identical function in another client (function ??1CXTTreeCtrlBase@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTTreeCtrlView.cpp