// roc 2009-12 008112a0  unit: CXTPToolBar::CControlButtonCustomize  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008112a0
//
// 008112a0  6aff                 push -1
// 008112a2  68e8639600           push 0x9663e8
// 008112a7  64a100000000         mov eax, dword ptr fs:[0]
// 008112ad  50                   push eax
// 008112ae  51                   push ecx
// 008112af  56                   push esi
// 008112b0  a10052b600           mov eax, dword ptr [0xb65200]
// 008112b5  33c4                 xor eax, esp
// 008112b7  50                   push eax
// 008112b8  8d44240c             lea eax, [esp + 0xc]
// 008112bc  64a300000000         mov dword ptr fs:[0], eax
// 008112c2  8bf1                 mov esi, ecx
// 008112c4  89742408             mov dword ptr [esp + 8], esi
// 008112c8  e803980200           call 0x83aad0
// 008112cd  33c0                 xor eax, eax
// 008112cf  50                   push eax
// 008112d0  89442418             mov dword ptr [esp + 0x18], eax
// 008112d4  c706ac369f00         mov dword ptr [esi], 0x9f36ac
// 008112da  c746204c369f00       mov dword ptr [esi + 0x20], 0x9f364c
// 008112e1  c786fc00000003000000 mov dword ptr [esi + 0xfc], 3
// 008112eb  898684010000         mov dword ptr [esi + 0x184], eax
// 008112f1  c786d40000001c000000 mov dword ptr [esi + 0xd4], 0x1c
// 008112fb  e890060300           call 0x841990
// 00811300  898678010000         mov dword ptr [esi + 0x178], eax
// 00811306  83c404               add esp, 4
// 00811309  8bc6                 mov eax, esi
// 0081130b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081130f  64890d00000000       mov dword ptr fs:[0], ecx
// 00811316  59                   pop ecx
// 00811317  5e                   pop esi
// 00811318  83c410               add esp, 0x10
// 0081131b  c3                   ret 
// copied from an identical function in another client (function ??0CControlButtonExpand@CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp