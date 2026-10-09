// roc 2009-12 004f73d0  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f73d0
//
// 004f73d0  64a100000000         mov eax, dword ptr fs:[0]
// 004f73d6  8b542404             mov edx, dword ptr [esp + 4]
// 004f73da  6aff                 push -1
// 004f73dc  6812699500           push 0x956912
// 004f73e1  50                   push eax
// 004f73e2  64892500000000       mov dword ptr fs:[0], esp
// 004f73e9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004f73ec  83ec44               sub esp, 0x44
// 004f73ef  56                   push esi
// 004f73f0  beffffff0f           mov esi, 0xfffffff
// 004f73f5  2bf0                 sub esi, eax
// 004f73f7  3bf2                 cmp esi, edx
// 004f73f9  5e                   pop esi
// 004f73fa  7358                 jae 0x4f7454
// 004f73fc  6884389a00           push 0x9a3884
// 004f7401  8d4c2404             lea ecx, [esp + 4]
// 004f7405  ff15f4b69800         call dword ptr [0x98b6f4]
// 004f740b  8d4c241c             lea ecx, [esp + 0x1c]
// 004f740f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004f7417  ff1554b79800         call dword ptr [0x98b754]
// 004f741d  8d0424               lea eax, [esp]
// 004f7420  50                   push eax
// 004f7421  8d4c242c             lea ecx, [esp + 0x2c]
// 004f7425  c644245001           mov byte ptr [esp + 0x50], 1
// 004f742a  c744242084f49900     mov dword ptr [esp + 0x20], 0x99f484
// 004f7432  ff15f0b69800         call dword ptr [0x98b6f0]
// 004f7438  68e4efa800           push 0xa8efe4
// 004f743d  8d4c2420             lea ecx, [esp + 0x20]
// 004f7441  51                   push ecx
// 004f7442  c644245400           mov byte ptr [esp + 0x54], 0
// 004f7447  c744242490f49900     mov dword ptr [esp + 0x24], 0x99f490
// 004f744f  e824d42f00           call 0x7f4878
// 004f7454  03c2                 add eax, edx
// 004f7456  894118               mov dword ptr [ecx + 0x18], eax
// 004f7459  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004f745d  64890d00000000       mov dword ptr fs:[0], ecx
// 004f7464  83c450               add esp, 0x50
// 004f7467  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Incsize@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
