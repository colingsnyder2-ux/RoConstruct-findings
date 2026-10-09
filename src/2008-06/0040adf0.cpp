// roc 2008-06 0040adf0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040adf0
//
// 0040adf0  64a100000000         mov eax, dword ptr fs:[0]
// 0040adf6  6aff                 push -1
// 0040adf8  685ed17b00           push 0x7bd15e
// 0040adfd  50                   push eax
// 0040adfe  b801000000           mov eax, 1
// 0040ae03  64892500000000       mov dword ptr fs:[0], esp
// 0040ae0a  8405f0c59600         test byte ptr [0x96c5f0], al
// 0040ae10  7530                 jne 0x40ae42
// 0040ae12  0905f0c59600         or dword ptr [0x96c5f0], eax
// 0040ae18  6820b78000           push 0x80b720
// 0040ae1d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040ae25  e856ffffff           call 0x40ad80
// 0040ae2a  50                   push eax
// 0040ae2b  b930c59600           mov ecx, 0x96c530
// 0040ae30  e8bb5a1600           call 0x5708f0
// 0040ae35  6890a27f00           push 0x7fa290
// 0040ae3a  e870692900           call 0x6a17af
// 0040ae3f  83c404               add esp, 4
// 0040ae42  8b0c24               mov ecx, dword ptr [esp]
// 0040ae45  b830c59600           mov eax, 0x96c530
// 0040ae4a  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ae51  83c40c               add esp, 0xc
// 0040ae54  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
