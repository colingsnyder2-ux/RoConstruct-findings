// roc 2010-06 00596520  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00596520
//
// 00596520  6aff                 push -1
// 00596522  68484e9a00           push 0x9a4e48
// 00596527  64a100000000         mov eax, dword ptr fs:[0]
// 0059652d  50                   push eax
// 0059652e  64892500000000       mov dword ptr fs:[0], esp
// 00596535  51                   push ecx
// 00596536  56                   push esi
// 00596537  8bf1                 mov esi, ecx
// 00596539  89742404             mov dword ptr [esp + 4], esi
// 0059653d  8d4e18               lea ecx, [esi + 0x18]
// 00596540  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00596548  e87340f1ff           call 0x4aa5c0
// 0059654d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00596551  c7061809a000         mov dword ptr [esi], 0xa00918
// 00596557  5e                   pop esi
// 00596558  64890d00000000       mov dword ptr fs:[0], ecx
// 0059655f  83c410               add esp, 0x10
// 00596562  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1SignalDescriptor@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
