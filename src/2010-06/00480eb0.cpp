// roc 2010-06 00480eb0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00480eb0
//
// 00480eb0  8b442404             mov eax, dword ptr [esp + 4]
// 00480eb4  83ec08               sub esp, 8
// 00480eb7  53                   push ebx
// 00480eb8  55                   push ebp
// 00480eb9  56                   push esi
// 00480eba  57                   push edi
// 00480ebb  8d715c               lea esi, [ecx + 0x5c]
// 00480ebe  50                   push eax
// 00480ebf  8d4c2414             lea ecx, [esp + 0x14]
// 00480ec3  51                   push ecx
// 00480ec4  8bce                 mov ecx, esi
// 00480ec6  e8b5301100           call 0x593f80
// 00480ecb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00480ecf  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00480ed2  8b36                 mov esi, dword ptr [esi]
// 00480ed4  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 00480eda  85ff                 test edi, edi
// 00480edc  7404                 je 0x480ee2
// 00480ede  3bfe                 cmp edi, esi
// 00480ee0  7402                 je 0x480ee4
// 00480ee2  ffd5                 call ebp
// 00480ee4  8b742414             mov esi, dword ptr [esp + 0x14]
// 00480ee8  3bf3                 cmp esi, ebx
// 00480eea  741e                 je 0x480f0a
// 00480eec  85ff                 test edi, edi
// 00480eee  7516                 jne 0x480f06
// 00480ef0  ffd5                 call ebp
// 00480ef2  3b7718               cmp esi, dword ptr [edi + 0x18]
// 00480ef5  7502                 jne 0x480ef9
// 00480ef7  ffd5                 call ebp
// 00480ef9  8b4628               mov eax, dword ptr [esi + 0x28]
// 00480efc  5f                   pop edi
// 00480efd  5e                   pop esi
// 00480efe  5d                   pop ebp
// 00480eff  5b                   pop ebx
// 00480f00  83c408               add esp, 8
// 00480f03  c20400               ret 4
// 00480f06  8b3f                 mov edi, dword ptr [edi]
// 00480f08  ebe8                 jmp 0x480ef2
// 00480f0a  5f                   pop edi
// 00480f0b  5e                   pop esi
// 00480f0c  5d                   pop ebp
// 00480f0d  33c0                 xor eax, eax
// 00480f0f  5b                   pop ebx
// 00480f10  83c408               add esp, 8
// 00480f13  c20400               ret 4
// copied from an identical function in another client (function ?getResourceGroup@ResourceGroupManager@Ogre@@IAEPAUResourceGroup@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreResourceGroupManager.cpp