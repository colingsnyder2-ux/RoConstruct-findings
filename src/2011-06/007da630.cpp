// roc 2011-06 007da630  unit: seg_007d0000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da630
//
// 007da630  56                   push esi
// 007da631  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007da635  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007da638  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007da63b  57                   push edi
// 007da63c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007da640  03c0                 add eax, eax
// 007da642  6a00                 push 0
// 007da644  03c0                 add eax, eax
// 007da646  50                   push eax
// 007da647  51                   push ecx
// 007da648  57                   push edi
// 007da649  e8f2070000           call 0x7dae40
// 007da64e  8b5634               mov edx, dword ptr [esi + 0x34]
// 007da651  8b4610               mov eax, dword ptr [esi + 0x10]
// 007da654  03d2                 add edx, edx
// 007da656  6a00                 push 0
// 007da658  03d2                 add edx, edx
// 007da65a  52                   push edx
// 007da65b  50                   push eax
// 007da65c  57                   push edi
// 007da65d  e8de070000           call 0x7dae40
// 007da662  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007da665  8b5608               mov edx, dword ptr [esi + 8]
// 007da668  6a00                 push 0
// 007da66a  c1e104               shl ecx, 4
// 007da66d  51                   push ecx
// 007da66e  52                   push edx
// 007da66f  57                   push edi
// 007da670  e8cb070000           call 0x7dae40
// 007da675  8b4630               mov eax, dword ptr [esi + 0x30]
// 007da678  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 007da67b  03c0                 add eax, eax
// 007da67d  6a00                 push 0
// 007da67f  03c0                 add eax, eax
// 007da681  50                   push eax
// 007da682  51                   push ecx
// 007da683  57                   push edi
// 007da684  e8b7070000           call 0x7dae40
// 007da689  8b4638               mov eax, dword ptr [esi + 0x38]
// 007da68c  8d1440               lea edx, [eax + eax*2]
// 007da68f  8b4618               mov eax, dword ptr [esi + 0x18]
// 007da692  83c440               add esp, 0x40
// 007da695  03d2                 add edx, edx
// 007da697  6a00                 push 0
// 007da699  03d2                 add edx, edx
// 007da69b  52                   push edx
// 007da69c  50                   push eax
// 007da69d  57                   push edi
// 007da69e  e89d070000           call 0x7dae40
// 007da6a3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007da6a6  8b561c               mov edx, dword ptr [esi + 0x1c]
// 007da6a9  03c9                 add ecx, ecx
// 007da6ab  6a00                 push 0
// 007da6ad  03c9                 add ecx, ecx
// 007da6af  51                   push ecx
// 007da6b0  52                   push edx
// 007da6b1  57                   push edi
// 007da6b2  e889070000           call 0x7dae40
// 007da6b7  6a00                 push 0
// 007da6b9  6a4c                 push 0x4c
// 007da6bb  56                   push esi
// 007da6bc  57                   push edi
// 007da6bd  e87e070000           call 0x7dae40
// 007da6c2  83c430               add esp, 0x30
// 007da6c5  5f                   pop edi
// 007da6c6  5e                   pop esi
// 007da6c7  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
