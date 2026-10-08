// from server: 100% by auto
// roc 2009-06 006ecf50  unit: seg_006e0000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ecf50
//
// 006ecf50  56                   push esi
// 006ecf51  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ecf55  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006ecf58  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006ecf5b  57                   push edi
// 006ecf5c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ecf60  03c0                 add eax, eax
// 006ecf62  6a00                 push 0
// 006ecf64  03c0                 add eax, eax
// 006ecf66  50                   push eax
// 006ecf67  51                   push ecx
// 006ecf68  57                   push edi
// 006ecf69  e8f2070000           call 0x6ed760
// 006ecf6e  8b5634               mov edx, dword ptr [esi + 0x34]
// 006ecf71  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ecf74  03d2                 add edx, edx
// 006ecf76  6a00                 push 0
// 006ecf78  03d2                 add edx, edx
// 006ecf7a  52                   push edx
// 006ecf7b  50                   push eax
// 006ecf7c  57                   push edi
// 006ecf7d  e8de070000           call 0x6ed760
// 006ecf82  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006ecf85  8b5608               mov edx, dword ptr [esi + 8]
// 006ecf88  6a00                 push 0
// 006ecf8a  c1e104               shl ecx, 4
// 006ecf8d  51                   push ecx
// 006ecf8e  52                   push edx
// 006ecf8f  57                   push edi
// 006ecf90  e8cb070000           call 0x6ed760
// 006ecf95  8b4630               mov eax, dword ptr [esi + 0x30]
// 006ecf98  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006ecf9b  03c0                 add eax, eax
// 006ecf9d  6a00                 push 0
// 006ecf9f  03c0                 add eax, eax
// 006ecfa1  50                   push eax
// 006ecfa2  51                   push ecx
// 006ecfa3  57                   push edi
// 006ecfa4  e8b7070000           call 0x6ed760
// 006ecfa9  8b4638               mov eax, dword ptr [esi + 0x38]
// 006ecfac  8d1440               lea edx, [eax + eax*2]
// 006ecfaf  8b4618               mov eax, dword ptr [esi + 0x18]
// 006ecfb2  83c440               add esp, 0x40
// 006ecfb5  03d2                 add edx, edx
// 006ecfb7  6a00                 push 0
// 006ecfb9  03d2                 add edx, edx
// 006ecfbb  52                   push edx
// 006ecfbc  50                   push eax
// 006ecfbd  57                   push edi
// 006ecfbe  e89d070000           call 0x6ed760
// 006ecfc3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006ecfc6  8b561c               mov edx, dword ptr [esi + 0x1c]
// 006ecfc9  03c9                 add ecx, ecx
// 006ecfcb  6a00                 push 0
// 006ecfcd  03c9                 add ecx, ecx
// 006ecfcf  51                   push ecx
// 006ecfd0  52                   push edx
// 006ecfd1  57                   push edi
// 006ecfd2  e889070000           call 0x6ed760
// 006ecfd7  6a00                 push 0
// 006ecfd9  6a4c                 push 0x4c
// 006ecfdb  56                   push esi
// 006ecfdc  57                   push edi
// 006ecfdd  e87e070000           call 0x6ed760
// 006ecfe2  83c430               add esp, 0x30
// 006ecfe5  5f                   pop edi
// 006ecfe6  5e                   pop esi
// 006ecfe7  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
