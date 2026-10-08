// roc 2007-08 00590610  unit: RBX::VObjectValue::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590610
//
// 00590610  64a100000000         mov eax, dword ptr fs:[0]
// 00590616  6aff                 push -1
// 00590618  683e6b7500           push 0x756b3e
// 0059061d  50                   push eax
// 0059061e  b801000000           mov eax, 1
// 00590623  64892500000000       mov dword ptr fs:[0], esp
// 0059062a  840550448c00         test byte ptr [0x8c4450], al
// 00590630  7530                 jne 0x590662
// 00590632  090550448c00         or dword ptr [0x8c4450], eax
// 00590638  6800068b00           push 0x8b0600
// 0059063d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00590645  e84680e8ff           call 0x418690
// 0059064a  50                   push eax
// 0059064b  b9c8438c00           mov ecx, 0x8c43c8
// 00590650  e8ab05feff           call 0x570c00
// 00590655  68d0aa7700           push 0x77aad0
// 0059065a  e8c4060a00           call 0x630d23
// 0059065f  83c404               add esp, 4
// 00590662  8b0c24               mov ecx, dword ptr [esp]
// 00590665  b8c8438c00           mov eax, 0x8c43c8
// 0059066a  64890d00000000       mov dword ptr fs:[0], ecx
// 00590671  83c40c               add esp, 0xc
// 00590674  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
