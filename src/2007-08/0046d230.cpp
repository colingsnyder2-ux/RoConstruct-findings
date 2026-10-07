// roc 2007-08 0046d230  unit: RBX::LDraw2Lua::LuaWriter  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046d230
//
// 0046d230  53                   push ebx
// 0046d231  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0046d235  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 0046d239  55                   push ebp
// 0046d23a  56                   push esi
// 0046d23b  8bf1                 mov esi, ecx
// 0046d23d  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0046d240  57                   push edi
// 0046d241  7205                 jb 0x46d248
// 0046d243  8b4304               mov eax, dword ptr [ebx + 4]
// 0046d246  eb03                 jmp 0x46d24b
// 0046d248  8d4304               lea eax, [ebx + 4]
// 0046d24b  51                   push ecx
// 0046d24c  50                   push eax
// 0046d24d  e8eeb40900           call 0x508740
// 0046d252  33d2                 xor edx, edx
// 0046d254  8bf8                 mov edi, eax
// 0046d256  f7760c               div dword ptr [esi + 0xc]
// 0046d259  8b4608               mov eax, dword ptr [esi + 8]
// 0046d25c  83c408               add esp, 8
// 0046d25f  8b3490               mov esi, dword ptr [eax + edx*4]
// 0046d262  85f6                 test esi, esi
// 0046d264  742a                 je 0x46d290
// 0046d266  8b2d94e67700         mov ebp, dword ptr [0x77e694]
// 0046d26c  8d642400             lea esp, [esp]
// 0046d270  393e                 cmp dword ptr [esi], edi
// 0046d272  750e                 jne 0x46d282
// 0046d274  8d4e04               lea ecx, [esi + 4]
// 0046d277  53                   push ebx
// 0046d278  51                   push ecx
// 0046d279  ffd5                 call ebp
// 0046d27b  83c408               add esp, 8
// 0046d27e  84c0                 test al, al
// 0046d280  7517                 jne 0x46d299
// 0046d282  8b7624               mov esi, dword ptr [esi + 0x24]
// 0046d285  85f6                 test esi, esi
// 0046d287  75e7                 jne 0x46d270
// 0046d289  8da42400000000       lea esp, [esp]
// 0046d290  5f                   pop edi
// 0046d291  5e                   pop esi
// 0046d292  5d                   pop ebp
// 0046d293  32c0                 xor al, al
// 0046d295  5b                   pop ebx
// 0046d296  c20400               ret 4
// 0046d299  5f                   pop edi
// 0046d29a  5e                   pop esi
// 0046d29b  5d                   pop ebp
// 0046d29c  b001                 mov al, 1
// 0046d29e  5b                   pop ebx
// 0046d29f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?containsKey@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
