// roc 2008-06 00799870  unit: CXTPRibbonControlTab  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799870
//
// 00799870  56                   push esi
// 00799871  57                   push edi
// 00799872  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00799876  8bf1                 mov esi, ecx
// 00799878  3bbea4000000         cmp edi, dword ptr [esi + 0xa4]
// 0079987e  7507                 jne 0x799887
// 00799880  5f                   pop edi
// 00799881  33c0                 xor eax, eax
// 00799883  5e                   pop esi
// 00799884  c20400               ret 4
// 00799887  83ff02               cmp edi, 2
// 0079988a  7405                 je 0x799891
// 0079988c  83ff03               cmp edi, 3
// 0079988f  751d                 jne 0x7998ae
// 00799891  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00799897  e8948df8ff           call 0x722630
// 0079989c  85c0                 test eax, eax
// 0079989e  750e                 jne 0x7998ae
// 007998a0  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007998a6  50                   push eax
// 007998a7  6aff                 push -1
// 007998a9  e822d6f1ff           call 0x6b6ed0
// 007998ae  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007998b4  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 007998ba  8b01                 mov eax, dword ptr [ecx]
// 007998bc  8b9090010000         mov edx, dword ptr [eax + 0x190]
// 007998c2  56                   push esi
// 007998c3  57                   push edi
// 007998c4  ffd2                 call edx
// 007998c6  83ff02               cmp edi, 2
// 007998c9  7405                 je 0x7998d0
// 007998cb  83ff03               cmp edi, 3
// 007998ce  750b                 jne 0x7998db
// 007998d0  8b06                 mov eax, dword ptr [esi]
// 007998d2  8b5070               mov edx, dword ptr [eax + 0x70]
// 007998d5  6a01                 push 1
// 007998d7  8bce                 mov ecx, esi
// 007998d9  ffd2                 call edx
// 007998db  85ff                 test edi, edi
// 007998dd  754c                 jne 0x79992b
// 007998df  8b06                 mov eax, dword ptr [esi]
// 007998e1  8b5070               mov edx, dword ptr [eax + 0x70]
// 007998e4  57                   push edi
// 007998e5  8bce                 mov ecx, esi
// 007998e7  ffd2                 call edx
// 007998e9  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007998ef  83c9ff               or ecx, 0xffffffff
// 007998f2  0bd1                 or edx, ecx
// 007998f4  85c0                 test eax, eax
// 007998f6  7518                 jne 0x799910
// 007998f8  52                   push edx
// 007998f9  51                   push ecx
// 007998fa  50                   push eax
// 007998fb  8d8e84010000         lea ecx, [esi + 0x184]
// 00799901  e8ca2efeff           call 0x77c7d0
// 00799906  5f                   pop edi
// 00799907  b801000000           mov eax, 1
// 0079990c  5e                   pop esi
// 0079990d  c20400               ret 4
// 00799910  8b4020               mov eax, dword ptr [eax + 0x20]
// 00799913  52                   push edx
// 00799914  51                   push ecx
// 00799915  50                   push eax
// 00799916  8d8e84010000         lea ecx, [esi + 0x184]
// 0079991c  e8af2efeff           call 0x77c7d0
// 00799921  5f                   pop edi
// 00799922  b801000000           mov eax, 1
// 00799927  5e                   pop esi
// 00799928  c20400               ret 4
// 0079992b  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00799931  53                   push ebx
// 00799932  8b9e84000000         mov ebx, dword ptr [esi + 0x84]
// 00799938  85c0                 test eax, eax
// 0079993a  7504                 jne 0x799940
// 0079993c  33ff                 xor edi, edi
// 0079993e  eb03                 jmp 0x799943
// 00799940  8b7820               mov edi, dword ptr [eax + 0x20]
// 00799943  8d8e84010000         lea ecx, [esi + 0x184]
// 00799949  e8d216feff           call 0x77b020
// 0079994e  40                   inc eax
// 0079994f  50                   push eax
// 00799950  53                   push ebx
// 00799951  57                   push edi
// 00799952  6805800000           push 0x8005
// 00799957  8d4e20               lea ecx, [esi + 0x20]
// 0079995a  e831e9f4ff           call 0x6e8290
// 0079995f  5b                   pop ebx
// 00799960  5f                   pop edi
// 00799961  b801000000           mov eax, 1
// 00799966  5e                   pop esi
// 00799967  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonControlTab.cpp (function ?OnSetSelected@CXTPRibbonControlTab@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp
