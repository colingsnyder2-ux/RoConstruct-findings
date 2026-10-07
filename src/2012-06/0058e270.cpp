// roc 2012-06 0058e270  unit: RBX::Network::Peer  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0058e270
//
// 0058e270  83ec08               sub esp, 8
// 0058e273  56                   push esi
// 0058e274  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058e278  57                   push edi
// 0058e279  8bf9                 mov edi, ecx
// 0058e27b  56                   push esi
// 0058e27c  8d4c2410             lea ecx, [esp + 0x10]
// 0058e280  8974240c             mov dword ptr [esp + 0xc], esi
// 0058e284  e8d7fdffff           call 0x58e060
// 0058e289  56                   push esi
// 0058e28a  8d442410             lea eax, [esp + 0x10]
// 0058e28e  56                   push esi
// 0058e28f  50                   push eax
// 0058e290  e8fbc40000           call 0x59a790
// 0058e295  8d4c2414             lea ecx, [esp + 0x14]
// 0058e299  83c40c               add esp, 0xc
// 0058e29c  3bcf                 cmp ecx, edi
// 0058e29e  7406                 je 0x58e2a6
// 0058e2a0  8b542408             mov edx, dword ptr [esp + 8]
// 0058e2a4  8917                 mov dword ptr [edi], edx
// 0058e2a6  8b7704               mov esi, dword ptr [edi + 4]
// 0058e2a9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0058e2ad  894704               mov dword ptr [edi + 4], eax
// 0058e2b0  85f6                 test esi, esi
// 0058e2b2  742a                 je 0x58e2de
// 0058e2b4  8d4e04               lea ecx, [esi + 4]
// 0058e2b7  83caff               or edx, 0xffffffff
// 0058e2ba  f00fc111             lock xadd dword ptr [ecx], edx
// 0058e2be  751e                 jne 0x58e2de
// 0058e2c0  8b06                 mov eax, dword ptr [esi]
// 0058e2c2  8b5004               mov edx, dword ptr [eax + 4]
// 0058e2c5  8bce                 mov ecx, esi
// 0058e2c7  ffd2                 call edx
// 0058e2c9  8d4608               lea eax, [esi + 8]
// 0058e2cc  83c9ff               or ecx, 0xffffffff
// 0058e2cf  f00fc108             lock xadd dword ptr [eax], ecx
// 0058e2d3  7509                 jne 0x58e2de
// 0058e2d5  8b16                 mov edx, dword ptr [esi]
// 0058e2d7  8b4208               mov eax, dword ptr [edx + 8]
// 0058e2da  8bce                 mov ecx, esi
// 0058e2dc  ffd0                 call eax
// 0058e2de  5f                   pop edi
// 0058e2df  5e                   pop esi
// 0058e2e0  83c408               add esp, 8
// 0058e2e3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
