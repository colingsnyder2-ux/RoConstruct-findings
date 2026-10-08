// roc 2007-08 0052ec20  unit: RBX::VRunService::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052ec20
//
// 0052ec20  64a100000000         mov eax, dword ptr fs:[0]
// 0052ec26  6aff                 push -1
// 0052ec28  684e057500           push 0x75054e
// 0052ec2d  50                   push eax
// 0052ec2e  b801000000           mov eax, 1
// 0052ec33  64892500000000       mov dword ptr fs:[0], esp
// 0052ec3a  8405180d8c00         test byte ptr [0x8c0d18], al
// 0052ec40  7530                 jne 0x52ec72
// 0052ec42  0905180d8c00         or dword ptr [0x8c0d18], eax
// 0052ec48  6868487a00           push 0x7a4868
// 0052ec4d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0052ec55  e8369aeeff           call 0x418690
// 0052ec5a  50                   push eax
// 0052ec5b  b9900c8c00           mov ecx, 0x8c0c90
// 0052ec60  e89b1f0400           call 0x570c00
// 0052ec65  6850937700           push 0x779350
// 0052ec6a  e8b4201000           call 0x630d23
// 0052ec6f  83c404               add esp, 4
// 0052ec72  8b0c24               mov ecx, dword ptr [esp]
// 0052ec75  b8900c8c00           mov eax, 0x8c0c90
// 0052ec7a  64890d00000000       mov dword ptr fs:[0], ecx
// 0052ec81  83c40c               add esp, 0xc
// 0052ec84  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
