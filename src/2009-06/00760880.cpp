// roc 2009-06 00760880  unit: CXTPControlPopup  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00760880
//
// 00760880  56                   push esi
// 00760881  8bf1                 mov esi, ecx
// 00760883  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00760889  85c9                 test ecx, ecx
// 0076088b  7405                 je 0x760892
// 0076088d  e81687fbff           call 0x718fa8
// 00760892  8b442408             mov eax, dword ptr [esp + 8]
// 00760896  898678010000         mov dword ptr [esi + 0x178], eax
// 0076089c  5e                   pop esi
// 0076089d  85c0                 test eax, eax
// 0076089f  740d                 je 0x7608ae
// 007608a1  83c004               add eax, 4
// 007608a4  89442404             mov dword ptr [esp + 4], eax
// 007608a8  ff25d0e18900         jmp dword ptr [0x89e1d0]
// 007608ae  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?SetCommandBar@CXTPControlPopup@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
