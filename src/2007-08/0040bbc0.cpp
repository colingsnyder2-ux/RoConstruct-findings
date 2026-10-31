// roc 2007-08 0040bbc0  unit: VCBrowserViewExternal::?$CComAggObject  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040bbc0
//
// 0040bbc0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040bbc4  85c9                 test ecx, ecx
// 0040bbc6  7508                 jne 0x40bbd0
// 0040bbc8  b803400080           mov eax, 0x80004003
// 0040bbcd  c20c00               ret 0xc
// 0040bbd0  8b442408             mov eax, dword ptr [esp + 8]
// 0040bbd4  56                   push esi
// 0040bbd5  33f6                 xor esi, esi
// 0040bbd7  c70100000000         mov dword ptr [ecx], 0
// 0040bbdd  3930                 cmp dword ptr [eax], esi
// 0040bbdf  752b                 jne 0x40bc0c
// 0040bbe1  397004               cmp dword ptr [eax + 4], esi
// 0040bbe4  7526                 jne 0x40bc0c
// 0040bbe6  817808c0000000       cmp dword ptr [eax + 8], 0xc0
// 0040bbed  751d                 jne 0x40bc0c
// 0040bbef  81780c00000046       cmp dword ptr [eax + 0xc], 0x46000000
// 0040bbf6  7514                 jne 0x40bc0c
// 0040bbf8  8b442408             mov eax, dword ptr [esp + 8]
// 0040bbfc  8901                 mov dword ptr [ecx], eax
// 0040bbfe  8b08                 mov ecx, dword ptr [eax]
// 0040bc00  8b5104               mov edx, dword ptr [ecx + 4]
// 0040bc03  50                   push eax
// 0040bc04  ffd2                 call edx
// 0040bc06  8bc6                 mov eax, esi
// 0040bc08  5e                   pop esi
// 0040bc09  c20c00               ret 0xc
// 0040bc0c  51                   push ecx
// 0040bc0d  50                   push eax
// 0040bc0e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040bc12  68d05b7800           push 0x785bd0
// 0040bc17  83c008               add eax, 8
// 0040bc1a  50                   push eax
// 0040bc1b  e88066ffff           call 0x4022a0
// 0040bc20  8bf0                 mov esi, eax
// 0040bc22  5e                   pop esi
// 0040bc23  c20c00               ret 0xc
// copied from an identical function in another client (function ?QueryInterface@?$CComAggObject@VCBrowserViewExternal@@@ATL@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp