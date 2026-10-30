// roc 2007-08 005c3bf0  unit: boost::signals::Vconnection::?$sp_counted_impl_p  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3bf0
//
// 005c3bf0  6aff                 push -1
// 005c3bf2  68080b7500           push 0x750b08
// 005c3bf7  64a100000000         mov eax, dword ptr fs:[0]
// 005c3bfd  50                   push eax
// 005c3bfe  64892500000000       mov dword ptr fs:[0], esp
// 005c3c05  83ec10               sub esp, 0x10
// 005c3c08  56                   push esi
// 005c3c09  8b742428             mov esi, dword ptr [esp + 0x28]
// 005c3c0d  85f6                 test esi, esi
// 005c3c0f  c744240400000000     mov dword ptr [esp + 4], 0
// 005c3c17  742c                 je 0x5c3c45
// 005c3c19  8b0e                 mov ecx, dword ptr [esi]
// 005c3c1b  85c9                 test ecx, ecx
// 005c3c1d  7409                 je 0x5c3c28
// 005c3c1f  8b01                 mov eax, dword ptr [ecx]
// 005c3c21  8b5004               mov edx, dword ptr [eax + 4]
// 005c3c24  ffd2                 call edx
// 005c3c26  eb05                 jmp 0x5c3c2d
// 005c3c28  b8c8278800           mov eax, 0x8827c8
// 005c3c2d  6838448800           push 0x884438
// 005c3c32  8bc8                 mov ecx, eax
// 005c3c34  ff1508e77700         call dword ptr [0x77e708]
// 005c3c3a  84c0                 test al, al
// 005c3c3c  7407                 je 0x5c3c45
// 005c3c3e  8b0e                 mov ecx, dword ptr [esi]
// 005c3c40  83c104               add ecx, 4
// 005c3c43  7529                 jne 0x5c3c6e
// 005c3c45  68046e7800           push 0x786e04
// 005c3c4a  8d4c240c             lea ecx, [esp + 0xc]
// 005c3c4e  ff1510e77700         call dword ptr [0x77e710]
// 005c3c54  c7442408fc6d7800     mov dword ptr [esp + 8], 0x786dfc
// 005c3c5c  8d442408             lea eax, [esp + 8]
// 005c3c60  50                   push eax
// 005c3c61  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005c3c69  e8e2dbe4ff           call 0x411850
// 005c3c6e  8b11                 mov edx, dword ptr [ecx]
// 005c3c70  8b442424             mov eax, dword ptr [esp + 0x24]
// 005c3c74  8910                 mov dword ptr [eax], edx
// 005c3c76  8b4904               mov ecx, dword ptr [ecx + 4]
// 005c3c79  85c9                 test ecx, ecx
// 005c3c7b  894804               mov dword ptr [eax + 4], ecx
// 005c3c7e  740c                 je 0x5c3c8c
// 005c3c80  83c104               add ecx, 4
// 005c3c83  ba01000000           mov edx, 1
// 005c3c88  f00fc111             lock xadd dword ptr [ecx], edx
// 005c3c8c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c3c90  5e                   pop esi
// 005c3c91  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3c98  83c41c               add esp, 0x1c
// 005c3c9b  c3                   ret 
// copied from an identical function in another client (function ?cast_shared@@YA?AUShared@@PBUAny@@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_finish_0c14e773d5c0ba02.cpp