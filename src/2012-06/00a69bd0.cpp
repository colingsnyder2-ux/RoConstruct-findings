// roc 2012-06 00a69bd0  unit: CXTCaptionThemeOffice2003  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69bd0
//
// 00a69bd0  56                   push esi
// 00a69bd1  8b742408             mov esi, dword ptr [esp + 8]
// 00a69bd5  57                   push edi
// 00a69bd6  6a01                 push 1
// 00a69bd8  8bce                 mov ecx, esi
// 00a69bda  e8c9f90200           call 0xa995a8
// 00a69bdf  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a69be3  80b88100000000       cmp byte ptr [eax + 0x81], 0
// 00a69bea  744e                 je 0xa69c3a
// 00a69bec  53                   push ebx
// 00a69bed  e86e3cf5ff           call 0x9bd860
// 00a69bf2  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a69bf6  6a00                 push 0
// 00a69bf8  6a00                 push 0
// 00a69bfa  83c020               add eax, 0x20
// 00a69bfd  50                   push eax
// 00a69bfe  57                   push edi
// 00a69bff  56                   push esi
// 00a69c00  e88bd5f6ff           call 0x9d7190
// 00a69c05  8bc8                 mov ecx, eax
// 00a69c07  e8a4d8f6ff           call 0x9d74b0
// 00a69c0c  e84f3cf5ff           call 0x9bd860
// 00a69c11  6a36                 push 0x36
// 00a69c13  8bc8                 mov ecx, eax
// 00a69c15  e8c633f5ff           call 0x9bcfe0
// 00a69c1a  8bd8                 mov ebx, eax
// 00a69c1c  e83f3cf5ff           call 0x9bd860
// 00a69c21  6a36                 push 0x36
// 00a69c23  8bc8                 mov ecx, eax
// 00a69c25  e8b633f5ff           call 0x9bcfe0
// 00a69c2a  53                   push ebx
// 00a69c2b  50                   push eax
// 00a69c2c  57                   push edi
// 00a69c2d  8bce                 mov ecx, esi
// 00a69c2f  e87292f1ff           call 0x982ea6
// 00a69c34  5b                   pop ebx
// 00a69c35  5f                   pop edi
// 00a69c36  5e                   pop esi
// 00a69c37  c20c00               ret 0xc
// 00a69c3a  e8213cf5ff           call 0x9bd860
// 00a69c3f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a69c43  6a00                 push 0
// 00a69c45  6a00                 push 0
// 00a69c47  83e880               sub eax, -0x80
// 00a69c4a  50                   push eax
// 00a69c4b  57                   push edi
// 00a69c4c  56                   push esi
// 00a69c4d  e83ed5f6ff           call 0x9d7190
// 00a69c52  8bc8                 mov ecx, eax
// 00a69c54  e857d8f6ff           call 0x9d74b0
// 00a69c59  e8023cf5ff           call 0x9bd860
// 00a69c5e  6a36                 push 0x36
// 00a69c60  8bc8                 mov ecx, eax
// 00a69c62  e87933f5ff           call 0x9bcfe0
// 00a69c67  8b0f                 mov ecx, dword ptr [edi]
// 00a69c69  8b5708               mov edx, dword ptr [edi + 8]
// 00a69c6c  50                   push eax
// 00a69c6d  8b470c               mov eax, dword ptr [edi + 0xc]
// 00a69c70  6a01                 push 1
// 00a69c72  2bd1                 sub edx, ecx
// 00a69c74  52                   push edx
// 00a69c75  48                   dec eax
// 00a69c76  50                   push eax
// 00a69c77  51                   push ecx
// 00a69c78  8bce                 mov ecx, esi
// 00a69c7a  e811f90200           call 0xa99590
// 00a69c7f  5f                   pop edi
// 00a69c80  5e                   pop esi
// 00a69c81  c20c00               ret 0xc
// library xtp-13.2.1/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionBack@CXTCaptionThemeOffice2003@@MAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaptionTheme.cpp
