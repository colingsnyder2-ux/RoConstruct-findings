// roc 2007-08 005ed720  unit: RBX::VRocket::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed720
//
// 005ed720  64a100000000         mov eax, dword ptr fs:[0]
// 005ed726  6aff                 push -1
// 005ed728  684eb27500           push 0x75b24e
// 005ed72d  50                   push eax
// 005ed72e  b801000000           mov eax, 1
// 005ed733  64892500000000       mov dword ptr fs:[0], esp
// 005ed73a  8405b8718c00         test byte ptr [0x8c71b8], al
// 005ed740  7530                 jne 0x5ed772
// 005ed742  0905b8718c00         or dword ptr [0x8c71b8], eax
// 005ed748  68e8f38a00           push 0x8af3e8
// 005ed74d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ed755  e836afe2ff           call 0x418690
// 005ed75a  50                   push eax
// 005ed75b  b930718c00           mov ecx, 0x8c7130
// 005ed760  e89b34f8ff           call 0x570c00
// 005ed765  6840c37700           push 0x77c340
// 005ed76a  e8b4350400           call 0x630d23
// 005ed76f  83c404               add esp, 4
// 005ed772  8b0c24               mov ecx, dword ptr [esp]
// 005ed775  b830718c00           mov eax, 0x8c7130
// 005ed77a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed781  83c40c               add esp, 0xc
// 005ed784  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
