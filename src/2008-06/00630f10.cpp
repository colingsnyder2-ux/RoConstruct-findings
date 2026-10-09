// roc 2008-06 00630f10  unit: RBX::BodyMover  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630f10
//
// 00630f10  64a100000000         mov eax, dword ptr fs:[0]
// 00630f16  6aff                 push -1
// 00630f18  686e9c7d00           push 0x7d9c6e
// 00630f1d  50                   push eax
// 00630f1e  b801000000           mov eax, 1
// 00630f23  64892500000000       mov dword ptr fs:[0], esp
// 00630f2a  8405d0c39700         test byte ptr [0x97c3d0], al
// 00630f30  7530                 jne 0x630f62
// 00630f32  0905d0c39700         or dword ptr [0x97c3d0], eax
// 00630f38  6828c79500           push 0x95c728
// 00630f3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00630f45  e8369eddff           call 0x40ad80
// 00630f4a  50                   push eax
// 00630f4b  b910c39700           mov ecx, 0x97c310
// 00630f50  e89bf9f3ff           call 0x5708f0
// 00630f55  6880088000           push 0x800880
// 00630f5a  e850080700           call 0x6a17af
// 00630f5f  83c404               add esp, 4
// 00630f62  8b0c24               mov ecx, dword ptr [esp]
// 00630f65  b810c39700           mov eax, 0x97c310
// 00630f6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00630f71  83c40c               add esp, 0xc
// 00630f74  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
