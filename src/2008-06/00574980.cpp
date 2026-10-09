// roc 2008-06 00574980  unit: ChatEnter  size: 393 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574980
//
// 00574980  6aff                 push -1
// 00574982  64a100000000         mov eax, dword ptr fs:[0]
// 00574988  6868917d00           push 0x7d9168
// 0057498d  50                   push eax
// 0057498e  64892500000000       mov dword ptr fs:[0], esp
// 00574995  83ec10               sub esp, 0x10
// 00574998  53                   push ebx
// 00574999  55                   push ebp
// 0057499a  56                   push esi
// 0057499b  57                   push edi
// 0057499c  8bd9                 mov ebx, ecx
// 0057499e  33ff                 xor edi, edi
// 005749a0  e87b64f1ff           call 0x48ae20
// 005749a5  85c0                 test eax, eax
// 005749a7  7674                 jbe 0x574a1d
// 005749a9  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 005749ad  8d4900               lea ecx, [ecx]
// 005749b0  8bb308010000         mov esi, dword ptr [ebx + 0x108]
// 005749b6  8b4610               mov eax, dword ptr [esi + 0x10]
// 005749b9  2b460c               sub eax, dword ptr [esi + 0xc]
// 005749bc  c1f803               sar eax, 3
// 005749bf  3bf8                 cmp edi, eax
// 005749c1  7206                 jb 0x5749c9
// 005749c3  ff1590288000         call dword ptr [0x802890]
// 005749c9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005749cc  8b04f9               mov eax, dword ptr [ecx + edi*8]
// 005749cf  6a00                 push 0
// 005749d1  68d8b89200           push 0x92b8d8
// 005749d6  687c909200           push 0x92907c
// 005749db  6a00                 push 0
// 005749dd  50                   push eax
// 005749de  e8e3cd1200           call 0x6a17c6
// 005749e3  8bf0                 mov esi, eax
// 005749e5  83c414               add esp, 0x14
// 005749e8  85f6                 test esi, esi
// 005749ea  7425                 je 0x574a11
// 005749ec  3bb334010000         cmp esi, dword ptr [ebx + 0x134]
// 005749f2  741d                 je 0x574a11
// 005749f4  8b9630010000         mov edx, dword ptr [esi + 0x130]
// 005749fa  8b12                 mov edx, dword ptr [edx]
// 005749fc  8d8e30010000         lea ecx, [esi + 0x130]
// 00574a02  55                   push ebp
// 00574a03  8d442414             lea eax, [esp + 0x14]
// 00574a07  50                   push eax
// 00574a08  ffd2                 call edx
// 00574a0a  837c241000           cmp dword ptr [esp + 0x10], 0
// 00574a0f  7532                 jne 0x574a43
// 00574a11  8bcb                 mov ecx, ebx
// 00574a13  47                   inc edi
// 00574a14  e80764f1ff           call 0x48ae20
// 00574a19  3bf8                 cmp edi, eax
// 00574a1b  7293                 jb 0x5749b0
// 00574a1d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00574a21  5f                   pop edi
// 00574a22  5e                   pop esi
// 00574a23  5d                   pop ebp
// 00574a24  c70000000000         mov dword ptr [eax], 0
// 00574a2a  c7400400000000       mov dword ptr [eax + 4], 0
// 00574a31  5b                   pop ebx
// 00574a32  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00574a36  64890d00000000       mov dword ptr fs:[0], ecx
// 00574a3d  83c41c               add esp, 0x1c
// 00574a40  c20800               ret 8
// 00574a43  8b8b34010000         mov ecx, dword ptr [ebx + 0x134]
// 00574a49  8dbb34010000         lea edi, [ebx + 0x134]
// 00574a4f  85c9                 test ecx, ecx
// 00574a51  7407                 je 0x574a5a
// 00574a53  8b01                 mov eax, dword ptr [ecx]
// 00574a55  8b5040               mov edx, dword ptr [eax + 0x40]
// 00574a58  ffd2                 call edx
// 00574a5a  8bcf                 mov ecx, edi
// 00574a5c  e81f24eeff           call 0x456e80
// 00574a61  8d442418             lea eax, [esp + 0x18]
// 00574a65  56                   push esi
// 00574a66  50                   push eax
// 00574a67  e8d43f0a00           call 0x618a40
// 00574a6c  83c408               add esp, 8
// 00574a6f  8b08                 mov ecx, dword ptr [eax]
// 00574a71  83c004               add eax, 4
// 00574a74  890f                 mov dword ptr [edi], ecx
// 00574a76  50                   push eax
// 00574a77  8d4f04               lea ecx, [edi + 4]
// 00574a7a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00574a82  e829dbe8ff           call 0x4025b0
// 00574a87  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00574a8b  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00574a93  85c0                 test eax, eax
// 00574a95  742c                 je 0x574ac3
// 00574a97  8bf0                 mov esi, eax
// 00574a99  83c004               add eax, 4
// 00574a9c  83caff               or edx, 0xffffffff
// 00574a9f  f00fc110             lock xadd dword ptr [eax], edx
// 00574aa3  751e                 jne 0x574ac3
// 00574aa5  8b06                 mov eax, dword ptr [esi]
// 00574aa7  8b5004               mov edx, dword ptr [eax + 4]
// 00574aaa  8bce                 mov ecx, esi
// 00574aac  ffd2                 call edx
// 00574aae  8d4608               lea eax, [esi + 8]
// 00574ab1  83c9ff               or ecx, 0xffffffff
// 00574ab4  f00fc108             lock xadd dword ptr [eax], ecx
// 00574ab8  7509                 jne 0x574ac3
// 00574aba  8b16                 mov edx, dword ptr [esi]
// 00574abc  8b4208               mov eax, dword ptr [edx + 8]
// 00574abf  8bce                 mov ecx, esi
// 00574ac1  ffd0                 call eax
// 00574ac3  8b3f                 mov edi, dword ptr [edi]
// 00574ac5  8b8f34010000         mov ecx, dword ptr [edi + 0x134]
// 00574acb  8db734010000         lea esi, [edi + 0x134]
// 00574ad1  85c9                 test ecx, ecx
// 00574ad3  7407                 je 0x574adc
// 00574ad5  8b11                 mov edx, dword ptr [ecx]
// 00574ad7  8b4240               mov eax, dword ptr [edx + 0x40]
// 00574ada  ffd0                 call eax
// 00574adc  8bce                 mov ecx, esi
// 00574ade  e89d23eeff           call 0x456e80
// 00574ae3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00574ae7  8b442430             mov eax, dword ptr [esp + 0x30]
// 00574aeb  8b542414             mov edx, dword ptr [esp + 0x14]
// 00574aef  5f                   pop edi
// 00574af0  5e                   pop esi
// 00574af1  8908                 mov dword ptr [eax], ecx
// 00574af3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00574af7  5d                   pop ebp
// 00574af8  895004               mov dword ptr [eax + 4], edx
// 00574afb  5b                   pop ebx
// 00574afc  64890d00000000       mov dword ptr fs:[0], ecx
// 00574b03  83c41c               add esp, 0x1c
// 00574b06  c20800               ret 8
// library openrbx-client/App\gui\GUI.cpp (function ?processNonFocus@GuiItem@RBX@@AAE?AVGuiResponse@2@ABVGuiEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
