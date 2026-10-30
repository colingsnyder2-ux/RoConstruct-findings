// roc 2009-12 00863400  unit: CXTPToolTipContext::COffice2007ToolTip  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00863400
//
// 00863400  6aff                 push -1
// 00863402  6814eb9500           push 0x95eb14
// 00863407  64a100000000         mov eax, dword ptr fs:[0]
// 0086340d  50                   push eax
// 0086340e  51                   push ecx
// 0086340f  56                   push esi
// 00863410  a10052b600           mov eax, dword ptr [0xb65200]
// 00863415  33c4                 xor eax, esp
// 00863417  50                   push eax
// 00863418  8d44240c             lea eax, [esp + 0xc]
// 0086341c  64a300000000         mov dword ptr fs:[0], eax
// 00863422  8bf1                 mov esi, ecx
// 00863424  89742408             mov dword ptr [esp + 8], esi
// 00863428  c7062ce69f00         mov dword ptr [esi], 0x9fe62c
// 0086342e  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00863434  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0086343c  85c0                 test eax, eax
// 0086343e  7412                 je 0x863452
// 00863440  8b08                 mov ecx, dword ptr [eax]
// 00863442  8b5108               mov edx, dword ptr [ecx + 8]
// 00863445  50                   push eax
// 00863446  ffd2                 call edx
// 00863448  c7869401000000000000 mov dword ptr [esi + 0x194], 0
// 00863452  8d8e40010000         lea ecx, [esi + 0x140]
// 00863458  c644241401           mov byte ptr [esp + 0x14], 1
// 0086345d  e8b40ef9ff           call 0x7f4316
// 00863462  8d8e38010000         lea ecx, [esi + 0x138]
// 00863468  c644241400           mov byte ptr [esp + 0x14], 0
// 0086346d  c70118229a00         mov dword ptr [ecx], 0x9a2218
// 00863473  e8b8bdbaff           call 0x40f230
// 00863478  8bce                 mov ecx, esi
// 0086347a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00863482  e849f9ffff           call 0x862dd0
// 00863487  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086348b  64890d00000000       mov dword ptr fs:[0], ecx
// 00863492  59                   pop ecx
// 00863493  5e                   pop esi
// 00863494  83c410               add esp, 0x10
// 00863497  c3                   ret 
// copied from an identical function in another client (function ??1CHTMLToolTip@CXTPToolTipContext@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp