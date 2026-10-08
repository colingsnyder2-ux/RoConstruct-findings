// roc 2011-06 00722ca0  unit: RBX::P8PVInstance::?$SetImpl  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00722ca0
//
// 00722ca0  64a100000000         mov eax, dword ptr fs:[0]
// 00722ca6  8b542404             mov edx, dword ptr [esp + 4]
// 00722caa  6aff                 push -1
// 00722cac  68221b9d00           push 0x9d1b22
// 00722cb1  50                   push eax
// 00722cb2  64892500000000       mov dword ptr fs:[0], esp
// 00722cb9  8b4108               mov eax, dword ptr [ecx + 8]
// 00722cbc  83ec44               sub esp, 0x44
// 00722cbf  56                   push esi
// 00722cc0  beffffff0f           mov esi, 0xfffffff
// 00722cc5  2bf0                 sub esi, eax
// 00722cc7  3bf2                 cmp esi, edx
// 00722cc9  5e                   pop esi
// 00722cca  7358                 jae 0x722d24
// 00722ccc  688457a600           push 0xa65784
// 00722cd1  8d4c2404             lea ecx, [esp + 4]
// 00722cd5  ff15c404a400         call dword ptr [0xa404c4]
// 00722cdb  8d4c241c             lea ecx, [esp + 0x1c]
// 00722cdf  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00722ce7  ff15600aa400         call dword ptr [0xa40a60]
// 00722ced  8d0424               lea eax, [esp]
// 00722cf0  50                   push eax
// 00722cf1  8d4c242c             lea ecx, [esp + 0x2c]
// 00722cf5  c644245001           mov byte ptr [esp + 0x50], 1
// 00722cfa  c7442420c0b5a500     mov dword ptr [esp + 0x20], 0xa5b5c0
// 00722d02  ff15c804a400         call dword ptr [0xa404c8]
// 00722d08  687073b800           push 0xb87370
// 00722d0d  8d4c2420             lea ecx, [esp + 0x20]
// 00722d11  51                   push ecx
// 00722d12  c644245400           mov byte ptr [esp + 0x54], 0
// 00722d17  c7442424ccb5a500     mov dword ptr [esp + 0x24], 0xa5b5cc
// 00722d1f  e888830e00           call 0x80b0ac
// 00722d24  03c2                 add eax, edx
// 00722d26  894108               mov dword ptr [ecx + 8], eax
// 00722d29  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00722d2d  64890d00000000       mov dword ptr fs:[0], ecx
// 00722d34  83c450               add esp, 0x50
// 00722d37  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Incsize@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
