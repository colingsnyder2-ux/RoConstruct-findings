// roc 2008-06 00637e50  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637e50
//
// 00637e50  6aff                 push -1
// 00637e52  6878a27d00           push 0x7da278
// 00637e57  64a100000000         mov eax, dword ptr fs:[0]
// 00637e5d  50                   push eax
// 00637e5e  64892500000000       mov dword ptr fs:[0], esp
// 00637e65  51                   push ecx
// 00637e66  56                   push esi
// 00637e67  8bf1                 mov esi, ecx
// 00637e69  89742404             mov dword ptr [esp + 4], esi
// 00637e6d  e8eedbffff           call 0x635a60
// 00637e72  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00637e7a  e851efffff           call 0x636dd0
// 00637e7f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00637e83  89461c               mov dword ptr [esi + 0x1c], eax
// 00637e86  c706dc8f8400         mov dword ptr [esi], 0x848fdc
// 00637e8c  c74610d08f8400       mov dword ptr [esi + 0x10], 0x848fd0
// 00637e93  c74614c88f8400       mov dword ptr [esi + 0x14], 0x848fc8
// 00637e9a  c74620c08f8400       mov dword ptr [esi + 0x20], 0x848fc0
// 00637ea1  c74624b08f8400       mov dword ptr [esi + 0x24], 0x848fb0
// 00637ea8  c74644a08f8400       mov dword ptr [esi + 0x44], 0x848fa0
// 00637eaf  c74664908f8400       mov dword ptr [esi + 0x64], 0x848f90
// 00637eb6  c78684000000808f8400 mov dword ptr [esi + 0x84], 0x848f80
// 00637ec0  c786a4000000708f8400 mov dword ptr [esi + 0xa4], 0x848f70
// 00637eca  c786c4000000608f8400 mov dword ptr [esi + 0xc4], 0x848f60
// 00637ed4  8bc6                 mov eax, esi
// 00637ed6  5e                   pop esi
// 00637ed7  64890d00000000       mov dword ptr fs:[0], ecx
// 00637ede  83c410               add esp, 0x10
// 00637ee1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
