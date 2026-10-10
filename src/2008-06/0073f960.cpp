// roc 2008-06 0073f960  unit: XTPPaintThemes::CXTPOfficeTheme  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073f960
//
// 0073f960  83ec18               sub esp, 0x18
// 0073f963  53                   push ebx
// 0073f964  55                   push ebp
// 0073f965  56                   push esi
// 0073f966  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0073f96a  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0073f970  8b16                 mov edx, dword ptr [esi]
// 0073f972  8b9ec8000000         mov ebx, dword ptr [esi + 0xc8]
// 0073f978  8baecc000000         mov ebp, dword ptr [esi + 0xcc]
// 0073f97e  894c240c             mov dword ptr [esp + 0xc], ecx
// 0073f982  89442414             mov dword ptr [esp + 0x14], eax
// 0073f986  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0073f989  57                   push edi
// 0073f98a  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 0073f990  8bce                 mov ecx, esi
// 0073f992  ffd0                 call eax
// 0073f994  8b16                 mov edx, dword ptr [esi]
// 0073f996  89442414             mov dword ptr [esp + 0x14], eax
// 0073f99a  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0073f9a0  8bce                 mov ecx, esi
// 0073f9a2  ffd0                 call eax
// 0073f9a4  89442430             mov dword ptr [esp + 0x30], eax
// 0073f9a8  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0073f9ae  83f8ff               cmp eax, -1
// 0073f9b1  750f                 jne 0x73f9c2
// 0073f9b3  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0073f9b9  85c9                 test ecx, ecx
// 0073f9bb  7405                 je 0x73f9c2
// 0073f9bd  e8febdf6ff           call 0x6ab7c0
// 0073f9c2  8bc8                 mov ecx, eax
// 0073f9c4  8d042f               lea eax, [edi + ebp]
// 0073f9c7  99                   cdq 
// 0073f9c8  2bc2                 sub eax, edx
// 0073f9ca  8bf8                 mov edi, eax
// 0073f9cc  83c3f5               add ebx, -0xb
// 0073f9cf  d1ff                 sar edi, 1
// 0073f9d1  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 0073f9d8  751f                 jne 0x73f9f9
// 0073f9da  85c9                 test ecx, ecx
// 0073f9dc  741b                 je 0x73f9f9
// 0073f9de  837c243000           cmp dword ptr [esp + 0x30], 0
// 0073f9e3  7414                 je 0x73f9f9
// 0073f9e5  837c241400           cmp dword ptr [esp + 0x14], 0
// 0073f9ea  740d                 je 0x73f9f9
// 0073f9ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073f9f0  6a2f                 push 0x2f
// 0073f9f2  e879e6f6ff           call 0x6ae070
// 0073f9f7  eb0c                 jmp 0x73fa05
// 0073f9f9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073f9fd  8b11                 mov edx, dword ptr [ecx]
// 0073f9ff  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0073fa02  56                   push esi
// 0073fa03  ffd0                 call eax
// 0073fa05  50                   push eax
// 0073fa06  8d4f03               lea ecx, [edi + 3]
// 0073fa09  51                   push ecx
// 0073fa0a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0073fa0e  53                   push ebx
// 0073fa0f  57                   push edi
// 0073fa10  8d5303               lea edx, [ebx + 3]
// 0073fa13  52                   push edx
// 0073fa14  8d77fd               lea esi, [edi - 3]
// 0073fa17  56                   push esi
// 0073fa18  53                   push ebx
// 0073fa19  51                   push ecx
// 0073fa1a  e8f18ffbff           call 0x6f8a10
// 0073fa1f  83c420               add esp, 0x20
// 0073fa22  5f                   pop edi
// 0073fa23  5e                   pop esi
// 0073fa24  5d                   pop ebp
// 0073fa25  5b                   pop ebx
// 0073fa26  83c418               add esp, 0x18
// 0073fa29  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawControlPopupGlyph@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOfficeTheme.cpp
