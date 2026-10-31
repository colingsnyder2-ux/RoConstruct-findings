// roc 2007-03 0040a630  unit: seg_00400000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040a630
//
// 0040a630  8b0dfc078800         mov ecx, dword ptr [0x8807fc]
// 0040a636  33c0                 xor eax, eax
// 0040a638  85c9                 test ecx, ecx
// 0040a63a  7408                 je 0x40a644
// 0040a63c  390504088800         cmp dword ptr [0x880804], eax
// 0040a642  7515                 jne 0x40a659
// 0040a644  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040a648  50                   push eax
// 0040a649  b9f0078800           mov ecx, 0x8807f0
// 0040a64e  e89daeffff           call 0x4054f0
// 0040a653  8b0dfc078800         mov ecx, dword ptr [0x8807fc]
// 0040a659  85c9                 test ecx, ecx
// 0040a65b  742b                 je 0x40a688
// 0040a65d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a661  8b11                 mov edx, dword ptr [ecx]
// 0040a663  50                   push eax
// 0040a664  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a668  50                   push eax
// 0040a669  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a66d  50                   push eax
// 0040a66e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a672  50                   push eax
// 0040a673  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a677  50                   push eax
// 0040a678  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040a67c  50                   push eax
// 0040a67d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040a681  50                   push eax
// 0040a682  51                   push ecx
// 0040a683  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0040a686  ffd1                 call ecx
// 0040a688  c22400               ret 0x24
// copied from an identical function in another client (function ?Invoke@?$IDispatchImpl@UIApp@@$1?IID_IApp@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$01VCComTypeInfoHolder@ATL@@@ATL@@UAGJJABU_GUID@@KGPAUtagDISPPARAMS@@PAUtagVARIANT@@PAUtagEXCEPINFO@@PAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp