// roc 2011-06 006e1760  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1760
//
// 006e1760  64a100000000         mov eax, dword ptr fs:[0]
// 006e1766  8b542404             mov edx, dword ptr [esp + 4]
// 006e176a  6aff                 push -1
// 006e176c  68221b9d00           push 0x9d1b22
// 006e1771  50                   push eax
// 006e1772  64892500000000       mov dword ptr fs:[0], esp
// 006e1779  8b4108               mov eax, dword ptr [ecx + 8]
// 006e177c  83ec44               sub esp, 0x44
// 006e177f  56                   push esi
// 006e1780  beffffff3f           mov esi, 0x3fffffff
// 006e1785  2bf0                 sub esi, eax
// 006e1787  3bf2                 cmp esi, edx
// 006e1789  5e                   pop esi
// 006e178a  7358                 jae 0x6e17e4
// 006e178c  688457a600           push 0xa65784
// 006e1791  8d4c2404             lea ecx, [esp + 4]
// 006e1795  ff15c404a400         call dword ptr [0xa404c4]
// 006e179b  8d4c241c             lea ecx, [esp + 0x1c]
// 006e179f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 006e17a7  ff15600aa400         call dword ptr [0xa40a60]
// 006e17ad  8d0424               lea eax, [esp]
// 006e17b0  50                   push eax
// 006e17b1  8d4c242c             lea ecx, [esp + 0x2c]
// 006e17b5  c644245001           mov byte ptr [esp + 0x50], 1
// 006e17ba  c7442420c0b5a500     mov dword ptr [esp + 0x20], 0xa5b5c0
// 006e17c2  ff15c804a400         call dword ptr [0xa404c8]
// 006e17c8  687073b800           push 0xb87370
// 006e17cd  8d4c2420             lea ecx, [esp + 0x20]
// 006e17d1  51                   push ecx
// 006e17d2  c644245400           mov byte ptr [esp + 0x54], 0
// 006e17d7  c7442424ccb5a500     mov dword ptr [esp + 0x24], 0xa5b5cc
// 006e17df  e8c8981200           call 0x80b0ac
// 006e17e4  03c2                 add eax, edx
// 006e17e6  894108               mov dword ptr [ecx + 8], eax
// 006e17e9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006e17ed  64890d00000000       mov dword ptr fs:[0], ecx
// 006e17f4  83c450               add esp, 0x50
// 006e17f7  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Incsize@?$list@PAVFlagStand@RBX@@V?$allocator@PAVFlagStand@RBX@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
