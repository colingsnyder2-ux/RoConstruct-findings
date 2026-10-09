// roc 2009-06 005cae50  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cae50
//
// 005cae50  64a100000000         mov eax, dword ptr fs:[0]
// 005cae56  6aff                 push -1
// 005cae58  685e228600           push 0x86225e
// 005cae5d  50                   push eax
// 005cae5e  b801000000           mov eax, 1
// 005cae63  64892500000000       mov dword ptr fs:[0], esp
// 005cae6a  84050030a400         test byte ptr [0xa43000], al
// 005cae70  7530                 jne 0x5caea2
// 005cae72  09050030a400         or dword ptr [0xa43000], eax
// 005cae78  6848418d00           push 0x8d4148
// 005cae7d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005cae85  e866f6e3ff           call 0x40a4f0
// 005cae8a  50                   push eax
// 005cae8b  b9402fa400           mov ecx, 0xa42f40
// 005cae90  e84be90200           call 0x5f97e0
// 005cae95  68c0718900           push 0x8971c0
// 005cae9a  e85cec1400           call 0x719afb
// 005cae9f  83c404               add esp, 4
// 005caea2  8b0c24               mov ecx, dword ptr [esp]
// 005caea5  b8402fa400           mov eax, 0xa42f40
// 005caeaa  64890d00000000       mov dword ptr fs:[0], ecx
// 005caeb1  83c40c               add esp, 0xc
// 005caeb4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
