// roc 2010-06 00406e30  unit: VCApp::?$CComContainedObject  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00406e30
//
// 00406e30  8b442404             mov eax, dword ptr [esp + 4]
// 00406e34  8b4018               mov eax, dword ptr [eax + 0x18]
// 00406e37  8b08                 mov ecx, dword ptr [eax]
// 00406e39  89442404             mov dword ptr [esp + 4], eax
// 00406e3d  8b5108               mov edx, dword ptr [ecx + 8]
// 00406e40  ffe2                 jmp edx
// copied from an identical function in another client (function ?Release@?$CComContainedObject@VCApp@@@ATL@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp