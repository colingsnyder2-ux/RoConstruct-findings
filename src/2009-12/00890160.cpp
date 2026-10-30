// roc 2009-12 00890160  unit: CXTPToolBar::CControlButtonHide  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00890160
//
// 00890160  6aff                 push -1
// 00890162  68e8699600           push 0x9669e8
// 00890167  64a100000000         mov eax, dword ptr fs:[0]
// 0089016d  50                   push eax
// 0089016e  51                   push ecx
// 0089016f  56                   push esi
// 00890170  a10052b600           mov eax, dword ptr [0xb65200]
// 00890175  33c4                 xor eax, esp
// 00890177  50                   push eax
// 00890178  8d44240c             lea eax, [esp + 0xc]
// 0089017c  64a300000000         mov dword ptr fs:[0], eax
// 00890182  8bf1                 mov esi, ecx
// 00890184  89742408             mov dword ptr [esp + 8], esi
// 00890188  e89387f6ff           call 0x7f8920
// 0089018d  8bce                 mov ecx, esi
// 0089018f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00890197  c706b438a000         mov dword ptr [esi], 0xa038b4
// 0089019d  c746205438a000       mov dword ptr [esi + 0x20], 0xa03854
// 008901a4  e89f620900           call 0x926448
// 008901a9  c786fc00000001000000 mov dword ptr [esi + 0xfc], 1
// 008901b3  8bc6                 mov eax, esi
// 008901b5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008901b9  64890d00000000       mov dword ptr fs:[0], ecx
// 008901c0  59                   pop ecx
// 008901c1  5e                   pop esi
// 008901c2  83c410               add esp, 0x10
// 008901c5  c3                   ret 
// copied from an identical function in another client (function ??0CXTPControlButton@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlButton.cpp