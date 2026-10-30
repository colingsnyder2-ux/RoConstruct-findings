// roc 2009-12 0085c650  unit: CXTPStatusBar  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c650
//
// 0085c650  6aff                 push -1
// 0085c652  68f3e49500           push 0x95e4f3
// 0085c657  64a100000000         mov eax, dword ptr fs:[0]
// 0085c65d  50                   push eax
// 0085c65e  51                   push ecx
// 0085c65f  53                   push ebx
// 0085c660  56                   push esi
// 0085c661  57                   push edi
// 0085c662  a10052b600           mov eax, dword ptr [0xb65200]
// 0085c667  33c4                 xor eax, esp
// 0085c669  50                   push eax
// 0085c66a  8d442414             lea eax, [esp + 0x14]
// 0085c66e  64a300000000         mov dword ptr fs:[0], eax
// 0085c674  8bf1                 mov esi, ecx
// 0085c676  89742410             mov dword ptr [esp + 0x10], esi
// 0085c67a  8d7e20               lea edi, [esi + 0x20]
// 0085c67d  8d5e58               lea ebx, [esi + 0x58]
// 0085c680  c70664d79f00         mov dword ptr [esi], 0x9fd764
// 0085c686  c70704d79f00         mov dword ptr [edi], 0x9fd704
// 0085c68c  c703a4d69f00         mov dword ptr [ebx], 0x9fd6a4
// 0085c692  8d8ec0000000         lea ecx, [esi + 0xc0]
// 0085c698  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0085c6a0  ff15c0de9800         call dword ptr [0x98dec0]
// 0085c6a6  8bcb                 mov ecx, ebx
// 0085c6a8  e893fdfdff           call 0x83c440
// 0085c6ad  8bcf                 mov ecx, edi
// 0085c6af  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0085c6b4  e827420500           call 0x8b08e0
// 0085c6b9  8bce                 mov ecx, esi
// 0085c6bb  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0085c6c3  e81a7df9ff           call 0x7f43e2
// 0085c6c8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085c6cc  64890d00000000       mov dword ptr fs:[0], ecx
// 0085c6d3  59                   pop ecx
// 0085c6d4  5f                   pop edi
// 0085c6d5  5e                   pop esi
// 0085c6d6  5b                   pop ebx
// 0085c6d7  83c410               add esp, 0x10
// 0085c6da  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDockingPane@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp