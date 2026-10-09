// roc 2008-06 00637d40  unit: RBX::N$1?sDoubleValue::V?$Value::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637d40
//
// 00637d40  6aff                 push -1
// 00637d42  6858a27d00           push 0x7da258
// 00637d47  64a100000000         mov eax, dword ptr fs:[0]
// 00637d4d  50                   push eax
// 00637d4e  64892500000000       mov dword ptr fs:[0], esp
// 00637d55  51                   push ecx
// 00637d56  56                   push esi
// 00637d57  8bf1                 mov esi, ecx
// 00637d59  89742404             mov dword ptr [esp + 4], esi
// 00637d5d  e89edaffff           call 0x635800
// 00637d62  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00637d6a  e821efffff           call 0x636c90
// 00637d6f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00637d73  89461c               mov dword ptr [esi + 0x1c], eax
// 00637d76  c7061c8f8400         mov dword ptr [esi], 0x848f1c
// 00637d7c  c74610108f8400       mov dword ptr [esi + 0x10], 0x848f10
// 00637d83  c74614088f8400       mov dword ptr [esi + 0x14], 0x848f08
// 00637d8a  c74620008f8400       mov dword ptr [esi + 0x20], 0x848f00
// 00637d91  c74624f08e8400       mov dword ptr [esi + 0x24], 0x848ef0
// 00637d98  c74644e08e8400       mov dword ptr [esi + 0x44], 0x848ee0
// 00637d9f  c74664d08e8400       mov dword ptr [esi + 0x64], 0x848ed0
// 00637da6  c78684000000c08e8400 mov dword ptr [esi + 0x84], 0x848ec0
// 00637db0  c786a4000000b08e8400 mov dword ptr [esi + 0xa4], 0x848eb0
// 00637dba  c786c4000000a08e8400 mov dword ptr [esi + 0xc4], 0x848ea0
// 00637dc4  8bc6                 mov eax, esi
// 00637dc6  5e                   pop esi
// 00637dc7  64890d00000000       mov dword ptr fs:[0], ecx
// 00637dce  83c410               add esp, 0x10
// 00637dd1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
