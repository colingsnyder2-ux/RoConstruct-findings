// roc 2010-06 007b0b60  unit: CXTPPaintManager  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b0b60
//
// 007b0b60  83ec08               sub esp, 8
// 007b0b63  56                   push esi
// 007b0b64  57                   push edi
// 007b0b65  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007b0b69  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 007b0b6f  8bf1                 mov esi, ecx
// 007b0b71  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007b0b77  83f903               cmp ecx, 3
// 007b0b7a  0f84e5000000         je 0x7b0c65
// 007b0b80  83f902               cmp ecx, 2
// 007b0b83  0f84dc000000         je 0x7b0c65
// 007b0b89  837c244000           cmp dword ptr [esp + 0x40], 0
// 007b0b8e  747b                 je 0x7b0c0b
// 007b0b90  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 007b0b97  8b442438             mov eax, dword ptr [esp + 0x38]
// 007b0b9b  7501                 jne 0x7b0b9e
// 007b0b9d  48                   dec eax
// 007b0b9e  01442420             add dword ptr [esp + 0x20], eax
// 007b0ba2  8b442434             mov eax, dword ptr [esp + 0x34]
// 007b0ba6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007b0baa  50                   push eax
// 007b0bab  6a00                 push 0
// 007b0bad  6a00                 push 0
// 007b0baf  51                   push ecx
// 007b0bb0  83ec10               sub esp, 0x10
// 007b0bb3  8bc4                 mov eax, esp
// 007b0bb5  8d542440             lea edx, [esp + 0x40]
// 007b0bb9  52                   push edx
// 007b0bba  50                   push eax
// 007b0bbb  ff1548bc9e00         call dword ptr [0x9ebc48]
// 007b0bc1  8b442438             mov eax, dword ptr [esp + 0x38]
// 007b0bc5  57                   push edi
// 007b0bc6  50                   push eax
// 007b0bc7  8d4c2430             lea ecx, [esp + 0x30]
// 007b0bcb  51                   push ecx
// 007b0bcc  8bce                 mov ecx, esi
// 007b0bce  e89de6ffff           call 0x7af270
// 007b0bd3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007b0bd7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007b0bdb  83c006               add eax, 6
// 007b0bde  3bc1                 cmp eax, ecx
// 007b0be0  7e02                 jle 0x7b0be4
// 007b0be2  8bc8                 mov ecx, eax
// 007b0be4  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b0be8  33d2                 xor edx, edx
// 007b0bea  39968c000000         cmp dword ptr [esi + 0x8c], edx
// 007b0bf0  894804               mov dword ptr [eax + 4], ecx
// 007b0bf3  0f95c2               setne dl
// 007b0bf6  83c203               add edx, 3
// 007b0bf9  03542408             add edx, dword ptr [esp + 8]
// 007b0bfd  03542438             add edx, dword ptr [esp + 0x38]
// 007b0c01  8910                 mov dword ptr [eax], edx
// 007b0c03  5f                   pop edi
// 007b0c04  5e                   pop esi
// 007b0c05  83c408               add esp, 8
// 007b0c08  c23000               ret 0x30
// 007b0c0b  8b442434             mov eax, dword ptr [esp + 0x34]
// 007b0c0f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007b0c13  50                   push eax
// 007b0c14  6a01                 push 1
// 007b0c16  6a00                 push 0
// 007b0c18  51                   push ecx
// 007b0c19  83ec10               sub esp, 0x10
// 007b0c1c  8bc4                 mov eax, esp
// 007b0c1e  8d542440             lea edx, [esp + 0x40]
// 007b0c22  52                   push edx
// 007b0c23  50                   push eax
// 007b0c24  ff1548bc9e00         call dword ptr [0x9ebc48]
// 007b0c2a  8b442438             mov eax, dword ptr [esp + 0x38]
// 007b0c2e  57                   push edi
// 007b0c2f  50                   push eax
// 007b0c30  8d4c2430             lea ecx, [esp + 0x30]
// 007b0c34  51                   push ecx
// 007b0c35  8bce                 mov ecx, esi
// 007b0c37  e834e6ffff           call 0x7af270
// 007b0c3c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007b0c40  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007b0c44  83c006               add eax, 6
// 007b0c47  3bc1                 cmp eax, ecx
// 007b0c49  7e02                 jle 0x7b0c4d
// 007b0c4b  8bc8                 mov ecx, eax
// 007b0c4d  8b542408             mov edx, dword ptr [esp + 8]
// 007b0c51  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b0c55  83c208               add edx, 8
// 007b0c58  8910                 mov dword ptr [eax], edx
// 007b0c5a  894804               mov dword ptr [eax + 4], ecx
// 007b0c5d  5f                   pop edi
// 007b0c5e  5e                   pop esi
// 007b0c5f  83c408               add esp, 8
// 007b0c62  c23000               ret 0x30
// 007b0c65  837c244000           cmp dword ptr [esp + 0x40], 0
// 007b0c6a  7465                 je 0x7b0cd1
// 007b0c6c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b0c70  8b542430             mov edx, dword ptr [esp + 0x30]
// 007b0c74  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007b0c78  01442424             add dword ptr [esp + 0x24], eax
// 007b0c7c  51                   push ecx
// 007b0c7d  6a00                 push 0
// 007b0c7f  6a01                 push 1
// 007b0c81  52                   push edx
// 007b0c82  83ec10               sub esp, 0x10
// 007b0c85  8bc4                 mov eax, esp
// 007b0c87  8d4c2440             lea ecx, [esp + 0x40]
// 007b0c8b  51                   push ecx
// 007b0c8c  50                   push eax
// 007b0c8d  ff1548bc9e00         call dword ptr [0x9ebc48]
// 007b0c93  8b542438             mov edx, dword ptr [esp + 0x38]
// 007b0c97  57                   push edi
// 007b0c98  52                   push edx
// 007b0c99  8d442430             lea eax, [esp + 0x30]
// 007b0c9d  50                   push eax
// 007b0c9e  8bce                 mov ecx, esi
// 007b0ca0  e8cbe5ffff           call 0x7af270
// 007b0ca5  8b442408             mov eax, dword ptr [esp + 8]
// 007b0ca9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007b0cad  83c006               add eax, 6
// 007b0cb0  3bc1                 cmp eax, ecx
// 007b0cb2  8bd0                 mov edx, eax
// 007b0cb4  7f02                 jg 0x7b0cb8
// 007b0cb6  8bd1                 mov edx, ecx
// 007b0cb8  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b0cbc  8910                 mov dword ptr [eax], edx
// 007b0cbe  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007b0cc2  8d4c0a03             lea ecx, [edx + ecx + 3]
// 007b0cc6  894804               mov dword ptr [eax + 4], ecx
// 007b0cc9  5f                   pop edi
// 007b0cca  5e                   pop esi
// 007b0ccb  83c408               add esp, 8
// 007b0cce  c23000               ret 0x30
// 007b0cd1  8b542434             mov edx, dword ptr [esp + 0x34]
// 007b0cd5  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b0cd9  52                   push edx
// 007b0cda  6a01                 push 1
// 007b0cdc  6a01                 push 1
// 007b0cde  50                   push eax
// 007b0cdf  83ec10               sub esp, 0x10
// 007b0ce2  8bc4                 mov eax, esp
// 007b0ce4  8d4c2440             lea ecx, [esp + 0x40]
// 007b0ce8  51                   push ecx
// 007b0ce9  50                   push eax
// 007b0cea  ff1548bc9e00         call dword ptr [0x9ebc48]
// 007b0cf0  8b542438             mov edx, dword ptr [esp + 0x38]
// 007b0cf4  57                   push edi
// 007b0cf5  52                   push edx
// 007b0cf6  8d442430             lea eax, [esp + 0x30]
// 007b0cfa  50                   push eax
// 007b0cfb  8bce                 mov ecx, esi
// 007b0cfd  e86ee5ffff           call 0x7af270
// 007b0d02  8b442408             mov eax, dword ptr [esp + 8]
// 007b0d06  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007b0d0a  83c006               add eax, 6
// 007b0d0d  3bc1                 cmp eax, ecx
// 007b0d0f  7e02                 jle 0x7b0d13
// 007b0d11  8bc8                 mov ecx, eax
// 007b0d13  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b0d17  8908                 mov dword ptr [eax], ecx
// 007b0d19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b0d1d  83c108               add ecx, 8
// 007b0d20  5f                   pop edi
// 007b0d21  894804               mov dword ptr [eax + 4], ecx
// 007b0d24  5e                   pop esi
// 007b0d25  83c408               add esp, 8
// 007b0d28  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlText@CXTPPaintManager@@IAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
