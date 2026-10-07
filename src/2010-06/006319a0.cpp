// roc 2010-06 006319a0  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006319a0
//
// 006319a0  8b4104               mov eax, dword ptr [ecx + 4]
// 006319a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006319a7  3b4104               cmp eax, dword ptr [ecx + 4]
// 006319aa  1bc0                 sbb eax, eax
// 006319ac  f7d8                 neg eax
// 006319ae  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??Mconnection@signals@boost@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
