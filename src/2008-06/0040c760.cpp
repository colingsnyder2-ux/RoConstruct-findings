// roc 2008-06 0040c760  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c760
//
// 0040c760  64a100000000         mov eax, dword ptr fs:[0]
// 0040c766  6aff                 push -1
// 0040c768  68ded27b00           push 0x7bd2de
// 0040c76d  50                   push eax
// 0040c76e  b801000000           mov eax, 1
// 0040c773  64892500000000       mov dword ptr fs:[0], esp
// 0040c77a  840588cb9600         test byte ptr [0x96cb88], al
// 0040c780  7530                 jne 0x40c7b2
// 0040c782  090588cb9600         or dword ptr [0x96cb88], eax
// 0040c788  6808019300           push 0x930108
// 0040c78d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040c795  e8d6f2ffff           call 0x40ba70
// 0040c79a  50                   push eax
// 0040c79b  b9c8ca9600           mov ecx, 0x96cac8
// 0040c7a0  e84b411600           call 0x5708f0
// 0040c7a5  68b0a27f00           push 0x7fa2b0
// 0040c7aa  e800502900           call 0x6a17af
// 0040c7af  83c404               add esp, 4
// 0040c7b2  8b0c24               mov ecx, dword ptr [esp]
// 0040c7b5  b8c8ca9600           mov eax, 0x96cac8
// 0040c7ba  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c7c1  83c40c               add esp, 0xc
// 0040c7c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
