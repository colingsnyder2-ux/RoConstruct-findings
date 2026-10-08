// roc 2007-03 00773ee0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773ee0
//
// 00773ee0  56                   push esi
// 00773ee1  6a05                 push 5
// 00773ee3  33c9                 xor ecx, ecx
// 00773ee5  51                   push ecx
// 00773ee6  b8f0ef5900           mov eax, 0x59eff0
// 00773eeb  50                   push eax
// 00773eec  33f6                 xor esi, esi
// 00773eee  56                   push esi
// 00773eef  bad0ca5900           mov edx, 0x59cad0
// 00773ef4  52                   push edx
// 00773ef5  6870a77900           push 0x79a770
// 00773efa  6804287b00           push 0x7b2804
// 00773eff  b940eb8b00           mov ecx, 0x8beb40
// 00773f04  e817a5e2ff           call 0x59e420
// 00773f09  6810aa7700           push 0x77aa10
// 00773f0e  e8a0b2eaff           call 0x61f1b3
// 00773f13  83c404               add esp, 4
// 00773f16  5e                   pop esi
// 00773f17  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_BinType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
