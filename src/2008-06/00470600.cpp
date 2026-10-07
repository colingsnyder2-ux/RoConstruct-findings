// roc 2008-06 00470600  unit: RBX::LDraw2Lua::LuaWriter  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00470600
//
// 00470600  53                   push ebx
// 00470601  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00470605  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00470609  55                   push ebp
// 0047060a  56                   push esi
// 0047060b  8bf1                 mov esi, ecx
// 0047060d  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00470610  57                   push edi
// 00470611  7205                 jb 0x470618
// 00470613  8b4304               mov eax, dword ptr [ebx + 4]
// 00470616  eb03                 jmp 0x47061b
// 00470618  8d4304               lea eax, [ebx + 4]
// 0047061b  51                   push ecx
// 0047061c  50                   push eax
// 0047061d  e8fe1c0a00           call 0x512320
// 00470622  33d2                 xor edx, edx
// 00470624  8bf8                 mov edi, eax
// 00470626  f7760c               div dword ptr [esi + 0xc]
// 00470629  8b4608               mov eax, dword ptr [esi + 8]
// 0047062c  83c408               add esp, 8
// 0047062f  8b3490               mov esi, dword ptr [eax + edx*4]
// 00470632  85f6                 test esi, esi
// 00470634  742a                 je 0x470660
// 00470636  8b2d44248000         mov ebp, dword ptr [0x802444]
// 0047063c  8d642400             lea esp, [esp]
// 00470640  393e                 cmp dword ptr [esi], edi
// 00470642  750e                 jne 0x470652
// 00470644  8d4e04               lea ecx, [esi + 4]
// 00470647  53                   push ebx
// 00470648  51                   push ecx
// 00470649  ffd5                 call ebp
// 0047064b  83c408               add esp, 8
// 0047064e  84c0                 test al, al
// 00470650  7517                 jne 0x470669
// 00470652  8b7624               mov esi, dword ptr [esi + 0x24]
// 00470655  85f6                 test esi, esi
// 00470657  75e7                 jne 0x470640
// 00470659  8da42400000000       lea esp, [esp]
// 00470660  5f                   pop edi
// 00470661  5e                   pop esi
// 00470662  5d                   pop ebp
// 00470663  32c0                 xor al, al
// 00470665  5b                   pop ebx
// 00470666  c20400               ret 4
// 00470669  5f                   pop edi
// 0047066a  5e                   pop esi
// 0047066b  5d                   pop ebp
// 0047066c  b001                 mov al, 1
// 0047066e  5b                   pop ebx
// 0047066f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?containsKey@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
