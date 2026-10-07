// roc 2010-06 0077e1f0  unit: seg_00770000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e1f0
//
// 0077e1f0  56                   push esi
// 0077e1f1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0077e1f5  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0077e1f8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077e1fb  57                   push edi
// 0077e1fc  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0077e200  03c0                 add eax, eax
// 0077e202  6a00                 push 0
// 0077e204  03c0                 add eax, eax
// 0077e206  50                   push eax
// 0077e207  51                   push ecx
// 0077e208  57                   push edi
// 0077e209  e8f2070000           call 0x77ea00
// 0077e20e  8b5634               mov edx, dword ptr [esi + 0x34]
// 0077e211  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077e214  03d2                 add edx, edx
// 0077e216  6a00                 push 0
// 0077e218  03d2                 add edx, edx
// 0077e21a  52                   push edx
// 0077e21b  50                   push eax
// 0077e21c  57                   push edi
// 0077e21d  e8de070000           call 0x77ea00
// 0077e222  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0077e225  8b5608               mov edx, dword ptr [esi + 8]
// 0077e228  6a00                 push 0
// 0077e22a  c1e104               shl ecx, 4
// 0077e22d  51                   push ecx
// 0077e22e  52                   push edx
// 0077e22f  57                   push edi
// 0077e230  e8cb070000           call 0x77ea00
// 0077e235  8b4630               mov eax, dword ptr [esi + 0x30]
// 0077e238  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0077e23b  03c0                 add eax, eax
// 0077e23d  6a00                 push 0
// 0077e23f  03c0                 add eax, eax
// 0077e241  50                   push eax
// 0077e242  51                   push ecx
// 0077e243  57                   push edi
// 0077e244  e8b7070000           call 0x77ea00
// 0077e249  8b4638               mov eax, dword ptr [esi + 0x38]
// 0077e24c  8d1440               lea edx, [eax + eax*2]
// 0077e24f  8b4618               mov eax, dword ptr [esi + 0x18]
// 0077e252  83c440               add esp, 0x40
// 0077e255  03d2                 add edx, edx
// 0077e257  6a00                 push 0
// 0077e259  03d2                 add edx, edx
// 0077e25b  52                   push edx
// 0077e25c  50                   push eax
// 0077e25d  57                   push edi
// 0077e25e  e89d070000           call 0x77ea00
// 0077e263  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0077e266  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0077e269  03c9                 add ecx, ecx
// 0077e26b  6a00                 push 0
// 0077e26d  03c9                 add ecx, ecx
// 0077e26f  51                   push ecx
// 0077e270  52                   push edx
// 0077e271  57                   push edi
// 0077e272  e889070000           call 0x77ea00
// 0077e277  6a00                 push 0
// 0077e279  6a4c                 push 0x4c
// 0077e27b  56                   push esi
// 0077e27c  57                   push edi
// 0077e27d  e87e070000           call 0x77ea00
// 0077e282  83c430               add esp, 0x30
// 0077e285  5f                   pop edi
// 0077e286  5e                   pop esi
// 0077e287  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
