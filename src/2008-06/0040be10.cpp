// roc 2008-06 0040be10  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040be10
//
// 0040be10  64a100000000         mov eax, dword ptr fs:[0]
// 0040be16  6aff                 push -1
// 0040be18  683ed27b00           push 0x7bd23e
// 0040be1d  50                   push eax
// 0040be1e  b801000000           mov eax, 1
// 0040be23  64892500000000       mov dword ptr fs:[0], esp
// 0040be2a  840528c99600         test byte ptr [0x96c928], al
// 0040be30  7530                 jne 0x40be62
// 0040be32  090528c99600         or dword ptr [0x96c928], eax
// 0040be38  68b0009300           push 0x9300b0
// 0040be3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040be45  e836efffff           call 0x40ad80
// 0040be4a  50                   push eax
// 0040be4b  b968c89600           mov ecx, 0x96c868
// 0040be50  e89b4a1600           call 0x5708f0
// 0040be55  68e0a27f00           push 0x7fa2e0
// 0040be5a  e850592900           call 0x6a17af
// 0040be5f  83c404               add esp, 4
// 0040be62  8b0c24               mov ecx, dword ptr [esp]
// 0040be65  b868c89600           mov eax, 0x96c868
// 0040be6a  64890d00000000       mov dword ptr fs:[0], ecx
// 0040be71  83c40c               add esp, 0xc
// 0040be74  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
