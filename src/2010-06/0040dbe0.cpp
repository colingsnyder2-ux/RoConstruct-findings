// roc 2010-06 0040dbe0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040dbe0
//
// 0040dbe0  8b442408             mov eax, dword ptr [esp + 8]
// 0040dbe4  56                   push esi
// 0040dbe5  85c0                 test eax, eax
// 0040dbe7  7427                 je 0x40dc10
// 0040dbe9  8b30                 mov esi, dword ptr [eax]
// 0040dbeb  85f6                 test esi, esi
// 0040dbed  7421                 je 0x40dc10
// 0040dbef  8b542408             mov edx, dword ptr [esp + 8]
// 0040dbf3  8b0a                 mov ecx, dword ptr [edx]
// 0040dbf5  8b5204               mov edx, dword ptr [edx + 4]
// 0040dbf8  8d1491               lea edx, [ecx + edx*4]
// 0040dbfb  b801000000           mov eax, 1
// 0040dc00  3bca                 cmp ecx, edx
// 0040dc02  730c                 jae 0x40dc10
// 0040dc04  3931                 cmp dword ptr [ecx], esi
// 0040dc06  740a                 je 0x40dc12
// 0040dc08  83c104               add ecx, 4
// 0040dc0b  40                   inc eax
// 0040dc0c  3bca                 cmp ecx, edx
// 0040dc0e  72f4                 jb 0x40dc04
// 0040dc10  33c0                 xor eax, eax
// 0040dc12  5e                   pop esi
// 0040dc13  c20800               ret 8
// copied from an identical function in another client (function ?GetCookie@CComDynamicUnkArray@ATL@@QAGKPAPAUIUnknown@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp