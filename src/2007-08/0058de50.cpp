// roc 2007-08 0058de50  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058de50
//
// 0058de50  64a100000000         mov eax, dword ptr fs:[0]
// 0058de56  6aff                 push -1
// 0058de58  687e677500           push 0x75677e
// 0058de5d  50                   push eax
// 0058de5e  b801000000           mov eax, 1
// 0058de63  64892500000000       mov dword ptr fs:[0], esp
// 0058de6a  840580388c00         test byte ptr [0x8c3880], al
// 0058de70  7530                 jne 0x58dea2
// 0058de72  090580388c00         or dword ptr [0x8c3880], eax
// 0058de78  68dc197b00           push 0x7b19dc
// 0058de7d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058de85  e806a8e8ff           call 0x418690
// 0058de8a  50                   push eax
// 0058de8b  b9f8378c00           mov ecx, 0x8c37f8
// 0058de90  e86b2dfeff           call 0x570c00
// 0058de95  6890aa7700           push 0x77aa90
// 0058de9a  e8842e0a00           call 0x630d23
// 0058de9f  83c404               add esp, 4
// 0058dea2  8b0c24               mov ecx, dword ptr [esp]
// 0058dea5  b8f8378c00           mov eax, 0x8c37f8
// 0058deaa  64890d00000000       mov dword ptr fs:[0], ecx
// 0058deb1  83c40c               add esp, 0xc
// 0058deb4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
