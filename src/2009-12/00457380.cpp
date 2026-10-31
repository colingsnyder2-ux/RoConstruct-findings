// roc 2009-12 00457380  unit: VCWorkspace::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00457380
//
// 00457380  8b0dc09bb000         mov ecx, dword ptr [0xb09bc0]
// 00457386  33c0                 xor eax, eax
// 00457388  85c9                 test ecx, ecx
// 0045738a  7408                 je 0x457394
// 0045738c  3905c89bb000         cmp dword ptr [0xb09bc8], eax
// 00457392  7515                 jne 0x4573a9
// 00457394  8b442410             mov eax, dword ptr [esp + 0x10]
// 00457398  50                   push eax
// 00457399  b9b49bb000           mov ecx, 0xb09bb4
// 0045739e  e88df7faff           call 0x406b30
// 004573a3  8b0dc09bb000         mov ecx, dword ptr [0xb09bc0]
// 004573a9  85c9                 test ecx, ecx
// 004573ab  742b                 je 0x4573d8
// 004573ad  8b442424             mov eax, dword ptr [esp + 0x24]
// 004573b1  8b11                 mov edx, dword ptr [ecx]
// 004573b3  50                   push eax
// 004573b4  8b442424             mov eax, dword ptr [esp + 0x24]
// 004573b8  50                   push eax
// 004573b9  8b442424             mov eax, dword ptr [esp + 0x24]
// 004573bd  50                   push eax
// 004573be  8b442424             mov eax, dword ptr [esp + 0x24]
// 004573c2  50                   push eax
// 004573c3  8b442424             mov eax, dword ptr [esp + 0x24]
// 004573c7  50                   push eax
// 004573c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004573cc  50                   push eax
// 004573cd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004573d1  50                   push eax
// 004573d2  51                   push ecx
// 004573d3  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 004573d6  ffd1                 call ecx
// 004573d8  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp