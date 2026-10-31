// roc 2009-12 00406950  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406950
//
// 00406950  8b442404             mov eax, dword ptr [esp + 4]
// 00406954  56                   push esi
// 00406955  57                   push edi
// 00406956  85c0                 test eax, eax
// 00406958  7405                 je 0x40695f
// 0040695a  8d70f4               lea esi, [eax - 0xc]
// 0040695d  eb02                 jmp 0x406961
// 0040695f  33f6                 xor esi, esi
// 00406961  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00406965  397e10               cmp dword ptr [esi + 0x10], edi
// 00406968  741e                 je 0x406988
// 0040696a  85ff                 test edi, edi
// 0040696c  7408                 je 0x406976
// 0040696e  8b07                 mov eax, dword ptr [edi]
// 00406970  8b4804               mov ecx, dword ptr [eax + 4]
// 00406973  57                   push edi
// 00406974  ffd1                 call ecx
// 00406976  8b4610               mov eax, dword ptr [esi + 0x10]
// 00406979  85c0                 test eax, eax
// 0040697b  7408                 je 0x406985
// 0040697d  8b10                 mov edx, dword ptr [eax]
// 0040697f  50                   push eax
// 00406980  8b4208               mov eax, dword ptr [edx + 8]
// 00406983  ffd0                 call eax
// 00406985  897e10               mov dword ptr [esi + 0x10], edi
// 00406988  5f                   pop edi
// 00406989  33c0                 xor eax, eax
// 0040698b  5e                   pop esi
// 0040698c  c20800               ret 8
// copied from an identical function in another client (function ?SetSite@?$IObjectWithSiteImpl@VCApp@@@ATL@@UAGJPAUIUnknown@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp