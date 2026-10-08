// roc 2007-03 0046d1c0  unit: seg_00460000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046d1c0
//
// 0046d1c0  53                   push ebx
// 0046d1c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0046d1c5  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 0046d1c9  55                   push ebp
// 0046d1ca  56                   push esi
// 0046d1cb  8bf1                 mov esi, ecx
// 0046d1cd  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0046d1d0  57                   push edi
// 0046d1d1  7205                 jb 0x46d1d8
// 0046d1d3  8b4304               mov eax, dword ptr [ebx + 4]
// 0046d1d6  eb03                 jmp 0x46d1db
// 0046d1d8  8d4304               lea eax, [ebx + 4]
// 0046d1db  51                   push ecx
// 0046d1dc  50                   push eax
// 0046d1dd  e8de080900           call 0x4fdac0
// 0046d1e2  33d2                 xor edx, edx
// 0046d1e4  8bf8                 mov edi, eax
// 0046d1e6  f7760c               div dword ptr [esi + 0xc]
// 0046d1e9  8b4608               mov eax, dword ptr [esi + 8]
// 0046d1ec  83c408               add esp, 8
// 0046d1ef  8b3490               mov esi, dword ptr [eax + edx*4]
// 0046d1f2  85f6                 test esi, esi
// 0046d1f4  742a                 je 0x46d220
// 0046d1f6  8b2dece67700         mov ebp, dword ptr [0x77e6ec]
// 0046d1fc  8d642400             lea esp, [esp]
// 0046d200  393e                 cmp dword ptr [esi], edi
// 0046d202  750e                 jne 0x46d212
// 0046d204  8d4e04               lea ecx, [esi + 4]
// 0046d207  53                   push ebx
// 0046d208  51                   push ecx
// 0046d209  ffd5                 call ebp
// 0046d20b  83c408               add esp, 8
// 0046d20e  84c0                 test al, al
// 0046d210  7517                 jne 0x46d229
// 0046d212  8b7624               mov esi, dword ptr [esi + 0x24]
// 0046d215  85f6                 test esi, esi
// 0046d217  75e7                 jne 0x46d200
// 0046d219  8da42400000000       lea esp, [esp]
// 0046d220  5f                   pop edi
// 0046d221  5e                   pop esi
// 0046d222  5d                   pop ebp
// 0046d223  32c0                 xor al, al
// 0046d225  5b                   pop ebx
// 0046d226  c20400               ret 4
// 0046d229  5f                   pop edi
// 0046d22a  5e                   pop esi
// 0046d22b  5d                   pop ebp
// 0046d22c  b001                 mov al, 1
// 0046d22e  5b                   pop ebx
// 0046d22f  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\GLCaps.cpp (function ?containsKey@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GLCaps.cpp
