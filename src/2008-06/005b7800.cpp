// roc 2008-06 005b7800  unit: RBX::Soundscape::SoundChannel  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7800
//
// 005b7800  c701cc778300         mov dword ptr [ecx], 0x8377cc
// 005b7806  c74110bc778300       mov dword ptr [ecx + 0x10], 0x8377bc
// 005b780d  c74114b4778300       mov dword ptr [ecx + 0x14], 0x8377b4
// 005b7814  c74120ac778300       mov dword ptr [ecx + 0x20], 0x8377ac
// 005b781b  c741249c778300       mov dword ptr [ecx + 0x24], 0x83779c
// 005b7822  c741448c778300       mov dword ptr [ecx + 0x44], 0x83778c
// 005b7829  c741647c778300       mov dword ptr [ecx + 0x64], 0x83777c
// 005b7830  c781840000006c778300 mov dword ptr [ecx + 0x84], 0x83776c
// 005b783a  c781a40000005c778300 mov dword ptr [ecx + 0xa4], 0x83775c
// 005b7844  c781c40000004c778300 mov dword ptr [ecx + 0xc4], 0x83774c
// 005b784e  c7813001000040778300 mov dword ptr [ecx + 0x130], 0x837740
// 005b7858  e923feffff           jmp 0x5b7680
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
