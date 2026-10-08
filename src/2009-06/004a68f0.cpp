// from server: 100% by auto
// roc 2009-06 004a68f0  unit: G3D::TextureManager::TextureArgs  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a68f0
//
// 004a68f0  53                   push ebx
// 004a68f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004a68f5  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004a68f9  55                   push ebp
// 004a68fa  56                   push esi
// 004a68fb  8bf1                 mov esi, ecx
// 004a68fd  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 004a6900  57                   push edi
// 004a6901  7205                 jb 0x4a6908
// 004a6903  8b4304               mov eax, dword ptr [ebx + 4]
// 004a6906  eb03                 jmp 0x4a690b
// 004a6908  8d4304               lea eax, [ebx + 4]
// 004a690b  51                   push ecx
// 004a690c  50                   push eax
// 004a690d  e80e3a0d00           call 0x57a320
// 004a6912  33d2                 xor edx, edx
// 004a6914  8bf8                 mov edi, eax
// 004a6916  f7760c               div dword ptr [esi + 0xc]
// 004a6919  8b4608               mov eax, dword ptr [esi + 8]
// 004a691c  83c408               add esp, 8
// 004a691f  8b3490               mov esi, dword ptr [eax + edx*4]
// 004a6922  85f6                 test esi, esi
// 004a6924  742a                 je 0x4a6950
// 004a6926  8b2d44e48900         mov ebp, dword ptr [0x89e444]
// 004a692c  8d642400             lea esp, [esp]
// 004a6930  393e                 cmp dword ptr [esi], edi
// 004a6932  750e                 jne 0x4a6942
// 004a6934  8d4e04               lea ecx, [esi + 4]
// 004a6937  53                   push ebx
// 004a6938  51                   push ecx
// 004a6939  ffd5                 call ebp
// 004a693b  83c408               add esp, 8
// 004a693e  84c0                 test al, al
// 004a6940  7517                 jne 0x4a6959
// 004a6942  8b7624               mov esi, dword ptr [esi + 0x24]
// 004a6945  85f6                 test esi, esi
// 004a6947  75e7                 jne 0x4a6930
// 004a6949  8da42400000000       lea esp, [esp]
// 004a6950  5f                   pop edi
// 004a6951  5e                   pop esi
// 004a6952  5d                   pop ebp
// 004a6953  32c0                 xor al, al
// 004a6955  5b                   pop ebx
// 004a6956  c20400               ret 4
// 004a6959  5f                   pop edi
// 004a695a  5e                   pop esi
// 004a695b  5d                   pop ebp
// 004a695c  b001                 mov al, 1
// 004a695e  5b                   pop ebx
// 004a695f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?containsKey@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
