// roc 2008-06 0041b830  unit: VDHTMLWindow::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b830
//
// 0041b830  6aff                 push -1
// 0041b832  683bf47b00           push 0x7bf43b
// 0041b837  64a100000000         mov eax, dword ptr fs:[0]
// 0041b83d  50                   push eax
// 0041b83e  64892500000000       mov dword ptr fs:[0], esp
// 0041b845  51                   push ecx
// 0041b846  56                   push esi
// 0041b847  6a38                 push 0x38
// 0041b849  8bf1                 mov esi, ecx
// 0041b84b  e8d0502800           call 0x6a0920
// 0041b850  83c404               add esp, 4
// 0041b853  89442404             mov dword ptr [esp + 4], eax
// 0041b857  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041b85f  85c0                 test eax, eax
// 0041b861  741f                 je 0x41b882
// 0041b863  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0041b867  56                   push esi
// 0041b868  51                   push ecx
// 0041b869  8bc8                 mov ecx, eax
// 0041b86b  e880fbffff           call 0x41b3f0
// 0041b870  5e                   pop esi
// 0041b871  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041b875  64890d00000000       mov dword ptr fs:[0], ecx
// 0041b87c  83c410               add esp, 0x10
// 0041b87f  c20400               ret 4
// 0041b882  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041b886  33c0                 xor eax, eax
// 0041b888  5e                   pop esi
// 0041b889  64890d00000000       mov dword ptr fs:[0], ecx
// 0041b890  83c410               add esp, 0x10
// 0041b893  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
