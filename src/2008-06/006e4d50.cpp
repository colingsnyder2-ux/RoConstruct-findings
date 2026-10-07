// roc 2008-06 006e4d50  unit: CXTPControls  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e4d50
//
// 006e4d50  56                   push esi
// 006e4d51  57                   push edi
// 006e4d52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e4d56  8b4720               mov eax, dword ptr [edi + 0x20]
// 006e4d59  50                   push eax
// 006e4d5a  8bf1                 mov esi, ecx
// 006e4d5c  ff15502d8000         call dword ptr [0x802d50]
// 006e4d62  85c0                 test eax, eax
// 006e4d64  7427                 je 0x6e4d8d
// 006e4d66  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e4d6a  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e4d6e  51                   push ecx
// 006e4d6f  52                   push edx
// 006e4d70  8bce                 mov ecx, esi
// 006e4d72  e879feffff           call 0x6e4bf0
// 006e4d77  85c0                 test eax, eax
// 006e4d79  7412                 je 0x6e4d8d
// 006e4d7b  56                   push esi
// 006e4d7c  8bcf                 mov ecx, edi
// 006e4d7e  e811760d00           call 0x7bc394
// 006e4d83  5f                   pop edi
// 006e4d84  b801000000           mov eax, 1
// 006e4d89  5e                   pop esi
// 006e4d8a  c20c00               ret 0xc
// 006e4d8d  5f                   pop edi
// 006e4d8e  33c0                 xor eax, eax
// 006e4d90  5e                   pop esi
// 006e4d91  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTWindowPos.cpp (function ?LoadWindowPos@CXTWindowPos@@QAEHPAVCWnd@@PBD1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWindowPos.cpp
