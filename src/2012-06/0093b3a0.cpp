// from server: 100% by auto
// roc 2012-06 0093b3a0  unit: seg_00930000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093b3a0
//
// 0093b3a0  51                   push ecx
// 0093b3a1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0093b3a4  6a04                 push 4
// 0093b3a6  8d442404             lea eax, [esp + 4]
// 0093b3aa  50                   push eax
// 0093b3ab  51                   push ecx
// 0093b3ac  e89fb5ffff           call 0x936950
// 0093b3b1  83c40c               add esp, 0xc
// 0093b3b4  85c0                 test eax, eax
// 0093b3b6  7423                 je 0x93b3db
// 0093b3b8  8b560c               mov edx, dword ptr [esi + 0xc]
// 0093b3bb  8b06                 mov eax, dword ptr [esi]
// 0093b3bd  68b4fdbf00           push 0xbffdb4
// 0093b3c2  52                   push edx
// 0093b3c3  6898fdbf00           push 0xbffd98
// 0093b3c8  50                   push eax
// 0093b3c9  e8724df1ff           call 0x850140
// 0093b3ce  8b0e                 mov ecx, dword ptr [esi]
// 0093b3d0  6a03                 push 3
// 0093b3d2  51                   push ecx
// 0093b3d3  e8a898f1ff           call 0x854c80
// 0093b3d8  83c418               add esp, 0x18
// 0093b3db  8b0424               mov eax, dword ptr [esp]
// 0093b3de  85c0                 test eax, eax
// 0093b3e0  7502                 jne 0x93b3e4
// 0093b3e2  59                   pop ecx
// 0093b3e3  c3                   ret 
// 0093b3e4  8b5608               mov edx, dword ptr [esi + 8]
// 0093b3e7  57                   push edi
// 0093b3e8  50                   push eax
// 0093b3e9  8b06                 mov eax, dword ptr [esi]
// 0093b3eb  52                   push edx
// 0093b3ec  50                   push eax
// 0093b3ed  e8eeb5ffff           call 0x9369e0
// 0093b3f2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0093b3f6  8b5604               mov edx, dword ptr [esi + 4]
// 0093b3f9  51                   push ecx
// 0093b3fa  8bf8                 mov edi, eax
// 0093b3fc  57                   push edi
// 0093b3fd  52                   push edx
// 0093b3fe  e84db5ffff           call 0x936950
// 0093b403  83c418               add esp, 0x18
// 0093b406  85c0                 test eax, eax
// 0093b408  7423                 je 0x93b42d
// 0093b40a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0093b40d  8b0e                 mov ecx, dword ptr [esi]
// 0093b40f  68b4fdbf00           push 0xbffdb4
// 0093b414  50                   push eax
// 0093b415  6898fdbf00           push 0xbffd98
// 0093b41a  51                   push ecx
// 0093b41b  e8204df1ff           call 0x850140
// 0093b420  8b16                 mov edx, dword ptr [esi]
// 0093b422  6a03                 push 3
// 0093b424  52                   push edx
// 0093b425  e85698f1ff           call 0x854c80
// 0093b42a  83c418               add esp, 0x18
// 0093b42d  8b442404             mov eax, dword ptr [esp + 4]
// 0093b431  8b0e                 mov ecx, dword ptr [esi]
// 0093b433  48                   dec eax
// 0093b434  50                   push eax
// 0093b435  57                   push edi
// 0093b436  51                   push ecx
// 0093b437  e8f4aeffff           call 0x936330
// 0093b43c  83c40c               add esp, 0xc
// 0093b43f  5f                   pop edi
// 0093b440  59                   pop ecx
// 0093b441  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadString)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
