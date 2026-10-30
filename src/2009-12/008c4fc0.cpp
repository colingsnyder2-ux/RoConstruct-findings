// roc 2009-12 008c4fc0  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c4fc0
//
// 008c4fc0  6aff                 push -1
// 008c4fc2  6840449600           push 0x964440
// 008c4fc7  64a100000000         mov eax, dword ptr fs:[0]
// 008c4fcd  50                   push eax
// 008c4fce  51                   push ecx
// 008c4fcf  56                   push esi
// 008c4fd0  a10052b600           mov eax, dword ptr [0xb65200]
// 008c4fd5  33c4                 xor eax, esp
// 008c4fd7  50                   push eax
// 008c4fd8  8d44240c             lea eax, [esp + 0xc]
// 008c4fdc  64a300000000         mov dword ptr fs:[0], eax
// 008c4fe2  8bf1                 mov esi, ecx
// 008c4fe4  89742408             mov dword ptr [esp + 8], esi
// 008c4fe8  c7062496a000         mov dword ptr [esi], 0xa09624
// 008c4fee  8d8ef8010000         lea ecx, [esi + 0x1f8]
// 008c4ff4  c744241404000000     mov dword ptr [esp + 0x14], 4
// 008c4ffc  e833160600           call 0x926634
// 008c5001  8d8ea4010000         lea ecx, [esi + 0x1a4]
// 008c5007  c644241403           mov byte ptr [esp + 0x14], 3
// 008c500c  e823160600           call 0x926634
// 008c5011  8d8e50010000         lea ecx, [esi + 0x150]
// 008c5017  c644241402           mov byte ptr [esp + 0x14], 2
// 008c501c  e813160600           call 0x926634
// 008c5021  8d8efc000000         lea ecx, [esi + 0xfc]
// 008c5027  c644241401           mov byte ptr [esp + 0x14], 1
// 008c502c  e803160600           call 0x926634
// 008c5031  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008c5037  c644241400           mov byte ptr [esp + 0x14], 0
// 008c503c  e80ffaffff           call 0x8c4a50
// 008c5041  8bce                 mov ecx, esi
// 008c5043  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008c504b  e80c180600           call 0x92685c
// 008c5050  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c5054  64890d00000000       mov dword ptr fs:[0], ecx
// 008c505b  59                   pop ecx
// 008c505c  5e                   pop esi
// 008c505d  83c410               add esp, 0x10
// 008c5060  c3                   ret 
// copied from an identical function in another client (function ??1CXTPCustomizeToolbarsPage@@UAE@XZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeToolbarsPage.cpp