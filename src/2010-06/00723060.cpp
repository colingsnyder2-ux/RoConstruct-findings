// roc 2010-06 00723060  unit: RBX::UniversalTool  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00723060
//
// 00723060  53                   push ebx
// 00723061  56                   push esi
// 00723062  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00723066  57                   push edi
// 00723067  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0072306b  57                   push edi
// 0072306c  56                   push esi
// 0072306d  e86ee2ffff           call 0x7212e0
// 00723072  8bd8                 mov ebx, eax
// 00723074  83c408               add esp, 8
// 00723077  85db                 test ebx, ebx
// 00723079  7542                 jne 0x7230bd
// 0072307b  57                   push edi
// 0072307c  56                   push esi
// 0072307d  e82ee1ffff           call 0x7211b0
// 00723082  83c408               add esp, 8
// 00723085  85c0                 test eax, eax
// 00723087  7532                 jne 0x7230bb
// 00723089  55                   push ebp
// 0072308a  6a03                 push 3
// 0072308c  56                   push esi
// 0072308d  e8cee0ffff           call 0x721160
// 00723092  57                   push edi
// 00723093  56                   push esi
// 00723094  8be8                 mov ebp, eax
// 00723096  e8a5e0ffff           call 0x721140
// 0072309b  50                   push eax
// 0072309c  56                   push esi
// 0072309d  e8bee0ffff           call 0x721160
// 007230a2  50                   push eax
// 007230a3  55                   push ebp
// 007230a4  6894cfa400           push 0xa4cf94
// 007230a9  56                   push esi
// 007230aa  e881e5ffff           call 0x721630
// 007230af  50                   push eax
// 007230b0  57                   push edi
// 007230b1  56                   push esi
// 007230b2  e879fcffff           call 0x722d30
// 007230b7  83c434               add esp, 0x34
// 007230ba  5d                   pop ebp
// 007230bb  8bc3                 mov eax, ebx
// 007230bd  5f                   pop edi
// 007230be  5e                   pop esi
// 007230bf  5b                   pop ebx
// 007230c0  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkinteger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
