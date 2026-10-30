// roc 2009-12 0088f920  unit: ATL::D::DV?$ChTraitsCRT::DV?$StrTraitMFC_DLL::IIV?$CStringT::?$CMap  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088f920
//
// 0088f920  6aff                 push -1
// 0088f922  68882e9600           push 0x962e88
// 0088f927  64a100000000         mov eax, dword ptr fs:[0]
// 0088f92d  50                   push eax
// 0088f92e  51                   push ecx
// 0088f92f  56                   push esi
// 0088f930  57                   push edi
// 0088f931  a10052b600           mov eax, dword ptr [0xb65200]
// 0088f936  33c4                 xor eax, esp
// 0088f938  50                   push eax
// 0088f939  8d442410             lea eax, [esp + 0x10]
// 0088f93d  64a300000000         mov dword ptr fs:[0], eax
// 0088f943  8bf1                 mov esi, ecx
// 0088f945  8974240c             mov dword ptr [esp + 0xc], esi
// 0088f949  c7069437a000         mov dword ptr [esi], 0xa03794
// 0088f94f  8b4630               mov eax, dword ptr [esi + 0x30]
// 0088f952  8b3d9ccb9800         mov edi, dword ptr [0x98cb9c]
// 0088f958  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0088f960  85c0                 test eax, eax
// 0088f962  740a                 je 0x88f96e
// 0088f964  50                   push eax
// 0088f965  ffd7                 call edi
// 0088f967  c7463000000000       mov dword ptr [esi + 0x30], 0
// 0088f96e  8b4634               mov eax, dword ptr [esi + 0x34]
// 0088f971  85c0                 test eax, eax
// 0088f973  740a                 je 0x88f97f
// 0088f975  50                   push eax
// 0088f976  ffd7                 call edi
// 0088f978  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0088f97f  8b7e38               mov edi, dword ptr [esi + 0x38]
// 0088f982  85ff                 test edi, edi
// 0088f984  7410                 je 0x88f996
// 0088f986  8bcf                 mov ecx, edi
// 0088f988  e803fcffff           call 0x88f590
// 0088f98d  57                   push edi
// 0088f98e  e8c73ef6ff           call 0x7f385a
// 0088f993  83c404               add esp, 4
// 0088f996  8bce                 mov ecx, esi
// 0088f998  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0088f9a0  e83d4af6ff           call 0x7f43e2
// 0088f9a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088f9a9  64890d00000000       mov dword ptr fs:[0], ecx
// 0088f9b0  59                   pop ecx
// 0088f9b1  5f                   pop edi
// 0088f9b2  5e                   pop esi
// 0088f9b3  83c410               add esp, 0x10
// 0088f9b6  c3                   ret 
// copied from an identical function in another client (function ??1CXTPShortcutManager@@UAE@XZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp