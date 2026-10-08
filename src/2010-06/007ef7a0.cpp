// roc 2010-06 007ef7a0  unit: CXTPControlPopup  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ef7a0
//
// 007ef7a0  56                   push esi
// 007ef7a1  8bf1                 mov esi, ecx
// 007ef7a3  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 007ef7a9  85c9                 test ecx, ecx
// 007ef7ab  7405                 je 0x7ef7b2
// 007ef7ad  e86a87fbff           call 0x7a7f1c
// 007ef7b2  8b442408             mov eax, dword ptr [esp + 8]
// 007ef7b6  898678010000         mov dword ptr [esi + 0x178], eax
// 007ef7bc  5e                   pop esi
// 007ef7bd  85c0                 test eax, eax
// 007ef7bf  740d                 je 0x7ef7ce
// 007ef7c1  83c004               add eax, 4
// 007ef7c4  89442404             mov dword ptr [esp + 4], eax
// 007ef7c8  ff2580a39e00         jmp dword ptr [0x9ea380]
// 007ef7ce  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?SetCommandBar@CXTPControlPopup@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
