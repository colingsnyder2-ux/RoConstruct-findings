// roc 2008-06 0049eba0  unit: RBX::VNetworkSettings::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049eba0
//
// 0049eba0  64a100000000         mov eax, dword ptr fs:[0]
// 0049eba6  6aff                 push -1
// 0049eba8  688e767c00           push 0x7c768e
// 0049ebad  50                   push eax
// 0049ebae  b801000000           mov eax, 1
// 0049ebb3  64892500000000       mov dword ptr fs:[0], esp
// 0049ebba  8405f0099700         test byte ptr [0x9709f0], al
// 0049ebc0  7530                 jne 0x49ebf2
// 0049ebc2  0905f0099700         or dword ptr [0x9709f0], eax
// 0049ebc8  6824979300           push 0x939724
// 0049ebcd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0049ebd5  e836feffff           call 0x49ea10
// 0049ebda  50                   push eax
// 0049ebdb  b930099700           mov ecx, 0x970930
// 0049ebe0  e80b1d0d00           call 0x5708f0
// 0049ebe5  6850ba7f00           push 0x7fba50
// 0049ebea  e8c02b2000           call 0x6a17af
// 0049ebef  83c404               add esp, 4
// 0049ebf2  8b0c24               mov ecx, dword ptr [esp]
// 0049ebf5  b830099700           mov eax, 0x970930
// 0049ebfa  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ec01  83c40c               add esp, 0xc
// 0049ec04  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
