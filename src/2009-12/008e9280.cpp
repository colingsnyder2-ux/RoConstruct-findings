// roc 2009-12 008e9280  unit: CXTPRibbonGroupOption  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9280
//
// 008e9280  6aff                 push -1
// 008e9282  68e8639600           push 0x9663e8
// 008e9287  64a100000000         mov eax, dword ptr fs:[0]
// 008e928d  50                   push eax
// 008e928e  51                   push ecx
// 008e928f  56                   push esi
// 008e9290  a10052b600           mov eax, dword ptr [0xb65200]
// 008e9295  33c4                 xor eax, esp
// 008e9297  50                   push eax
// 008e9298  8d44240c             lea eax, [esp + 0xc]
// 008e929c  64a300000000         mov dword ptr fs:[0], eax
// 008e92a2  8bf1                 mov esi, ecx
// 008e92a4  89742408             mov dword ptr [esp + 8], esi
// 008e92a8  e82318f5ff           call 0x83aad0
// 008e92ad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e92b1  6a08                 push 8
// 008e92b3  8bce                 mov ecx, esi
// 008e92b5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008e92bd  c706d4cca000         mov dword ptr [esi], 0xa0ccd4
// 008e92c3  c7462074cca000       mov dword ptr [esi + 0x20], 0xa0cc74
// 008e92ca  898658010000         mov dword ptr [esi + 0x158], eax
// 008e92d0  898684010000         mov dword ptr [esi + 0x184], eax
// 008e92d6  e885cdf0ff           call 0x7f6060
// 008e92db  6a00                 push 0
// 008e92dd  c786fc00000003000000 mov dword ptr [esi + 0xfc], 3
// 008e92e7  e8a486f5ff           call 0x841990
// 008e92ec  898678010000         mov dword ptr [esi + 0x178], eax
// 008e92f2  83c404               add esp, 4
// 008e92f5  8bc6                 mov eax, esi
// 008e92f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e92fb  64890d00000000       mov dword ptr fs:[0], ecx
// 008e9302  59                   pop ecx
// 008e9303  5e                   pop esi
// 008e9304  83c410               add esp, 0x10
// 008e9307  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPRibbonGroupControlPopup@@QAE@PAVCXTPRibbonGroup@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp