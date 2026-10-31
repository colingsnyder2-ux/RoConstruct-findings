// roc 2009-12 0040d780  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d780
//
// 0040d780  8b442408             mov eax, dword ptr [esp + 8]
// 0040d784  56                   push esi
// 0040d785  85c0                 test eax, eax
// 0040d787  7427                 je 0x40d7b0
// 0040d789  8b30                 mov esi, dword ptr [eax]
// 0040d78b  85f6                 test esi, esi
// 0040d78d  7421                 je 0x40d7b0
// 0040d78f  8b542408             mov edx, dword ptr [esp + 8]
// 0040d793  8b0a                 mov ecx, dword ptr [edx]
// 0040d795  8b5204               mov edx, dword ptr [edx + 4]
// 0040d798  8d1491               lea edx, [ecx + edx*4]
// 0040d79b  b801000000           mov eax, 1
// 0040d7a0  3bca                 cmp ecx, edx
// 0040d7a2  730c                 jae 0x40d7b0
// 0040d7a4  3931                 cmp dword ptr [ecx], esi
// 0040d7a6  740a                 je 0x40d7b2
// 0040d7a8  83c104               add ecx, 4
// 0040d7ab  40                   inc eax
// 0040d7ac  3bca                 cmp ecx, edx
// 0040d7ae  72f4                 jb 0x40d7a4
// 0040d7b0  33c0                 xor eax, eax
// 0040d7b2  5e                   pop esi
// 0040d7b3  c20800               ret 8
// copied from an identical function in another client (function ?GetCookie@CComDynamicUnkArray@ATL@@QAGKPAPAUIUnknown@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp