// roc 2009-12 0083f0d0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 523 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083f0d0
//
// 0083f0d0  6aff                 push -1
// 0083f0d2  6801cb9500           push 0x95cb01
// 0083f0d7  64a100000000         mov eax, dword ptr fs:[0]
// 0083f0dd  50                   push eax
// 0083f0de  51                   push ecx
// 0083f0df  53                   push ebx
// 0083f0e0  56                   push esi
// 0083f0e1  57                   push edi
// 0083f0e2  a10052b600           mov eax, dword ptr [0xb65200]
// 0083f0e7  33c4                 xor eax, esp
// 0083f0e9  50                   push eax
// 0083f0ea  8d442414             lea eax, [esp + 0x14]
// 0083f0ee  64a300000000         mov dword ptr fs:[0], eax
// 0083f0f4  8bf1                 mov esi, ecx
// 0083f0f6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0083f0fa  837f0864             cmp dword ptr [edi + 8], 0x64
// 0083f0fe  0f85c0010000         jne 0x83f2c4
// 0083f104  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0083f108  81fba5230000         cmp ebx, 0x23a5
// 0083f10e  756b                 jne 0x83f17b
// 0083f110  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0083f116  8b7058               mov esi, dword ptr [eax + 0x58]
// 0083f119  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0083f11c  85f6                 test esi, esi
// 0083f11e  7441                 je 0x83f161
// 0083f120  8d542428             lea edx, [esp + 0x28]
// 0083f124  52                   push edx
// 0083f125  e8c6d20400           call 0x88c3f0
// 0083f12a  50                   push eax
// 0083f12b  8d8edc000000         lea ecx, [esi + 0xdc]
// 0083f131  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0083f139  ff1538d59800         call dword ptr [0x98d538]
// 0083f13f  8d4c2428             lea ecx, [esp + 0x28]
// 0083f143  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0083f14b  ff15c0de9800         call dword ptr [0x98dec0]
// 0083f151  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083f157  8b01                 mov eax, dword ptr [ecx]
// 0083f159  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0083f15f  ffd2                 call edx
// 0083f161  b801000000           mov eax, 1
// 0083f166  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083f16a  64890d00000000       mov dword ptr fs:[0], ecx
// 0083f171  59                   pop ecx
// 0083f172  5f                   pop edi
// 0083f173  5e                   pop esi
// 0083f174  5b                   pop ebx
// 0083f175  83c410               add esp, 0x10
// 0083f178  c20800               ret 8
// 0083f17b  81fbaa230000         cmp ebx, 0x23aa
// 0083f181  0f85c2000000         jne 0x83f249
// 0083f187  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0083f18a  e8d169fbff           call 0x7f5b60
// 0083f18f  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083f195  8b7958               mov edi, dword ptr [ecx + 0x58]
// 0083f198  85ff                 test edi, edi
// 0083f19a  0f848f000000         je 0x83f22f
// 0083f1a0  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0083f1a6  50                   push eax
// 0083f1a7  e8c4e2fcff           call 0x80d470
// 0083f1ac  85c0                 test eax, eax
// 0083f1ae  747f                 je 0x83f22f
// 0083f1b0  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0083f1b3  83f901               cmp ecx, 1
// 0083f1b6  7577                 jne 0x83f22f
// 0083f1b8  f7d9                 neg ecx
// 0083f1ba  1bc9                 sbb ecx, ecx
// 0083f1bc  894c2424             mov dword ptr [esp + 0x24], ecx
// 0083f1c0  8d542428             lea edx, [esp + 0x28]
// 0083f1c4  52                   push edx
// 0083f1c5  8d4c2414             lea ecx, [esp + 0x14]
// 0083f1c9  51                   push ecx
// 0083f1ca  8d54242c             lea edx, [esp + 0x2c]
// 0083f1ce  52                   push edx
// 0083f1cf  8d4820               lea ecx, [eax + 0x20]
// 0083f1d2  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0083f1da  e841a6fcff           call 0x809820
// 0083f1df  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0083f1e3  e8589ffcff           call 0x809140
// 0083f1e8  83ec24               sub esp, 0x24
// 0083f1eb  8bcc                 mov ecx, esp
// 0083f1ed  8964244c             mov dword ptr [esp + 0x4c], esp
// 0083f1f1  50                   push eax
// 0083f1f2  e849b6fcff           call 0x80a840
// 0083f1f7  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083f1fd  c744244001000000     mov dword ptr [esp + 0x40], 1
// 0083f205  e8f654fdff           call 0x814700
// 0083f20a  8bc8                 mov ecx, eax
// 0083f20c  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0083f214  e8a708fdff           call 0x80fac0
// 0083f219  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0083f21f  898790000000         mov dword ptr [edi + 0x90], eax
// 0083f225  8b01                 mov eax, dword ptr [ecx]
// 0083f227  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0083f22d  ffd2                 call edx
// 0083f22f  b801000000           mov eax, 1
// 0083f234  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083f238  64890d00000000       mov dword ptr fs:[0], ecx
// 0083f23f  59                   pop ecx
// 0083f240  5f                   pop edi
// 0083f241  5e                   pop esi
// 0083f242  5b                   pop ebx
// 0083f243  83c410               add esp, 0x10
// 0083f246  c20800               ret 8
// 0083f249  8d835ddcffff         lea eax, [ebx - 0x23a3]
// 0083f24f  83f80b               cmp eax, 0xb
// 0083f252  7670                 jbe 0x83f2c4
// 0083f254  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0083f257  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0083f25d  e83e52fcff           call 0x8044a0
// 0083f262  8b10                 mov edx, dword ptr [eax]
// 0083f264  8bc8                 mov ecx, eax
// 0083f266  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 0083f26c  ffd0                 call eax
// 0083f26e  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083f274  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 0083f27a  8b5020               mov edx, dword ptr [eax + 0x20]
// 0083f27d  57                   push edi
// 0083f27e  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0083f284  53                   push ebx
// 0083f285  6862280000           push 0x2862
// 0083f28a  52                   push edx
// 0083f28b  ffd7                 call edi
// 0083f28d  85c0                 test eax, eax
// 0083f28f  7519                 jne 0x83f2aa
// 0083f291  50                   push eax
// 0083f292  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0083f298  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 0083f29e  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0083f2a1  53                   push ebx
// 0083f2a2  6811010000           push 0x111
// 0083f2a7  52                   push edx
// 0083f2a8  ffd7                 call edi
// 0083f2aa  b801000000           mov eax, 1
// 0083f2af  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083f2b3  64890d00000000       mov dword ptr fs:[0], ecx
// 0083f2ba  59                   pop ecx
// 0083f2bb  5f                   pop edi
// 0083f2bc  5e                   pop esi
// 0083f2bd  5b                   pop ebx
// 0083f2be  83c410               add esp, 0x10
// 0083f2c1  c20800               ret 8
// 0083f2c4  33c0                 xor eax, eax
// 0083f2c6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083f2ca  64890d00000000       mov dword ptr fs:[0], ecx
// 0083f2d1  59                   pop ecx
// 0083f2d2  5f                   pop edi
// 0083f2d3  5e                   pop esi
// 0083f2d4  5b                   pop ebx
// 0083f2d5  83c410               add esp, 0x10
// 0083f2d8  c20800               ret 8
// copied from an identical function in another client (function ?OnCustomizeName@CXTPCustomizeSheet@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp