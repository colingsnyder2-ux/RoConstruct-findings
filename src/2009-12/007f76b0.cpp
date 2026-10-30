// roc 2009-12 007f76b0  unit: CPatchedControlComboBox  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f76b0
//
// 007f76b0  8b442404             mov eax, dword ptr [esp + 4]
// 007f76b4  83ec10               sub esp, 0x10
// 007f76b7  53                   push ebx
// 007f76b8  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007f76bc  55                   push ebp
// 007f76bd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007f76c1  56                   push esi
// 007f76c2  57                   push edi
// 007f76c3  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 007f76c7  8bf1                 mov esi, ecx
// 007f76c9  c70700000000         mov dword ptr [edi], 0
// 007f76cf  8d4c2434             lea ecx, [esp + 0x34]
// 007f76d3  c70300000000         mov dword ptr [ebx], 0
// 007f76d9  51                   push ecx
// 007f76da  c7450000000000       mov dword ptr [ebp], 0
// 007f76e1  8bce                 mov ecx, esi
// 007f76e3  c70000000000         mov dword ptr [eax], 0
// 007f76e9  e8b2420400           call 0x83b9a0
// 007f76ee  85c0                 test eax, eax
// 007f76f0  740f                 je 0x7f7701
// 007f76f2  5f                   pop edi
// 007f76f3  5e                   pop esi
// 007f76f4  5d                   pop ebp
// 007f76f5  b857000780           mov eax, 0x80070057
// 007f76fa  5b                   pop ebx
// 007f76fb  83c410               add esp, 0x10
// 007f76fe  c22000               ret 0x20
// 007f7701  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007f7707  85c0                 test eax, eax
// 007f7709  7473                 je 0x7f777e
// 007f770b  83782000             cmp dword ptr [eax + 0x20], 0
// 007f770f  746d                 je 0x7f777e
// 007f7711  8b56e0               mov edx, dword ptr [esi - 0x20]
// 007f7714  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007f771a  8d4ee0               lea ecx, [esi - 0x20]
// 007f771d  6a00                 push 0
// 007f771f  ffd0                 call eax
// 007f7721  85c0                 test eax, eax
// 007f7723  7459                 je 0x7f777e
// 007f7725  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 007f772b  8b96a4000000         mov edx, dword ptr [esi + 0xa4]
// 007f7731  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 007f7737  894c2410             mov dword ptr [esp + 0x10], ecx
// 007f773b  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 007f7741  89542414             mov dword ptr [esp + 0x14], edx
// 007f7745  8d542410             lea edx, [esp + 0x10]
// 007f7749  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007f774d  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 007f7753  52                   push edx
// 007f7754  8944241c             mov dword ptr [esp + 0x1c], eax
// 007f7758  e89dc6ffff           call 0x7f3dfa
// 007f775d  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f7761  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007f7765  8b542418             mov edx, dword ptr [esp + 0x18]
// 007f7769  8901                 mov dword ptr [ecx], eax
// 007f776b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f776f  2bd0                 sub edx, eax
// 007f7771  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f7775  894d00               mov dword ptr [ebp], ecx
// 007f7778  2bc1                 sub eax, ecx
// 007f777a  8913                 mov dword ptr [ebx], edx
// 007f777c  8907                 mov dword ptr [edi], eax
// 007f777e  5f                   pop edi
// 007f777f  5e                   pop esi
// 007f7780  5d                   pop ebp
// 007f7781  33c0                 xor eax, eax
// 007f7783  5b                   pop ebx
// 007f7784  83c410               add esp, 0x10
// 007f7787  c22000               ret 0x20
// copied from an identical function in another client (function ?AccessibleLocation@CXTPControl@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp