// roc 2008-06 0041bdf0  unit: VDHTMLWindow::?$BoundFuncDesc  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041bdf0
//
// 0041bdf0  6aff                 push -1
// 0041bdf2  6868e37c00           push 0x7ce368
// 0041bdf7  64a100000000         mov eax, dword ptr fs:[0]
// 0041bdfd  50                   push eax
// 0041bdfe  64892500000000       mov dword ptr fs:[0], esp
// 0041be05  51                   push ecx
// 0041be06  56                   push esi
// 0041be07  8bf1                 mov esi, ecx
// 0041be09  89742404             mov dword ptr [esp + 4], esi
// 0041be0d  8d4e18               lea ecx, [esi + 0x18]
// 0041be10  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041be18  e8c3dbffff           call 0x4199e0
// 0041be1d  f644241801           test byte ptr [esp + 0x18], 1
// 0041be22  c70630b78000         mov dword ptr [esi], 0x80b730
// 0041be28  7409                 je 0x41be33
// 0041be2a  56                   push esi
// 0041be2b  e84a482800           call 0x6a067a
// 0041be30  83c404               add esp, 4
// 0041be33  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041be37  8bc6                 mov eax, esi
// 0041be39  5e                   pop esi
// 0041be3a  64890d00000000       mov dword ptr fs:[0], ecx
// 0041be41  83c410               add esp, 0x10
// 0041be44  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ??_G?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
