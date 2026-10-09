// roc 2008-06 004cd300  unit: RBX::Network::PhysicsSender  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cd300
//
// 004cd300  64a100000000         mov eax, dword ptr fs:[0]
// 004cd306  6aff                 push -1
// 004cd308  68de997c00           push 0x7c99de
// 004cd30d  50                   push eax
// 004cd30e  b801000000           mov eax, 1
// 004cd313  64892500000000       mov dword ptr fs:[0], esp
// 004cd31a  8405981b9700         test byte ptr [0x971b98], al
// 004cd320  7530                 jne 0x4cd352
// 004cd322  0905981b9700         or dword ptr [0x971b98], eax
// 004cd328  6858f88300           push 0x83f858
// 004cd32d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cd335  e846daf3ff           call 0x40ad80
// 004cd33a  50                   push eax
// 004cd33b  b9d81a9700           mov ecx, 0x971ad8
// 004cd340  e8ab350a00           call 0x5708f0
// 004cd345  6860c37f00           push 0x7fc360
// 004cd34a  e860441d00           call 0x6a17af
// 004cd34f  83c404               add esp, 4
// 004cd352  8b0c24               mov ecx, dword ptr [esp]
// 004cd355  b8d81a9700           mov eax, 0x971ad8
// 004cd35a  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd361  83c40c               add esp, 0xc
// 004cd364  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
