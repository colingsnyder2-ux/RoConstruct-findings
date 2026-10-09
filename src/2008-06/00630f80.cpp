// roc 2008-06 00630f80  unit: RBX::BodyMover  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630f80
//
// 00630f80  64a100000000         mov eax, dword ptr fs:[0]
// 00630f86  6aff                 push -1
// 00630f88  688e9c7d00           push 0x7d9c8e
// 00630f8d  50                   push eax
// 00630f8e  b801000000           mov eax, 1
// 00630f93  64892500000000       mov dword ptr fs:[0], esp
// 00630f9a  840598c49700         test byte ptr [0x97c498], al
// 00630fa0  7530                 jne 0x630fd2
// 00630fa2  090598c49700         or dword ptr [0x97c498], eax
// 00630fa8  6834c79500           push 0x95c734
// 00630fad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00630fb5  e8c69dddff           call 0x40ad80
// 00630fba  50                   push eax
// 00630fbb  b9d8c39700           mov ecx, 0x97c3d8
// 00630fc0  e82bf9f3ff           call 0x5708f0
// 00630fc5  6870088000           push 0x800870
// 00630fca  e8e0070700           call 0x6a17af
// 00630fcf  83c404               add esp, 4
// 00630fd2  8b0c24               mov ecx, dword ptr [esp]
// 00630fd5  b8d8c39700           mov eax, 0x97c3d8
// 00630fda  64890d00000000       mov dword ptr fs:[0], ecx
// 00630fe1  83c40c               add esp, 0xc
// 00630fe4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
