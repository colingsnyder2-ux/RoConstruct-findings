// roc 2011-06 007dde90  unit: seg_007d0000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dde90
//
// 007dde90  51                   push ecx
// 007dde91  8b4e04               mov ecx, dword ptr [esi + 4]
// 007dde94  6a04                 push 4
// 007dde96  8d442404             lea eax, [esp + 4]
// 007dde9a  50                   push eax
// 007dde9b  51                   push ecx
// 007dde9c  e88fc9ffff           call 0x7da830
// 007ddea1  83c40c               add esp, 0xc
// 007ddea4  85c0                 test eax, eax
// 007ddea6  7423                 je 0x7ddecb
// 007ddea8  8b560c               mov edx, dword ptr [esi + 0xc]
// 007ddeab  8b06                 mov eax, dword ptr [esi]
// 007ddead  68b4e3ab00           push 0xabe3b4
// 007ddeb2  52                   push edx
// 007ddeb3  6898e3ab00           push 0xabe398
// 007ddeb8  50                   push eax
// 007ddeb9  e862eff9ff           call 0x77ce20
// 007ddebe  8b0e                 mov ecx, dword ptr [esi]
// 007ddec0  6a03                 push 3
// 007ddec2  51                   push ecx
// 007ddec3  e82809faff           call 0x77e7f0
// 007ddec8  83c418               add esp, 0x18
// 007ddecb  8b0424               mov eax, dword ptr [esp]
// 007ddece  85c0                 test eax, eax
// 007dded0  7502                 jne 0x7dded4
// 007dded2  59                   pop ecx
// 007dded3  c3                   ret 
// 007dded4  8b5608               mov edx, dword ptr [esi + 8]
// 007dded7  57                   push edi
// 007dded8  50                   push eax
// 007dded9  8b06                 mov eax, dword ptr [esi]
// 007ddedb  52                   push edx
// 007ddedc  50                   push eax
// 007ddedd  e8dec9ffff           call 0x7da8c0
// 007ddee2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ddee6  8b5604               mov edx, dword ptr [esi + 4]
// 007ddee9  51                   push ecx
// 007ddeea  8bf8                 mov edi, eax
// 007ddeec  57                   push edi
// 007ddeed  52                   push edx
// 007ddeee  e83dc9ffff           call 0x7da830
// 007ddef3  83c418               add esp, 0x18
// 007ddef6  85c0                 test eax, eax
// 007ddef8  7423                 je 0x7ddf1d
// 007ddefa  8b460c               mov eax, dword ptr [esi + 0xc]
// 007ddefd  8b0e                 mov ecx, dword ptr [esi]
// 007ddeff  68b4e3ab00           push 0xabe3b4
// 007ddf04  50                   push eax
// 007ddf05  6898e3ab00           push 0xabe398
// 007ddf0a  51                   push ecx
// 007ddf0b  e810eff9ff           call 0x77ce20
// 007ddf10  8b16                 mov edx, dword ptr [esi]
// 007ddf12  6a03                 push 3
// 007ddf14  52                   push edx
// 007ddf15  e8d608faff           call 0x77e7f0
// 007ddf1a  83c418               add esp, 0x18
// 007ddf1d  8b442404             mov eax, dword ptr [esp + 4]
// 007ddf21  8b0e                 mov ecx, dword ptr [esi]
// 007ddf23  48                   dec eax
// 007ddf24  50                   push eax
// 007ddf25  57                   push edi
// 007ddf26  51                   push ecx
// 007ddf27  e8f4c2ffff           call 0x7da220
// 007ddf2c  83c40c               add esp, 0xc
// 007ddf2f  5f                   pop edi
// 007ddf30  59                   pop ecx
// 007ddf31  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadString)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
