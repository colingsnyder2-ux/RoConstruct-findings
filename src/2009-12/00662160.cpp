// roc 2009-12 00662160  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00662160
//
// 00662160  64a100000000         mov eax, dword ptr fs:[0]
// 00662166  6aff                 push -1
// 00662168  68de3a9400           push 0x943ade
// 0066216d  50                   push eax
// 0066216e  b801000000           mov eax, 1
// 00662173  64892500000000       mov dword ptr fs:[0], esp
// 0066217a  84059801b900         test byte ptr [0xb90198], al
// 00662180  7525                 jne 0x6621a7
// 00662182  09059801b900         or dword ptr [0xb90198], eax
// 00662188  b98001b900           mov ecx, 0xb90180
// 0066218d  c744240800000000     mov dword ptr [esp + 8], 0
// 00662195  e8a68ff2ff           call 0x58b140
// 0066219a  68c0469800           push 0x9846c0
// 0066219f  e885271900           call 0x7f4929
// 006621a4  83c404               add esp, 4
// 006621a7  8b0c24               mov ecx, dword ptr [esp]
// 006621aa  b88001b900           mov eax, 0xb90180
// 006621af  64890d00000000       mov dword ptr fs:[0], ecx
// 006621b6  83c40c               add esp, 0xc
// 006621b9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
