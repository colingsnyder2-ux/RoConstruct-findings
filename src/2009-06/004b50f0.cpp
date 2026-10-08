// roc 2009-06 004b50f0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b50f0
//
// 004b50f0  64a100000000         mov eax, dword ptr fs:[0]
// 004b50f6  8b542404             mov edx, dword ptr [esp + 4]
// 004b50fa  6aff                 push -1
// 004b50fc  68b2db8500           push 0x85dbb2
// 004b5101  50                   push eax
// 004b5102  64892500000000       mov dword ptr fs:[0], esp
// 004b5109  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004b510c  83ec44               sub esp, 0x44
// 004b510f  56                   push esi
// 004b5110  beffffff0f           mov esi, 0xfffffff
// 004b5115  2bf0                 sub esi, eax
// 004b5117  3bf2                 cmp esi, edx
// 004b5119  5e                   pop esi
// 004b511a  7358                 jae 0x4b5174
// 004b511c  68d00b8b00           push 0x8b0bd0
// 004b5121  8d4c2404             lea ecx, [esp + 4]
// 004b5125  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b512b  8d4c241c             lea ecx, [esp + 0x1c]
// 004b512f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004b5137  ff15b8e98900         call dword ptr [0x89e9b8]
// 004b513d  8d0424               lea eax, [esp]
// 004b5140  50                   push eax
// 004b5141  8d4c242c             lea ecx, [esp + 0x2c]
// 004b5145  c644245001           mov byte ptr [esp + 0x50], 1
// 004b514a  c744242044c98a00     mov dword ptr [esp + 0x20], 0x8ac944
// 004b5152  ff15b8e48900         call dword ptr [0x89e4b8]
// 004b5158  6834929700           push 0x979234
// 004b515d  8d4c2420             lea ecx, [esp + 0x20]
// 004b5161  51                   push ecx
// 004b5162  c644245400           mov byte ptr [esp + 0x54], 0
// 004b5167  c744242450c98a00     mov dword ptr [esp + 0x24], 0x8ac950
// 004b516f  e8d6482600           call 0x719a4a
// 004b5174  03c2                 add eax, edx
// 004b5176  894118               mov dword ptr [ecx + 0x18], eax
// 004b5179  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004b517d  64890d00000000       mov dword ptr fs:[0], ecx
// 004b5184  83c450               add esp, 0x50
// 004b5187  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Incsize@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
