// roc 2007-03 0058a210  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058a210
//
// 0058a210  64a100000000         mov eax, dword ptr fs:[0]
// 0058a216  6aff                 push -1
// 0058a218  680e787500           push 0x75780e
// 0058a21d  50                   push eax
// 0058a21e  b801000000           mov eax, 1
// 0058a223  64892500000000       mov dword ptr fs:[0], esp
// 0058a22a  840538e48b00         test byte ptr [0x8be438], al
// 0058a230  7530                 jne 0x58a262
// 0058a232  090538e48b00         or dword ptr [0x8be438], eax
// 0058a238  68305d7b00           push 0x7b5d30
// 0058a23d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058a245  e836e7ffff           call 0x588980
// 0058a24a  50                   push eax
// 0058a24b  b9b0e38b00           mov ecx, 0x8be3b0
// 0058a250  e88b6bfeff           call 0x570de0
// 0058a255  6800a57700           push 0x77a500
// 0058a25a  e8544f0900           call 0x61f1b3
// 0058a25f  83c404               add esp, 4
// 0058a262  8b0c24               mov ecx, dword ptr [esp]
// 0058a265  b8b0e38b00           mov eax, 0x8be3b0
// 0058a26a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a271  83c40c               add esp, 0xc
// 0058a274  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
