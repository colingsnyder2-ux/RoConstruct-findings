// roc 2009-06 00768ec0  unit: CXTPPopupBar  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00768ec0
//
// 00768ec0  83ec10               sub esp, 0x10
// 00768ec3  53                   push ebx
// 00768ec4  8b1dc0ed8900         mov ebx, dword ptr [0x89edc0]
// 00768eca  55                   push ebp
// 00768ecb  56                   push esi
// 00768ecc  57                   push edi
// 00768ecd  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00768ed1  8b4704               mov eax, dword ptr [edi + 4]
// 00768ed4  8be9                 mov ebp, ecx
// 00768ed6  8b0f                 mov ecx, dword ptr [edi]
// 00768ed8  50                   push eax
// 00768ed9  51                   push ecx
// 00768eda  8db5c4010000         lea esi, [ebp + 0x1c4]
// 00768ee0  56                   push esi
// 00768ee1  ffd3                 call ebx
// 00768ee3  85c0                 test eax, eax
// 00768ee5  744d                 je 0x768f34
// 00768ee7  83bdd401000002       cmp dword ptr [ebp + 0x1d4], 2
// 00768eee  750f                 jne 0x768eff
// 00768ef0  5f                   pop edi
// 00768ef1  5e                   pop esi
// 00768ef2  5d                   pop ebp
// 00768ef3  b801000000           mov eax, 1
// 00768ef8  5b                   pop ebx
// 00768ef9  83c410               add esp, 0x10
// 00768efc  c20400               ret 4
// 00768eff  8b4e08               mov ecx, dword ptr [esi + 8]
// 00768f02  8b16                 mov edx, dword ptr [esi]
// 00768f04  8b4604               mov eax, dword ptr [esi + 4]
// 00768f07  8b760c               mov esi, dword ptr [esi + 0xc]
// 00768f0a  89442414             mov dword ptr [esp + 0x14], eax
// 00768f0e  2bc6                 sub eax, esi
// 00768f10  03c1                 add eax, ecx
// 00768f12  89542410             mov dword ptr [esp + 0x10], edx
// 00768f16  89442410             mov dword ptr [esp + 0x10], eax
// 00768f1a  8b4704               mov eax, dword ptr [edi + 4]
// 00768f1d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00768f21  8b0f                 mov ecx, dword ptr [edi]
// 00768f23  50                   push eax
// 00768f24  51                   push ecx
// 00768f25  8d542418             lea edx, [esp + 0x18]
// 00768f29  52                   push edx
// 00768f2a  89742428             mov dword ptr [esp + 0x28], esi
// 00768f2e  ffd3                 call ebx
// 00768f30  85c0                 test eax, eax
// 00768f32  75bc                 jne 0x768ef0
// 00768f34  5f                   pop edi
// 00768f35  5e                   pop esi
// 00768f36  5d                   pop ebp
// 00768f37  33c0                 xor eax, eax
// 00768f39  5b                   pop ebx
// 00768f3a  83c410               add esp, 0x10
// 00768f3d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?_MouseInResizeGripper@CXTPPopupBar@@AAEHABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
