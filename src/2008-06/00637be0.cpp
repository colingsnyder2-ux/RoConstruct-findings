// roc 2008-06 00637be0  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637be0
//
// 00637be0  6aff                 push -1
// 00637be2  6818a27d00           push 0x7da218
// 00637be7  64a100000000         mov eax, dword ptr fs:[0]
// 00637bed  50                   push eax
// 00637bee  64892500000000       mov dword ptr fs:[0], esp
// 00637bf5  51                   push ecx
// 00637bf6  56                   push esi
// 00637bf7  8bf1                 mov esi, ecx
// 00637bf9  89742404             mov dword ptr [esp + 4], esi
// 00637bfd  e80ed7ffff           call 0x635310
// 00637c02  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00637c0a  e801eeffff           call 0x636a10
// 00637c0f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00637c13  89461c               mov dword ptr [esi + 0x1c], eax
// 00637c16  c7069c8d8400         mov dword ptr [esi], 0x848d9c
// 00637c1c  c74610908d8400       mov dword ptr [esi + 0x10], 0x848d90
// 00637c23  c74614888d8400       mov dword ptr [esi + 0x14], 0x848d88
// 00637c2a  c74620808d8400       mov dword ptr [esi + 0x20], 0x848d80
// 00637c31  c74624708d8400       mov dword ptr [esi + 0x24], 0x848d70
// 00637c38  c74644608d8400       mov dword ptr [esi + 0x44], 0x848d60
// 00637c3f  c74664508d8400       mov dword ptr [esi + 0x64], 0x848d50
// 00637c46  c78684000000408d8400 mov dword ptr [esi + 0x84], 0x848d40
// 00637c50  c786a4000000308d8400 mov dword ptr [esi + 0xa4], 0x848d30
// 00637c5a  c786c4000000208d8400 mov dword ptr [esi + 0xc4], 0x848d20
// 00637c64  8bc6                 mov eax, esi
// 00637c66  5e                   pop esi
// 00637c67  64890d00000000       mov dword ptr fs:[0], ecx
// 00637c6e  83c410               add esp, 0x10
// 00637c71  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
