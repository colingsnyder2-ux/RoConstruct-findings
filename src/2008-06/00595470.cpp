// from server: 100% by auto
// roc 2008-06 00595470  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595470
//
// 00595470  8b542404             mov edx, dword ptr [esp + 4]
// 00595474  8bc1                 mov eax, ecx
// 00595476  8b4a04               mov ecx, dword ptr [edx + 4]
// 00595479  894804               mov dword ptr [eax + 4], ecx
// 0059547c  8b4a08               mov ecx, dword ptr [edx + 8]
// 0059547f  894808               mov dword ptr [eax + 8], ecx
// 00595482  85c9                 test ecx, ecx
// 00595484  740e                 je 0x595494
// 00595486  56                   push esi
// 00595487  83c104               add ecx, 4
// 0059548a  be01000000           mov esi, 1
// 0059548f  f00fc131             lock xadd dword ptr [ecx], esi
// 00595493  5e                   pop esi
// 00595494  8a520c               mov dl, byte ptr [edx + 0xc]
// 00595497  88500c               mov byte ptr [eax + 0xc], dl
// 0059549a  c6401000             mov byte ptr [eax + 0x10], 0
// 0059549e  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??0scoped_connection@signals@boost@@QAE@ABVconnection@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
