// from server: 100% by auto
// roc 2007-08 004be0c0  unit: RakPeer  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004be0c0
//
// 004be0c0  81ec80000000         sub esp, 0x80
// 004be0c6  53                   push ebx
// 004be0c7  55                   push ebp
// 004be0c8  56                   push esi
// 004be0c9  57                   push edi
// 004be0ca  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 004be0d1  8b08                 mov ecx, dword ptr [eax]
// 004be0d3  8b5004               mov edx, dword ptr [eax + 4]
// 004be0d6  894c2430             mov dword ptr [esp + 0x30], ecx
// 004be0da  8b4808               mov ecx, dword ptr [eax + 8]
// 004be0dd  89542434             mov dword ptr [esp + 0x34], edx
// 004be0e1  8b500c               mov edx, dword ptr [eax + 0xc]
// 004be0e4  33c0                 xor eax, eax
// 004be0e6  89442440             mov dword ptr [esp + 0x40], eax
// 004be0ea  89442444             mov dword ptr [esp + 0x44], eax
// 004be0ee  89442448             mov dword ptr [esp + 0x48], eax
// 004be0f2  8944244c             mov dword ptr [esp + 0x4c], eax
// 004be0f6  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 004be0fd  894c2438             mov dword ptr [esp + 0x38], ecx
// 004be101  8b08                 mov ecx, dword ptr [eax]
// 004be103  8954243c             mov dword ptr [esp + 0x3c], edx
// 004be107  8b5004               mov edx, dword ptr [eax + 4]
// 004be10a  894c2470             mov dword ptr [esp + 0x70], ecx
// 004be10e  8b4808               mov ecx, dword ptr [eax + 8]
// 004be111  89542474             mov dword ptr [esp + 0x74], edx
// 004be115  8b500c               mov edx, dword ptr [eax + 0xc]
// 004be118  33c0                 xor eax, eax
// 004be11a  89842480000000       mov dword ptr [esp + 0x80], eax
// 004be121  89842484000000       mov dword ptr [esp + 0x84], eax
// 004be128  89842488000000       mov dword ptr [esp + 0x88], eax
// 004be12f  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 004be136  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 004be13d  894c2478             mov dword ptr [esp + 0x78], ecx
// 004be141  8b08                 mov ecx, dword ptr [eax]
// 004be143  8954247c             mov dword ptr [esp + 0x7c], edx
// 004be147  8b5004               mov edx, dword ptr [eax + 4]
// 004be14a  894c2450             mov dword ptr [esp + 0x50], ecx
// 004be14e  8b4808               mov ecx, dword ptr [eax + 8]
// 004be151  89542454             mov dword ptr [esp + 0x54], edx
// 004be155  8b500c               mov edx, dword ptr [eax + 0xc]
// 004be158  33c0                 xor eax, eax
// 004be15a  89442460             mov dword ptr [esp + 0x60], eax
// 004be15e  89442464             mov dword ptr [esp + 0x64], eax
// 004be162  89442468             mov dword ptr [esp + 0x68], eax
// 004be166  8944246c             mov dword ptr [esp + 0x6c], eax
// 004be16a  89442414             mov dword ptr [esp + 0x14], eax
// 004be16e  89442418             mov dword ptr [esp + 0x18], eax
// 004be172  8944241c             mov dword ptr [esp + 0x1c], eax
// 004be176  89442420             mov dword ptr [esp + 0x20], eax
// 004be17a  89442424             mov dword ptr [esp + 0x24], eax
// 004be17e  89442428             mov dword ptr [esp + 0x28], eax
// 004be182  8944242c             mov dword ptr [esp + 0x2c], eax
// 004be186  8d442430             lea eax, [esp + 0x30]
// 004be18a  894c2458             mov dword ptr [esp + 0x58], ecx
// 004be18e  50                   push eax
// 004be18f  8d4c2454             lea ecx, [esp + 0x54]
// 004be193  89542460             mov dword ptr [esp + 0x60], edx
// 004be197  51                   push ecx
// 004be198  8bd0                 mov edx, eax
// 004be19a  52                   push edx
// 004be19b  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004be1a3  e8c8d1ffff           call 0x4bb370
// 004be1a8  83c40c               add esp, 0xc
// 004be1ab  33f6                 xor esi, esi
// 004be1ad  33ed                 xor ebp, ebp
// 004be1af  90                   nop 
// 004be1b0  8b5cac70             mov ebx, dword ptr [esp + ebp*4 + 0x70]
// 004be1b4  85db                 test ebx, ebx
// 004be1b6  bf20000000           mov edi, 0x20
// 004be1bb  746a                 je 0x4be227
// 004be1bd  8d4900               lea ecx, [ecx]
// 004be1c0  f6c301               test bl, 1
// 004be1c3  7456                 je 0x4be21b
// 004be1c5  85f6                 test esi, esi
// 004be1c7  742b                 je 0x4be1f4
// 004be1c9  8da42400000000       lea esp, [esp]
// 004be1d0  8d442430             lea eax, [esp + 0x30]
// 004be1d4  50                   push eax
// 004be1d5  e8c6baffff           call 0x4b9ca0
// 004be1da  8d4c2434             lea ecx, [esp + 0x34]
// 004be1de  51                   push ecx
// 004be1df  8d542458             lea edx, [esp + 0x58]
// 004be1e3  52                   push edx
// 004be1e4  8bc1                 mov eax, ecx
// 004be1e6  50                   push eax
// 004be1e7  e884d1ffff           call 0x4bb370
// 004be1ec  83c410               add esp, 0x10
// 004be1ef  83ee01               sub esi, 1
// 004be1f2  75dc                 jne 0x4be1d0
// 004be1f4  8d4c2410             lea ecx, [esp + 0x10]
// 004be1f8  51                   push ecx
// 004be1f9  8d542434             lea edx, [esp + 0x34]
// 004be1fd  52                   push edx
// 004be1fe  8bc1                 mov eax, ecx
// 004be200  50                   push eax
// 004be201  e89ae3ffff           call 0x4bc5a0
// 004be206  8d4c241c             lea ecx, [esp + 0x1c]
// 004be20a  51                   push ecx
// 004be20b  8d542460             lea edx, [esp + 0x60]
// 004be20f  52                   push edx
// 004be210  8bc1                 mov eax, ecx
// 004be212  50                   push eax
// 004be213  e858d1ffff           call 0x4bb370
// 004be218  83c418               add esp, 0x18
// 004be21b  d1eb                 shr ebx, 1
// 004be21d  83c601               add esi, 1
// 004be220  83ef01               sub edi, 1
// 004be223  85db                 test ebx, ebx
// 004be225  7599                 jne 0x4be1c0
// 004be227  83c501               add ebp, 1
// 004be22a  03f7                 add esi, edi
// 004be22c  83fd04               cmp ebp, 4
// 004be22f  0f827bffffff         jb 0x4be1b0
// 004be235  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 004be23c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004be240  8b542414             mov edx, dword ptr [esp + 0x14]
// 004be244  5f                   pop edi
// 004be245  8908                 mov dword ptr [eax], ecx
// 004be247  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004be24b  895004               mov dword ptr [eax + 4], edx
// 004be24e  8b542418             mov edx, dword ptr [esp + 0x18]
// 004be252  5e                   pop esi
// 004be253  5d                   pop ebp
// 004be254  894808               mov dword ptr [eax + 8], ecx
// 004be257  89500c               mov dword ptr [eax + 0xc], edx
// 004be25a  5b                   pop ebx
// 004be25b  81c480000000         add esp, 0x80
// 004be261  c3                   ret 

// from server: 29% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp