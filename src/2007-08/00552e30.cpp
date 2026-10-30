// roc 2007-08 00552e30  unit: boost::iostreams::Uinput::V?$chain::?$filtering_stream_base  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552e30
//
// 00552e30  6aff                 push -1
// 00552e32  681d2d7500           push 0x752d1d
// 00552e37  64a100000000         mov eax, dword ptr fs:[0]
// 00552e3d  50                   push eax
// 00552e3e  64892500000000       mov dword ptr fs:[0], esp
// 00552e45  83ec08               sub esp, 8
// 00552e48  33c0                 xor eax, eax
// 00552e4a  39442418             cmp dword ptr [esp + 0x18], eax
// 00552e4e  56                   push esi
// 00552e4f  8bf1                 mov esi, ecx
// 00552e51  89742408             mov dword ptr [esp + 8], esi
// 00552e55  89442404             mov dword ptr [esp + 4], eax
// 00552e59  7425                 je 0x552e80
// 00552e5b  c74608fc7c7a00       mov dword ptr [esi + 8], 0x7a7cfc
// 00552e62  8b0de0e47700         mov ecx, dword ptr [0x77e4e0]
// 00552e68  894e18               mov dword ptr [esi + 0x18], ecx
// 00552e6b  8b15dce47700         mov edx, dword ptr [0x77e4dc]
// 00552e71  895618               mov dword ptr [esi + 0x18], edx
// 00552e74  89442414             mov dword ptr [esp + 0x14], eax
// 00552e78  c744240401000000     mov dword ptr [esp + 4], 1
// 00552e80  50                   push eax
// 00552e81  8bce                 mov ecx, esi
// 00552e83  e828feffff           call 0x552cb0
// 00552e88  8b4608               mov eax, dword ptr [esi + 8]
// 00552e8b  c706d87a7a00         mov dword ptr [esi], 0x7a7ad8
// 00552e91  8b4804               mov ecx, dword ptr [eax + 4]
// 00552e94  c7443108d07a7a00     mov dword ptr [ecx + esi + 8], 0x7a7ad0
// 00552e9c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00552ea0  8bc6                 mov eax, esi
// 00552ea2  5e                   pop esi
// 00552ea3  64890d00000000       mov dword ptr fs:[0], ecx
// 00552eaa  83c414               add esp, 0x14
// 00552ead  c20400               ret 4
// copied from an identical function in another client (function ??0?$filtering_stream@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Upublic_@23@@iostreams@boost@@QAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_1a066d61bcfa73c0.cpp