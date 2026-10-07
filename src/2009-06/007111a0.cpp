// roc 2009-06 007111a0  unit: boost::iostreams::zlib_error  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007111a0
//
// 007111a0  6aff                 push -1
// 007111a2  6838408700           push 0x874038
// 007111a7  64a100000000         mov eax, dword ptr fs:[0]
// 007111ad  50                   push eax
// 007111ae  83ec0c               sub esp, 0xc
// 007111b1  56                   push esi
// 007111b2  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007111b7  33c4                 xor eax, esp
// 007111b9  50                   push eax
// 007111ba  8d442414             lea eax, [esp + 0x14]
// 007111be  64a300000000         mov dword ptr fs:[0], eax
// 007111c4  8bf1                 mov esi, ecx
// 007111c6  89742408             mov dword ptr [esp + 8], esi
// 007111ca  8b4618               mov eax, dword ptr [esi + 0x18]
// 007111cd  8b0e                 mov ecx, dword ptr [esi]
// 007111cf  8b10                 mov edx, dword ptr [eax]
// 007111d1  50                   push eax
// 007111d2  51                   push ecx
// 007111d3  52                   push edx
// 007111d4  51                   push ecx
// 007111d5  8d44241c             lea eax, [esp + 0x1c]
// 007111d9  50                   push eax
// 007111da  8bce                 mov ecx, esi
// 007111dc  c744243000000000     mov dword ptr [esp + 0x30], 0
// 007111e4  e8d7feffff           call 0x7110c0
// 007111e9  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007111ec  51                   push ecx
// 007111ed  e840780000           call 0x718a32
// 007111f2  8b16                 mov edx, dword ptr [esi]
// 007111f4  52                   push edx
// 007111f5  c7461800000000       mov dword ptr [esi + 0x18], 0
// 007111fc  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00711203  e82a780000           call 0x718a32
// 00711208  83c408               add esp, 8
// 0071120b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071120f  64890d00000000       mov dword ptr fs:[0], ecx
// 00711216  59                   pop ecx
// 00711217  5e                   pop esi
// 00711218  83c418               add esp, 0x18
// 0071121b  c3                   ret 
// library ogre-1.7.0/OgreAnimationState.cpp (function ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationState.cpp
