// roc 2008-06 005fe7f0  unit: RBX::Tool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe7f0
//
// 005fe7f0  64a100000000         mov eax, dword ptr fs:[0]
// 005fe7f6  6aff                 push -1
// 005fe7f8  687e7f7d00           push 0x7d7f7e
// 005fe7fd  50                   push eax
// 005fe7fe  b801000000           mov eax, 1
// 005fe803  64892500000000       mov dword ptr fs:[0], esp
// 005fe80a  8405b0b69700         test byte ptr [0x97b6b0], al
// 005fe810  7530                 jne 0x5fe842
// 005fe812  0905b0b69700         or dword ptr [0x97b6b0], eax
// 005fe818  6860b28400           push 0x84b260
// 005fe81d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005fe825  e856c5e0ff           call 0x40ad80
// 005fe82a  50                   push eax
// 005fe82b  b9f0b59700           mov ecx, 0x97b5f0
// 005fe830  e8bb20f7ff           call 0x5708f0
// 005fe835  6840008000           push 0x800040
// 005fe83a  e8702f0a00           call 0x6a17af
// 005fe83f  83c404               add esp, 4
// 005fe842  8b0c24               mov ecx, dword ptr [esp]
// 005fe845  b8f0b59700           mov eax, 0x97b5f0
// 005fe84a  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe851  83c40c               add esp, 0xc
// 005fe854  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
