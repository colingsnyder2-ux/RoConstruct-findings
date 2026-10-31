// roc 2011-06 00407210  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407210
//
// 00407210  8b442404             mov eax, dword ptr [esp + 4]
// 00407214  85c0                 test eax, eax
// 00407216  7405                 je 0x40721d
// 00407218  8d50f4               lea edx, [eax - 0xc]
// 0040721b  eb02                 jmp 0x40721f
// 0040721d  33d2                 xor edx, edx
// 0040721f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00407223  b803400080           mov eax, 0x80004003
// 00407228  85c9                 test ecx, ecx
// 0040722a  7420                 je 0x40724c
// 0040722c  8b4210               mov eax, dword ptr [edx + 0x10]
// 0040722f  85c0                 test eax, eax
// 00407231  740e                 je 0x407241
// 00407233  8b10                 mov edx, dword ptr [eax]
// 00407235  894c240c             mov dword ptr [esp + 0xc], ecx
// 00407239  89442404             mov dword ptr [esp + 4], eax
// 0040723d  8b12                 mov edx, dword ptr [edx]
// 0040723f  ffe2                 jmp edx
// 00407241  c70100000000         mov dword ptr [ecx], 0
// 00407247  b805400080           mov eax, 0x80004005
// 0040724c  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetSite@?$IObjectWithSiteImpl@VCApp@@@ATL@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp