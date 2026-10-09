// roc 2009-12 00843ca0  unit: CXTPPopupBar  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00843ca0
//
// 00843ca0  83ec10               sub esp, 0x10
// 00843ca3  53                   push ebx
// 00843ca4  8b1d5cca9800         mov ebx, dword ptr [0x98ca5c]
// 00843caa  55                   push ebp
// 00843cab  56                   push esi
// 00843cac  57                   push edi
// 00843cad  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00843cb1  8b4704               mov eax, dword ptr [edi + 4]
// 00843cb4  8be9                 mov ebp, ecx
// 00843cb6  8b0f                 mov ecx, dword ptr [edi]
// 00843cb8  50                   push eax
// 00843cb9  51                   push ecx
// 00843cba  8db5c4010000         lea esi, [ebp + 0x1c4]
// 00843cc0  56                   push esi
// 00843cc1  ffd3                 call ebx
// 00843cc3  85c0                 test eax, eax
// 00843cc5  744d                 je 0x843d14
// 00843cc7  83bdd401000002       cmp dword ptr [ebp + 0x1d4], 2
// 00843cce  750f                 jne 0x843cdf
// 00843cd0  5f                   pop edi
// 00843cd1  5e                   pop esi
// 00843cd2  5d                   pop ebp
// 00843cd3  b801000000           mov eax, 1
// 00843cd8  5b                   pop ebx
// 00843cd9  83c410               add esp, 0x10
// 00843cdc  c20400               ret 4
// 00843cdf  8b4e08               mov ecx, dword ptr [esi + 8]
// 00843ce2  8b16                 mov edx, dword ptr [esi]
// 00843ce4  8b4604               mov eax, dword ptr [esi + 4]
// 00843ce7  8b760c               mov esi, dword ptr [esi + 0xc]
// 00843cea  89442414             mov dword ptr [esp + 0x14], eax
// 00843cee  2bc6                 sub eax, esi
// 00843cf0  03c1                 add eax, ecx
// 00843cf2  89542410             mov dword ptr [esp + 0x10], edx
// 00843cf6  89442410             mov dword ptr [esp + 0x10], eax
// 00843cfa  8b4704               mov eax, dword ptr [edi + 4]
// 00843cfd  894c2418             mov dword ptr [esp + 0x18], ecx
// 00843d01  8b0f                 mov ecx, dword ptr [edi]
// 00843d03  50                   push eax
// 00843d04  51                   push ecx
// 00843d05  8d542418             lea edx, [esp + 0x18]
// 00843d09  52                   push edx
// 00843d0a  89742428             mov dword ptr [esp + 0x28], esi
// 00843d0e  ffd3                 call ebx
// 00843d10  85c0                 test eax, eax
// 00843d12  75bc                 jne 0x843cd0
// 00843d14  5f                   pop edi
// 00843d15  5e                   pop esi
// 00843d16  5d                   pop ebp
// 00843d17  33c0                 xor eax, eax
// 00843d19  5b                   pop ebx
// 00843d1a  83c410               add esp, 0x10
// 00843d1d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?_MouseInResizeGripper@CXTPPopupBar@@AAEHABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
