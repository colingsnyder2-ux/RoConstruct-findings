// roc 2008-06 00630ff0  unit: RBX::BodyMover  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630ff0
//
// 00630ff0  64a100000000         mov eax, dword ptr fs:[0]
// 00630ff6  6aff                 push -1
// 00630ff8  68ae9c7d00           push 0x7d9cae
// 00630ffd  50                   push eax
// 00630ffe  b801000000           mov eax, 1
// 00631003  64892500000000       mov dword ptr fs:[0], esp
// 0063100a  840560c59700         test byte ptr [0x97c560], al
// 00631010  7530                 jne 0x631042
// 00631012  090560c59700         or dword ptr [0x97c560], eax
// 00631018  6814c79500           push 0x95c714
// 0063101d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00631025  e8569dddff           call 0x40ad80
// 0063102a  50                   push eax
// 0063102b  b9a0c49700           mov ecx, 0x97c4a0
// 00631030  e8bbf8f3ff           call 0x5708f0
// 00631035  6860088000           push 0x800860
// 0063103a  e870070700           call 0x6a17af
// 0063103f  83c404               add esp, 4
// 00631042  8b0c24               mov ecx, dword ptr [esp]
// 00631045  b8a0c49700           mov eax, 0x97c4a0
// 0063104a  64890d00000000       mov dword ptr fs:[0], ecx
// 00631051  83c40c               add esp, 0xc
// 00631054  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
