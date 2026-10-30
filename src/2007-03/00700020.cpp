// roc 2007-03 00700020  unit: seg_00700000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00700020
//
// 00700020  8b442410             mov eax, dword ptr [esp + 0x10]
// 00700024  8b542408             mov edx, dword ptr [esp + 8]
// 00700028  56                   push esi
// 00700029  50                   push eax
// 0070002a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0070002e  8bf1                 mov esi, ecx
// 00700030  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00700034  51                   push ecx
// 00700035  52                   push edx
// 00700036  50                   push eax
// 00700037  8bce                 mov ecx, esi
// 00700039  e8a2feffff           call 0x6ffee0
// 0070003e  85c0                 test eax, eax
// 00700040  7509                 jne 0x70004b
// 00700042  b805400080           mov eax, 0x80004005
// 00700047  5e                   pop esi
// 00700048  c21400               ret 0x14
// 0070004b  833804               cmp dword ptr [eax], 4
// 0070004e  7409                 je 0x700059
// 00700050  b857000780           mov eax, 0x80070057
// 00700055  5e                   pop esi
// 00700056  c21400               ret 0x14
// 00700059  8b4808               mov ecx, dword ptr [eax + 8]
// 0070005c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00700060  8908                 mov dword ptr [eax], ecx
// 00700062  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00700065  50                   push eax
// 00700066  e8950bf8ff           call 0x680c00
// 0070006b  33c0                 xor eax, eax
// 0070006d  5e                   pop esi
// 0070006e  c21400               ret 0x14
// library xtp-11.2.2/Source\SkinFramework\XTPSkinManagerSchema.cpp (function ?GetColorProperty@CXTPSkinManagerSchema@@QAEJIHHHAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinManagerSchema.cpp
