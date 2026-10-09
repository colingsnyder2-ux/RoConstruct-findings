// roc 2008-06 00631060  unit: RBX::BodyMover  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631060
//
// 00631060  64a100000000         mov eax, dword ptr fs:[0]
// 00631066  6aff                 push -1
// 00631068  68ce9c7d00           push 0x7d9cce
// 0063106d  50                   push eax
// 0063106e  b801000000           mov eax, 1
// 00631073  64892500000000       mov dword ptr fs:[0], esp
// 0063107a  840528c69700         test byte ptr [0x97c628], al
// 00631080  7530                 jne 0x6310b2
// 00631082  090528c69700         or dword ptr [0x97c628], eax
// 00631088  6840c79500           push 0x95c740
// 0063108d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00631095  e8e69cddff           call 0x40ad80
// 0063109a  50                   push eax
// 0063109b  b968c59700           mov ecx, 0x97c568
// 006310a0  e84bf8f3ff           call 0x5708f0
// 006310a5  6830088000           push 0x800830
// 006310aa  e800070700           call 0x6a17af
// 006310af  83c404               add esp, 4
// 006310b2  8b0c24               mov ecx, dword ptr [esp]
// 006310b5  b868c59700           mov eax, 0x97c568
// 006310ba  64890d00000000       mov dword ptr fs:[0], ecx
// 006310c1  83c40c               add esp, 0xc
// 006310c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
