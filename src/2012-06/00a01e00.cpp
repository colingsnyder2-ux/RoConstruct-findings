// roc 2012-06 00a01e00  unit: CXTPRibbonTheme  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a01e00
//
// 00a01e00  83ec30               sub esp, 0x30
// 00a01e03  53                   push ebx
// 00a01e04  55                   push ebp
// 00a01e05  56                   push esi
// 00a01e06  8b742444             mov esi, dword ptr [esp + 0x44]
// 00a01e0a  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00a01e10  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00a01e16  57                   push edi
// 00a01e17  8bbec8000000         mov edi, dword ptr [esi + 0xc8]
// 00a01e1d  89442420             mov dword ptr [esp + 0x20], eax
// 00a01e21  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00a01e27  6874b9c100           push 0xc1b974
// 00a01e2c  89542428             mov dword ptr [esp + 0x28], edx
// 00a01e30  89442430             mov dword ptr [esp + 0x30], eax
// 00a01e34  e8375a0000           call 0xa07870
// 00a01e39  8be8                 mov ebp, eax
// 00a01e3b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00a01e41  83f8ff               cmp eax, -1
// 00a01e44  7511                 jne 0xa01e57
// 00a01e46  8bb65c010000         mov esi, dword ptr [esi + 0x15c]
// 00a01e4c  85f6                 test esi, esi
// 00a01e4e  7407                 je 0xa01e57
// 00a01e50  8bce                 mov ecx, esi
// 00a01e52  e8c930f8ff           call 0x984f20
// 00a01e57  33c9                 xor ecx, ecx
// 00a01e59  85c0                 test eax, eax
// 00a01e5b  0f94c1               sete cl
// 00a01e5e  6a02                 push 2
// 00a01e60  8d542414             lea edx, [esp + 0x14]
// 00a01e64  51                   push ecx
// 00a01e65  52                   push edx
// 00a01e66  8bcd                 mov ecx, ebp
// 00a01e68  e8833c0600           call 0xa65af0
// 00a01e6d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a01e71  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a01e75  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00a01e79  8d77f2               lea esi, [edi - 0xe]
// 00a01e7c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a01e80  8bc7                 mov eax, edi
// 00a01e82  2bc3                 sub eax, ebx
// 00a01e84  0344242c             add eax, dword ptr [esp + 0x2c]
// 00a01e88  68ff00ff00           push 0xff00ff
// 00a01e8d  03442428             add eax, dword ptr [esp + 0x28]
// 00a01e91  03ce                 add ecx, esi
// 00a01e93  99                   cdq 
// 00a01e94  2bc2                 sub eax, edx
// 00a01e96  d1f8                 sar eax, 1
// 00a01e98  89442438             mov dword ptr [esp + 0x38], eax
// 00a01e9c  8bd3                 mov edx, ebx
// 00a01e9e  2bd7                 sub edx, edi
// 00a01ea0  03c2                 add eax, edx
// 00a01ea2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a01ea6  89442440             mov dword ptr [esp + 0x40], eax
// 00a01eaa  8d442424             lea eax, [esp + 0x24]
// 00a01eae  50                   push eax
// 00a01eaf  83ec10               sub esp, 0x10
// 00a01eb2  8bc4                 mov eax, esp
// 00a01eb4  894c2450             mov dword ptr [esp + 0x50], ecx
// 00a01eb8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a01ebc  8908                 mov dword ptr [eax], ecx
// 00a01ebe  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a01ec2  897804               mov dword ptr [eax + 4], edi
// 00a01ec5  895008               mov dword ptr [eax + 8], edx
// 00a01ec8  89580c               mov dword ptr [eax + 0xc], ebx
// 00a01ecb  8d442448             lea eax, [esp + 0x48]
// 00a01ecf  50                   push eax
// 00a01ed0  51                   push ecx
// 00a01ed1  8bcd                 mov ecx, ebp
// 00a01ed3  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00a01edb  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00a01ee3  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00a01eeb  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00a01ef3  89742450             mov dword ptr [esp + 0x50], esi
// 00a01ef7  e834410600           call 0xa66030
// 00a01efc  5f                   pop edi
// 00a01efd  5e                   pop esi
// 00a01efe  5d                   pop ebp
// 00a01eff  5b                   pop ebx
// 00a01f00  83c430               add esp, 0x30
// 00a01f03  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlPopupGlyph@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
