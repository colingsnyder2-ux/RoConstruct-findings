// roc 2008-06 004b3800  unit: RBX::Network::VMarker::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3800
//
// 004b3800  64a100000000         mov eax, dword ptr fs:[0]
// 004b3806  6aff                 push -1
// 004b3808  68de877c00           push 0x7c87de
// 004b380d  50                   push eax
// 004b380e  b801000000           mov eax, 1
// 004b3813  64892500000000       mov dword ptr fs:[0], esp
// 004b381a  840540169700         test byte ptr [0x971640], al
// 004b3820  7530                 jne 0x4b3852
// 004b3822  090540169700         or dword ptr [0x971640], eax
// 004b3828  68e4448200           push 0x8244e4
// 004b382d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004b3835  e84675f5ff           call 0x40ad80
// 004b383a  50                   push eax
// 004b383b  b980159700           mov ecx, 0x971580
// 004b3840  e8abd00b00           call 0x5708f0
// 004b3845  68b0bf7f00           push 0x7fbfb0
// 004b384a  e860df1e00           call 0x6a17af
// 004b384f  83c404               add esp, 4
// 004b3852  8b0c24               mov ecx, dword ptr [esp]
// 004b3855  b880159700           mov eax, 0x971580
// 004b385a  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3861  83c40c               add esp, 0xc
// 004b3864  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
