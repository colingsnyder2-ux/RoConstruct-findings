// roc 2009-12 00888ef0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00888ef0
//
// 00888ef0  83ec18               sub esp, 0x18
// 00888ef3  53                   push ebx
// 00888ef4  55                   push ebp
// 00888ef5  56                   push esi
// 00888ef6  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00888efa  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00888f00  8b16                 mov edx, dword ptr [esi]
// 00888f02  8b9ec8000000         mov ebx, dword ptr [esi + 0xc8]
// 00888f08  8baecc000000         mov ebp, dword ptr [esi + 0xcc]
// 00888f0e  894c240c             mov dword ptr [esp + 0xc], ecx
// 00888f12  89442414             mov dword ptr [esp + 0x14], eax
// 00888f16  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00888f19  57                   push edi
// 00888f1a  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00888f20  8bce                 mov ecx, esi
// 00888f22  ffd0                 call eax
// 00888f24  8b16                 mov edx, dword ptr [esi]
// 00888f26  89442414             mov dword ptr [esp + 0x14], eax
// 00888f2a  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00888f30  8bce                 mov ecx, esi
// 00888f32  ffd0                 call eax
// 00888f34  89442430             mov dword ptr [esp + 0x30], eax
// 00888f38  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00888f3e  83f8ff               cmp eax, -1
// 00888f41  750f                 jne 0x888f52
// 00888f43  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00888f49  85c9                 test ecx, ecx
// 00888f4b  7405                 je 0x888f52
// 00888f4d  e85ed6f6ff           call 0x7f65b0
// 00888f52  8bc8                 mov ecx, eax
// 00888f54  8d042f               lea eax, [edi + ebp]
// 00888f57  99                   cdq 
// 00888f58  2bc2                 sub eax, edx
// 00888f5a  8bf8                 mov edi, eax
// 00888f5c  83c3f5               add ebx, -0xb
// 00888f5f  d1ff                 sar edi, 1
// 00888f61  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 00888f68  751f                 jne 0x888f89
// 00888f6a  85c9                 test ecx, ecx
// 00888f6c  741b                 je 0x888f89
// 00888f6e  837c243000           cmp dword ptr [esp + 0x30], 0
// 00888f73  7414                 je 0x888f89
// 00888f75  837c241400           cmp dword ptr [esp + 0x14], 0
// 00888f7a  740d                 je 0x888f89
// 00888f7c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00888f80  6a2f                 push 0x2f
// 00888f82  e8b946f7ff           call 0x7fd640
// 00888f87  eb0c                 jmp 0x888f95
// 00888f89  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00888f8d  8b11                 mov edx, dword ptr [ecx]
// 00888f8f  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00888f92  56                   push esi
// 00888f93  ffd0                 call eax
// 00888f95  50                   push eax
// 00888f96  8d4f03               lea ecx, [edi + 3]
// 00888f99  51                   push ecx
// 00888f9a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00888f9e  53                   push ebx
// 00888f9f  57                   push edi
// 00888fa0  8d5303               lea edx, [ebx + 3]
// 00888fa3  52                   push edx
// 00888fa4  8d77fd               lea esi, [edi - 3]
// 00888fa7  56                   push esi
// 00888fa8  53                   push ebx
// 00888fa9  51                   push ecx
// 00888faa  e8e156f7ff           call 0x7fe690
// 00888faf  83c420               add esp, 0x20
// 00888fb2  5f                   pop edi
// 00888fb3  5e                   pop esi
// 00888fb4  5d                   pop ebp
// 00888fb5  5b                   pop ebx
// 00888fb6  83c418               add esp, 0x18
// 00888fb9  c20800               ret 8
// copied from an identical function in another client (function ?DrawControlPopupGlyph@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOfficeTheme.cpp