// roc 2008-06 00633750  unit: RBX::Network::VPlayer::?$BoundPropGetSet  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633750
//
// 00633750  6aff                 push -1
// 00633752  6868e37c00           push 0x7ce368
// 00633757  64a100000000         mov eax, dword ptr fs:[0]
// 0063375d  50                   push eax
// 0063375e  64892500000000       mov dword ptr fs:[0], esp
// 00633765  51                   push ecx
// 00633766  56                   push esi
// 00633767  8bf1                 mov esi, ecx
// 00633769  89742404             mov dword ptr [esp + 4], esi
// 0063376d  8d4e18               lea ecx, [esi + 0x18]
// 00633770  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00633778  e86362deff           call 0x4199e0
// 0063377d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633781  c70630b78000         mov dword ptr [esi], 0x80b730
// 00633787  5e                   pop esi
// 00633788  64890d00000000       mov dword ptr fs:[0], ecx
// 0063378f  83c410               add esp, 0x10
// 00633792  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1SignalDescriptor@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
