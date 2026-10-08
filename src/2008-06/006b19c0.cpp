// from server: 100% by auto
// roc 2008-06 006b19c0  unit: CXTPPaintManager  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b19c0
//
// 006b19c0  83ec08               sub esp, 8
// 006b19c3  56                   push esi
// 006b19c4  57                   push edi
// 006b19c5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006b19c9  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 006b19cf  8bf1                 mov esi, ecx
// 006b19d1  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 006b19d7  83f903               cmp ecx, 3
// 006b19da  0f84e5000000         je 0x6b1ac5
// 006b19e0  83f902               cmp ecx, 2
// 006b19e3  0f84dc000000         je 0x6b1ac5
// 006b19e9  837c244000           cmp dword ptr [esp + 0x40], 0
// 006b19ee  747b                 je 0x6b1a6b
// 006b19f0  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 006b19f7  8b442438             mov eax, dword ptr [esp + 0x38]
// 006b19fb  7501                 jne 0x6b19fe
// 006b19fd  48                   dec eax
// 006b19fe  01442420             add dword ptr [esp + 0x20], eax
// 006b1a02  8b442434             mov eax, dword ptr [esp + 0x34]
// 006b1a06  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006b1a0a  50                   push eax
// 006b1a0b  6a00                 push 0
// 006b1a0d  6a00                 push 0
// 006b1a0f  51                   push ecx
// 006b1a10  83ec10               sub esp, 0x10
// 006b1a13  8bc4                 mov eax, esp
// 006b1a15  8d542440             lea edx, [esp + 0x40]
// 006b1a19  52                   push edx
// 006b1a1a  50                   push eax
// 006b1a1b  ff15702d8000         call dword ptr [0x802d70]
// 006b1a21  8b442438             mov eax, dword ptr [esp + 0x38]
// 006b1a25  57                   push edi
// 006b1a26  50                   push eax
// 006b1a27  8d4c2430             lea ecx, [esp + 0x30]
// 006b1a2b  51                   push ecx
// 006b1a2c  8bce                 mov ecx, esi
// 006b1a2e  e89de6ffff           call 0x6b00d0
// 006b1a33  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b1a37  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006b1a3b  83c006               add eax, 6
// 006b1a3e  3bc1                 cmp eax, ecx
// 006b1a40  7e02                 jle 0x6b1a44
// 006b1a42  8bc8                 mov ecx, eax
// 006b1a44  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b1a48  33d2                 xor edx, edx
// 006b1a4a  39968c000000         cmp dword ptr [esi + 0x8c], edx
// 006b1a50  894804               mov dword ptr [eax + 4], ecx
// 006b1a53  0f95c2               setne dl
// 006b1a56  83c203               add edx, 3
// 006b1a59  03542408             add edx, dword ptr [esp + 8]
// 006b1a5d  03542438             add edx, dword ptr [esp + 0x38]
// 006b1a61  8910                 mov dword ptr [eax], edx
// 006b1a63  5f                   pop edi
// 006b1a64  5e                   pop esi
// 006b1a65  83c408               add esp, 8
// 006b1a68  c23000               ret 0x30
// 006b1a6b  8b442434             mov eax, dword ptr [esp + 0x34]
// 006b1a6f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006b1a73  50                   push eax
// 006b1a74  6a01                 push 1
// 006b1a76  6a00                 push 0
// 006b1a78  51                   push ecx
// 006b1a79  83ec10               sub esp, 0x10
// 006b1a7c  8bc4                 mov eax, esp
// 006b1a7e  8d542440             lea edx, [esp + 0x40]
// 006b1a82  52                   push edx
// 006b1a83  50                   push eax
// 006b1a84  ff15702d8000         call dword ptr [0x802d70]
// 006b1a8a  8b442438             mov eax, dword ptr [esp + 0x38]
// 006b1a8e  57                   push edi
// 006b1a8f  50                   push eax
// 006b1a90  8d4c2430             lea ecx, [esp + 0x30]
// 006b1a94  51                   push ecx
// 006b1a95  8bce                 mov ecx, esi
// 006b1a97  e834e6ffff           call 0x6b00d0
// 006b1a9c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b1aa0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006b1aa4  83c006               add eax, 6
// 006b1aa7  3bc1                 cmp eax, ecx
// 006b1aa9  7e02                 jle 0x6b1aad
// 006b1aab  8bc8                 mov ecx, eax
// 006b1aad  8b542408             mov edx, dword ptr [esp + 8]
// 006b1ab1  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b1ab5  83c208               add edx, 8
// 006b1ab8  8910                 mov dword ptr [eax], edx
// 006b1aba  894804               mov dword ptr [eax + 4], ecx
// 006b1abd  5f                   pop edi
// 006b1abe  5e                   pop esi
// 006b1abf  83c408               add esp, 8
// 006b1ac2  c23000               ret 0x30
// 006b1ac5  837c244000           cmp dword ptr [esp + 0x40], 0
// 006b1aca  7465                 je 0x6b1b31
// 006b1acc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006b1ad0  8b542430             mov edx, dword ptr [esp + 0x30]
// 006b1ad4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006b1ad8  01442424             add dword ptr [esp + 0x24], eax
// 006b1adc  51                   push ecx
// 006b1add  6a00                 push 0
// 006b1adf  6a01                 push 1
// 006b1ae1  52                   push edx
// 006b1ae2  83ec10               sub esp, 0x10
// 006b1ae5  8bc4                 mov eax, esp
// 006b1ae7  8d4c2440             lea ecx, [esp + 0x40]
// 006b1aeb  51                   push ecx
// 006b1aec  50                   push eax
// 006b1aed  ff15702d8000         call dword ptr [0x802d70]
// 006b1af3  8b542438             mov edx, dword ptr [esp + 0x38]
// 006b1af7  57                   push edi
// 006b1af8  52                   push edx
// 006b1af9  8d442430             lea eax, [esp + 0x30]
// 006b1afd  50                   push eax
// 006b1afe  8bce                 mov ecx, esi
// 006b1b00  e8cbe5ffff           call 0x6b00d0
// 006b1b05  8b442408             mov eax, dword ptr [esp + 8]
// 006b1b09  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006b1b0d  83c006               add eax, 6
// 006b1b10  3bc1                 cmp eax, ecx
// 006b1b12  8bd0                 mov edx, eax
// 006b1b14  7f02                 jg 0x6b1b18
// 006b1b16  8bd1                 mov edx, ecx
// 006b1b18  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b1b1c  8910                 mov dword ptr [eax], edx
// 006b1b1e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006b1b22  8d4c0a03             lea ecx, [edx + ecx + 3]
// 006b1b26  894804               mov dword ptr [eax + 4], ecx
// 006b1b29  5f                   pop edi
// 006b1b2a  5e                   pop esi
// 006b1b2b  83c408               add esp, 8
// 006b1b2e  c23000               ret 0x30
// 006b1b31  8b542434             mov edx, dword ptr [esp + 0x34]
// 006b1b35  8b442430             mov eax, dword ptr [esp + 0x30]
// 006b1b39  52                   push edx
// 006b1b3a  6a01                 push 1
// 006b1b3c  6a01                 push 1
// 006b1b3e  50                   push eax
// 006b1b3f  83ec10               sub esp, 0x10
// 006b1b42  8bc4                 mov eax, esp
// 006b1b44  8d4c2440             lea ecx, [esp + 0x40]
// 006b1b48  51                   push ecx
// 006b1b49  50                   push eax
// 006b1b4a  ff15702d8000         call dword ptr [0x802d70]
// 006b1b50  8b542438             mov edx, dword ptr [esp + 0x38]
// 006b1b54  57                   push edi
// 006b1b55  52                   push edx
// 006b1b56  8d442430             lea eax, [esp + 0x30]
// 006b1b5a  50                   push eax
// 006b1b5b  8bce                 mov ecx, esi
// 006b1b5d  e86ee5ffff           call 0x6b00d0
// 006b1b62  8b442408             mov eax, dword ptr [esp + 8]
// 006b1b66  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006b1b6a  83c006               add eax, 6
// 006b1b6d  3bc1                 cmp eax, ecx
// 006b1b6f  7e02                 jle 0x6b1b73
// 006b1b71  8bc8                 mov ecx, eax
// 006b1b73  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b1b77  8908                 mov dword ptr [eax], ecx
// 006b1b79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b1b7d  83c108               add ecx, 8
// 006b1b80  5f                   pop edi
// 006b1b81  894804               mov dword ptr [eax + 4], ecx
// 006b1b84  5e                   pop esi
// 006b1b85  83c408               add esp, 8
// 006b1b88  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlText@CXTPPaintManager@@IAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
