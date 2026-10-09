// roc 2008-06 0040ad80  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ad80
//
// 0040ad80  64a100000000         mov eax, dword ptr fs:[0]
// 0040ad86  6aff                 push -1
// 0040ad88  683ed17b00           push 0x7bd13e
// 0040ad8d  50                   push eax
// 0040ad8e  b801000000           mov eax, 1
// 0040ad93  64892500000000       mov dword ptr fs:[0], esp
// 0040ad9a  840528c59600         test byte ptr [0x96c528], al
// 0040ada0  7530                 jne 0x40add2
// 0040ada2  090528c59600         or dword ptr [0x96c528], eax
// 0040ada8  68a0d68200           push 0x82d6a0
// 0040adad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040adb5  e866ffffff           call 0x40ad20
// 0040adba  50                   push eax
// 0040adbb  b968c49600           mov ecx, 0x96c468
// 0040adc0  e82b5b1600           call 0x5708f0
// 0040adc5  68a0a27f00           push 0x7fa2a0
// 0040adca  e8e0692900           call 0x6a17af
// 0040adcf  83c404               add esp, 4
// 0040add2  8b0c24               mov ecx, dword ptr [esp]
// 0040add5  b868c49600           mov eax, 0x96c468
// 0040adda  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ade1  83c40c               add esp, 0xc
// 0040ade4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
