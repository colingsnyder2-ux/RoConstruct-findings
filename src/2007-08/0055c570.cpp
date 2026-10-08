// roc 2007-08 0055c570  unit: RBX::VDataModel::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055c570
//
// 0055c570  8b442404             mov eax, dword ptr [esp + 4]
// 0055c574  83ec0c               sub esp, 0xc
// 0055c577  56                   push esi
// 0055c578  6a00                 push 0
// 0055c57a  68a0658800           push 0x8865a0
// 0055c57f  689c208800           push 0x88209c
// 0055c584  6a00                 push 0
// 0055c586  50                   push eax
// 0055c587  8bf1                 mov esi, ecx
// 0055c589  e8a8470d00           call 0x630d36
// 0055c58e  83c414               add esp, 0x14
// 0055c591  85c0                 test eax, eax
// 0055c593  751e                 jne 0x55c5b3
// 0055c595  68046e7800           push 0x786e04
// 0055c59a  8d4c2408             lea ecx, [esp + 8]
// 0055c59e  ff1510e77700         call dword ptr [0x77e710]
// 0055c5a4  680c1e8400           push 0x841e0c
// 0055c5a9  8d4c2408             lea ecx, [esp + 8]
// 0055c5ad  51                   push ecx
// 0055c5ae  e8eb450d00           call 0x630b9e
// 0055c5b3  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0055c5b6  8b5628               mov edx, dword ptr [esi + 0x28]
// 0055c5b9  03c8                 add ecx, eax
// 0055c5bb  ffd2                 call edx
// 0055c5bd  5e                   pop esi
// 0055c5be  83c40c               add esp, 0xc
// 0055c5c1  c20800               ret 8
// library rbxgs/v8datamodel\DataModel.cpp (function ?execute@?$BoundFuncDesc@VDataModel@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
