// roc 2009-12 00732550  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00732550
//
// 00732550  6aff                 push -1
// 00732552  6858b39400           push 0x94b358
// 00732557  64a100000000         mov eax, dword ptr fs:[0]
// 0073255d  50                   push eax
// 0073255e  64892500000000       mov dword ptr fs:[0], esp
// 00732565  51                   push ecx
// 00732566  56                   push esi
// 00732567  8bf1                 mov esi, ecx
// 00732569  89742404             mov dword ptr [esp + 4], esi
// 0073256d  8d4e18               lea ecx, [esi + 0x18]
// 00732570  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00732578  e823a5dcff           call 0x4fcaa0
// 0073257d  f644241801           test byte ptr [esp + 0x18], 1
// 00732582  c70670fd9900         mov dword ptr [esi], 0x99fd70
// 00732588  7409                 je 0x732593
// 0073258a  56                   push esi
// 0073258b  e8ca120c00           call 0x7f385a
// 00732590  83c404               add esp, 4
// 00732593  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00732597  8bc6                 mov eax, esi
// 00732599  5e                   pop esi
// 0073259a  64890d00000000       mov dword ptr fs:[0], ecx
// 007325a1  83c410               add esp, 0x10
// 007325a4  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ??_G?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
