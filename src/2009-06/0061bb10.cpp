// roc 2009-06 0061bb10  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061bb10
//
// 0061bb10  6aff                 push -1
// 0061bb12  68f8a28500           push 0x85a2f8
// 0061bb17  64a100000000         mov eax, dword ptr fs:[0]
// 0061bb1d  50                   push eax
// 0061bb1e  64892500000000       mov dword ptr fs:[0], esp
// 0061bb25  51                   push ecx
// 0061bb26  56                   push esi
// 0061bb27  8bf1                 mov esi, ecx
// 0061bb29  89742404             mov dword ptr [esp + 4], esi
// 0061bb2d  8d4e18               lea ecx, [esi + 0x18]
// 0061bb30  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061bb38  e813cfe9ff           call 0x4b8a50
// 0061bb3d  f644241801           test byte ptr [esp + 0x18], 1
// 0061bb42  c70630d28a00         mov dword ptr [esi], 0x8ad230
// 0061bb48  7409                 je 0x61bb53
// 0061bb4a  56                   push esi
// 0061bb4b  e8e2ce0f00           call 0x718a32
// 0061bb50  83c404               add esp, 4
// 0061bb53  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061bb57  8bc6                 mov eax, esi
// 0061bb59  5e                   pop esi
// 0061bb5a  64890d00000000       mov dword ptr fs:[0], ecx
// 0061bb61  83c410               add esp, 0x10
// 0061bb64  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ??_G?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
