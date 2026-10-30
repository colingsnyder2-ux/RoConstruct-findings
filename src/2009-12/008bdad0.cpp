// roc 2009-12 008bdad0  unit: IIPAVCRgn::?$CMap  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bdad0
//
// 008bdad0  6aff                 push -1
// 008bdad2  68e43b9600           push 0x963be4
// 008bdad7  64a100000000         mov eax, dword ptr fs:[0]
// 008bdadd  50                   push eax
// 008bdade  51                   push ecx
// 008bdadf  56                   push esi
// 008bdae0  a10052b600           mov eax, dword ptr [0xb65200]
// 008bdae5  33c4                 xor eax, esp
// 008bdae7  50                   push eax
// 008bdae8  8d44240c             lea eax, [esp + 0xc]
// 008bdaec  64a300000000         mov dword ptr fs:[0], eax
// 008bdaf2  8bf1                 mov esi, ecx
// 008bdaf4  89742408             mov dword ptr [esp + 8], esi
// 008bdaf8  c7067487a000         mov dword ptr [esi], 0xa08774
// 008bdafe  8d8e6c010000         lea ecx, [esi + 0x16c]
// 008bdb04  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008bdb0c  e83ffeffff           call 0x8bd950
// 008bdb11  8d8ed0000000         lea ecx, [esi + 0xd0]
// 008bdb17  c644241401           mov byte ptr [esp + 0x14], 1
// 008bdb1c  e8effdffff           call 0x8bd910
// 008bdb21  8d4e58               lea ecx, [esi + 0x58]
// 008bdb24  c644241400           mov byte ptr [esp + 0x14], 0
// 008bdb29  e8c2e5ffff           call 0x8bc0f0
// 008bdb2e  8d4e04               lea ecx, [esi + 4]
// 008bdb31  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008bdb39  e8b2e5ffff           call 0x8bc0f0
// 008bdb3e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008bdb42  64890d00000000       mov dword ptr fs:[0], ecx
// 008bdb49  59                   pop ecx
// 008bdb4a  5e                   pop esi
// 008bdb4b  83c410               add esp, 0x10
// 008bdb4e  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDockingPaneContext@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp