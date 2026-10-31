// roc 2007-03 0040d2c0  unit: seg_00400000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040d2c0
//
// 0040d2c0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040d2c4  85c9                 test ecx, ecx
// 0040d2c6  7508                 jne 0x40d2d0
// 0040d2c8  b803400080           mov eax, 0x80004003
// 0040d2cd  c20c00               ret 0xc
// 0040d2d0  8b442408             mov eax, dword ptr [esp + 8]
// 0040d2d4  56                   push esi
// 0040d2d5  33f6                 xor esi, esi
// 0040d2d7  c70100000000         mov dword ptr [ecx], 0
// 0040d2dd  3930                 cmp dword ptr [eax], esi
// 0040d2df  752b                 jne 0x40d30c
// 0040d2e1  397004               cmp dword ptr [eax + 4], esi
// 0040d2e4  7526                 jne 0x40d30c
// 0040d2e6  817808c0000000       cmp dword ptr [eax + 8], 0xc0
// 0040d2ed  751d                 jne 0x40d30c
// 0040d2ef  81780c00000046       cmp dword ptr [eax + 0xc], 0x46000000
// 0040d2f6  7514                 jne 0x40d30c
// 0040d2f8  8b442408             mov eax, dword ptr [esp + 8]
// 0040d2fc  8901                 mov dword ptr [ecx], eax
// 0040d2fe  8b08                 mov ecx, dword ptr [eax]
// 0040d300  8b5104               mov edx, dword ptr [ecx + 4]
// 0040d303  50                   push eax
// 0040d304  ffd2                 call edx
// 0040d306  8bc6                 mov eax, esi
// 0040d308  5e                   pop esi
// 0040d309  c20c00               ret 0xc
// 0040d30c  51                   push ecx
// 0040d30d  50                   push eax
// 0040d30e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040d312  68444e7800           push 0x784e44
// 0040d317  83c008               add eax, 8
// 0040d31a  50                   push eax
// 0040d31b  e8704fffff           call 0x402290
// 0040d320  8bf0                 mov esi, eax
// 0040d322  5e                   pop esi
// 0040d323  c20c00               ret 0xc
// copied from an identical function in another client (function ?QueryInterface@?$CComAggObject@VCBrowserViewExternal@@@ATL@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp