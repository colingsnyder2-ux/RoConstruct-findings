// roc 2009-12 004065f0  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004065f0
//
// 004065f0  8b442404             mov eax, dword ptr [esp + 4]
// 004065f4  85c0                 test eax, eax
// 004065f6  7405                 je 0x4065fd
// 004065f8  8d50f4               lea edx, [eax - 0xc]
// 004065fb  eb02                 jmp 0x4065ff
// 004065fd  33d2                 xor edx, edx
// 004065ff  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00406603  b803400080           mov eax, 0x80004003
// 00406608  85c9                 test ecx, ecx
// 0040660a  7420                 je 0x40662c
// 0040660c  8b4210               mov eax, dword ptr [edx + 0x10]
// 0040660f  85c0                 test eax, eax
// 00406611  740e                 je 0x406621
// 00406613  8b10                 mov edx, dword ptr [eax]
// 00406615  894c240c             mov dword ptr [esp + 0xc], ecx
// 00406619  89442404             mov dword ptr [esp + 4], eax
// 0040661d  8b12                 mov edx, dword ptr [edx]
// 0040661f  ffe2                 jmp edx
// 00406621  c70100000000         mov dword ptr [ecx], 0
// 00406627  b805400080           mov eax, 0x80004005
// 0040662c  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetSite@?$IObjectWithSiteImpl@VCApp@@@ATL@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp