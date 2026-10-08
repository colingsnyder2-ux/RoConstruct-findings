// roc 2009-06 00731cb0  unit: CXTPCommandBar  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00731cb0
//
// 00731cb0  8b442404             mov eax, dword ptr [esp + 4]
// 00731cb4  83ec3c               sub esp, 0x3c
// 00731cb7  56                   push esi
// 00731cb8  6a00                 push 0
// 00731cba  6880000000           push 0x80
// 00731cbf  6a03                 push 3
// 00731cc1  6a00                 push 0
// 00731cc3  6a00                 push 0
// 00731cc5  6800000080           push 0x80000000
// 00731cca  50                   push eax
// 00731ccb  ff1538e28900         call dword ptr [0x89e238]
// 00731cd1  8bf0                 mov esi, eax
// 00731cd3  83feff               cmp esi, -1
// 00731cd6  7507                 jne 0x731cdf
// 00731cd8  33c0                 xor eax, eax
// 00731cda  5e                   pop esi
// 00731cdb  83c43c               add esp, 0x3c
// 00731cde  c3                   ret 
// 00731cdf  57                   push edi
// 00731ce0  8b3d54e38900         mov edi, dword ptr [0x89e354]
// 00731ce6  6a00                 push 0
// 00731ce8  8d4c240c             lea ecx, [esp + 0xc]
// 00731cec  51                   push ecx
// 00731ced  6a0e                 push 0xe
// 00731cef  8d542418             lea edx, [esp + 0x18]
// 00731cf3  52                   push edx
// 00731cf4  56                   push esi
// 00731cf5  ffd7                 call edi
// 00731cf7  85c0                 test eax, eax
// 00731cf9  743f                 je 0x731d3a
// 00731cfb  837c24080e           cmp dword ptr [esp + 8], 0xe
// 00731d00  7538                 jne 0x731d3a
// 00731d02  6a00                 push 0
// 00731d04  8d44240c             lea eax, [esp + 0xc]
// 00731d08  50                   push eax
// 00731d09  6a28                 push 0x28
// 00731d0b  8d4c2428             lea ecx, [esp + 0x28]
// 00731d0f  51                   push ecx
// 00731d10  56                   push esi
// 00731d11  ffd7                 call edi
// 00731d13  85c0                 test eax, eax
// 00731d15  7423                 je 0x731d3a
// 00731d17  837c240828           cmp dword ptr [esp + 8], 0x28
// 00731d1c  751c                 jne 0x731d3a
// 00731d1e  33d2                 xor edx, edx
// 00731d20  66837c242a20         cmp word ptr [esp + 0x2a], 0x20
// 00731d26  56                   push esi
// 00731d27  0f94c2               sete dl
// 00731d2a  8bfa                 mov edi, edx
// 00731d2c  ff1588e38900         call dword ptr [0x89e388]
// 00731d32  8bc7                 mov eax, edi
// 00731d34  5f                   pop edi
// 00731d35  5e                   pop esi
// 00731d36  83c43c               add esp, 0x3c
// 00731d39  c3                   ret 
// 00731d3a  56                   push esi
// 00731d3b  ff1588e38900         call dword ptr [0x89e388]
// 00731d41  5f                   pop edi
// 00731d42  33c0                 xor eax, eax
// 00731d44  5e                   pop esi
// 00731d45  83c43c               add esp, 0x3c
// 00731d48  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsAlphaBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
