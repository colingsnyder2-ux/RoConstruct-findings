// from server: 100% by auto
// roc 2007-08 00728560  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728560
//
// 00728560  8b542404             mov edx, dword ptr [esp + 4]
// 00728564  8bc1                 mov eax, ecx
// 00728566  8b4a04               mov ecx, dword ptr [edx + 4]
// 00728569  894804               mov dword ptr [eax + 4], ecx
// 0072856c  8b4a08               mov ecx, dword ptr [edx + 8]
// 0072856f  85c9                 test ecx, ecx
// 00728571  894808               mov dword ptr [eax + 8], ecx
// 00728574  740e                 je 0x728584
// 00728576  56                   push esi
// 00728577  83c104               add ecx, 4
// 0072857a  be01000000           mov esi, 1
// 0072857f  f00fc131             lock xadd dword ptr [ecx], esi
// 00728583  5e                   pop esi
// 00728584  8a520c               mov dl, byte ptr [edx + 0xc]
// 00728587  88500c               mov byte ptr [eax + 0xc], dl
// 0072858a  c6401000             mov byte ptr [eax + 0x10], 0
// 0072858e  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??0scoped_connection@signals@boost@@QAE@ABVconnection@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
