// roc 2012-06 008570e0  unit: lua_exception  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008570e0
//
// 008570e0  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 008570e3  7c27                 jl 0x85710c
// 008570e5  85ff                 test edi, edi
// 008570e7  7511                 jne 0x8570fa
// 008570e9  2bc1                 sub eax, ecx
// 008570eb  50                   push eax
// 008570ec  8b4608               mov eax, dword ptr [esi + 8]
// 008570ef  51                   push ecx
// 008570f0  50                   push eax
// 008570f1  e8faaffdff           call 0x8320f0
// 008570f6  83c40c               add esp, 0xc
// 008570f9  c3                   ret 
// 008570fa  8b4e08               mov ecx, dword ptr [esi + 8]
// 008570fd  68c83dbd00           push 0xbd3dc8
// 00857102  51                   push ecx
// 00857103  e898bdfdff           call 0x832ea0
// 00857108  83c408               add esp, 8
// 0085710b  c3                   ret 
// 0085710c  53                   push ebx
// 0085710d  8b5cfe14             mov ebx, dword ptr [esi + edi*8 + 0x14]
// 00857111  83fbff               cmp ebx, -1
// 00857114  7525                 jne 0x85713b
// 00857116  8b5608               mov edx, dword ptr [esi + 8]
// 00857119  68883ebd00           push 0xbd3e88
// 0085711e  52                   push edx
// 0085711f  e87cbdfdff           call 0x832ea0
// 00857124  83c408               add esp, 8
// 00857127  8b54fe10             mov edx, dword ptr [esi + edi*8 + 0x10]
// 0085712b  8b4608               mov eax, dword ptr [esi + 8]
// 0085712e  53                   push ebx
// 0085712f  52                   push edx
// 00857130  50                   push eax
// 00857131  e8baaffdff           call 0x8320f0
// 00857136  83c40c               add esp, 0xc
// 00857139  5b                   pop ebx
// 0085713a  c3                   ret 
// 0085713b  83fbfe               cmp ebx, -2
// 0085713e  75e7                 jne 0x857127
// 00857140  8b44fe10             mov eax, dword ptr [esi + edi*8 + 0x10]
// 00857144  2b06                 sub eax, dword ptr [esi]
// 00857146  8b4e08               mov ecx, dword ptr [esi + 8]
// 00857149  40                   inc eax
// 0085714a  50                   push eax
// 0085714b  51                   push ecx
// 0085714c  e87faffdff           call 0x8320d0
// 00857151  83c408               add esp, 8
// 00857154  5b                   pop ebx
// 00857155  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _push_onecapture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
