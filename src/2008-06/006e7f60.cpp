// roc 2008-06 006e7f60  unit: CXTPControlPopup  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e7f60
//
// 006e7f60  56                   push esi
// 006e7f61  8bf1                 mov esi, ecx
// 006e7f63  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006e7f69  85c9                 test ecx, ecx
// 006e7f6b  7405                 je 0x6e7f72
// 006e7f6d  e8728cfbff           call 0x6a0be4
// 006e7f72  8b442408             mov eax, dword ptr [esp + 8]
// 006e7f76  898678010000         mov dword ptr [esi + 0x178], eax
// 006e7f7c  5e                   pop esi
// 006e7f7d  85c0                 test eax, eax
// 006e7f7f  740d                 je 0x6e7f8e
// 006e7f81  83c004               add eax, 4
// 006e7f84  89442404             mov dword ptr [esp + 4], eax
// 006e7f88  ff25b0218000         jmp dword ptr [0x8021b0]
// 006e7f8e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?SetCommandBar@CXTPControlPopup@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
