// roc 2012-06 00407850  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407850
//
// 00407850  8b442404             mov eax, dword ptr [esp + 4]
// 00407854  56                   push esi
// 00407855  57                   push edi
// 00407856  85c0                 test eax, eax
// 00407858  7405                 je 0x40785f
// 0040785a  8d70f4               lea esi, [eax - 0xc]
// 0040785d  eb02                 jmp 0x407861
// 0040785f  33f6                 xor esi, esi
// 00407861  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00407865  397e10               cmp dword ptr [esi + 0x10], edi
// 00407868  741e                 je 0x407888
// 0040786a  85ff                 test edi, edi
// 0040786c  7408                 je 0x407876
// 0040786e  8b07                 mov eax, dword ptr [edi]
// 00407870  8b4804               mov ecx, dword ptr [eax + 4]
// 00407873  57                   push edi
// 00407874  ffd1                 call ecx
// 00407876  8b4610               mov eax, dword ptr [esi + 0x10]
// 00407879  85c0                 test eax, eax
// 0040787b  7408                 je 0x407885
// 0040787d  8b10                 mov edx, dword ptr [eax]
// 0040787f  50                   push eax
// 00407880  8b4208               mov eax, dword ptr [edx + 8]
// 00407883  ffd0                 call eax
// 00407885  897e10               mov dword ptr [esi + 0x10], edi
// 00407888  5f                   pop edi
// 00407889  33c0                 xor eax, eax
// 0040788b  5e                   pop esi
// 0040788c  c20800               ret 8
// copied from an identical function in another client (function ?SetSite@?$IObjectWithSiteImpl@VCApp@@@ATL@@UAGJPAUIUnknown@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp