// roc 2011-06 0088dbf0  unit: CXTPRibbonTheme  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088dbf0
//
// 0088dbf0  83ec60               sub esp, 0x60
// 0088dbf3  53                   push ebx
// 0088dbf4  55                   push ebp
// 0088dbf5  56                   push esi
// 0088dbf6  8b742474             mov esi, dword ptr [esp + 0x74]
// 0088dbfa  57                   push edi
// 0088dbfb  8bd9                 mov ebx, ecx
// 0088dbfd  56                   push esi
// 0088dbfe  8d4c2424             lea ecx, [esp + 0x24]
// 0088dc02  e889f1fcff           call 0x85cd90
// 0088dc07  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088dc0b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088dc0f  8bc1                 mov eax, ecx
// 0088dc11  2bc2                 sub eax, edx
// 0088dc13  89442478             mov dword ptr [esp + 0x78], eax
// 0088dc17  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0088dc1d  85c0                 test eax, eax
// 0088dc1f  7e3a                 jle 0x88dc5b
// 0088dc21  894c2438             mov dword ptr [esp + 0x38], ecx
// 0088dc25  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088dc29  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0088dc2d  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0088dc33  89542430             mov dword ptr [esp + 0x30], edx
// 0088dc37  8b542424             mov edx, dword ptr [esp + 0x24]
// 0088dc3b  48                   dec eax
// 0088dc3c  3bc1                 cmp eax, ecx
// 0088dc3e  89542434             mov dword ptr [esp + 0x34], edx
// 0088dc42  7c02                 jl 0x88dc46
// 0088dc44  8bc1                 mov eax, ecx
// 0088dc46  8d542430             lea edx, [esp + 0x30]
// 0088dc4a  52                   push edx
// 0088dc4b  50                   push eax
// 0088dc4c  8bce                 mov ecx, esi
// 0088dc4e  e8edf5fdff           call 0x86d240
// 0088dc53  8b442438             mov eax, dword ptr [esp + 0x38]
// 0088dc57  89442478             mov dword ptr [esp + 0x78], eax
// 0088dc5b  68e80aad00           push 0xad0ae8
// 0088dc60  8bcb                 mov ecx, ebx
// 0088dc62  e829160000           call 0x88f290
// 0088dc67  8bf0                 mov esi, eax
// 0088dc69  85f6                 test esi, esi
// 0088dc6b  0f84af010000         je 0x88de20
// 0088dc71  8bce                 mov ecx, esi
// 0088dc73  e818fb0500           call 0x8ed790
// 0088dc78  8bce                 mov ecx, esi
// 0088dc7a  8bf8                 mov edi, eax
// 0088dc7c  e82ffb0500           call 0x8ed7b0
// 0088dc81  8be8                 mov ebp, eax
// 0088dc83  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088dc87  897c241c             mov dword ptr [esp + 0x1c], edi
// 0088dc8b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0088dc8f  897c2444             mov dword ptr [esp + 0x44], edi
// 0088dc93  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 0088dc97  89442440             mov dword ptr [esp + 0x40], eax
// 0088dc9b  8d4438fd             lea eax, [eax + edi - 3]
// 0088dc9f  89442448             mov dword ptr [esp + 0x48], eax
// 0088dca3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088dca7  83ec10               sub esp, 0x10
// 0088dcaa  33ff                 xor edi, edi
// 0088dcac  8944245c             mov dword ptr [esp + 0x5c], eax
// 0088dcb0  8bc4                 mov eax, esp
// 0088dcb2  8938                 mov dword ptr [eax], edi
// 0088dcb4  897804               mov dword ptr [eax + 4], edi
// 0088dcb7  897808               mov dword ptr [eax + 8], edi
// 0088dcba  89780c               mov dword ptr [eax + 0xc], edi
// 0088dcbd  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 0088dcc4  83ec10               sub esp, 0x10
// 0088dcc7  8bc4                 mov eax, esp
// 0088dcc9  33c9                 xor ecx, ecx
// 0088dccb  8908                 mov dword ptr [eax], ecx
// 0088dccd  33d2                 xor edx, edx
// 0088dccf  895004               mov dword ptr [eax + 4], edx
// 0088dcd2  894c2430             mov dword ptr [esp + 0x30], ecx
// 0088dcd6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088dcda  89542434             mov dword ptr [esp + 0x34], edx
// 0088dcde  8d542460             lea edx, [esp + 0x60]
// 0088dce2  896808               mov dword ptr [eax + 8], ebp
// 0088dce5  52                   push edx
// 0088dce6  89480c               mov dword ptr [eax + 0xc], ecx
// 0088dce9  57                   push edi
// 0088dcea  8bce                 mov ecx, esi
// 0088dcec  896c2440             mov dword ptr [esp + 0x40], ebp
// 0088dcf0  e8ebf20500           call 0x8ecfe0
// 0088dcf5  68d40aad00           push 0xad0ad4
// 0088dcfa  8bcb                 mov ecx, ebx
// 0088dcfc  e88f150000           call 0x88f290
// 0088dd01  8bf0                 mov esi, eax
// 0088dd03  8bce                 mov ecx, esi
// 0088dd05  e886fa0500           call 0x8ed790
// 0088dd0a  8bce                 mov ecx, esi
// 0088dd0c  8be8                 mov ebp, eax
// 0088dd0e  e89dfa0500           call 0x8ed7b0
// 0088dd13  55                   push ebp
// 0088dd14  8b2dc81ba400         mov ebp, dword ptr [0xa41bc8]
// 0088dd1a  50                   push eax
// 0088dd1b  6a00                 push 0
// 0088dd1d  6a00                 push 0
// 0088dd1f  8d442420             lea eax, [esp + 0x20]
// 0088dd23  50                   push eax
// 0088dd24  ffd5                 call ebp
// 0088dd26  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088dd2a  8b442448             mov eax, dword ptr [esp + 0x48]
// 0088dd2e  894c2454             mov dword ptr [esp + 0x54], ecx
// 0088dd32  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088dd36  8bd1                 mov edx, ecx
// 0088dd38  2b542410             sub edx, dword ptr [esp + 0x10]
// 0088dd3c  89442450             mov dword ptr [esp + 0x50], eax
// 0088dd40  03d0                 add edx, eax
// 0088dd42  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088dd46  83ec10               sub esp, 0x10
// 0088dd49  89542468             mov dword ptr [esp + 0x68], edx
// 0088dd4d  33d2                 xor edx, edx
// 0088dd4f  8944246c             mov dword ptr [esp + 0x6c], eax
// 0088dd53  8bc4                 mov eax, esp
// 0088dd55  8910                 mov dword ptr [eax], edx
// 0088dd57  895004               mov dword ptr [eax + 4], edx
// 0088dd5a  895008               mov dword ptr [eax + 8], edx
// 0088dd5d  89500c               mov dword ptr [eax + 0xc], edx
// 0088dd60  83ec10               sub esp, 0x10
// 0088dd63  8954245c             mov dword ptr [esp + 0x5c], edx
// 0088dd67  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088dd6b  8bc4                 mov eax, esp
// 0088dd6d  8910                 mov dword ptr [eax], edx
// 0088dd6f  8b542434             mov edx, dword ptr [esp + 0x34]
// 0088dd73  895004               mov dword ptr [eax + 4], edx
// 0088dd76  894808               mov dword ptr [eax + 8], ecx
// 0088dd79  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088dd7d  8d542470             lea edx, [esp + 0x70]
// 0088dd81  52                   push edx
// 0088dd82  89480c               mov dword ptr [eax + 0xc], ecx
// 0088dd85  57                   push edi
// 0088dd86  8bce                 mov ecx, esi
// 0088dd88  e853f20500           call 0x8ecfe0
// 0088dd8d  68c40aad00           push 0xad0ac4
// 0088dd92  8bcb                 mov ecx, ebx
// 0088dd94  e8f7140000           call 0x88f290
// 0088dd99  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088dd9d  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088dda1  8bf0                 mov esi, eax
// 0088dda3  8b442458             mov eax, dword ptr [esp + 0x58]
// 0088dda7  89442460             mov dword ptr [esp + 0x60], eax
// 0088ddab  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088ddaf  894c2464             mov dword ptr [esp + 0x64], ecx
// 0088ddb3  8bce                 mov ecx, esi
// 0088ddb5  89542468             mov dword ptr [esp + 0x68], edx
// 0088ddb9  8944246c             mov dword ptr [esp + 0x6c], eax
// 0088ddbd  e8cef90500           call 0x8ed790
// 0088ddc2  8bce                 mov ecx, esi
// 0088ddc4  8bd8                 mov ebx, eax
// 0088ddc6  e8e5f90500           call 0x8ed7b0
// 0088ddcb  53                   push ebx
// 0088ddcc  50                   push eax
// 0088ddcd  6a00                 push 0
// 0088ddcf  6a00                 push 0
// 0088ddd1  8d4c2420             lea ecx, [esp + 0x20]
// 0088ddd5  51                   push ecx
// 0088ddd6  ffd5                 call ebp
// 0088ddd8  83ec10               sub esp, 0x10
// 0088dddb  8bc4                 mov eax, esp
// 0088dddd  33c9                 xor ecx, ecx
// 0088dddf  8908                 mov dword ptr [eax], ecx
// 0088dde1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088dde5  33d2                 xor edx, edx
// 0088dde7  895004               mov dword ptr [eax + 4], edx
// 0088ddea  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088ddee  33db                 xor ebx, ebx
// 0088ddf0  895808               mov dword ptr [eax + 8], ebx
// 0088ddf3  83ec10               sub esp, 0x10
// 0088ddf6  33ed                 xor ebp, ebp
// 0088ddf8  89680c               mov dword ptr [eax + 0xc], ebp
// 0088ddfb  8bc4                 mov eax, esp
// 0088ddfd  8910                 mov dword ptr [eax], edx
// 0088ddff  8b542438             mov edx, dword ptr [esp + 0x38]
// 0088de03  894804               mov dword ptr [eax + 4], ecx
// 0088de06  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088de0a  895008               mov dword ptr [eax + 8], edx
// 0088de0d  8d942480000000       lea edx, [esp + 0x80]
// 0088de14  52                   push edx
// 0088de15  89480c               mov dword ptr [eax + 0xc], ecx
// 0088de18  57                   push edi
// 0088de19  8bce                 mov ecx, esi
// 0088de1b  e8c0f10500           call 0x8ecfe0
// 0088de20  5f                   pop edi
// 0088de21  5e                   pop esi
// 0088de22  5d                   pop ebp
// 0088de23  5b                   pop ebx
// 0088de24  83c460               add esp, 0x60
// 0088de27  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillStatusBar@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
