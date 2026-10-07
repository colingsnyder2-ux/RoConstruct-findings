// roc 2007-08 00728220  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728220
//
// 00728220  8b542404             mov edx, dword ptr [esp + 4]
// 00728224  8bc1                 mov eax, ecx
// 00728226  8b4a04               mov ecx, dword ptr [edx + 4]
// 00728229  894804               mov dword ptr [eax + 4], ecx
// 0072822c  8b4a08               mov ecx, dword ptr [edx + 8]
// 0072822f  85c9                 test ecx, ecx
// 00728231  894808               mov dword ptr [eax + 8], ecx
// 00728234  740e                 je 0x728244
// 00728236  56                   push esi
// 00728237  83c104               add ecx, 4
// 0072823a  be01000000           mov esi, 1
// 0072823f  f00fc131             lock xadd dword ptr [ecx], esi
// 00728243  5e                   pop esi
// 00728244  8a520c               mov dl, byte ptr [edx + 0xc]
// 00728247  88500c               mov byte ptr [eax + 0xc], dl
// 0072824a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??0connection@signals@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
