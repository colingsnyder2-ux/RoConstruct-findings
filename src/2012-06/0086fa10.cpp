// roc 2012-06 0086fa10  unit: RBX::VDebrisService::?$BoundFuncDesc  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086fa10
//
// 0086fa10  64a100000000         mov eax, dword ptr fs:[0]
// 0086fa16  8b542404             mov edx, dword ptr [esp + 4]
// 0086fa1a  6aff                 push -1
// 0086fa1c  684269aa00           push 0xaa6942
// 0086fa21  50                   push eax
// 0086fa22  64892500000000       mov dword ptr fs:[0], esp
// 0086fa29  8b4108               mov eax, dword ptr [ecx + 8]
// 0086fa2c  83ec44               sub esp, 0x44
// 0086fa2f  56                   push esi
// 0086fa30  beffffff0f           mov esi, 0xfffffff
// 0086fa35  2bf0                 sub esi, eax
// 0086fa37  3bf2                 cmp esi, edx
// 0086fa39  5e                   pop esi
// 0086fa3a  7358                 jae 0x86fa94
// 0086fa3c  6824f5b400           push 0xb4f524
// 0086fa41  8d4c2404             lea ecx, [esp + 4]
// 0086fa45  ff154826b200         call dword ptr [0xb22648]
// 0086fa4b  8d4c241c             lea ecx, [esp + 0x1c]
// 0086fa4f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0086fa57  ff15dc29b200         call dword ptr [0xb229dc]
// 0086fa5d  8d0424               lea eax, [esp]
// 0086fa60  50                   push eax
// 0086fa61  8d4c242c             lea ecx, [esp + 0x2c]
// 0086fa65  c644245001           mov byte ptr [esp + 0x50], 1
// 0086fa6a  c7442420a02eb400     mov dword ptr [esp + 0x20], 0xb42ea0
// 0086fa72  ff154426b200         call dword ptr [0xb22644]
// 0086fa78  680462cd00           push 0xcd6204
// 0086fa7d  8d4c2420             lea ecx, [esp + 0x20]
// 0086fa81  51                   push ecx
// 0086fa82  c644245400           mov byte ptr [esp + 0x54], 0
// 0086fa87  c7442424ac2eb400     mov dword ptr [esp + 0x24], 0xb42eac
// 0086fa8f  e8b0361100           call 0x983144
// 0086fa94  03c2                 add eax, edx
// 0086fa96  894108               mov dword ptr [ecx + 8], eax
// 0086fa99  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0086fa9d  64890d00000000       mov dword ptr fs:[0], ecx
// 0086faa4  83c450               add esp, 0x50
// 0086faa7  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Incsize@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
