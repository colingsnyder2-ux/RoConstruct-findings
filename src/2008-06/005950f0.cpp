// roc 2008-06 005950f0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005950f0
//
// 005950f0  8b542404             mov edx, dword ptr [esp + 4]
// 005950f4  8bc1                 mov eax, ecx
// 005950f6  8b4a04               mov ecx, dword ptr [edx + 4]
// 005950f9  894804               mov dword ptr [eax + 4], ecx
// 005950fc  8b4a08               mov ecx, dword ptr [edx + 8]
// 005950ff  894808               mov dword ptr [eax + 8], ecx
// 00595102  85c9                 test ecx, ecx
// 00595104  740e                 je 0x595114
// 00595106  56                   push esi
// 00595107  83c104               add ecx, 4
// 0059510a  be01000000           mov esi, 1
// 0059510f  f00fc131             lock xadd dword ptr [ecx], esi
// 00595113  5e                   pop esi
// 00595114  8a520c               mov dl, byte ptr [edx + 0xc]
// 00595117  88500c               mov byte ptr [eax + 0xc], dl
// 0059511a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??0connection@signals@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
