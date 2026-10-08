// roc 2011-06 00850ff0  unit: CXTPControlPopup  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00850ff0
//
// 00850ff0  56                   push esi
// 00850ff1  8bf1                 mov esi, ecx
// 00850ff3  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00850ff9  85c9                 test ecx, ecx
// 00850ffb  7405                 je 0x851002
// 00850ffd  e8d895fbff           call 0x80a5da
// 00851002  8b442408             mov eax, dword ptr [esp + 8]
// 00851006  898678010000         mov dword ptr [esi + 0x178], eax
// 0085100c  5e                   pop esi
// 0085100d  85c0                 test eax, eax
// 0085100f  740d                 je 0x85101e
// 00851011  83c004               add eax, 4
// 00851014  89442404             mov dword ptr [esp + 4], eax
// 00851018  ff254c03a400         jmp dword ptr [0xa4034c]
// 0085101e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?SetCommandBar@CXTPControlPopup@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
