// roc 2008-06 0065f700  unit: seg_00650000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f700
//
// 0065f700  56                   push esi
// 0065f701  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065f705  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0065f708  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0065f70b  57                   push edi
// 0065f70c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0065f710  03c0                 add eax, eax
// 0065f712  6a00                 push 0
// 0065f714  03c0                 add eax, eax
// 0065f716  50                   push eax
// 0065f717  51                   push ecx
// 0065f718  57                   push edi
// 0065f719  e8d20f0000           call 0x6606f0
// 0065f71e  8b5634               mov edx, dword ptr [esi + 0x34]
// 0065f721  8b4610               mov eax, dword ptr [esi + 0x10]
// 0065f724  03d2                 add edx, edx
// 0065f726  6a00                 push 0
// 0065f728  03d2                 add edx, edx
// 0065f72a  52                   push edx
// 0065f72b  50                   push eax
// 0065f72c  57                   push edi
// 0065f72d  e8be0f0000           call 0x6606f0
// 0065f732  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0065f735  8b5608               mov edx, dword ptr [esi + 8]
// 0065f738  6a00                 push 0
// 0065f73a  c1e104               shl ecx, 4
// 0065f73d  51                   push ecx
// 0065f73e  52                   push edx
// 0065f73f  57                   push edi
// 0065f740  e8ab0f0000           call 0x6606f0
// 0065f745  8b4630               mov eax, dword ptr [esi + 0x30]
// 0065f748  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0065f74b  03c0                 add eax, eax
// 0065f74d  6a00                 push 0
// 0065f74f  03c0                 add eax, eax
// 0065f751  50                   push eax
// 0065f752  51                   push ecx
// 0065f753  57                   push edi
// 0065f754  e8970f0000           call 0x6606f0
// 0065f759  8b4638               mov eax, dword ptr [esi + 0x38]
// 0065f75c  8d1440               lea edx, [eax + eax*2]
// 0065f75f  8b4618               mov eax, dword ptr [esi + 0x18]
// 0065f762  83c440               add esp, 0x40
// 0065f765  03d2                 add edx, edx
// 0065f767  6a00                 push 0
// 0065f769  03d2                 add edx, edx
// 0065f76b  52                   push edx
// 0065f76c  50                   push eax
// 0065f76d  57                   push edi
// 0065f76e  e87d0f0000           call 0x6606f0
// 0065f773  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0065f776  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0065f779  03c9                 add ecx, ecx
// 0065f77b  6a00                 push 0
// 0065f77d  03c9                 add ecx, ecx
// 0065f77f  51                   push ecx
// 0065f780  52                   push edx
// 0065f781  57                   push edi
// 0065f782  e8690f0000           call 0x6606f0
// 0065f787  6a00                 push 0
// 0065f789  6a4c                 push 0x4c
// 0065f78b  56                   push esi
// 0065f78c  57                   push edi
// 0065f78d  e85e0f0000           call 0x6606f0
// 0065f792  83c430               add esp, 0x30
// 0065f795  5f                   pop edi
// 0065f796  5e                   pop esi
// 0065f797  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
