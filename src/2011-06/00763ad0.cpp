// roc 2011-06 00763ad0  unit: seg_00760000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763ad0
//
// 00763ad0  53                   push ebx
// 00763ad1  56                   push esi
// 00763ad2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00763ad6  57                   push edi
// 00763ad7  8b7e08               mov edi, dword ptr [esi + 8]
// 00763ada  8d442410             lea eax, [esp + 0x10]
// 00763ade  50                   push eax
// 00763adf  6aff                 push -1
// 00763ae1  57                   push edi
// 00763ae2  e879ecffff           call 0x762760
// 00763ae7  8b0e                 mov ecx, dword ptr [esi]
// 00763ae9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00763aed  8bde                 mov ebx, esi
// 00763aef  2bd9                 sub ebx, ecx
// 00763af1  81c30c020000         add ebx, 0x20c
// 00763af7  83c40c               add esp, 0xc
// 00763afa  3bd3                 cmp edx, ebx
// 00763afc  771d                 ja 0x763b1b
// 00763afe  52                   push edx
// 00763aff  50                   push eax
// 00763b00  51                   push ecx
// 00763b01  e8d67a0a00           call 0x80b5dc
// 00763b06  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00763b0a  010e                 add dword ptr [esi], ecx
// 00763b0c  6afe                 push -2
// 00763b0e  57                   push edi
// 00763b0f  e85ce8ffff           call 0x762370
// 00763b14  83c414               add esp, 0x14
// 00763b17  5f                   pop edi
// 00763b18  5e                   pop esi
// 00763b19  5b                   pop ebx
// 00763b1a  c3                   ret 
// 00763b1b  2bce                 sub ecx, esi
// 00763b1d  83e90c               sub ecx, 0xc
// 00763b20  741e                 je 0x763b40
// 00763b22  8b5608               mov edx, dword ptr [esi + 8]
// 00763b25  51                   push ecx
// 00763b26  8d5e0c               lea ebx, [esi + 0xc]
// 00763b29  53                   push ebx
// 00763b2a  52                   push edx
// 00763b2b  e830eeffff           call 0x762960
// 00763b30  ff4604               inc dword ptr [esi + 4]
// 00763b33  6afe                 push -2
// 00763b35  57                   push edi
// 00763b36  891e                 mov dword ptr [esi], ebx
// 00763b38  e8d3e8ffff           call 0x762410
// 00763b3d  83c414               add esp, 0x14
// 00763b40  ff4604               inc dword ptr [esi + 4]
// 00763b43  56                   push esi
// 00763b44  e837feffff           call 0x763980
// 00763b49  83c404               add esp, 4
// 00763b4c  5f                   pop edi
// 00763b4d  5e                   pop esi
// 00763b4e  5b                   pop ebx
// 00763b4f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_addvalue)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
