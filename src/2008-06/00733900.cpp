// roc 2008-06 00733900  unit: XTPPaintThemes::CXTPDefaultTheme  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00733900
//
// 00733900  83ec10               sub esp, 0x10
// 00733903  53                   push ebx
// 00733904  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00733908  55                   push ebp
// 00733909  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0073390d  56                   push esi
// 0073390e  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00733912  57                   push edi
// 00733913  8bf9                 mov edi, ecx
// 00733915  83fb03               cmp ebx, 3
// 00733918  7405                 je 0x73391f
// 0073391a  83fb02               cmp ebx, 2
// 0073391d  756d                 jne 0x73398c
// 0073391f  8b06                 mov eax, dword ptr [esi]
// 00733921  8b5078               mov edx, dword ptr [eax + 0x78]
// 00733924  8bce                 mov ecx, esi
// 00733926  ffd2                 call edx
// 00733928  85c0                 test eax, eax
// 0073392a  7522                 jne 0x73394e
// 0073392c  8b06                 mov eax, dword ptr [esi]
// 0073392e  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00733931  8bce                 mov ecx, esi
// 00733933  ffd2                 call edx
// 00733935  85c0                 test eax, eax
// 00733937  7515                 jne 0x73394e
// 00733939  83fb03               cmp ebx, 3
// 0073393c  754e                 jne 0x73398c
// 0073393e  8b06                 mov eax, dword ptr [esi]
// 00733940  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00733946  8bce                 mov ecx, esi
// 00733948  ffd2                 call edx
// 0073394a  85c0                 test eax, eax
// 0073394c  743e                 je 0x73398c
// 0073394e  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00733954  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0073395a  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00733960  89442410             mov dword ptr [esp + 0x10], eax
// 00733964  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0073396a  894c2414             mov dword ptr [esp + 0x14], ecx
// 0073396e  6a0f                 push 0xf
// 00733970  8bcf                 mov ecx, edi
// 00733972  8954241c             mov dword ptr [esp + 0x1c], edx
// 00733976  89442420             mov dword ptr [esp + 0x20], eax
// 0073397a  e8f1a6f7ff           call 0x6ae070
// 0073397f  50                   push eax
// 00733980  8d4c2414             lea ecx, [esp + 0x14]
// 00733984  51                   push ecx
// 00733985  8bcd                 mov ecx, ebp
// 00733987  e8d2d9f6ff           call 0x6a135e
// 0073398c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00733990  8b442438             mov eax, dword ptr [esp + 0x38]
// 00733994  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00733998  52                   push edx
// 00733999  50                   push eax
// 0073399a  51                   push ecx
// 0073399b  56                   push esi
// 0073399c  8b742434             mov esi, dword ptr [esp + 0x34]
// 007339a0  53                   push ebx
// 007339a1  55                   push ebp
// 007339a2  56                   push esi
// 007339a3  8bcf                 mov ecx, edi
// 007339a5  e8f6d8f7ff           call 0x6b12a0
// 007339aa  5f                   pop edi
// 007339ab  8bc6                 mov eax, esi
// 007339ad  5e                   pop esi
// 007339ae  5d                   pop ebp
// 007339af  5b                   pop ebx
// 007339b0  83c410               add esp, 0x10
// 007339b3  c21c00               ret 0x1c
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawSpecialControl@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp
