// roc 2008-06 006e8be0  unit: CPatchedControlComboBox  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8be0
//
// 006e8be0  56                   push esi
// 006e8be1  8bf1                 mov esi, ecx
// 006e8be3  8b4608               mov eax, dword ptr [esi + 8]
// 006e8be6  57                   push edi
// 006e8be7  85c0                 test eax, eax
// 006e8be9  741d                 je 0x6e8c08
// 006e8beb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e8bef  6a00                 push 0
// 006e8bf1  51                   push ecx
// 006e8bf2  ffd0                 call eax
// 006e8bf4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e8bf8  50                   push eax
// 006e8bf9  57                   push edi
// 006e8bfa  8bce                 mov ecx, esi
// 006e8bfc  e87ffdffff           call 0x6e8980
// 006e8c01  8bc7                 mov eax, edi
// 006e8c03  5f                   pop edi
// 006e8c04  5e                   pop esi
// 006e8c05  c20800               ret 8
// 006e8c08  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e8c0c  33c0                 xor eax, eax
// 006e8c0e  50                   push eax
// 006e8c0f  57                   push edi
// 006e8c10  8bce                 mov ecx, esi
// 006e8c12  e869fdffff           call 0x6e8980
// 006e8c17  8bc7                 mov eax, edi
// 006e8c19  5f                   pop edi
// 006e8c1a  5e                   pop esi
// 006e8c1b  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
