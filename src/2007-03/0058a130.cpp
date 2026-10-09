// roc 2007-03 0058a130  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058a130
//
// 0058a130  64a100000000         mov eax, dword ptr fs:[0]
// 0058a136  6aff                 push -1
// 0058a138  68ce777500           push 0x7577ce
// 0058a13d  50                   push eax
// 0058a13e  b801000000           mov eax, 1
// 0058a143  64892500000000       mov dword ptr fs:[0], esp
// 0058a14a  840518e38b00         test byte ptr [0x8be318], al
// 0058a150  7530                 jne 0x58a182
// 0058a152  090518e38b00         or dword ptr [0x8be318], eax
// 0058a158  68205d7b00           push 0x7b5d20
// 0058a15d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058a165  e816e8ffff           call 0x588980
// 0058a16a  50                   push eax
// 0058a16b  b990e28b00           mov ecx, 0x8be290
// 0058a170  e86b6cfeff           call 0x570de0
// 0058a175  6820a57700           push 0x77a520
// 0058a17a  e834500900           call 0x61f1b3
// 0058a17f  83c404               add esp, 4
// 0058a182  8b0c24               mov ecx, dword ptr [esp]
// 0058a185  b890e28b00           mov eax, 0x8be290
// 0058a18a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a191  83c40c               add esp, 0xc
// 0058a194  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
