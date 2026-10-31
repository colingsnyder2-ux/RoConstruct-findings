// roc 2011-06 00407b00  unit: VCApp::?$CComContainedObject  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407b00
//
// 00407b00  8b442404             mov eax, dword ptr [esp + 4]
// 00407b04  8b4018               mov eax, dword ptr [eax + 0x18]
// 00407b07  8b08                 mov ecx, dword ptr [eax]
// 00407b09  89442404             mov dword ptr [esp + 4], eax
// 00407b0d  8b5104               mov edx, dword ptr [ecx + 4]
// 00407b10  ffe2                 jmp edx
// copied from an identical function in another client (function ?AddRef@?$CComContainedObject@VCApp@@@ATL@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp