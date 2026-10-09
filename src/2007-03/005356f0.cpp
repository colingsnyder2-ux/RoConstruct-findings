// roc 2007-03 005356f0  unit: seg_00530000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005356f0
//
// 005356f0  64a100000000         mov eax, dword ptr fs:[0]
// 005356f6  6aff                 push -1
// 005356f8  68de187500           push 0x7518de
// 005356fd  50                   push eax
// 005356fe  b801000000           mov eax, 1
// 00535703  64892500000000       mov dword ptr fs:[0], esp
// 0053570a  840510b68b00         test byte ptr [0x8bb610], al
// 00535710  7530                 jne 0x535742
// 00535712  090510b68b00         or dword ptr [0x8bb610], eax
// 00535718  6878768900           push 0x897678
// 0053571d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00535725  e856ffffff           call 0x535680
// 0053572a  50                   push eax
// 0053572b  b988b58b00           mov ecx, 0x8bb588
// 00535730  e8abb60300           call 0x570de0
// 00535735  6870947700           push 0x779470
// 0053573a  e8749a0e00           call 0x61f1b3
// 0053573f  83c404               add esp, 4
// 00535742  8b0c24               mov ecx, dword ptr [esp]
// 00535745  b888b58b00           mov eax, 0x8bb588
// 0053574a  64890d00000000       mov dword ptr fs:[0], ecx
// 00535751  83c40c               add esp, 0xc
// 00535754  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
