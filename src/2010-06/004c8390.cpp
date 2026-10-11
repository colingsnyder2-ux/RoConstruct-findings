// roc 2010-06 004c8390  unit: RBX::Network::Players::W4ChatOption::?$EnumDesc  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c8390
//
// 004c8390  8b442404             mov eax, dword ptr [esp + 4]
// 004c8394  83ec0c               sub esp, 0xc
// 004c8397  6a00                 push 0
// 004c8399  68408eb700           push 0xb78e40
// 004c839e  684090b700           push 0xb79040
// 004c83a3  6a00                 push 0
// 004c83a5  50                   push eax
// 004c83a6  e83f082e00           call 0x7a8bea
// 004c83ab  83c414               add esp, 0x14
// 004c83ae  85c0                 test eax, eax
// 004c83b0  751e                 jne 0x4c83d0
// 004c83b2  68540aa000           push 0xa00a54
// 004c83b7  8d4c2404             lea ecx, [esp + 4]
// 004c83bb  ff159ca89e00         call dword ptr [0x9ea89c]
// 004c83c1  689022b100           push 0xb12290
// 004c83c6  8d4c2404             lea ecx, [esp + 4]
// 004c83ca  51                   push ecx
// 004c83cb  e8e2052e00           call 0x7a89b2
// 004c83d0  83c40c               add esp, 0xc
// 004c83d3  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ??$polymorphic_cast@PAVInstance@RBX@@VDescribedBase@Reflection@2@@boost@@YAPAVInstance@RBX@@PAVDescribedBase@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
