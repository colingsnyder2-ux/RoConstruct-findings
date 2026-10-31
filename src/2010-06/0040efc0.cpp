// roc 2010-06 0040efc0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040efc0
//
// 0040efc0  837c240800           cmp dword ptr [esp + 8], 0
// 0040efc5  7408                 je 0x40efcf
// 0040efc7  b80b000280           mov eax, 0x8002000b
// 0040efcc  c21000               ret 0x10
// 0040efcf  56                   push esi
// 0040efd0  8b742414             mov esi, dword ptr [esp + 0x14]
// 0040efd4  85f6                 test esi, esi
// 0040efd6  7509                 jne 0x40efe1
// 0040efd8  b803400080           mov eax, 0x80004003
// 0040efdd  5e                   pop esi
// 0040efde  c21000               ret 0x10
// 0040efe1  33c0                 xor eax, eax
// 0040efe3  390540b7b700         cmp dword ptr [0xb7b740], eax
// 0040efe9  750f                 jne 0x40effa
// 0040efeb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040efef  50                   push eax
// 0040eff0  b934b7b700           mov ecx, 0xb7b734
// 0040eff5  e8367affff           call 0x406a30
// 0040effa  8b0d40b7b700         mov ecx, dword ptr [0xb7b740]
// 0040f000  890e                 mov dword ptr [esi], ecx
// 0040f002  8b0d40b7b700         mov ecx, dword ptr [0xb7b740]
// 0040f008  85c9                 test ecx, ecx
// 0040f00a  740a                 je 0x40f016
// 0040f00c  8b11                 mov edx, dword ptr [ecx]
// 0040f00e  8b4204               mov eax, dword ptr [edx + 4]
// 0040f011  51                   push ecx
// 0040f012  ffd0                 call eax
// 0040f014  33c0                 xor eax, eax
// 0040f016  5e                   pop esi
// 0040f017  c21000               ret 0x10
// copied from an identical function in another client (function ?GetTypeInfo@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJIKPAPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp