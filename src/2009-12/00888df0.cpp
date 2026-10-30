// roc 2009-12 00888df0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00888df0
//
// 00888df0  83ec14               sub esp, 0x14
// 00888df3  53                   push ebx
// 00888df4  55                   push ebp
// 00888df5  56                   push esi
// 00888df6  8b742428             mov esi, dword ptr [esp + 0x28]
// 00888dfa  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00888e00  8b16                 mov edx, dword ptr [esi]
// 00888e02  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 00888e08  8b9ec8000000         mov ebx, dword ptr [esi + 0xc8]
// 00888e0e  57                   push edi
// 00888e0f  8bf9                 mov edi, ecx
// 00888e11  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00888e17  89442414             mov dword ptr [esp + 0x14], eax
// 00888e1b  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00888e1e  894c2420             mov dword ptr [esp + 0x20], ecx
// 00888e22  8bce                 mov ecx, esi
// 00888e24  ffd0                 call eax
// 00888e26  8b16                 mov edx, dword ptr [esi]
// 00888e28  8944242c             mov dword ptr [esp + 0x2c], eax
// 00888e2c  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00888e32  8bce                 mov ecx, esi
// 00888e34  ffd0                 call eax
// 00888e36  89442410             mov dword ptr [esp + 0x10], eax
// 00888e3a  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00888e40  83f8ff               cmp eax, -1
// 00888e43  750f                 jne 0x888e54
// 00888e45  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00888e4b  85c9                 test ecx, ecx
// 00888e4d  7405                 je 0x888e54
// 00888e4f  e85cd7f6ff           call 0x7f65b0
// 00888e54  837c241000           cmp dword ptr [esp + 0x10], 0
// 00888e59  7441                 je 0x888e9c
// 00888e5b  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00888e60  743a                 je 0x888e9c
// 00888e62  85c0                 test eax, eax
// 00888e64  743a                 je 0x888ea0
// 00888e66  8b542428             mov edx, dword ptr [esp + 0x28]
// 00888e6a  6a21                 push 0x21
// 00888e6c  6a20                 push 0x20
// 00888e6e  83ec10               sub esp, 0x10
// 00888e71  8bc4                 mov eax, esp
// 00888e73  8bcb                 mov ecx, ebx
// 00888e75  2b8fcc000000         sub ecx, dword ptr [edi + 0xcc]
// 00888e7b  52                   push edx
// 00888e7c  8908                 mov dword ptr [eax], ecx
// 00888e7e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00888e82  896804               mov dword ptr [eax + 4], ebp
// 00888e85  895808               mov dword ptr [eax + 8], ebx
// 00888e88  89480c               mov dword ptr [eax + 0xc], ecx
// 00888e8b  8bcf                 mov ecx, edi
// 00888e8d  e8ce58f7ff           call 0x7fe760
// 00888e92  5f                   pop edi
// 00888e93  5e                   pop esi
// 00888e94  5d                   pop ebp
// 00888e95  5b                   pop ebx
// 00888e96  83c414               add esp, 0x14
// 00888e99  c20800               ret 8
// 00888e9c  85c0                 test eax, eax
// 00888e9e  750c                 jne 0x888eac
// 00888ea0  8b07                 mov eax, dword ptr [edi]
// 00888ea2  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00888ea5  56                   push esi
// 00888ea6  8bcf                 mov ecx, edi
// 00888ea8  ffd2                 call edx
// 00888eaa  eb14                 jmp 0x888ec0
// 00888eac  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00888eb1  8bcf                 mov ecx, edi
// 00888eb3  7404                 je 0x888eb9
// 00888eb5  6a20                 push 0x20
// 00888eb7  eb02                 jmp 0x888ebb
// 00888eb9  6a10                 push 0x10
// 00888ebb  e88047f7ff           call 0x7fd640
// 00888ec0  2b9fcc000000         sub ebx, dword ptr [edi + 0xcc]
// 00888ec6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00888eca  50                   push eax
// 00888ecb  8b442424             mov eax, dword ptr [esp + 0x24]
// 00888ecf  48                   dec eax
// 00888ed0  50                   push eax
// 00888ed1  45                   inc ebp
// 00888ed2  55                   push ebp
// 00888ed3  53                   push ebx
// 00888ed4  51                   push ecx
// 00888ed5  8bcf                 mov ecx, edi
// 00888ed7  e8c449f7ff           call 0x7fd8a0
// 00888edc  5f                   pop edi
// 00888edd  5e                   pop esi
// 00888ede  5d                   pop ebp
// 00888edf  5b                   pop ebx
// 00888ee0  83c414               add esp, 0x14
// 00888ee3  c20800               ret 8
// copied from an identical function in another client (function ?DrawSplitButtonPopup@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOfficeTheme.cpp