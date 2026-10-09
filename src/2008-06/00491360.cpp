// roc 2008-06 00491360  unit: RBX::Network::VPlayer::?$PropDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491360
//
// 00491360  64a100000000         mov eax, dword ptr fs:[0]
// 00491366  6aff                 push -1
// 00491368  68ce647c00           push 0x7c64ce
// 0049136d  50                   push eax
// 0049136e  b801000000           mov eax, 1
// 00491373  64892500000000       mov dword ptr fs:[0], esp
// 0049137a  8405c8009700         test byte ptr [0x9700c8], al
// 00491380  7530                 jne 0x4913b2
// 00491382  0905c8009700         or dword ptr [0x9700c8], eax
// 00491388  68384d9300           push 0x934d38
// 0049138d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00491395  e8e699f7ff           call 0x40ad80
// 0049139a  50                   push eax
// 0049139b  b908009700           mov ecx, 0x970008
// 004913a0  e84bf50d00           call 0x5708f0
// 004913a5  68c0b27f00           push 0x7fb2c0
// 004913aa  e800042100           call 0x6a17af
// 004913af  83c404               add esp, 4
// 004913b2  8b0c24               mov ecx, dword ptr [esp]
// 004913b5  b808009700           mov eax, 0x970008
// 004913ba  64890d00000000       mov dword ptr fs:[0], ecx
// 004913c1  83c40c               add esp, 0xc
// 004913c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
