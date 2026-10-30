// roc 2009-12 0088f810  unit: ATL::D::DV?$ChTraitsCRT::DV?$StrTraitMFC_DLL::IIV?$CStringT::?$CMap  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088f810
//
// 0088f810  6aff                 push -1
// 0088f812  68b8119600           push 0x9611b8
// 0088f817  64a100000000         mov eax, dword ptr fs:[0]
// 0088f81d  50                   push eax
// 0088f81e  51                   push ecx
// 0088f81f  56                   push esi
// 0088f820  57                   push edi
// 0088f821  a10052b600           mov eax, dword ptr [0xb65200]
// 0088f826  33c4                 xor eax, esp
// 0088f828  50                   push eax
// 0088f829  8d442410             lea eax, [esp + 0x10]
// 0088f82d  64a300000000         mov dword ptr fs:[0], eax
// 0088f833  8bf9                 mov edi, ecx
// 0088f835  897c240c             mov dword ptr [esp + 0xc], edi
// 0088f839  6a0a                 push 0xa
// 0088f83b  e800f3ffff           call 0x88eb40
// 0088f840  33f6                 xor esi, esi
// 0088f842  89742418             mov dword ptr [esp + 0x18], esi
// 0088f846  eb08                 jmp 0x88f850
// 0088f848  8da42400000000       lea esp, [esp]
// 0088f84f  90                   nop 
// 0088f850  0fb78ed031a000       movzx ecx, word ptr [esi + 0xa031d0]
// 0088f857  8b86d431a000         mov eax, dword ptr [esi + 0xa031d4]
// 0088f85d  50                   push eax
// 0088f85e  51                   push ecx
// 0088f85f  8bcf                 mov ecx, edi
// 0088f861  e87affffff           call 0x88f7e0
// 0088f866  83c608               add esi, 8
// 0088f869  81fe60030000         cmp esi, 0x360
// 0088f86f  72df                 jb 0x88f850
// 0088f871  8bc7                 mov eax, edi
// 0088f873  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088f877  64890d00000000       mov dword ptr fs:[0], ecx
// 0088f87e  59                   pop ecx
// 0088f87f  5f                   pop edi
// 0088f880  5e                   pop esi
// 0088f881  83c410               add esp, 0x10
// 0088f884  c3                   ret 
// copied from an identical function in another client (function ??0CKeyNameText@CXTPShortcutManager@@QAE@XZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp