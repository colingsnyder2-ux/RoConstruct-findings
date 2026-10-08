// roc 2009-06 00794ee0  unit: CXTPRibbonTheme  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00794ee0
//
// 00794ee0  83ec30               sub esp, 0x30
// 00794ee3  53                   push ebx
// 00794ee4  55                   push ebp
// 00794ee5  56                   push esi
// 00794ee6  8b742444             mov esi, dword ptr [esp + 0x44]
// 00794eea  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00794ef0  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00794ef6  57                   push edi
// 00794ef7  8bbec8000000         mov edi, dword ptr [esi + 0xc8]
// 00794efd  89442420             mov dword ptr [esp + 0x20], eax
// 00794f01  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00794f07  6878039000           push 0x900378
// 00794f0c  89542428             mov dword ptr [esp + 0x28], edx
// 00794f10  89442430             mov dword ptr [esp + 0x30], eax
// 00794f14  e8a7ee0000           call 0x7a3dc0
// 00794f19  8be8                 mov ebp, eax
// 00794f1b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00794f21  83f8ff               cmp eax, -1
// 00794f24  7511                 jne 0x794f37
// 00794f26  8bb65c010000         mov esi, dword ptr [esi + 0x15c]
// 00794f2c  85f6                 test esi, esi
// 00794f2e  7407                 je 0x794f37
// 00794f30  8bce                 mov ecx, esi
// 00794f32  e869aff8ff           call 0x71fea0
// 00794f37  33c9                 xor ecx, ecx
// 00794f39  85c0                 test eax, eax
// 00794f3b  0f94c1               sete cl
// 00794f3e  6a02                 push 2
// 00794f40  8d542414             lea edx, [esp + 0x14]
// 00794f44  51                   push ecx
// 00794f45  52                   push edx
// 00794f46  8bcd                 mov ecx, ebp
// 00794f48  e8730e0700           call 0x805dc0
// 00794f4d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00794f51  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00794f55  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00794f59  8d77f2               lea esi, [edi - 0xe]
// 00794f5c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00794f60  8bc7                 mov eax, edi
// 00794f62  2bc3                 sub eax, ebx
// 00794f64  0344242c             add eax, dword ptr [esp + 0x2c]
// 00794f68  68ff00ff00           push 0xff00ff
// 00794f6d  03442428             add eax, dword ptr [esp + 0x28]
// 00794f71  03ce                 add ecx, esi
// 00794f73  99                   cdq 
// 00794f74  2bc2                 sub eax, edx
// 00794f76  d1f8                 sar eax, 1
// 00794f78  89442438             mov dword ptr [esp + 0x38], eax
// 00794f7c  8bd3                 mov edx, ebx
// 00794f7e  2bd7                 sub edx, edi
// 00794f80  03c2                 add eax, edx
// 00794f82  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00794f86  89442440             mov dword ptr [esp + 0x40], eax
// 00794f8a  8d442424             lea eax, [esp + 0x24]
// 00794f8e  50                   push eax
// 00794f8f  83ec10               sub esp, 0x10
// 00794f92  8bc4                 mov eax, esp
// 00794f94  894c2450             mov dword ptr [esp + 0x50], ecx
// 00794f98  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00794f9c  8908                 mov dword ptr [eax], ecx
// 00794f9e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00794fa2  897804               mov dword ptr [eax + 4], edi
// 00794fa5  895008               mov dword ptr [eax + 8], edx
// 00794fa8  89580c               mov dword ptr [eax + 0xc], ebx
// 00794fab  8d442448             lea eax, [esp + 0x48]
// 00794faf  50                   push eax
// 00794fb0  51                   push ecx
// 00794fb1  8bcd                 mov ecx, ebp
// 00794fb3  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00794fbb  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00794fc3  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00794fcb  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00794fd3  89742450             mov dword ptr [esp + 0x50], esi
// 00794fd7  e824130700           call 0x806300
// 00794fdc  5f                   pop edi
// 00794fdd  5e                   pop esi
// 00794fde  5d                   pop ebp
// 00794fdf  5b                   pop ebx
// 00794fe0  83c430               add esp, 0x30
// 00794fe3  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlPopupGlyph@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
