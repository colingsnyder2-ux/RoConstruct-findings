// roc 2009-06 008088c0  unit: CXTShadowWnd  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008088c0
//
// 008088c0  83ec30               sub esp, 0x30
// 008088c3  53                   push ebx
// 008088c4  8bd9                 mov ebx, ecx
// 008088c6  53                   push ebx
// 008088c7  8d4c2408             lea ecx, [esp + 8]
// 008088cb  e8a07bf6ff           call 0x770470
// 008088d0  8d442438             lea eax, [esp + 0x38]
// 008088d4  50                   push eax
// 008088d5  8d4c2408             lea ecx, [esp + 8]
// 008088d9  51                   push ecx
// 008088da  8d54241c             lea edx, [esp + 0x1c]
// 008088de  52                   push edx
// 008088df  ff15f0ee8900         call dword ptr [0x89eef0]
// 008088e5  85c0                 test eax, eax
// 008088e7  7473                 je 0x80895c
// 008088e9  56                   push esi
// 008088ea  57                   push edi
// 008088eb  53                   push ebx
// 008088ec  8d4c2430             lea ecx, [esp + 0x30]
// 008088f0  e8db7bf6ff           call 0x7704d0
// 008088f5  8b3d80e08900         mov edi, dword ptr [0x89e080]
// 008088fb  8d44242c             lea eax, [esp + 0x2c]
// 008088ff  50                   push eax
// 00808900  ffd7                 call edi
// 00808902  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00808906  8bf0                 mov esi, eax
// 00808908  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080890c  f7d9                 neg ecx
// 0080890e  51                   push ecx
// 0080890f  f7d8                 neg eax
// 00808911  50                   push eax
// 00808912  8d4c2424             lea ecx, [esp + 0x24]
// 00808916  51                   push ecx
// 00808917  ff15f8ed8900         call dword ptr [0x89edf8]
// 0080891d  8d54241c             lea edx, [esp + 0x1c]
// 00808921  52                   push edx
// 00808922  ffd7                 call edi
// 00808924  6a04                 push 4
// 00808926  8bf8                 mov edi, eax
// 00808928  57                   push edi
// 00808929  56                   push esi
// 0080892a  56                   push esi
// 0080892b  ff150ce18900         call dword ptr [0x89e10c]
// 00808931  57                   push edi
// 00808932  8b3d60e18900         mov edi, dword ptr [0x89e160]
// 00808938  ffd7                 call edi
// 0080893a  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0080893d  6a00                 push 0
// 0080893f  56                   push esi
// 00808940  50                   push eax
// 00808941  ff1584ec8900         call dword ptr [0x89ec84]
// 00808947  85c0                 test eax, eax
// 00808949  7503                 jne 0x80894e
// 0080894b  56                   push esi
// 0080894c  ffd7                 call edi
// 0080894e  5f                   pop edi
// 0080894f  5e                   pop esi
// 00808950  b801000000           mov eax, 1
// 00808955  5b                   pop ebx
// 00808956  83c430               add esp, 0x30
// 00808959  c21000               ret 0x10
// 0080895c  b801000000           mov eax, 1
// 00808961  5b                   pop ebx
// 00808962  83c430               add esp, 0x30
// 00808965  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ExcludeRect@CXTShadowWnd@@IAEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
