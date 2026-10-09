// roc 2008-06 00630a80  unit: RBX::BodyMover  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630a80
//
// 00630a80  64a100000000         mov eax, dword ptr fs:[0]
// 00630a86  6aff                 push -1
// 00630a88  680e9c7d00           push 0x7d9c0e
// 00630a8d  50                   push eax
// 00630a8e  b801000000           mov eax, 1
// 00630a93  64892500000000       mov dword ptr fs:[0], esp
// 00630a9a  840578c19700         test byte ptr [0x97c178], al
// 00630aa0  7530                 jne 0x630ad2
// 00630aa2  090578c19700         or dword ptr [0x97c178], eax
// 00630aa8  68e8c69500           push 0x95c6e8
// 00630aad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00630ab5  e8c6a2ddff           call 0x40ad80
// 00630aba  50                   push eax
// 00630abb  b9b8c09700           mov ecx, 0x97c0b8
// 00630ac0  e82bfef3ff           call 0x5708f0
// 00630ac5  6850088000           push 0x800850
// 00630aca  e8e00c0700           call 0x6a17af
// 00630acf  83c404               add esp, 4
// 00630ad2  8b0c24               mov ecx, dword ptr [esp]
// 00630ad5  b8b8c09700           mov eax, 0x97c0b8
// 00630ada  64890d00000000       mov dword ptr fs:[0], ecx
// 00630ae1  83c40c               add esp, 0xc
// 00630ae4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
