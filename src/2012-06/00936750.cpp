// from server: 100% by auto
// roc 2012-06 00936750  unit: seg_00930000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936750
//
// 00936750  56                   push esi
// 00936751  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00936755  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00936758  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0093675b  57                   push edi
// 0093675c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00936760  03c0                 add eax, eax
// 00936762  6a00                 push 0
// 00936764  03c0                 add eax, eax
// 00936766  50                   push eax
// 00936767  51                   push ecx
// 00936768  57                   push edi
// 00936769  e8f2070000           call 0x936f60
// 0093676e  8b5634               mov edx, dword ptr [esi + 0x34]
// 00936771  8b4610               mov eax, dword ptr [esi + 0x10]
// 00936774  03d2                 add edx, edx
// 00936776  6a00                 push 0
// 00936778  03d2                 add edx, edx
// 0093677a  52                   push edx
// 0093677b  50                   push eax
// 0093677c  57                   push edi
// 0093677d  e8de070000           call 0x936f60
// 00936782  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00936785  8b5608               mov edx, dword ptr [esi + 8]
// 00936788  6a00                 push 0
// 0093678a  c1e104               shl ecx, 4
// 0093678d  51                   push ecx
// 0093678e  52                   push edx
// 0093678f  57                   push edi
// 00936790  e8cb070000           call 0x936f60
// 00936795  8b4630               mov eax, dword ptr [esi + 0x30]
// 00936798  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0093679b  03c0                 add eax, eax
// 0093679d  6a00                 push 0
// 0093679f  03c0                 add eax, eax
// 009367a1  50                   push eax
// 009367a2  51                   push ecx
// 009367a3  57                   push edi
// 009367a4  e8b7070000           call 0x936f60
// 009367a9  8b4638               mov eax, dword ptr [esi + 0x38]
// 009367ac  8d1440               lea edx, [eax + eax*2]
// 009367af  8b4618               mov eax, dword ptr [esi + 0x18]
// 009367b2  83c440               add esp, 0x40
// 009367b5  03d2                 add edx, edx
// 009367b7  6a00                 push 0
// 009367b9  03d2                 add edx, edx
// 009367bb  52                   push edx
// 009367bc  50                   push eax
// 009367bd  57                   push edi
// 009367be  e89d070000           call 0x936f60
// 009367c3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 009367c6  8b561c               mov edx, dword ptr [esi + 0x1c]
// 009367c9  03c9                 add ecx, ecx
// 009367cb  6a00                 push 0
// 009367cd  03c9                 add ecx, ecx
// 009367cf  51                   push ecx
// 009367d0  52                   push edx
// 009367d1  57                   push edi
// 009367d2  e889070000           call 0x936f60
// 009367d7  6a00                 push 0
// 009367d9  6a4c                 push 0x4c
// 009367db  56                   push esi
// 009367dc  57                   push edi
// 009367dd  e87e070000           call 0x936f60
// 009367e2  83c430               add esp, 0x30
// 009367e5  5f                   pop edi
// 009367e6  5e                   pop esi
// 009367e7  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
