// roc 2008-06 00682cc0  unit: Ogre::RbxSceneNode  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00682cc0
//
// 00682cc0  64a100000000         mov eax, dword ptr fs:[0]
// 00682cc6  8b542404             mov edx, dword ptr [esp + 4]
// 00682cca  6aff                 push -1
// 00682ccc  6842e87d00           push 0x7de842
// 00682cd1  50                   push eax
// 00682cd2  64892500000000       mov dword ptr fs:[0], esp
// 00682cd9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00682cdc  83ec44               sub esp, 0x44
// 00682cdf  56                   push esi
// 00682ce0  beffffff0f           mov esi, 0xfffffff
// 00682ce5  2bf0                 sub esi, eax
// 00682ce7  3bf2                 cmp esi, edx
// 00682ce9  5e                   pop esi
// 00682cea  7358                 jae 0x682d44
// 00682cec  6800d48000           push 0x80d400
// 00682cf1  8d4c2404             lea ecx, [esp + 4]
// 00682cf5  ff1558248000         call dword ptr [0x802458]
// 00682cfb  8d4c241c             lea ecx, [esp + 0x1c]
// 00682cff  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00682d07  ff1598288000         call dword ptr [0x802898]
// 00682d0d  8d0424               lea eax, [esp]
// 00682d10  50                   push eax
// 00682d11  8d4c242c             lea ecx, [esp + 0x2c]
// 00682d15  c644245001           mov byte ptr [esp + 0x50], 1
// 00682d1a  c744242010b18000     mov dword ptr [esp + 0x20], 0x80b110
// 00682d22  ff155c248000         call dword ptr [0x80245c]
// 00682d28  68c00c8d00           push 0x8d0cc0
// 00682d2d  8d4c2420             lea ecx, [esp + 0x20]
// 00682d31  51                   push ecx
// 00682d32  c644245400           mov byte ptr [esp + 0x54], 0
// 00682d37  c74424241cb18000     mov dword ptr [esp + 0x24], 0x80b11c
// 00682d3f  e848e80100           call 0x6a158c
// 00682d44  03c2                 add eax, edx
// 00682d46  894118               mov dword ptr [ecx + 0x18], eax
// 00682d49  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00682d4d  64890d00000000       mov dword ptr fs:[0], ecx
// 00682d54  83c450               add esp, 0x50
// 00682d57  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Incsize@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
