// roc 2010-06 00406e50  unit: VCApp::?$CComContainedObject  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00406e50
//
// 00406e50  8b442404             mov eax, dword ptr [esp + 4]
// 00406e54  8b4018               mov eax, dword ptr [eax + 0x18]
// 00406e57  8b08                 mov ecx, dword ptr [eax]
// 00406e59  89442404             mov dword ptr [esp + 4], eax
// 00406e5d  8b01                 mov eax, dword ptr [ecx]
// 00406e5f  ffe0                 jmp eax
// copied from an identical function in another client (function ?QueryInterface@?$CComContainedObject@VCApp@@@ATL@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp