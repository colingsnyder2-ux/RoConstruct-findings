// roc 2007-03 005a1ee0  unit: seg_005a0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a1ee0
//
// 005a1ee0  64a100000000         mov eax, dword ptr fs:[0]
// 005a1ee6  6aff                 push -1
// 005a1ee8  685e8f7500           push 0x758f5e
// 005a1eed  50                   push eax
// 005a1eee  b801000000           mov eax, 1
// 005a1ef3  64892500000000       mov dword ptr fs:[0], esp
// 005a1efa  840538ee8b00         test byte ptr [0x8bee38], al
// 005a1f00  7530                 jne 0x5a1f32
// 005a1f02  090538ee8b00         or dword ptr [0x8bee38], eax
// 005a1f08  6808457b00           push 0x7b4508
// 005a1f0d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a1f15  e83668feff           call 0x588750
// 005a1f1a  50                   push eax
// 005a1f1b  b9b0ed8b00           mov ecx, 0x8bedb0
// 005a1f20  e8bbeefcff           call 0x570de0
// 005a1f25  6850ad7700           push 0x77ad50
// 005a1f2a  e884d20700           call 0x61f1b3
// 005a1f2f  83c404               add esp, 4
// 005a1f32  8b0c24               mov ecx, dword ptr [esp]
// 005a1f35  b8b0ed8b00           mov eax, 0x8bedb0
// 005a1f3a  64890d00000000       mov dword ptr fs:[0], ecx
// 005a1f41  83c40c               add esp, 0xc
// 005a1f44  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
