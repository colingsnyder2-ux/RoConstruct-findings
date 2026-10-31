// roc 2009-12 004572f0  unit: VCWorkspace::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004572f0
//
// 004572f0  837c240800           cmp dword ptr [esp + 8], 0
// 004572f5  7408                 je 0x4572ff
// 004572f7  b80b000280           mov eax, 0x8002000b
// 004572fc  c21000               ret 0x10
// 004572ff  56                   push esi
// 00457300  8b742414             mov esi, dword ptr [esp + 0x14]
// 00457304  85f6                 test esi, esi
// 00457306  7509                 jne 0x457311
// 00457308  b803400080           mov eax, 0x80004003
// 0045730d  5e                   pop esi
// 0045730e  c21000               ret 0x10
// 00457311  33c0                 xor eax, eax
// 00457313  3905c09bb000         cmp dword ptr [0xb09bc0], eax
// 00457319  750f                 jne 0x45732a
// 0045731b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045731f  50                   push eax
// 00457320  b9b49bb000           mov ecx, 0xb09bb4
// 00457325  e806f8faff           call 0x406b30
// 0045732a  8b0dc09bb000         mov ecx, dword ptr [0xb09bc0]
// 00457330  890e                 mov dword ptr [esi], ecx
// 00457332  8b0dc09bb000         mov ecx, dword ptr [0xb09bc0]
// 00457338  85c9                 test ecx, ecx
// 0045733a  740a                 je 0x457346
// 0045733c  8b11                 mov edx, dword ptr [ecx]
// 0045733e  8b4204               mov eax, dword ptr [edx + 4]
// 00457341  51                   push ecx
// 00457342  ffd0                 call eax
// 00457344  33c0                 xor eax, eax
// 00457346  5e                   pop esi
// 00457347  c21000               ret 0x10
// copied from an identical function in another client (function ?GetTypeInfo@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJIKPAPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp