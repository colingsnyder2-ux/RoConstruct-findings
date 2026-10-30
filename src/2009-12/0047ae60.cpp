// roc 2009-12 0047ae60  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047ae60
//
// 0047ae60  8b442404             mov eax, dword ptr [esp + 4]
// 0047ae64  83ec08               sub esp, 8
// 0047ae67  53                   push ebx
// 0047ae68  55                   push ebp
// 0047ae69  56                   push esi
// 0047ae6a  57                   push edi
// 0047ae6b  8d715c               lea esi, [ecx + 0x5c]
// 0047ae6e  50                   push eax
// 0047ae6f  8d4c2414             lea ecx, [esp + 0x14]
// 0047ae73  51                   push ecx
// 0047ae74  8bce                 mov ecx, esi
// 0047ae76  e825560000           call 0x4804a0
// 0047ae7b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0047ae7f  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0047ae82  8b36                 mov esi, dword ptr [esi]
// 0047ae84  8b2d60b79800         mov ebp, dword ptr [0x98b760]
// 0047ae8a  85ff                 test edi, edi
// 0047ae8c  7404                 je 0x47ae92
// 0047ae8e  3bfe                 cmp edi, esi
// 0047ae90  7402                 je 0x47ae94
// 0047ae92  ffd5                 call ebp
// 0047ae94  8b742414             mov esi, dword ptr [esp + 0x14]
// 0047ae98  3bf3                 cmp esi, ebx
// 0047ae9a  741e                 je 0x47aeba
// 0047ae9c  85ff                 test edi, edi
// 0047ae9e  7516                 jne 0x47aeb6
// 0047aea0  ffd5                 call ebp
// 0047aea2  3b7718               cmp esi, dword ptr [edi + 0x18]
// 0047aea5  7502                 jne 0x47aea9
// 0047aea7  ffd5                 call ebp
// 0047aea9  8b4628               mov eax, dword ptr [esi + 0x28]
// 0047aeac  5f                   pop edi
// 0047aead  5e                   pop esi
// 0047aeae  5d                   pop ebp
// 0047aeaf  5b                   pop ebx
// 0047aeb0  83c408               add esp, 8
// 0047aeb3  c20400               ret 4
// 0047aeb6  8b3f                 mov edi, dword ptr [edi]
// 0047aeb8  ebe8                 jmp 0x47aea2
// 0047aeba  5f                   pop edi
// 0047aebb  5e                   pop esi
// 0047aebc  5d                   pop ebp
// 0047aebd  33c0                 xor eax, eax
// 0047aebf  5b                   pop ebx
// 0047aec0  83c408               add esp, 8
// 0047aec3  c20400               ret 4
// copied from an identical function in another client (function ?getResourceGroup@ResourceGroupManager@Ogre@@IAEPAUResourceGroup@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreResourceGroupManager.cpp