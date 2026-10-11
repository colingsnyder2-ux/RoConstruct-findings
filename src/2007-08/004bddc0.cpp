// from server: 100% by auto
// roc 2007-08 004bddc0  unit: RakPeer  size: 764 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bddc0
//
// 004bddc0  81ecc0000000         sub esp, 0xc0
// 004bddc6  33c0                 xor eax, eax
// 004bddc8  53                   push ebx
// 004bddc9  8b9c24c8000000       mov ebx, dword ptr [esp + 0xc8]
// 004bddd0  56                   push esi
// 004bddd1  8944242c             mov dword ptr [esp + 0x2c], eax
// 004bddd5  89442430             mov dword ptr [esp + 0x30], eax
// 004bddd9  89442434             mov dword ptr [esp + 0x34], eax
// 004bdddd  89442438             mov dword ptr [esp + 0x38], eax
// 004bdde1  8944243c             mov dword ptr [esp + 0x3c], eax
// 004bdde5  89442440             mov dword ptr [esp + 0x40], eax
// 004bdde9  89442444             mov dword ptr [esp + 0x44], eax
// 004bdded  57                   push edi
// 004bddee  8d44240c             lea eax, [esp + 0xc]
// 004bddf2  50                   push eax
// 004bddf3  53                   push ebx
// 004bddf4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 004bddfc  e84ff8ffff           call 0x4bd650
// 004bde01  8d4c2474             lea ecx, [esp + 0x74]
// 004bde05  51                   push ecx
// 004bde06  8d542458             lea edx, [esp + 0x58]
// 004bde0a  52                   push edx
// 004bde0b  8d44241c             lea eax, [esp + 0x1c]
// 004bde0f  50                   push eax
// 004bde10  53                   push ebx
// 004bde11  e84ae0ffff           call 0x4bbe60
// 004bde16  83c418               add esp, 0x18
// 004bde19  33c0                 xor eax, eax
// 004bde1b  eb03                 jmp 0x4bde20
// 004bde1d  8d4900               lea ecx, [ecx]
// 004bde20  837c846c00           cmp dword ptr [esp + eax*4 + 0x6c], 0
// 004bde25  7524                 jne 0x4bde4b
// 004bde27  83c001               add eax, 1
// 004bde2a  83f808               cmp eax, 8
// 004bde2d  72f1                 jb 0x4bde20
// 004bde2f  8bbc24d4000000       mov edi, dword ptr [esp + 0xd4]
// 004bde36  8d74242c             lea esi, [esp + 0x2c]
// 004bde3a  b908000000           mov ecx, 8
// 004bde3f  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bde41  5f                   pop edi
// 004bde42  5e                   pop esi
// 004bde43  5b                   pop ebx
// 004bde44  81c4c0000000         add esp, 0xc0
// 004bde4a  c3                   ret 
// 004bde4b  b908000000           mov ecx, 8
// 004bde50  8bf3                 mov esi, ebx
// 004bde52  8dbc248c000000       lea edi, [esp + 0x8c]
// 004bde59  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bde5b  8d4c244c             lea ecx, [esp + 0x4c]
// 004bde5f  51                   push ecx
// 004bde60  8d942490000000       lea edx, [esp + 0x90]
// 004bde67  52                   push edx
// 004bde68  e853bcffff           call 0x4b9ac0
// 004bde6d  8d442414             lea eax, [esp + 0x14]
// 004bde71  50                   push eax
// 004bde72  8d4c2458             lea ecx, [esp + 0x58]
// 004bde76  51                   push ecx
// 004bde77  8d54247c             lea edx, [esp + 0x7c]
// 004bde7b  52                   push edx
// 004bde7c  50                   push eax
// 004bde7d  e8dedfffff           call 0x4bbe60
// 004bde82  83c418               add esp, 0x18
// 004bde85  33c0                 xor eax, eax
// 004bde87  837c840c00           cmp dword ptr [esp + eax*4 + 0xc], 0
// 004bde8c  7527                 jne 0x4bdeb5
// 004bde8e  83c001               add eax, 1
// 004bde91  83f808               cmp eax, 8
// 004bde94  72f1                 jb 0x4bde87
// 004bde96  8bbc24d4000000       mov edi, dword ptr [esp + 0xd4]
// 004bde9d  8db4248c000000       lea esi, [esp + 0x8c]
// 004bdea4  b908000000           mov ecx, 8
// 004bdea9  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bdeab  5f                   pop edi
// 004bdeac  5e                   pop esi
// 004bdead  5b                   pop ebx
// 004bdeae  81c4c0000000         add esp, 0xc0
// 004bdeb4  c3                   ret 
// 004bdeb5  8d8c24ac000000       lea ecx, [esp + 0xac]
// 004bdebc  51                   push ecx
// 004bdebd  53                   push ebx
// 004bdebe  8d542434             lea edx, [esp + 0x34]
// 004bdec2  52                   push edx
// 004bdec3  8d842498000000       lea eax, [esp + 0x98]
// 004bdeca  50                   push eax
// 004bdecb  8d4c245c             lea ecx, [esp + 0x5c]
// 004bdecf  51                   push ecx
// 004bded0  e88be5ffff           call 0x4bc460
// 004bded5  8d942480000000       lea edx, [esp + 0x80]
// 004bdedc  52                   push edx
// 004bdedd  8d442464             lea eax, [esp + 0x64]
// 004bdee1  50                   push eax
// 004bdee2  8d4c2428             lea ecx, [esp + 0x28]
// 004bdee6  51                   push ecx
// 004bdee7  52                   push edx
// 004bdee8  e873dfffff           call 0x4bbe60
// 004bdeed  83c424               add esp, 0x24
// 004bdef0  33c0                 xor eax, eax
// 004bdef2  837c846c00           cmp dword ptr [esp + eax*4 + 0x6c], 0
// 004bdef7  7527                 jne 0x4bdf20
// 004bdef9  83c001               add eax, 1
// 004bdefc  83f808               cmp eax, 8
// 004bdeff  72f1                 jb 0x4bdef2
// 004bdf01  8bbc24d4000000       mov edi, dword ptr [esp + 0xd4]
// 004bdf08  8db424ac000000       lea esi, [esp + 0xac]
// 004bdf0f  b908000000           mov ecx, 8
// 004bdf14  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bdf16  5f                   pop edi
// 004bdf17  5e                   pop esi
// 004bdf18  5b                   pop ebx
// 004bdf19  81c4c0000000         add esp, 0xc0
// 004bdf1f  c3                   ret 
// 004bdf20  8d44242c             lea eax, [esp + 0x2c]
// 004bdf24  50                   push eax
// 004bdf25  53                   push ebx
// 004bdf26  8d8c2494000000       lea ecx, [esp + 0x94]
// 004bdf2d  51                   push ecx
// 004bdf2e  8d9424b8000000       lea edx, [esp + 0xb8]
// 004bdf35  52                   push edx
// 004bdf36  8d44245c             lea eax, [esp + 0x5c]
// 004bdf3a  50                   push eax
// 004bdf3b  e820e5ffff           call 0x4bc460
// 004bdf40  8d4c2420             lea ecx, [esp + 0x20]
// 004bdf44  51                   push ecx
// 004bdf45  8d542464             lea edx, [esp + 0x64]
// 004bdf49  52                   push edx
// 004bdf4a  8d842488000000       lea eax, [esp + 0x88]
// 004bdf51  50                   push eax
// 004bdf52  51                   push ecx
// 004bdf53  e808dfffff           call 0x4bbe60
// 004bdf58  83c424               add esp, 0x24
// 004bdf5b  33c0                 xor eax, eax
// 004bdf5d  8d4900               lea ecx, [ecx]
// 004bdf60  837c840c00           cmp dword ptr [esp + eax*4 + 0xc], 0
// 004bdf65  750d                 jne 0x4bdf74
// 004bdf67  83c001               add eax, 1
// 004bdf6a  83f808               cmp eax, 8
// 004bdf6d  72f1                 jb 0x4bdf60
// 004bdf6f  e9bbfeffff           jmp 0x4bde2f
// 004bdf74  8d94248c000000       lea edx, [esp + 0x8c]
// 004bdf7b  52                   push edx
// 004bdf7c  53                   push ebx
// 004bdf7d  8d8424b4000000       lea eax, [esp + 0xb4]
// 004bdf84  50                   push eax
// 004bdf85  8d4c2438             lea ecx, [esp + 0x38]
// 004bdf89  51                   push ecx
// 004bdf8a  8d54245c             lea edx, [esp + 0x5c]
// 004bdf8e  52                   push edx
// 004bdf8f  e8cce4ffff           call 0x4bc460
// 004bdf94  8d842480000000       lea eax, [esp + 0x80]
// 004bdf9b  50                   push eax
// 004bdf9c  8d4c2464             lea ecx, [esp + 0x64]
// 004bdfa0  51                   push ecx
// 004bdfa1  8d542428             lea edx, [esp + 0x28]
// 004bdfa5  52                   push edx
// 004bdfa6  50                   push eax
// 004bdfa7  e8b4deffff           call 0x4bbe60
// 004bdfac  83c424               add esp, 0x24
// 004bdfaf  33c0                 xor eax, eax
// 004bdfb1  837c846c00           cmp dword ptr [esp + eax*4 + 0x6c], 0
// 004bdfb6  750d                 jne 0x4bdfc5
// 004bdfb8  83c001               add eax, 1
// 004bdfbb  83f808               cmp eax, 8
// 004bdfbe  72f1                 jb 0x4bdfb1
// 004bdfc0  e9d1feffff           jmp 0x4bde96
// 004bdfc5  8d8c24ac000000       lea ecx, [esp + 0xac]
// 004bdfcc  51                   push ecx
// 004bdfcd  53                   push ebx
// 004bdfce  8d542434             lea edx, [esp + 0x34]
// 004bdfd2  52                   push edx
// 004bdfd3  8d842498000000       lea eax, [esp + 0x98]
// 004bdfda  50                   push eax
// 004bdfdb  8d4c245c             lea ecx, [esp + 0x5c]
// 004bdfdf  51                   push ecx
// 004bdfe0  e87be4ffff           call 0x4bc460
// 004bdfe5  8d542420             lea edx, [esp + 0x20]
// 004bdfe9  52                   push edx
// 004bdfea  8d442464             lea eax, [esp + 0x64]
// 004bdfee  50                   push eax
// 004bdfef  8d8c2488000000       lea ecx, [esp + 0x88]
// 004bdff6  51                   push ecx
// 004bdff7  52                   push edx
// 004bdff8  e863deffff           call 0x4bbe60
// 004bdffd  83c424               add esp, 0x24
// 004be000  33c0                 xor eax, eax
// 004be002  837c840c00           cmp dword ptr [esp + eax*4 + 0xc], 0
// 004be007  750d                 jne 0x4be016
// 004be009  83c001               add eax, 1
// 004be00c  83f808               cmp eax, 8
// 004be00f  72f1                 jb 0x4be002
// 004be011  e9ebfeffff           jmp 0x4bdf01
// 004be016  8d44242c             lea eax, [esp + 0x2c]
// 004be01a  50                   push eax
// 004be01b  53                   push ebx
// 004be01c  8d8c2494000000       lea ecx, [esp + 0x94]
// 004be023  51                   push ecx
// 004be024  8d9424b8000000       lea edx, [esp + 0xb8]
// 004be02b  52                   push edx
// 004be02c  8d44245c             lea eax, [esp + 0x5c]
// 004be030  50                   push eax
// 004be031  e82ae4ffff           call 0x4bc460
// 004be036  8d8c2480000000       lea ecx, [esp + 0x80]
// 004be03d  51                   push ecx
// 004be03e  8d542464             lea edx, [esp + 0x64]
// 004be042  52                   push edx
// 004be043  8d442428             lea eax, [esp + 0x28]
// 004be047  50                   push eax
// 004be048  51                   push ecx
// 004be049  e812deffff           call 0x4bbe60
// 004be04e  83c424               add esp, 0x24
// 004be051  33c0                 xor eax, eax
// 004be053  837c846c00           cmp dword ptr [esp + eax*4 + 0x6c], 0
// 004be058  750d                 jne 0x4be067
// 004be05a  83c001               add eax, 1
// 004be05d  83f808               cmp eax, 8
// 004be060  72f1                 jb 0x4be053
// 004be062  e9c8fdffff           jmp 0x4bde2f
// 004be067  8d94248c000000       lea edx, [esp + 0x8c]
// 004be06e  52                   push edx
// 004be06f  53                   push ebx
// 004be070  8d8424b4000000       lea eax, [esp + 0xb4]
// 004be077  50                   push eax
// 004be078  8d4c2438             lea ecx, [esp + 0x38]
// 004be07c  51                   push ecx
// 004be07d  8d54245c             lea edx, [esp + 0x5c]
// 004be081  52                   push edx
// 004be082  e8d9e3ffff           call 0x4bc460
// 004be087  8d442420             lea eax, [esp + 0x20]
// 004be08b  50                   push eax
// 004be08c  8d4c2464             lea ecx, [esp + 0x64]
// 004be090  51                   push ecx
// 004be091  8d942488000000       lea edx, [esp + 0x88]
// 004be098  52                   push edx
// 004be099  50                   push eax
// 004be09a  e8c1ddffff           call 0x4bbe60
// 004be09f  83c424               add esp, 0x24
// 004be0a2  33c0                 xor eax, eax
// 004be0a4  837c840c00           cmp dword ptr [esp + eax*4 + 0xc], 0
// 004be0a9  0f8506feffff         jne 0x4bdeb5
// 004be0af  83c001               add eax, 1
// 004be0b2  83f808               cmp eax, 8
// 004be0b5  72ed                 jb 0x4be0a4
// 004be0b7  e9dafdffff           jmp 0x4bde96

// from server: 21% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp