// from server: 100% by auto
// roc 2008-06 00594de0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594de0
//
// 00594de0  8b4104               mov eax, dword ptr [ecx + 4]
// 00594de3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00594de7  3b4104               cmp eax, dword ptr [ecx + 4]
// 00594dea  1bc0                 sbb eax, eax
// 00594dec  f7d8                 neg eax
// 00594dee  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??Mconnection@signals@boost@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
