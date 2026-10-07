// roc 2011-06 0077db60  unit: seg_00770000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077db60
//
// 0077db60  56                   push esi
// 0077db61  8b742408             mov esi, dword ptr [esp + 8]
// 0077db65  8b4674               mov eax, dword ptr [esi + 0x74]
// 0077db68  85c0                 test eax, eax
// 0077db6a  746e                 je 0x77dbda
// 0077db6c  57                   push edi
// 0077db6d  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0077db70  03f8                 add edi, eax
// 0077db72  837f0806             cmp dword ptr [edi + 8], 6
// 0077db76  740b                 je 0x77db83
// 0077db78  6a05                 push 5
// 0077db7a  56                   push esi
// 0077db7b  e8700c0000           call 0x77e7f0
// 0077db80  83c408               add esp, 8
// 0077db83  8b4608               mov eax, dword ptr [esi + 8]
// 0077db86  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 0077db89  8908                 mov dword ptr [eax], ecx
// 0077db8b  8b50f4               mov edx, dword ptr [eax - 0xc]
// 0077db8e  895004               mov dword ptr [eax + 4], edx
// 0077db91  8b48f8               mov ecx, dword ptr [eax - 8]
// 0077db94  894808               mov dword ptr [eax + 8], ecx
// 0077db97  8b4608               mov eax, dword ptr [esi + 8]
// 0077db9a  8b17                 mov edx, dword ptr [edi]
// 0077db9c  83e810               sub eax, 0x10
// 0077db9f  8910                 mov dword ptr [eax], edx
// 0077dba1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0077dba4  894804               mov dword ptr [eax + 4], ecx
// 0077dba7  8b5708               mov edx, dword ptr [edi + 8]
// 0077dbaa  895008               mov dword ptr [eax + 8], edx
// 0077dbad  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0077dbb0  2b4608               sub eax, dword ptr [esi + 8]
// 0077dbb3  5f                   pop edi
// 0077dbb4  83f810               cmp eax, 0x10
// 0077dbb7  7f0b                 jg 0x77dbc4
// 0077dbb9  6a01                 push 1
// 0077dbbb  56                   push esi
// 0077dbbc  e80f070000           call 0x77e2d0
// 0077dbc1  83c408               add esp, 8
// 0077dbc4  83460810             add dword ptr [esi + 8], 0x10
// 0077dbc8  8b4608               mov eax, dword ptr [esi + 8]
// 0077dbcb  6a01                 push 1
// 0077dbcd  83c0e0               add eax, -0x20
// 0077dbd0  50                   push eax
// 0077dbd1  56                   push esi
// 0077dbd2  e8c90e0000           call 0x77eaa0
// 0077dbd7  83c40c               add esp, 0xc
// 0077dbda  6a02                 push 2
// 0077dbdc  56                   push esi
// 0077dbdd  e80e0c0000           call 0x77e7f0
// 0077dbe2  83c408               add esp, 8
// 0077dbe5  5e                   pop esi
// 0077dbe6  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_errormsg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
