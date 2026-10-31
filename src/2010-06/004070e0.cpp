// roc 2010-06 004070e0  unit: VCApp::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004070e0
//
// 004070e0  8b0ddc8ab700         mov ecx, dword ptr [0xb78adc]
// 004070e6  33c0                 xor eax, eax
// 004070e8  85c9                 test ecx, ecx
// 004070ea  7408                 je 0x4070f4
// 004070ec  3905e48ab700         cmp dword ptr [0xb78ae4], eax
// 004070f2  7515                 jne 0x407109
// 004070f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 004070f8  50                   push eax
// 004070f9  b9d08ab700           mov ecx, 0xb78ad0
// 004070fe  e82df9ffff           call 0x406a30
// 00407103  8b0ddc8ab700         mov ecx, dword ptr [0xb78adc]
// 00407109  85c9                 test ecx, ecx
// 0040710b  742b                 je 0x407138
// 0040710d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00407111  8b11                 mov edx, dword ptr [ecx]
// 00407113  50                   push eax
// 00407114  8b442424             mov eax, dword ptr [esp + 0x24]
// 00407118  50                   push eax
// 00407119  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040711d  50                   push eax
// 0040711e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00407122  50                   push eax
// 00407123  8b442424             mov eax, dword ptr [esp + 0x24]
// 00407127  50                   push eax
// 00407128  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040712c  50                   push eax
// 0040712d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00407131  50                   push eax
// 00407132  51                   push ecx
// 00407133  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00407136  ffd1                 call ecx
// 00407138  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp