// from server: 100% by auto
// roc 2008-06 006e8b10  unit: CPatchedControlComboBox  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8b10
//
// 006e8b10  56                   push esi
// 006e8b11  8bf1                 mov esi, ecx
// 006e8b13  8b4608               mov eax, dword ptr [esi + 8]
// 006e8b16  57                   push edi
// 006e8b17  85c0                 test eax, eax
// 006e8b19  741d                 je 0x6e8b38
// 006e8b1b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e8b1f  6a00                 push 0
// 006e8b21  51                   push ecx
// 006e8b22  ffd0                 call eax
// 006e8b24  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e8b28  50                   push eax
// 006e8b29  57                   push edi
// 006e8b2a  8bce                 mov ecx, esi
// 006e8b2c  e8affeffff           call 0x6e89e0
// 006e8b31  8bc7                 mov eax, edi
// 006e8b33  5f                   pop edi
// 006e8b34  5e                   pop esi
// 006e8b35  c20800               ret 8
// 006e8b38  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e8b3c  33c0                 xor eax, eax
// 006e8b3e  50                   push eax
// 006e8b3f  57                   push edi
// 006e8b40  8bce                 mov ecx, esi
// 006e8b42  e899feffff           call 0x6e89e0
// 006e8b47  8bc7                 mov eax, edi
// 006e8b49  5f                   pop edi
// 006e8b4a  5e                   pop esi
// 006e8b4b  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
