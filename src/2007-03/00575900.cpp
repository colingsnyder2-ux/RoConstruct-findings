// roc 2007-03 00575900  unit: seg_00570000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00575900
//
// 00575900  64a100000000         mov eax, dword ptr fs:[0]
// 00575906  6aff                 push -1
// 00575908  681e657500           push 0x75651e
// 0057590d  50                   push eax
// 0057590e  b801000000           mov eax, 1
// 00575913  64892500000000       mov dword ptr fs:[0], esp
// 0057591a  840518cf8b00         test byte ptr [0x8bcf18], al
// 00575920  7530                 jne 0x575952
// 00575922  090518cf8b00         or dword ptr [0x8bcf18], eax
// 00575928  6850ec8900           push 0x89ec50
// 0057592d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00575935  e846fdfbff           call 0x535680
// 0057593a  50                   push eax
// 0057593b  b990ce8b00           mov ecx, 0x8bce90
// 00575940  e89bb4ffff           call 0x570de0
// 00575945  68e0a07700           push 0x77a0e0
// 0057594a  e864980a00           call 0x61f1b3
// 0057594f  83c404               add esp, 4
// 00575952  8b0c24               mov ecx, dword ptr [esp]
// 00575955  b890ce8b00           mov eax, 0x8bce90
// 0057595a  64890d00000000       mov dword ptr fs:[0], ecx
// 00575961  83c40c               add esp, 0xc
// 00575964  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
