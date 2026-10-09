// roc 2008-06 006000b0  unit: RBX::Tool  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006000b0
//
// 006000b0  6aff                 push -1
// 006000b2  6848807d00           push 0x7d8048
// 006000b7  64a100000000         mov eax, dword ptr fs:[0]
// 006000bd  50                   push eax
// 006000be  64892500000000       mov dword ptr fs:[0], esp
// 006000c5  51                   push ecx
// 006000c6  56                   push esi
// 006000c7  8bf1                 mov esi, ecx
// 006000c9  89742404             mov dword ptr [esp + 4], esi
// 006000cd  e8bef4ffff           call 0x5ff590
// 006000d2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006000da  e83137fcff           call 0x5c3810
// 006000df  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006000e3  89461c               mov dword ptr [esi + 0x1c], eax
// 006000e6  c706a41d8400         mov dword ptr [esi], 0x841da4
// 006000ec  c74610981d8400       mov dword ptr [esi + 0x10], 0x841d98
// 006000f3  c74614901d8400       mov dword ptr [esi + 0x14], 0x841d90
// 006000fa  c74620881d8400       mov dword ptr [esi + 0x20], 0x841d88
// 00600101  c74624781d8400       mov dword ptr [esi + 0x24], 0x841d78
// 00600108  c74644681d8400       mov dword ptr [esi + 0x44], 0x841d68
// 0060010f  c74664581d8400       mov dword ptr [esi + 0x64], 0x841d58
// 00600116  c78684000000481d8400 mov dword ptr [esi + 0x84], 0x841d48
// 00600120  c786a4000000381d8400 mov dword ptr [esi + 0xa4], 0x841d38
// 0060012a  c786c4000000281d8400 mov dword ptr [esi + 0xc4], 0x841d28
// 00600134  c78630010000201d8400 mov dword ptr [esi + 0x130], 0x841d20
// 0060013e  8bc6                 mov eax, esi
// 00600140  5e                   pop esi
// 00600141  64890d00000000       mov dword ptr fs:[0], ecx
// 00600148  83c410               add esp, 0x10
// 0060014b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
