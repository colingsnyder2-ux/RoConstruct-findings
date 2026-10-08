// roc 2007-08 00531630  unit: RBX::VModelInstance::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00531630
//
// 00531630  64a100000000         mov eax, dword ptr fs:[0]
// 00531636  6aff                 push -1
// 00531638  685e077500           push 0x75075e
// 0053163d  50                   push eax
// 0053163e  b801000000           mov eax, 1
// 00531643  64892500000000       mov dword ptr fs:[0], esp
// 0053164a  8405e00f8c00         test byte ptr [0x8c0fe0], al
// 00531650  7530                 jne 0x531682
// 00531652  0905e00f8c00         or dword ptr [0x8c0fe0], eax
// 00531658  68808d7b00           push 0x7b8d80
// 0053165d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00531665  e82670eeff           call 0x418690
// 0053166a  50                   push eax
// 0053166b  b9580f8c00           mov ecx, 0x8c0f58
// 00531670  e88bf50300           call 0x570c00
// 00531675  6810947700           push 0x779410
// 0053167a  e8a4f60f00           call 0x630d23
// 0053167f  83c404               add esp, 4
// 00531682  8b0c24               mov ecx, dword ptr [esp]
// 00531685  b8580f8c00           mov eax, 0x8c0f58
// 0053168a  64890d00000000       mov dword ptr fs:[0], ecx
// 00531691  83c40c               add esp, 0xc
// 00531694  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
