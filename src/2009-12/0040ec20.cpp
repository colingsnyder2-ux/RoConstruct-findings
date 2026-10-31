// roc 2009-12 0040ec20  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040ec20
//
// 0040ec20  8b0d4027b000         mov ecx, dword ptr [0xb02740]
// 0040ec26  33c0                 xor eax, eax
// 0040ec28  85c9                 test ecx, ecx
// 0040ec2a  7408                 je 0x40ec34
// 0040ec2c  39054827b000         cmp dword ptr [0xb02748], eax
// 0040ec32  7515                 jne 0x40ec49
// 0040ec34  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040ec38  50                   push eax
// 0040ec39  b93427b000           mov ecx, 0xb02734
// 0040ec3e  e8ed7effff           call 0x406b30
// 0040ec43  8b0d4027b000         mov ecx, dword ptr [0xb02740]
// 0040ec49  85c9                 test ecx, ecx
// 0040ec4b  742b                 je 0x40ec78
// 0040ec4d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040ec51  8b11                 mov edx, dword ptr [ecx]
// 0040ec53  50                   push eax
// 0040ec54  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040ec58  50                   push eax
// 0040ec59  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040ec5d  50                   push eax
// 0040ec5e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040ec62  50                   push eax
// 0040ec63  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040ec67  50                   push eax
// 0040ec68  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040ec6c  50                   push eax
// 0040ec6d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040ec71  50                   push eax
// 0040ec72  51                   push ecx
// 0040ec73  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0040ec76  ffd1                 call ecx
// 0040ec78  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp