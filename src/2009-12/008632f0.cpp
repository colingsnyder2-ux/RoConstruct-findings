// roc 2009-12 008632f0  unit: CXTPToolTipContext::COffice2007ToolTip  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008632f0
//
// 008632f0  6aff                 push -1
// 008632f2  68c8ea9500           push 0x95eac8
// 008632f7  64a100000000         mov eax, dword ptr fs:[0]
// 008632fd  50                   push eax
// 008632fe  51                   push ecx
// 008632ff  56                   push esi
// 00863300  a10052b600           mov eax, dword ptr [0xb65200]
// 00863305  33c4                 xor eax, esp
// 00863307  50                   push eax
// 00863308  8d44240c             lea eax, [esp + 0xc]
// 0086330c  64a300000000         mov dword ptr fs:[0], eax
// 00863312  8bf1                 mov esi, ecx
// 00863314  89742408             mov dword ptr [esp + 8], esi
// 00863318  8d8e30010000         lea ecx, [esi + 0x130]
// 0086331e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00863326  e805c30700           call 0x8df630
// 0086332b  8bce                 mov ecx, esi
// 0086332d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00863335  e896faffff           call 0x862dd0
// 0086333a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086333e  64890d00000000       mov dword ptr fs:[0], ecx
// 00863345  59                   pop ecx
// 00863346  5e                   pop esi
// 00863347  83c410               add esp, 0x10
// 0086334a  c3                   ret 
// copied from an identical function in another client (function ??1CRichEditToolTip@CXTPToolTipContext@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp