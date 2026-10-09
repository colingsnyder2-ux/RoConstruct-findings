// roc 2009-06 0040af70  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040af70
//
// 0040af70  64a100000000         mov eax, dword ptr fs:[0]
// 0040af76  6aff                 push -1
// 0040af78  685ed18400           push 0x84d15e
// 0040af7d  50                   push eax
// 0040af7e  b801000000           mov eax, 1
// 0040af83  64892500000000       mov dword ptr fs:[0], esp
// 0040af8a  8405309ca300         test byte ptr [0xa39c30], al
// 0040af90  7530                 jne 0x40afc2
// 0040af92  0905309ca300         or dword ptr [0xa39c30], eax
// 0040af98  68e0269e00           push 0x9e26e0
// 0040af9d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040afa5  e846f5ffff           call 0x40a4f0
// 0040afaa  50                   push eax
// 0040afab  b9709ba300           mov ecx, 0xa39b70
// 0040afb0  e82be81e00           call 0x5f97e0
// 0040afb5  68c03b8900           push 0x893bc0
// 0040afba  e83ceb3000           call 0x719afb
// 0040afbf  83c404               add esp, 4
// 0040afc2  8b0c24               mov ecx, dword ptr [esp]
// 0040afc5  b8709ba300           mov eax, 0xa39b70
// 0040afca  64890d00000000       mov dword ptr fs:[0], ecx
// 0040afd1  83c40c               add esp, 0xc
// 0040afd4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
