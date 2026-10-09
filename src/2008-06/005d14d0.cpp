// roc 2008-06 005d14d0  unit: RBX::HopperBin  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d14d0
//
// 005d14d0  6aff                 push -1
// 005d14d2  6898577d00           push 0x7d5798
// 005d14d7  64a100000000         mov eax, dword ptr fs:[0]
// 005d14dd  50                   push eax
// 005d14de  64892500000000       mov dword ptr fs:[0], esp
// 005d14e5  51                   push ecx
// 005d14e6  56                   push esi
// 005d14e7  8bf1                 mov esi, ecx
// 005d14e9  89742404             mov dword ptr [esp + 4], esi
// 005d14ed  e87efcffff           call 0x5d1170
// 005d14f2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d14fa  e821efffff           call 0x5d0420
// 005d14ff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d1503  89461c               mov dword ptr [esi + 0x1c], eax
// 005d1506  c70654b58300         mov dword ptr [esi], 0x83b554
// 005d150c  c7461048b58300       mov dword ptr [esi + 0x10], 0x83b548
// 005d1513  c7461440b58300       mov dword ptr [esi + 0x14], 0x83b540
// 005d151a  c7462038b58300       mov dword ptr [esi + 0x20], 0x83b538
// 005d1521  c7462428b58300       mov dword ptr [esi + 0x24], 0x83b528
// 005d1528  c7464418b58300       mov dword ptr [esi + 0x44], 0x83b518
// 005d152f  c7466408b58300       mov dword ptr [esi + 0x64], 0x83b508
// 005d1536  c78684000000f8b48300 mov dword ptr [esi + 0x84], 0x83b4f8
// 005d1540  c786a4000000e8b48300 mov dword ptr [esi + 0xa4], 0x83b4e8
// 005d154a  c786c4000000d8b48300 mov dword ptr [esi + 0xc4], 0x83b4d8
// 005d1554  c78630010000d0b48300 mov dword ptr [esi + 0x130], 0x83b4d0
// 005d155e  8bc6                 mov eax, esi
// 005d1560  5e                   pop esi
// 005d1561  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1568  83c410               add esp, 0x10
// 005d156b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
