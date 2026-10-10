// roc 2008-06 006a2a00  unit: CXTPCommandBars  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2a00
//
// 006a2a00  57                   push edi
// 006a2a01  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006a2a05  85ff                 test edi, edi
// 006a2a07  7506                 jne 0x6a2a0f
// 006a2a09  33c0                 xor eax, eax
// 006a2a0b  5f                   pop edi
// 006a2a0c  c20c00               ret 0xc
// 006a2a0f  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 006a2a15  56                   push esi
// 006a2a16  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a2a1a  8b06                 mov eax, dword ptr [esi]
// 006a2a1c  8b900c020000         mov edx, dword ptr [eax + 0x20c]
// 006a2a22  6a00                 push 0
// 006a2a24  51                   push ecx
// 006a2a25  8bce                 mov ecx, esi
// 006a2a27  ffd2                 call edx
// 006a2a29  85c0                 test eax, eax
// 006a2a2b  7505                 jne 0x6a2a32
// 006a2a2d  5e                   pop esi
// 006a2a2e  5f                   pop edi
// 006a2a2f  c20c00               ret 0xc
// 006a2a32  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a2a36  50                   push eax
// 006a2a37  56                   push esi
// 006a2a38  8bcf                 mov ecx, edi
// 006a2a3a  e8e1960700           call 0x71c120
// 006a2a3f  8bcf                 mov ecx, edi
// 006a2a41  e83a7e0700           call 0x71a880
// 006a2a46  898600010000         mov dword ptr [esi + 0x100], eax
// 006a2a4c  5e                   pop esi
// 006a2a4d  b801000000           mov eax, 1
// 006a2a52  5f                   pop edi
// 006a2a53  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?DockCommandBar@CXTPCommandBars@@QAEHPAVCXTPToolBar@@PAUtagRECT@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
