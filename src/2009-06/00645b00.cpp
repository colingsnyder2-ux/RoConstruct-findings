// roc 2009-06 00645b00  unit: RBX::Soundscape::W4ReverbType::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00645b00
//
// 00645b00  64a100000000         mov eax, dword ptr fs:[0]
// 00645b06  6aff                 push -1
// 00645b08  68aea88600           push 0x86a8ae
// 00645b0d  50                   push eax
// 00645b0e  b801000000           mov eax, 1
// 00645b13  64892500000000       mov dword ptr fs:[0], esp
// 00645b1a  8405c8bfa400         test byte ptr [0xa4bfc8], al
// 00645b20  7530                 jne 0x645b52
// 00645b22  0905c8bfa400         or dword ptr [0xa4bfc8], eax
// 00645b28  6884d9a000           push 0xa0d984
// 00645b2d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00645b35  e8b649dcff           call 0x40a4f0
// 00645b3a  50                   push eax
// 00645b3b  b908bfa400           mov ecx, 0xa4bf08
// 00645b40  e89b3cfbff           call 0x5f97e0
// 00645b45  6800a38900           push 0x89a300
// 00645b4a  e8ac3f0d00           call 0x719afb
// 00645b4f  83c404               add esp, 4
// 00645b52  8b0c24               mov ecx, dword ptr [esp]
// 00645b55  b808bfa400           mov eax, 0xa4bf08
// 00645b5a  64890d00000000       mov dword ptr fs:[0], ecx
// 00645b61  83c40c               add esp, 0xc
// 00645b64  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
