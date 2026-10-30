// roc 2009-12 008f41f0  unit: CXTCaptionButtonTheme  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f41f0
//
// 008f41f0  6aff                 push -1
// 008f41f2  68a86c9600           push 0x966ca8
// 008f41f7  64a100000000         mov eax, dword ptr fs:[0]
// 008f41fd  50                   push eax
// 008f41fe  51                   push ecx
// 008f41ff  56                   push esi
// 008f4200  a10052b600           mov eax, dword ptr [0xb65200]
// 008f4205  33c4                 xor eax, esp
// 008f4207  50                   push eax
// 008f4208  8d44240c             lea eax, [esp + 0xc]
// 008f420c  64a300000000         mov dword ptr fs:[0], eax
// 008f4212  8bf1                 mov esi, ecx
// 008f4214  89742408             mov dword ptr [esp + 8], esi
// 008f4218  e873fcffff           call 0x8f3e90
// 008f421d  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008f4223  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008f422b  c706d4fba000         mov dword ptr [esi], 0xa0fbd4
// 008f4231  e8daabf3ff           call 0x82ee10
// 008f4236  8d8e98000000         lea ecx, [esi + 0x98]
// 008f423c  e8cfabf3ff           call 0x82ee10
// 008f4241  8d8ea4000000         lea ecx, [esi + 0xa4]
// 008f4247  e8c4abf3ff           call 0x82ee10
// 008f424c  8d8eb0000000         lea ecx, [esi + 0xb0]
// 008f4252  e8b9abf3ff           call 0x82ee10
// 008f4257  8d8ebc000000         lea ecx, [esi + 0xbc]
// 008f425d  e8aeabf3ff           call 0x82ee10
// 008f4262  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008f4266  898680000000         mov dword ptr [esi + 0x80], eax
// 008f426c  b801000000           mov eax, 1
// 008f4271  898684000000         mov dword ptr [esi + 0x84], eax
// 008f4277  898688000000         mov dword ptr [esi + 0x88], eax
// 008f427d  c7461800000000       mov dword ptr [esi + 0x18], 0
// 008f4284  8bc6                 mov eax, esi
// 008f4286  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f428a  64890d00000000       mov dword ptr fs:[0], ecx
// 008f4291  59                   pop ecx
// 008f4292  5e                   pop esi
// 008f4293  83c410               add esp, 0x10
// 008f4296  c20400               ret 4
// copied from an identical function in another client (function ??0CXTButtonThemeOfficeXP@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Controls/XTButtonTheme.cpp