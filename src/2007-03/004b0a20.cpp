// from server: 100% by auto
// roc 2007-03 004b0a20  unit: seg_004b0000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b0a20
//
// 004b0a20  8b442404             mov eax, dword ptr [esp + 4]
// 004b0a24  83ec20               sub esp, 0x20
// 004b0a27  56                   push esi
// 004b0a28  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004b0a2c  57                   push edi
// 004b0a2d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004b0a31  57                   push edi
// 004b0a32  56                   push esi
// 004b0a33  50                   push eax
// 004b0a34  e897f9ffff           call 0x4b03d0
// 004b0a39  83c40c               add esp, 0xc
// 004b0a3c  33c0                 xor eax, eax
// 004b0a3e  8bff                 mov edi, edi
// 004b0a40  833c8700             cmp dword ptr [edi + eax*4], 0
// 004b0a44  7515                 jne 0x4b0a5b
// 004b0a46  83c001               add eax, 1
// 004b0a49  83f808               cmp eax, 8
// 004b0a4c  72f2                 jb 0x4b0a40
// 004b0a4e  b908000000           mov ecx, 8
// 004b0a53  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b0a55  5f                   pop edi
// 004b0a56  5e                   pop esi
// 004b0a57  83c420               add esp, 0x20
// 004b0a5a  c3                   ret 
// 004b0a5b  8d4c2408             lea ecx, [esp + 8]
// 004b0a5f  51                   push ecx
// 004b0a60  57                   push edi
// 004b0a61  56                   push esi
// 004b0a62  e869f9ffff           call 0x4b03d0
// 004b0a67  83c40c               add esp, 0xc
// 004b0a6a  33c0                 xor eax, eax
// 004b0a6c  8d642400             lea esp, [esp]
// 004b0a70  837c840800           cmp dword ptr [esp + eax*4 + 8], 0
// 004b0a75  750e                 jne 0x4b0a85
// 004b0a77  83c001               add eax, 1
// 004b0a7a  83f808               cmp eax, 8
// 004b0a7d  72f1                 jb 0x4b0a70
// 004b0a7f  5f                   pop edi
// 004b0a80  5e                   pop esi
// 004b0a81  83c420               add esp, 0x20
// 004b0a84  c3                   ret 
// 004b0a85  57                   push edi
// 004b0a86  8d54240c             lea edx, [esp + 0xc]
// 004b0a8a  52                   push edx
// 004b0a8b  57                   push edi
// 004b0a8c  e83ff9ffff           call 0x4b03d0
// 004b0a91  83c40c               add esp, 0xc
// 004b0a94  33c0                 xor eax, eax
// 004b0a96  833c8700             cmp dword ptr [edi + eax*4], 0
// 004b0a9a  7519                 jne 0x4b0ab5
// 004b0a9c  83c001               add eax, 1
// 004b0a9f  83f808               cmp eax, 8
// 004b0aa2  72f2                 jb 0x4b0a96
// 004b0aa4  8d742408             lea esi, [esp + 8]
// 004b0aa8  b908000000           mov ecx, 8
// 004b0aad  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b0aaf  5f                   pop edi
// 004b0ab0  5e                   pop esi
// 004b0ab1  83c420               add esp, 0x20
// 004b0ab4  c3                   ret 
// 004b0ab5  8d442408             lea eax, [esp + 8]
// 004b0ab9  50                   push eax
// 004b0aba  8bc8                 mov ecx, eax
// 004b0abc  57                   push edi
// 004b0abd  51                   push ecx
// 004b0abe  e80df9ffff           call 0x4b03d0
// 004b0ac3  83c40c               add esp, 0xc
// 004b0ac6  33c0                 xor eax, eax
// 004b0ac8  837c840800           cmp dword ptr [esp + eax*4 + 8], 0
// 004b0acd  75b6                 jne 0x4b0a85
// 004b0acf  83c001               add eax, 1
// 004b0ad2  83f808               cmp eax, 8
// 004b0ad5  72f1                 jb 0x4b0ac8
// 004b0ad7  5f                   pop edi
// 004b0ad8  5e                   pop esi
// 004b0ad9  83c420               add esp, 0x20
// 004b0adc  c3                   ret 

// from server: 33% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreResourceGroupManager.cpp