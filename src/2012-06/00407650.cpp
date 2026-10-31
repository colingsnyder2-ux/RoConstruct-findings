// roc 2012-06 00407650  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407650
//
// 00407650  8b442404             mov eax, dword ptr [esp + 4]
// 00407654  85c0                 test eax, eax
// 00407656  7405                 je 0x40765d
// 00407658  8d50f4               lea edx, [eax - 0xc]
// 0040765b  eb02                 jmp 0x40765f
// 0040765d  33d2                 xor edx, edx
// 0040765f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00407663  b803400080           mov eax, 0x80004003
// 00407668  85c9                 test ecx, ecx
// 0040766a  7420                 je 0x40768c
// 0040766c  8b4210               mov eax, dword ptr [edx + 0x10]
// 0040766f  85c0                 test eax, eax
// 00407671  740e                 je 0x407681
// 00407673  8b10                 mov edx, dword ptr [eax]
// 00407675  894c240c             mov dword ptr [esp + 0xc], ecx
// 00407679  89442404             mov dword ptr [esp + 4], eax
// 0040767d  8b12                 mov edx, dword ptr [edx]
// 0040767f  ffe2                 jmp edx
// 00407681  c70100000000         mov dword ptr [ecx], 0
// 00407687  b805400080           mov eax, 0x80004005
// 0040768c  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetSite@?$IObjectWithSiteImpl@VCApp@@@ATL@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp