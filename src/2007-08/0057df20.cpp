// roc 2007-08 0057df20  unit: RBX::Workspace  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057df20
//
// 0057df20  64a100000000         mov eax, dword ptr fs:[0]
// 0057df26  6aff                 push -1
// 0057df28  681e597500           push 0x75591e
// 0057df2d  50                   push eax
// 0057df2e  b801000000           mov eax, 1
// 0057df33  64892500000000       mov dword ptr fs:[0], esp
// 0057df3a  8405e8308c00         test byte ptr [0x8c30e8], al
// 0057df40  7530                 jne 0x57df72
// 0057df42  0905e8308c00         or dword ptr [0x8c30e8], eax
// 0057df48  68cc178a00           push 0x8a17cc
// 0057df4d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057df55  e8a6b0feff           call 0x569000
// 0057df5a  50                   push eax
// 0057df5b  b960308c00           mov ecx, 0x8c3060
// 0057df60  e89b2cffff           call 0x570c00
// 0057df65  68b0a47700           push 0x77a4b0
// 0057df6a  e8b42d0b00           call 0x630d23
// 0057df6f  83c404               add esp, 4
// 0057df72  8b0c24               mov ecx, dword ptr [esp]
// 0057df75  b860308c00           mov eax, 0x8c3060
// 0057df7a  64890d00000000       mov dword ptr fs:[0], ecx
// 0057df81  83c40c               add esp, 0xc
// 0057df84  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
