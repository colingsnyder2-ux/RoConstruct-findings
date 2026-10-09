// roc 2009-06 00657010  unit: RBX::Stats::Item  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00657010
//
// 00657010  64a100000000         mov eax, dword ptr fs:[0]
// 00657016  6aff                 push -1
// 00657018  687ebb8600           push 0x86bb7e
// 0065701d  50                   push eax
// 0065701e  b801000000           mov eax, 1
// 00657023  64892500000000       mov dword ptr fs:[0], esp
// 0065702a  840558c9a400         test byte ptr [0xa4c958], al
// 00657030  7530                 jne 0x657062
// 00657032  090558c9a400         or dword ptr [0xa4c958], eax
// 00657038  68e0098e00           push 0x8e09e0
// 0065703d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00657045  e8e659e0ff           call 0x45ca30
// 0065704a  50                   push eax
// 0065704b  b998c8a400           mov ecx, 0xa4c898
// 00657050  e88b27faff           call 0x5f97e0
// 00657055  68f0a78900           push 0x89a7f0
// 0065705a  e89c2a0c00           call 0x719afb
// 0065705f  83c404               add esp, 4
// 00657062  8b0c24               mov ecx, dword ptr [esp]
// 00657065  b898c8a400           mov eax, 0xa4c898
// 0065706a  64890d00000000       mov dword ptr fs:[0], ecx
// 00657071  83c40c               add esp, 0xc
// 00657074  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
