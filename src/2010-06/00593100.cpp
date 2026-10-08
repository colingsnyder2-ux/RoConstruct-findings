// roc 2010-06 00593100  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00593100
//
// 00593100  6aff                 push -1
// 00593102  68484e9a00           push 0x9a4e48
// 00593107  64a100000000         mov eax, dword ptr fs:[0]
// 0059310d  50                   push eax
// 0059310e  64892500000000       mov dword ptr fs:[0], esp
// 00593115  51                   push ecx
// 00593116  56                   push esi
// 00593117  8bf1                 mov esi, ecx
// 00593119  89742404             mov dword ptr [esp + 4], esi
// 0059311d  8d4e18               lea ecx, [esi + 0x18]
// 00593120  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593128  e89374f1ff           call 0x4aa5c0
// 0059312d  f644241801           test byte ptr [esp + 0x18], 1
// 00593132  c7061809a000         mov dword ptr [esi], 0xa00918
// 00593138  7409                 je 0x593143
// 0059313a  56                   push esi
// 0059313b  e85a482100           call 0x7a799a
// 00593140  83c404               add esp, 4
// 00593143  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00593147  8bc6                 mov eax, esi
// 00593149  5e                   pop esi
// 0059314a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593151  83c410               add esp, 0x10
// 00593154  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ??_G?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
