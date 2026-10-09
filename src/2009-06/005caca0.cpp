// roc 2009-06 005caca0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005caca0
//
// 005caca0  64a100000000         mov eax, dword ptr fs:[0]
// 005caca6  6aff                 push -1
// 005caca8  683e228600           push 0x86223e
// 005cacad  50                   push eax
// 005cacae  b801000000           mov eax, 1
// 005cacb3  64892500000000       mov dword ptr fs:[0], esp
// 005cacba  8405382fa400         test byte ptr [0xa42f38], al
// 005cacc0  7530                 jne 0x5cacf2
// 005cacc2  0905382fa400         or dword ptr [0xa42f38], eax
// 005cacc8  6858418d00           push 0x8d4158
// 005caccd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005cacd5  e816f8e3ff           call 0x40a4f0
// 005cacda  50                   push eax
// 005cacdb  b9782ea400           mov ecx, 0xa42e78
// 005cace0  e8fbea0200           call 0x5f97e0
// 005cace5  68d0718900           push 0x8971d0
// 005cacea  e80cee1400           call 0x719afb
// 005cacef  83c404               add esp, 4
// 005cacf2  8b0c24               mov ecx, dword ptr [esp]
// 005cacf5  b8782ea400           mov eax, 0xa42e78
// 005cacfa  64890d00000000       mov dword ptr fs:[0], ecx
// 005cad01  83c40c               add esp, 0xc
// 005cad04  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
