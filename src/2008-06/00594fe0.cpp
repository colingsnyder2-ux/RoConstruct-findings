// from server: 100% by auto
// roc 2008-06 00594fe0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594fe0
//
// 00594fe0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00594fe4  83ec08               sub esp, 8
// 00594fe7  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 00594feb  56                   push esi
// 00594fec  8b742414             mov esi, dword ptr [esp + 0x14]
// 00594ff0  7511                 jne 0x595003
// 00594ff2  8b4604               mov eax, dword ptr [esi + 4]
// 00594ff5  8b16                 mov edx, dword ptr [esi]
// 00594ff7  50                   push eax
// 00594ff8  52                   push edx
// 00594ff9  8d44240c             lea eax, [esp + 0xc]
// 00594ffd  50                   push eax
// 00594ffe  e84dffffff           call 0x594f50
// 00595003  56                   push esi
// 00595004  e871b61000           call 0x6a067a
// 00595009  83c404               add esp, 4
// 0059500c  5e                   pop esi
// 0059500d  83c408               add esp, 8
// 00595010  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?signal_disconnected@trackable@signals@boost@@CAXPAX0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
