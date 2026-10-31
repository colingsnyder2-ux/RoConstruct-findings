// roc 2010-06 00406850  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00406850
//
// 00406850  8b442404             mov eax, dword ptr [esp + 4]
// 00406854  56                   push esi
// 00406855  57                   push edi
// 00406856  85c0                 test eax, eax
// 00406858  7405                 je 0x40685f
// 0040685a  8d70f4               lea esi, [eax - 0xc]
// 0040685d  eb02                 jmp 0x406861
// 0040685f  33f6                 xor esi, esi
// 00406861  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00406865  397e10               cmp dword ptr [esi + 0x10], edi
// 00406868  741e                 je 0x406888
// 0040686a  85ff                 test edi, edi
// 0040686c  7408                 je 0x406876
// 0040686e  8b07                 mov eax, dword ptr [edi]
// 00406870  8b4804               mov ecx, dword ptr [eax + 4]
// 00406873  57                   push edi
// 00406874  ffd1                 call ecx
// 00406876  8b4610               mov eax, dword ptr [esi + 0x10]
// 00406879  85c0                 test eax, eax
// 0040687b  7408                 je 0x406885
// 0040687d  8b10                 mov edx, dword ptr [eax]
// 0040687f  50                   push eax
// 00406880  8b4208               mov eax, dword ptr [edx + 8]
// 00406883  ffd0                 call eax
// 00406885  897e10               mov dword ptr [esi + 0x10], edi
// 00406888  5f                   pop edi
// 00406889  33c0                 xor eax, eax
// 0040688b  5e                   pop esi
// 0040688c  c20800               ret 8
// copied from an identical function in another client (function ?SetSite@?$IObjectWithSiteImpl@VCApp@@@ATL@@UAGJPAUIUnknown@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp