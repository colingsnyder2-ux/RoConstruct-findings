// roc 2007-03 00480b80  unit: seg_00480000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480b80
//
// 00480b80  53                   push ebx
// 00480b81  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00480b85  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00480b89  55                   push ebp
// 00480b8a  56                   push esi
// 00480b8b  8bf1                 mov esi, ecx
// 00480b8d  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00480b90  57                   push edi
// 00480b91  7205                 jb 0x480b98
// 00480b93  8b4304               mov eax, dword ptr [ebx + 4]
// 00480b96  eb03                 jmp 0x480b9b
// 00480b98  8d4304               lea eax, [ebx + 4]
// 00480b9b  51                   push ecx
// 00480b9c  50                   push eax
// 00480b9d  e81ecf0700           call 0x4fdac0
// 00480ba2  33d2                 xor edx, edx
// 00480ba4  8bf8                 mov edi, eax
// 00480ba6  f7760c               div dword ptr [esi + 0xc]
// 00480ba9  8b4608               mov eax, dword ptr [esi + 8]
// 00480bac  83c408               add esp, 8
// 00480baf  8b3490               mov esi, dword ptr [eax + edx*4]
// 00480bb2  85f6                 test esi, esi
// 00480bb4  742a                 je 0x480be0
// 00480bb6  8b2dece67700         mov ebp, dword ptr [0x77e6ec]
// 00480bbc  8d642400             lea esp, [esp]
// 00480bc0  393e                 cmp dword ptr [esi], edi
// 00480bc2  750e                 jne 0x480bd2
// 00480bc4  8d4e04               lea ecx, [esi + 4]
// 00480bc7  53                   push ebx
// 00480bc8  51                   push ecx
// 00480bc9  ffd5                 call ebp
// 00480bcb  83c408               add esp, 8
// 00480bce  84c0                 test al, al
// 00480bd0  7517                 jne 0x480be9
// 00480bd2  8b7668               mov esi, dword ptr [esi + 0x68]
// 00480bd5  85f6                 test esi, esi
// 00480bd7  75e7                 jne 0x480bc0
// 00480bd9  8da42400000000       lea esp, [esp]
// 00480be0  5f                   pop edi
// 00480be1  5e                   pop esi
// 00480be2  5d                   pop ebp
// 00480be3  32c0                 xor al, al
// 00480be5  5b                   pop ebx
// 00480be6  c20400               ret 4
// 00480be9  5f                   pop edi
// 00480bea  5e                   pop esi
// 00480beb  5d                   pop ebp
// 00480bec  b001                 mov al, 1
// 00480bee  5b                   pop ebx
// 00480bef  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\GPUProgram.cpp (function ?containsKey@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GPUProgram.cpp
