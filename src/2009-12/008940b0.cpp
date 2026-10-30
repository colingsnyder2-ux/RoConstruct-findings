// roc 2009-12 008940b0  unit: CXTPMenuBarMDIMenus  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008940b0
//
// 008940b0  6aff                 push -1
// 008940b2  687a6a9600           push 0x966a7a
// 008940b7  64a100000000         mov eax, dword ptr fs:[0]
// 008940bd  50                   push eax
// 008940be  51                   push ecx
// 008940bf  a10052b600           mov eax, dword ptr [0xb65200]
// 008940c4  33c4                 xor eax, esp
// 008940c6  50                   push eax
// 008940c7  8d442408             lea eax, [esp + 8]
// 008940cb  64a300000000         mov dword ptr fs:[0], eax
// 008940d1  68c4010000           push 0x1c4
// 008940d6  e885f7f5ff           call 0x7f3860
// 008940db  83c404               add esp, 4
// 008940de  89442404             mov dword ptr [esp + 4], eax
// 008940e2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008940ea  85c0                 test eax, eax
// 008940ec  7417                 je 0x894105
// 008940ee  8bc8                 mov ecx, eax
// 008940f0  e87bfaffff           call 0x893b70
// 008940f5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008940f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00894100  59                   pop ecx
// 00894101  83c410               add esp, 0x10
// 00894104  c3                   ret 
// 00894105  33c0                 xor eax, eax
// 00894107  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0089410b  64890d00000000       mov dword ptr fs:[0], ecx
// 00894112  59                   pop ecx
// 00894113  83c410               add esp, 0x10
// 00894116  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPMenuBar@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp