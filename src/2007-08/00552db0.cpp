// roc 2007-08 00552db0  unit: boost::iostreams::Uinput::V?$chain::?$filtering_stream_base  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552db0
//
// 00552db0  6aff                 push -1
// 00552db2  68ed2c7500           push 0x752ced
// 00552db7  64a100000000         mov eax, dword ptr fs:[0]
// 00552dbd  50                   push eax
// 00552dbe  64892500000000       mov dword ptr fs:[0], esp
// 00552dc5  83ec08               sub esp, 8
// 00552dc8  33c0                 xor eax, eax
// 00552dca  39442418             cmp dword ptr [esp + 0x18], eax
// 00552dce  56                   push esi
// 00552dcf  8bf1                 mov esi, ecx
// 00552dd1  89742408             mov dword ptr [esp + 8], esi
// 00552dd5  89442404             mov dword ptr [esp + 4], eax
// 00552dd9  7425                 je 0x552e00
// 00552ddb  c74608047d7a00       mov dword ptr [esi + 8], 0x7a7d04
// 00552de2  8b0de0e47700         mov ecx, dword ptr [0x77e4e0]
// 00552de8  894e14               mov dword ptr [esi + 0x14], ecx
// 00552deb  8b15dce47700         mov edx, dword ptr [0x77e4dc]
// 00552df1  895614               mov dword ptr [esi + 0x14], edx
// 00552df4  89442414             mov dword ptr [esp + 0x14], eax
// 00552df8  c744240401000000     mov dword ptr [esp + 4], 1
// 00552e00  50                   push eax
// 00552e01  8bce                 mov ecx, esi
// 00552e03  e8a8fdffff           call 0x552bb0
// 00552e08  8b4608               mov eax, dword ptr [esi + 8]
// 00552e0b  c706c47a7a00         mov dword ptr [esi], 0x7a7ac4
// 00552e11  8b4804               mov ecx, dword ptr [eax + 4]
// 00552e14  c7443108bc7a7a00     mov dword ptr [ecx + esi + 8], 0x7a7abc
// 00552e1c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00552e20  8bc6                 mov eax, esi
// 00552e22  5e                   pop esi
// 00552e23  64890d00000000       mov dword ptr fs:[0], ecx
// 00552e2a  83c414               add esp, 0x14
// 00552e2d  c20400               ret 4
// copied from an identical function in another client (function ??0?$filtering_stream@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Upublic_@23@@iostreams@boost@@QAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_1a066d61bcfa73c0.cpp