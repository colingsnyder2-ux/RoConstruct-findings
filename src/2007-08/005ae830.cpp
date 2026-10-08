// roc 2007-08 005ae830  unit: RBX::VLighting::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ae830
//
// 005ae830  64a100000000         mov eax, dword ptr fs:[0]
// 005ae836  6aff                 push -1
// 005ae838  68fe897500           push 0x7589fe
// 005ae83d  50                   push eax
// 005ae83e  b801000000           mov eax, 1
// 005ae843  64892500000000       mov dword ptr fs:[0], esp
// 005ae84a  8405e05b8c00         test byte ptr [0x8c5be0], al
// 005ae850  7530                 jne 0x5ae882
// 005ae852  0905e05b8c00         or dword ptr [0x8c5be0], eax
// 005ae858  6834908a00           push 0x8a9034
// 005ae85d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ae865  e8269ee6ff           call 0x418690
// 005ae86a  50                   push eax
// 005ae86b  b9585b8c00           mov ecx, 0x8c5b58
// 005ae870  e88b23fcff           call 0x570c00
// 005ae875  68c0b57700           push 0x77b5c0
// 005ae87a  e8a4240800           call 0x630d23
// 005ae87f  83c404               add esp, 4
// 005ae882  8b0c24               mov ecx, dword ptr [esp]
// 005ae885  b8585b8c00           mov eax, 0x8c5b58
// 005ae88a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ae891  83c40c               add esp, 0xc
// 005ae894  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
