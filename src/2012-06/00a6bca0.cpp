// roc 2012-06 00a6bca0  unit: CXTCaptionPopupWnd  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6bca0
//
// 00a6bca0  6aff                 push -1
// 00a6bca2  689888ae00           push 0xae8898
// 00a6bca7  64a100000000         mov eax, dword ptr fs:[0]
// 00a6bcad  50                   push eax
// 00a6bcae  83ec68               sub esp, 0x68
// 00a6bcb1  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6bcb6  33c4                 xor eax, esp
// 00a6bcb8  89442464             mov dword ptr [esp + 0x64], eax
// 00a6bcbc  56                   push esi
// 00a6bcbd  57                   push edi
// 00a6bcbe  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6bcc3  33c4                 xor eax, esp
// 00a6bcc5  50                   push eax
// 00a6bcc6  8d442474             lea eax, [esp + 0x74]
// 00a6bcca  64a300000000         mov dword ptr fs:[0], eax
// 00a6bcd0  8bf1                 mov esi, ecx
// 00a6bcd2  56                   push esi
// 00a6bcd3  8d4c2420             lea ecx, [esp + 0x20]
// 00a6bcd7  e8926df1ff           call 0x982a6e
// 00a6bcdc  56                   push esi
// 00a6bcdd  8d4c2410             lea ecx, [esp + 0x10]
// 00a6bce1  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00a6bcec  e8af94f6ff           call 0x9d51a0
// 00a6bcf1  6aff                 push -1
// 00a6bcf3  6aff                 push -1
// 00a6bcf5  8d442414             lea eax, [esp + 0x14]
// 00a6bcf9  50                   push eax
// 00a6bcfa  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a6bd00  e85b1bf5ff           call 0x9bd860
// 00a6bd05  6a14                 push 0x14
// 00a6bd07  8bc8                 mov ecx, eax
// 00a6bd09  e8d212f5ff           call 0x9bcfe0
// 00a6bd0e  8bf8                 mov edi, eax
// 00a6bd10  e84b1bf5ff           call 0x9bd860
// 00a6bd15  6a10                 push 0x10
// 00a6bd17  8bc8                 mov ecx, eax
// 00a6bd19  e8c212f5ff           call 0x9bcfe0
// 00a6bd1e  57                   push edi
// 00a6bd1f  50                   push eax
// 00a6bd20  8d4c2414             lea ecx, [esp + 0x14]
// 00a6bd24  51                   push ecx
// 00a6bd25  8d4c2428             lea ecx, [esp + 0x28]
// 00a6bd29  e87871f1ff           call 0x982ea6
// 00a6bd2e  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00a6bd34  6a01                 push 1
// 00a6bd36  6a00                 push 0
// 00a6bd38  52                   push edx
// 00a6bd39  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6bd3f  8d4c241c             lea ecx, [esp + 0x1c]
// 00a6bd43  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 00a6bd4b  e8186df1ff           call 0x982a68
// 00a6bd50  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00a6bd54  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6bd5b  59                   pop ecx
// 00a6bd5c  5f                   pop edi
// 00a6bd5d  5e                   pop esi
// 00a6bd5e  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a6bd62  33cc                 xor ecx, esp
// 00a6bd64  e8ce7cf1ff           call 0x983a37
// 00a6bd69  83c474               add esp, 0x74
// 00a6bd6c  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp