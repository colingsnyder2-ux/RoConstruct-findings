// roc 2010-06 0087bcd0  unit: VCEdit::?$CXTMaskEditT  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087bcd0
//
// 0087bcd0  56                   push esi
// 0087bcd1  8bf1                 mov esi, ecx
// 0087bcd3  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 0087bcd7  57                   push edi
// 0087bcd8  7421                 je 0x87bcfb
// 0087bcda  837e2000             cmp dword ptr [esi + 0x20], 0
// 0087bcde  741b                 je 0x87bcfb
// 0087bce0  e8f9101000           call 0x97cdde
// 0087bce5  a900080000           test eax, 0x800
// 0087bcea  750f                 jne 0x87bcfb
// 0087bcec  8d7e70               lea edi, [esi + 0x70]
// 0087bcef  8bcf                 mov ecx, edi
// 0087bcf1  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0087bcf7  84c0                 test al, al
// 0087bcf9  7407                 je 0x87bd02
// 0087bcfb  5f                   pop edi
// 0087bcfc  33c0                 xor eax, eax
// 0087bcfe  5e                   pop esi
// 0087bcff  c20800               ret 8
// 0087bd02  8b06                 mov eax, dword ptr [esi]
// 0087bd04  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0087bd0a  53                   push ebx
// 0087bd0b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0087bd0f  0fb60b               movzx ecx, byte ptr [ebx]
// 0087bd12  51                   push ecx
// 0087bd13  8bce                 mov ecx, esi
// 0087bd15  ffd2                 call edx
// 0087bd17  85c0                 test eax, eax
// 0087bd19  750b                 jne 0x87bd26
// 0087bd1b  5b                   pop ebx
// 0087bd1c  5f                   pop edi
// 0087bd1d  b801000000           mov eax, 1
// 0087bd22  5e                   pop esi
// 0087bd23  c20800               ret 8
// 0087bd26  8bcf                 mov ecx, edi
// 0087bd28  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087bd2e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0087bd32  3bf8                 cmp edi, eax
// 0087bd34  7d0c                 jge 0x87bd42
// 0087bd36  57                   push edi
// 0087bd37  8bce                 mov ecx, esi
// 0087bd39  e822fcffff           call 0x87b960
// 0087bd3e  85c0                 test eax, eax
// 0087bd40  7508                 jne 0x87bd4a
// 0087bd42  5b                   pop ebx
// 0087bd43  5f                   pop edi
// 0087bd44  33c0                 xor eax, eax
// 0087bd46  5e                   pop esi
// 0087bd47  c20800               ret 8
// 0087bd4a  8b06                 mov eax, dword ptr [esi]
// 0087bd4c  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 0087bd52  57                   push edi
// 0087bd53  53                   push ebx
// 0087bd54  8bce                 mov ecx, esi
// 0087bd56  ffd2                 call edx
// 0087bd58  5b                   pop ebx
// 0087bd59  5f                   pop edi
// 0087bd5a  5e                   pop esi
// 0087bd5b  c20800               ret 8
// copied from an identical function in another client (function ?CheckChar@?$CXTMaskEditT@VCEdit@@@@UAEHAADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp