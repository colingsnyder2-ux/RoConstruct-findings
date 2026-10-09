// roc 2008-06 005c3880  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3880
//
// 005c3880  64a100000000         mov eax, dword ptr fs:[0]
// 005c3886  6aff                 push -1
// 005c3888  68fe477d00           push 0x7d47fe
// 005c388d  50                   push eax
// 005c388e  b801000000           mov eax, 1
// 005c3893  64892500000000       mov dword ptr fs:[0], esp
// 005c389a  840500939700         test byte ptr [0x979300], al
// 005c38a0  7530                 jne 0x5c38d2
// 005c38a2  090500939700         or dword ptr [0x979300], eax
// 005c38a8  68903c8400           push 0x843c90
// 005c38ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c38b5  e856ffffff           call 0x5c3810
// 005c38ba  50                   push eax
// 005c38bb  b940929700           mov ecx, 0x979240
// 005c38c0  e82bd0faff           call 0x5708f0
// 005c38c5  6850e77f00           push 0x7fe750
// 005c38ca  e8e0de0d00           call 0x6a17af
// 005c38cf  83c404               add esp, 4
// 005c38d2  8b0c24               mov ecx, dword ptr [esp]
// 005c38d5  b840929700           mov eax, 0x979240
// 005c38da  64890d00000000       mov dword ptr fs:[0], ecx
// 005c38e1  83c40c               add esp, 0xc
// 005c38e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
