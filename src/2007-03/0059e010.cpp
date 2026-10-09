// roc 2007-03 0059e010  unit: seg_00590000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059e010
//
// 0059e010  64a100000000         mov eax, dword ptr fs:[0]
// 0059e016  6aff                 push -1
// 0059e018  687e8b7500           push 0x758b7e
// 0059e01d  50                   push eax
// 0059e01e  b801000000           mov eax, 1
// 0059e023  64892500000000       mov dword ptr fs:[0], esp
// 0059e02a  840570ea8b00         test byte ptr [0x8bea70], al
// 0059e030  7530                 jne 0x59e062
// 0059e032  090570ea8b00         or dword ptr [0x8bea70], eax
// 0059e038  6848207b00           push 0x7b2048
// 0059e03d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0059e045  e816bbe7ff           call 0x419b60
// 0059e04a  50                   push eax
// 0059e04b  b9e8e98b00           mov ecx, 0x8be9e8
// 0059e050  e88b2dfdff           call 0x570de0
// 0059e055  68a0aa7700           push 0x77aaa0
// 0059e05a  e854110800           call 0x61f1b3
// 0059e05f  83c404               add esp, 4
// 0059e062  8b0c24               mov ecx, dword ptr [esp]
// 0059e065  b8e8e98b00           mov eax, 0x8be9e8
// 0059e06a  64890d00000000       mov dword ptr fs:[0], ecx
// 0059e071  83c40c               add esp, 0xc
// 0059e074  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
