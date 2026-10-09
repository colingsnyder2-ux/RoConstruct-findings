// roc 2007-03 0058a0c0  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058a0c0
//
// 0058a0c0  64a100000000         mov eax, dword ptr fs:[0]
// 0058a0c6  6aff                 push -1
// 0058a0c8  68ae777500           push 0x7577ae
// 0058a0cd  50                   push eax
// 0058a0ce  b801000000           mov eax, 1
// 0058a0d3  64892500000000       mov dword ptr fs:[0], esp
// 0058a0da  840588e28b00         test byte ptr [0x8be288], al
// 0058a0e0  7530                 jne 0x58a112
// 0058a0e2  090588e28b00         or dword ptr [0x8be288], eax
// 0058a0e8  68185d7b00           push 0x7b5d18
// 0058a0ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058a0f5  e886e8ffff           call 0x588980
// 0058a0fa  50                   push eax
// 0058a0fb  b900e28b00           mov ecx, 0x8be200
// 0058a100  e8db6cfeff           call 0x570de0
// 0058a105  6830a57700           push 0x77a530
// 0058a10a  e8a4500900           call 0x61f1b3
// 0058a10f  83c404               add esp, 4
// 0058a112  8b0c24               mov ecx, dword ptr [esp]
// 0058a115  b800e28b00           mov eax, 0x8be200
// 0058a11a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a121  83c40c               add esp, 0xc
// 0058a124  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
