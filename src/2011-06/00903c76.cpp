// roc 2011-06 00903c76  unit: CXTIconHandle  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903c76
//
// 00903c76  8bff                 mov edi, edi
// 00903c78  55                   push ebp
// 00903c79  8bec                 mov ebp, esp
// 00903c7b  56                   push esi
// 00903c7c  8b7508               mov esi, dword ptr [ebp + 8]
// 00903c7f  57                   push edi
// 00903c80  33ff                 xor edi, edi
// 00903c82  3bf7                 cmp esi, edi
// 00903c84  7507                 jne 0x903c8d
// 00903c86  b857000780           mov eax, 0x80070057
// 00903c8b  eb47                 jmp 0x903cd4
// 00903c8d  8b06                 mov eax, dword ptr [esi]
// 00903c8f  3bc7                 cmp eax, edi
// 00903c91  743f                 je 0x903cd2
// 00903c93  83f82c               cmp eax, 0x2c
// 00903c96  75ee                 jne 0x903c86
// 00903c98  397e24               cmp dword ptr [esi + 0x24], edi
// 00903c9b  7e20                 jle 0x903cbd
// 00903c9d  53                   push ebx
// 00903c9e  8d5e20               lea ebx, [esi + 0x20]
// 00903ca1  57                   push edi
// 00903ca2  8bcb                 mov ecx, ebx
// 00903ca4  e885ffffff           call 0x903c2e
// 00903ca9  0fb700               movzx eax, word ptr [eax]
// 00903cac  ff750c               push dword ptr [ebp + 0xc]
// 00903caf  50                   push eax
// 00903cb0  ff15141aa400         call dword ptr [0xa41a14]
// 00903cb6  47                   inc edi
// 00903cb7  3b7e24               cmp edi, dword ptr [esi + 0x24]
// 00903cba  7ce5                 jl 0x903ca1
// 00903cbc  5b                   pop ebx
// 00903cbd  8d4e20               lea ecx, [esi + 0x20]
// 00903cc0  e89bfcffff           call 0x903960
// 00903cc5  8d4604               lea eax, [esi + 4]
// 00903cc8  50                   push eax
// 00903cc9  ff159c03a400         call dword ptr [0xa4039c]
// 00903ccf  832600               and dword ptr [esi], 0
// 00903cd2  33c0                 xor eax, eax
// 00903cd4  5f                   pop edi
// 00903cd5  5e                   pop esi
// 00903cd6  5d                   pop ebp
// 00903cd7  c20800               ret 8
// copied from an identical function in another client (function ?AtlWinModuleTerm@ATL@@YGJPAU_ATL_WIN_MODULE70@1@PAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlwinmodule.obj