// roc 2011-06 008f7170  unit: CXTPRibbonGroupControlPopup  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f7170
//
// 008f7170  8b442404             mov eax, dword ptr [esp + 4]
// 008f7174  57                   push edi
// 008f7175  8bf9                 mov edi, ecx
// 008f7177  85c0                 test eax, eax
// 008f7179  7c3f                 jl 0x8f71ba
// 008f717b  3b474c               cmp eax, dword ptr [edi + 0x4c]
// 008f717e  7d3a                 jge 0x8f71ba
// 008f7180  3b474c               cmp eax, dword ptr [edi + 0x4c]
// 008f7183  8d4f44               lea ecx, [edi + 0x44]
// 008f7186  7d36                 jge 0x8f71be
// 008f7188  8b5104               mov edx, dword ptr [ecx + 4]
// 008f718b  56                   push esi
// 008f718c  8b3482               mov esi, dword ptr [edx + eax*4]
// 008f718f  6a01                 push 1
// 008f7191  50                   push eax
// 008f7192  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 008f719c  e8df30f3ff           call 0x82a280
// 008f71a1  8b475c               mov eax, dword ptr [edi + 0x5c]
// 008f71a4  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 008f71aa  8b11                 mov edx, dword ptr [ecx]
// 008f71ac  8b4258               mov eax, dword ptr [edx + 0x58]
// 008f71af  56                   push esi
// 008f71b0  ffd0                 call eax
// 008f71b2  8bce                 mov ecx, esi
// 008f71b4  e82134f1ff           call 0x80a5da
// 008f71b9  5e                   pop esi
// 008f71ba  5f                   pop edi
// 008f71bb  c20400               ret 4
// 008f71be  e84731f1ff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAt@CXTPRibbonGroup@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp