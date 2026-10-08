// from server: 100% by auto
// roc 2009-06 0064c580  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c580
//
// 0064c580  8b4104               mov eax, dword ptr [ecx + 4]
// 0064c583  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0064c587  3b4104               cmp eax, dword ptr [ecx + 4]
// 0064c58a  1bc0                 sbb eax, eax
// 0064c58c  f7d8                 neg eax
// 0064c58e  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??Mconnection@signals@boost@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
