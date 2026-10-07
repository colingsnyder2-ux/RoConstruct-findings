// roc 2010-06 00733b10  unit: seg_00730000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733b10
//
// 00733b10  56                   push esi
// 00733b11  8b742408             mov esi, dword ptr [esp + 8]
// 00733b15  8b4674               mov eax, dword ptr [esi + 0x74]
// 00733b18  85c0                 test eax, eax
// 00733b1a  746e                 je 0x733b8a
// 00733b1c  57                   push edi
// 00733b1d  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00733b20  03f8                 add edi, eax
// 00733b22  837f0806             cmp dword ptr [edi + 8], 6
// 00733b26  740b                 je 0x733b33
// 00733b28  6a05                 push 5
// 00733b2a  56                   push esi
// 00733b2b  e880c5ffff           call 0x7300b0
// 00733b30  83c408               add esp, 8
// 00733b33  8b4608               mov eax, dword ptr [esi + 8]
// 00733b36  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 00733b39  8908                 mov dword ptr [eax], ecx
// 00733b3b  8b50f4               mov edx, dword ptr [eax - 0xc]
// 00733b3e  895004               mov dword ptr [eax + 4], edx
// 00733b41  8b48f8               mov ecx, dword ptr [eax - 8]
// 00733b44  894808               mov dword ptr [eax + 8], ecx
// 00733b47  8b4608               mov eax, dword ptr [esi + 8]
// 00733b4a  8b17                 mov edx, dword ptr [edi]
// 00733b4c  83e810               sub eax, 0x10
// 00733b4f  8910                 mov dword ptr [eax], edx
// 00733b51  8b4f04               mov ecx, dword ptr [edi + 4]
// 00733b54  894804               mov dword ptr [eax + 4], ecx
// 00733b57  8b5708               mov edx, dword ptr [edi + 8]
// 00733b5a  895008               mov dword ptr [eax + 8], edx
// 00733b5d  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00733b60  2b4608               sub eax, dword ptr [esi + 8]
// 00733b63  5f                   pop edi
// 00733b64  83f810               cmp eax, 0x10
// 00733b67  7f0b                 jg 0x733b74
// 00733b69  6a01                 push 1
// 00733b6b  56                   push esi
// 00733b6c  e81fc0ffff           call 0x72fb90
// 00733b71  83c408               add esp, 8
// 00733b74  83460810             add dword ptr [esi + 8], 0x10
// 00733b78  8b4608               mov eax, dword ptr [esi + 8]
// 00733b7b  6a01                 push 1
// 00733b7d  83c0e0               add eax, -0x20
// 00733b80  50                   push eax
// 00733b81  56                   push esi
// 00733b82  e8d9c7ffff           call 0x730360
// 00733b87  83c40c               add esp, 0xc
// 00733b8a  6a02                 push 2
// 00733b8c  56                   push esi
// 00733b8d  e81ec5ffff           call 0x7300b0
// 00733b92  83c408               add esp, 8
// 00733b95  5e                   pop esi
// 00733b96  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_errormsg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
