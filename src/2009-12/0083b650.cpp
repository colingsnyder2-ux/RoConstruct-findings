// roc 2009-12 0083b650  unit: CXTPControlPopup  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b650
//
// 0083b650  56                   push esi
// 0083b651  8bf1                 mov esi, ecx
// 0083b653  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0083b659  85c9                 test ecx, ecx
// 0083b65b  7405                 je 0x83b662
// 0083b65d  e87a87fbff           call 0x7f3ddc
// 0083b662  8b442408             mov eax, dword ptr [esp + 8]
// 0083b666  898678010000         mov dword ptr [esi + 0x178], eax
// 0083b66c  5e                   pop esi
// 0083b66d  85c0                 test eax, eax
// 0083b66f  740d                 je 0x83b67e
// 0083b671  83c004               add eax, 4
// 0083b674  89442404             mov dword ptr [esp + 4], eax
// 0083b678  ff250cb29800         jmp dword ptr [0x98b20c]
// 0083b67e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?SetCommandBar@CXTPControlPopup@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
