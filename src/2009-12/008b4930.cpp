// roc 2009-12 008b4930  unit: PAVCXTPDockingPaneSplitterWnd::?$CList  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b4930
//
// 008b4930  6aff                 push -1
// 008b4932  68882e9600           push 0x962e88
// 008b4937  64a100000000         mov eax, dword ptr fs:[0]
// 008b493d  50                   push eax
// 008b493e  51                   push ecx
// 008b493f  56                   push esi
// 008b4940  57                   push edi
// 008b4941  a10052b600           mov eax, dword ptr [0xb65200]
// 008b4946  33c4                 xor eax, esp
// 008b4948  50                   push eax
// 008b4949  8d442410             lea eax, [esp + 0x10]
// 008b494d  64a300000000         mov dword ptr fs:[0], eax
// 008b4953  8bf1                 mov esi, ecx
// 008b4955  8974240c             mov dword ptr [esp + 0xc], esi
// 008b4959  e8e41a0700           call 0x926442
// 008b495e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b4962  50                   push eax
// 008b4963  8d7e20               lea edi, [esi + 0x20]
// 008b4966  6a02                 push 2
// 008b4968  8bcf                 mov ecx, edi
// 008b496a  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008b4972  e8e9e50300           call 0x8f2f60
// 008b4977  6a0a                 push 0xa
// 008b4979  8d4e74               lea ecx, [esi + 0x74]
// 008b497c  c706547aa000         mov dword ptr [esi], 0xa07a54
// 008b4982  c707f479a000         mov dword ptr [edi], 0xa079f4
// 008b4988  e8e3feffff           call 0x8b4870
// 008b498d  c7869400000000000000 mov dword ptr [esi + 0x94], 0
// 008b4997  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 008b49a1  8bc6                 mov eax, esi
// 008b49a3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008b49a7  64890d00000000       mov dword ptr fs:[0], ecx
// 008b49ae  59                   pop ecx
// 008b49af  5f                   pop edi
// 008b49b0  5e                   pop esi
// 008b49b1  83c410               add esp, 0x10
// 008b49b4  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPDockingPaneSplitterContainer@@IAE@PAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp