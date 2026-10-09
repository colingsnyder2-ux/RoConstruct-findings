// roc 2008-06 00637c90  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637c90
//
// 00637c90  6aff                 push -1
// 00637c92  6838a27d00           push 0x7da238
// 00637c97  64a100000000         mov eax, dword ptr fs:[0]
// 00637c9d  50                   push eax
// 00637c9e  64892500000000       mov dword ptr fs:[0], esp
// 00637ca5  51                   push ecx
// 00637ca6  56                   push esi
// 00637ca7  8bf1                 mov esi, ecx
// 00637ca9  89742404             mov dword ptr [esp + 4], esi
// 00637cad  e8ced8ffff           call 0x635580
// 00637cb2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00637cba  e891eeffff           call 0x636b50
// 00637cbf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00637cc3  89461c               mov dword ptr [esi + 0x1c], eax
// 00637cc6  c7065c8e8400         mov dword ptr [esi], 0x848e5c
// 00637ccc  c74610508e8400       mov dword ptr [esi + 0x10], 0x848e50
// 00637cd3  c74614488e8400       mov dword ptr [esi + 0x14], 0x848e48
// 00637cda  c74620408e8400       mov dword ptr [esi + 0x20], 0x848e40
// 00637ce1  c74624308e8400       mov dword ptr [esi + 0x24], 0x848e30
// 00637ce8  c74644208e8400       mov dword ptr [esi + 0x44], 0x848e20
// 00637cef  c74664108e8400       mov dword ptr [esi + 0x64], 0x848e10
// 00637cf6  c78684000000008e8400 mov dword ptr [esi + 0x84], 0x848e00
// 00637d00  c786a4000000f08d8400 mov dword ptr [esi + 0xa4], 0x848df0
// 00637d0a  c786c4000000e08d8400 mov dword ptr [esi + 0xc4], 0x848de0
// 00637d14  8bc6                 mov eax, esi
// 00637d16  5e                   pop esi
// 00637d17  64890d00000000       mov dword ptr fs:[0], ecx
// 00637d1e  83c410               add esp, 0x10
// 00637d21  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
