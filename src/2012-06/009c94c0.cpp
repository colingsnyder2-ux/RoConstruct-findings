// roc 2012-06 009c94c0  unit: CXTPControlPopup  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c94c0
//
// 009c94c0  56                   push esi
// 009c94c1  8bf1                 mov esi, ecx
// 009c94c3  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 009c94c9  85c9                 test ecx, ecx
// 009c94cb  7405                 je 0x9c94d2
// 009c94cd  e8b891fbff           call 0x98268a
// 009c94d2  8b442408             mov eax, dword ptr [esp + 8]
// 009c94d6  898678010000         mov dword ptr [esi + 0x178], eax
// 009c94dc  5e                   pop esi
// 009c94dd  85c0                 test eax, eax
// 009c94df  740d                 je 0x9c94ee
// 009c94e1  83c004               add eax, 4
// 009c94e4  89442404             mov dword ptr [esp + 4], eax
// 009c94e8  ff259821b200         jmp dword ptr [0xb22198]
// 009c94ee  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?SetCommandBar@CXTPControlPopup@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
