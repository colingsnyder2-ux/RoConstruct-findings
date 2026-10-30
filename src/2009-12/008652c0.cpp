// roc 2009-12 008652c0  unit: CXTPPropertyGridItem  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008652c0
//
// 008652c0  6aff                 push -1
// 008652c2  6899e39500           push 0x95e399
// 008652c7  64a100000000         mov eax, dword ptr fs:[0]
// 008652cd  50                   push eax
// 008652ce  51                   push ecx
// 008652cf  56                   push esi
// 008652d0  a10052b600           mov eax, dword ptr [0xb65200]
// 008652d5  33c4                 xor eax, esp
// 008652d7  50                   push eax
// 008652d8  8d44240c             lea eax, [esp + 0xc]
// 008652dc  64a300000000         mov dword ptr fs:[0], eax
// 008652e2  8bf1                 mov esi, ecx
// 008652e4  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 008652eb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008652f3  7447                 je 0x86533c
// 008652f5  51                   push ecx
// 008652f6  8d442420             lea eax, [esp + 0x20]
// 008652fa  8bcc                 mov ecx, esp
// 008652fc  8964240c             mov dword ptr [esp + 0xc], esp
// 00865300  50                   push eax
// 00865301  ff1594de9800         call dword ptr [0x98de94]
// 00865307  8b16                 mov edx, dword ptr [esi]
// 00865309  8b4260               mov eax, dword ptr [edx + 0x60]
// 0086530c  8bce                 mov ecx, esi
// 0086530e  ffd0                 call eax
// 00865310  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00865316  85c0                 test eax, eax
// 00865318  7414                 je 0x86532e
// 0086531a  83782000             cmp dword ptr [eax + 0x20], 0
// 0086531e  740e                 je 0x86532e
// 00865320  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00865323  6a00                 push 0
// 00865325  6a00                 push 0
// 00865327  51                   push ecx
// 00865328  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0086532e  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00865334  56                   push esi
// 00865335  6a03                 push 3
// 00865337  e8d4250000           call 0x867910
// 0086533c  8d4c241c             lea ecx, [esp + 0x1c]
// 00865340  ff15c0de9800         call dword ptr [0x98dec0]
// 00865346  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086534a  64890d00000000       mov dword ptr fs:[0], ecx
// 00865351  59                   pop ecx
// 00865352  5e                   pop esi
// 00865353  83c410               add esp, 0x10
// 00865356  c20400               ret 4
// copied from an identical function in another client (function ?OnValueChanged@CXTPPropertyGridItem@@UAEXV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp