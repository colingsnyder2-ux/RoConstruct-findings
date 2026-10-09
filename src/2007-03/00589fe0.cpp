// roc 2007-03 00589fe0  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00589fe0
//
// 00589fe0  64a100000000         mov eax, dword ptr fs:[0]
// 00589fe6  6aff                 push -1
// 00589fe8  686e777500           push 0x75776e
// 00589fed  50                   push eax
// 00589fee  b801000000           mov eax, 1
// 00589ff3  64892500000000       mov dword ptr fs:[0], esp
// 00589ffa  840568e18b00         test byte ptr [0x8be168], al
// 0058a000  7530                 jne 0x58a032
// 0058a002  090568e18b00         or dword ptr [0x8be168], eax
// 0058a008  68085d7b00           push 0x7b5d08
// 0058a00d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058a015  e866e9ffff           call 0x588980
// 0058a01a  50                   push eax
// 0058a01b  b9e0e08b00           mov ecx, 0x8be0e0
// 0058a020  e8bb6dfeff           call 0x570de0
// 0058a025  6850a57700           push 0x77a550
// 0058a02a  e884510900           call 0x61f1b3
// 0058a02f  83c404               add esp, 4
// 0058a032  8b0c24               mov ecx, dword ptr [esp]
// 0058a035  b8e0e08b00           mov eax, 0x8be0e0
// 0058a03a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a041  83c40c               add esp, 0xc
// 0058a044  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
