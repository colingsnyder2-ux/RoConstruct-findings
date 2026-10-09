// roc 2008-06 00586540  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586540
//
// 00586540  64a100000000         mov eax, dword ptr fs:[0]
// 00586546  6aff                 push -1
// 00586548  681e137d00           push 0x7d131e
// 0058654d  50                   push eax
// 0058654e  b801000000           mov eax, 1
// 00586553  64892500000000       mov dword ptr fs:[0], esp
// 0058655a  840558589700         test byte ptr [0x975858], al
// 00586560  7530                 jne 0x586592
// 00586562  090558589700         or dword ptr [0x975858], eax
// 00586568  68e0879400           push 0x9487e0
// 0058656d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00586575  e80648e8ff           call 0x40ad80
// 0058657a  50                   push eax
// 0058657b  b998579700           mov ecx, 0x975798
// 00586580  e86ba3feff           call 0x5708f0
// 00586585  6820d97f00           push 0x7fd920
// 0058658a  e820b21100           call 0x6a17af
// 0058658f  83c404               add esp, 4
// 00586592  8b0c24               mov ecx, dword ptr [esp]
// 00586595  b898579700           mov eax, 0x975798
// 0058659a  64890d00000000       mov dword ptr fs:[0], ecx
// 005865a1  83c40c               add esp, 0xc
// 005865a4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
