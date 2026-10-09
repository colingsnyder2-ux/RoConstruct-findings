// roc 2008-06 005fbbf0  unit: RBX::LocalBackpackItem  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fbbf0
//
// 005fbbf0  56                   push esi
// 005fbbf1  8bf1                 mov esi, ecx
// 005fbbf3  e8783bfdff           call 0x5cf770
// 005fbbf8  c7062c128400         mov dword ptr [esi], 0x84122c
// 005fbbfe  c746101c128400       mov dword ptr [esi + 0x10], 0x84121c
// 005fbc05  c7461414128400       mov dword ptr [esi + 0x14], 0x841214
// 005fbc0c  c746200c128400       mov dword ptr [esi + 0x20], 0x84120c
// 005fbc13  c74624fc118400       mov dword ptr [esi + 0x24], 0x8411fc
// 005fbc1a  c74644ec118400       mov dword ptr [esi + 0x44], 0x8411ec
// 005fbc21  c74664dc118400       mov dword ptr [esi + 0x64], 0x8411dc
// 005fbc28  c78684000000cc118400 mov dword ptr [esi + 0x84], 0x8411cc
// 005fbc32  c786a4000000bc118400 mov dword ptr [esi + 0xa4], 0x8411bc
// 005fbc3c  c786c4000000ac118400 mov dword ptr [esi + 0xc4], 0x8411ac
// 005fbc46  c78630010000a4118400 mov dword ptr [esi + 0x130], 0x8411a4
// 005fbc50  8bc6                 mov eax, esi
// 005fbc52  5e                   pop esi
// 005fbc53  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
