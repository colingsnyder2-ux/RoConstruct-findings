// roc 2007-03 0058a050  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058a050
//
// 0058a050  64a100000000         mov eax, dword ptr fs:[0]
// 0058a056  6aff                 push -1
// 0058a058  688e777500           push 0x75778e
// 0058a05d  50                   push eax
// 0058a05e  b801000000           mov eax, 1
// 0058a063  64892500000000       mov dword ptr fs:[0], esp
// 0058a06a  8405f8e18b00         test byte ptr [0x8be1f8], al
// 0058a070  7530                 jne 0x58a0a2
// 0058a072  0905f8e18b00         or dword ptr [0x8be1f8], eax
// 0058a078  68105d7b00           push 0x7b5d10
// 0058a07d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058a085  e8f6e8ffff           call 0x588980
// 0058a08a  50                   push eax
// 0058a08b  b970e18b00           mov ecx, 0x8be170
// 0058a090  e84b6dfeff           call 0x570de0
// 0058a095  6840a57700           push 0x77a540
// 0058a09a  e814510900           call 0x61f1b3
// 0058a09f  83c404               add esp, 4
// 0058a0a2  8b0c24               mov ecx, dword ptr [esp]
// 0058a0a5  b870e18b00           mov eax, 0x8be170
// 0058a0aa  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a0b1  83c40c               add esp, 0xc
// 0058a0b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
