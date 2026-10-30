// roc 2009-06 004707f0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004707f0
//
// 004707f0  8b442404             mov eax, dword ptr [esp + 4]
// 004707f4  83ec08               sub esp, 8
// 004707f7  53                   push ebx
// 004707f8  55                   push ebp
// 004707f9  56                   push esi
// 004707fa  57                   push edi
// 004707fb  8d715c               lea esi, [ecx + 0x5c]
// 004707fe  50                   push eax
// 004707ff  8d4c2414             lea ecx, [esp + 0x14]
// 00470803  51                   push ecx
// 00470804  8bce                 mov ecx, esi
// 00470806  e895cb1500           call 0x5cd3a0
// 0047080b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0047080f  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00470812  8b36                 mov esi, dword ptr [esi]
// 00470814  8b2dace98900         mov ebp, dword ptr [0x89e9ac]
// 0047081a  85ff                 test edi, edi
// 0047081c  7404                 je 0x470822
// 0047081e  3bfe                 cmp edi, esi
// 00470820  7402                 je 0x470824
// 00470822  ffd5                 call ebp
// 00470824  8b742414             mov esi, dword ptr [esp + 0x14]
// 00470828  3bf3                 cmp esi, ebx
// 0047082a  741e                 je 0x47084a
// 0047082c  85ff                 test edi, edi
// 0047082e  7516                 jne 0x470846
// 00470830  ffd5                 call ebp
// 00470832  3b7718               cmp esi, dword ptr [edi + 0x18]
// 00470835  7502                 jne 0x470839
// 00470837  ffd5                 call ebp
// 00470839  8b4628               mov eax, dword ptr [esi + 0x28]
// 0047083c  5f                   pop edi
// 0047083d  5e                   pop esi
// 0047083e  5d                   pop ebp
// 0047083f  5b                   pop ebx
// 00470840  83c408               add esp, 8
// 00470843  c20400               ret 4
// 00470846  8b3f                 mov edi, dword ptr [edi]
// 00470848  ebe8                 jmp 0x470832
// 0047084a  5f                   pop edi
// 0047084b  5e                   pop esi
// 0047084c  5d                   pop ebp
// 0047084d  33c0                 xor eax, eax
// 0047084f  5b                   pop ebx
// 00470850  83c408               add esp, 8
// 00470853  c20400               ret 4
// copied from an identical function in another client (function ?getResourceGroup@ResourceGroupManager@Ogre@@IAEPAUResourceGroup@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreResourceGroupManager.cpp