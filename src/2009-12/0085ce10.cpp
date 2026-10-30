// roc 2009-12 0085ce10  unit: CXTPDockingPane  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085ce10
//
// 0085ce10  6aff                 push -1
// 0085ce12  683de59500           push 0x95e53d
// 0085ce17  64a100000000         mov eax, dword ptr fs:[0]
// 0085ce1d  50                   push eax
// 0085ce1e  51                   push ecx
// 0085ce1f  53                   push ebx
// 0085ce20  55                   push ebp
// 0085ce21  56                   push esi
// 0085ce22  57                   push edi
// 0085ce23  a10052b600           mov eax, dword ptr [0xb65200]
// 0085ce28  33c4                 xor eax, esp
// 0085ce2a  50                   push eax
// 0085ce2b  8d442418             lea eax, [esp + 0x18]
// 0085ce2f  64a300000000         mov dword ptr fs:[0], eax
// 0085ce35  8bf1                 mov esi, ecx
// 0085ce37  89742414             mov dword ptr [esp + 0x14], esi
// 0085ce3b  e802960c00           call 0x926442
// 0085ce40  8b442428             mov eax, dword ptr [esp + 0x28]
// 0085ce44  33ed                 xor ebp, ebp
// 0085ce46  50                   push eax
// 0085ce47  8d7e20               lea edi, [esi + 0x20]
// 0085ce4a  55                   push ebp
// 0085ce4b  8bcf                 mov ecx, edi
// 0085ce4d  896c2428             mov dword ptr [esp + 0x28], ebp
// 0085ce51  e8da3b0500           call 0x8b0a30
// 0085ce56  8d5e58               lea ebx, [esi + 0x58]
// 0085ce59  8bcb                 mov ecx, ebx
// 0085ce5b  c644242001           mov byte ptr [esp + 0x20], 1
// 0085ce60  e87bf9fdff           call 0x83c7e0
// 0085ce65  8d8ec0000000         lea ecx, [esi + 0xc0]
// 0085ce6b  c70664d79f00         mov dword ptr [esi], 0x9fd764
// 0085ce71  c70704d79f00         mov dword ptr [edi], 0x9fd704
// 0085ce77  c703a4d69f00         mov dword ptr [ebx], 0x9fd6a4
// 0085ce7d  ff1574de9800         call dword ptr [0x98de74]
// 0085ce83  83c8ff               or eax, 0xffffffff
// 0085ce86  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 0085ce8c  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 0085ce92  33c0                 xor eax, eax
// 0085ce94  b903000000           mov ecx, 3
// 0085ce99  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0085ce9f  b8007d0000           mov eax, 0x7d00
// 0085cea4  884c2420             mov byte ptr [esp + 0x20], cl
// 0085cea8  898ee4000000         mov dword ptr [esi + 0xe4], ecx
// 0085ceae  8bc8                 mov ecx, eax
// 0085ceb0  898ed8000000         mov dword ptr [esi + 0xd8], ecx
// 0085ceb6  8bce                 mov ecx, esi
// 0085ceb8  89aec4000000         mov dword ptr [esi + 0xc4], ebp
// 0085cebe  89aeb4000000         mov dword ptr [esi + 0xb4], ebp
// 0085cec4  89aeb8000000         mov dword ptr [esi + 0xb8], ebp
// 0085ceca  89aec8000000         mov dword ptr [esi + 0xc8], ebp
// 0085ced0  89aee0000000         mov dword ptr [esi + 0xe0], ebp
// 0085ced6  89aed0000000         mov dword ptr [esi + 0xd0], ebp
// 0085cedc  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 0085cee2  e861950c00           call 0x926448
// 0085cee7  8bc6                 mov eax, esi
// 0085cee9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085ceed  64890d00000000       mov dword ptr fs:[0], ecx
// 0085cef4  59                   pop ecx
// 0085cef5  5f                   pop edi
// 0085cef6  5e                   pop esi
// 0085cef7  5d                   pop ebp
// 0085cef8  5b                   pop ebx
// 0085cef9  83c410               add esp, 0x10
// 0085cefc  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPDockingPane@@IAE@PAVCXTPDockingPaneLayout@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp