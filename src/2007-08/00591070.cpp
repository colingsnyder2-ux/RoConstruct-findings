// roc 2007-08 00591070  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591070
//
// 00591070  64a100000000         mov eax, dword ptr fs:[0]
// 00591076  6aff                 push -1
// 00591078  689e6c7500           push 0x756c9e
// 0059107d  50                   push eax
// 0059107e  b801000000           mov eax, 1
// 00591083  64892500000000       mov dword ptr fs:[0], esp
// 0059108a  8405d0488c00         test byte ptr [0x8c48d0], al
// 00591090  7530                 jne 0x5910c2
// 00591092  0905d0488c00         or dword ptr [0x8c48d0], eax
// 00591098  68845e7b00           push 0x7b5e84
// 0059109d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005910a5  e846fcffff           call 0x590cf0
// 005910aa  50                   push eax
// 005910ab  b948488c00           mov ecx, 0x8c4848
// 005910b0  e84bfbfdff           call 0x570c00
// 005910b5  6800aa7700           push 0x77aa00
// 005910ba  e864fc0900           call 0x630d23
// 005910bf  83c404               add esp, 4
// 005910c2  8b0c24               mov ecx, dword ptr [esp]
// 005910c5  b848488c00           mov eax, 0x8c4848
// 005910ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005910d1  83c40c               add esp, 0xc
// 005910d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
