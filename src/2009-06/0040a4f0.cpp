// roc 2009-06 0040a4f0  unit: RBX::Reflection::ClassDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040a4f0
//
// 0040a4f0  64a100000000         mov eax, dword ptr fs:[0]
// 0040a4f6  6aff                 push -1
// 0040a4f8  686ed08400           push 0x84d06e
// 0040a4fd  50                   push eax
// 0040a4fe  b801000000           mov eax, 1
// 0040a503  64892500000000       mov dword ptr fs:[0], esp
// 0040a50a  8405c099a300         test byte ptr [0xa399c0], al
// 0040a510  7530                 jne 0x40a542
// 0040a512  0905c099a300         or dword ptr [0xa399c0], eax
// 0040a518  68504e8d00           push 0x8d4e50
// 0040a51d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040a525  e866ffffff           call 0x40a490
// 0040a52a  50                   push eax
// 0040a52b  b90099a300           mov ecx, 0xa39900
// 0040a530  e8abf21e00           call 0x5f97e0
// 0040a535  68e03b8900           push 0x893be0
// 0040a53a  e8bcf53000           call 0x719afb
// 0040a53f  83c404               add esp, 4
// 0040a542  8b0c24               mov ecx, dword ptr [esp]
// 0040a545  b80099a300           mov eax, 0xa39900
// 0040a54a  64890d00000000       mov dword ptr fs:[0], ecx
// 0040a551  83c40c               add esp, 0xc
// 0040a554  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
