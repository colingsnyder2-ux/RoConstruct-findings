// roc 2008-06 0061d640  unit: RBX::Lua::LuaArguments  size: 834 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061d640
//
// 0061d640  64a100000000         mov eax, dword ptr fs:[0]
// 0061d646  6aff                 push -1
// 0061d648  68b9fe7c00           push 0x7cfeb9
// 0061d64d  50                   push eax
// 0061d64e  64892500000000       mov dword ptr fs:[0], esp
// 0061d655  83ec54               sub esp, 0x54
// 0061d658  56                   push esi
// 0061d659  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0061d65d  b9bc448400           mov ecx, 0x8444bc
// 0061d662  8bc6                 mov eax, esi
// 0061d664  8a10                 mov dl, byte ptr [eax]
// 0061d666  3a11                 cmp dl, byte ptr [ecx]
// 0061d668  751a                 jne 0x61d684
// 0061d66a  84d2                 test dl, dl
// 0061d66c  7412                 je 0x61d680
// 0061d66e  8a5001               mov dl, byte ptr [eax + 1]
// 0061d671  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d674  750e                 jne 0x61d684
// 0061d676  83c002               add eax, 2
// 0061d679  83c102               add ecx, 2
// 0061d67c  84d2                 test dl, dl
// 0061d67e  75e4                 jne 0x61d664
// 0061d680  33c0                 xor eax, eax
// 0061d682  eb05                 jmp 0x61d689
// 0061d684  1bc0                 sbb eax, eax
// 0061d686  83d8ff               sbb eax, -1
// 0061d689  85c0                 test eax, eax
// 0061d68b  7516                 jne 0x61d6a3
// 0061d68d  8b442468             mov eax, dword ptr [esp + 0x68]
// 0061d691  8b08                 mov ecx, dword ptr [eax]
// 0061d693  8b542470             mov edx, dword ptr [esp + 0x70]
// 0061d697  51                   push ecx
// 0061d698  52                   push edx
// 0061d699  e8824bffff           call 0x612220
// 0061d69e  e938020000           jmp 0x61d8db
// 0061d6a3  b9b4448400           mov ecx, 0x8444b4
// 0061d6a8  8bc6                 mov eax, esi
// 0061d6aa  8d9b00000000         lea ebx, [ebx]
// 0061d6b0  8a10                 mov dl, byte ptr [eax]
// 0061d6b2  3a11                 cmp dl, byte ptr [ecx]
// 0061d6b4  751a                 jne 0x61d6d0
// 0061d6b6  84d2                 test dl, dl
// 0061d6b8  7412                 je 0x61d6cc
// 0061d6ba  8a5001               mov dl, byte ptr [eax + 1]
// 0061d6bd  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d6c0  750e                 jne 0x61d6d0
// 0061d6c2  83c002               add eax, 2
// 0061d6c5  83c102               add ecx, 2
// 0061d6c8  84d2                 test dl, dl
// 0061d6ca  75e4                 jne 0x61d6b0
// 0061d6cc  33c0                 xor eax, eax
// 0061d6ce  eb05                 jmp 0x61d6d5
// 0061d6d0  1bc0                 sbb eax, eax
// 0061d6d2  83d8ff               sbb eax, -1
// 0061d6d5  85c0                 test eax, eax
// 0061d6d7  74b4                 je 0x61d68d
// 0061d6d9  b9e00d8100           mov ecx, 0x810de0
// 0061d6de  8bc6                 mov eax, esi
// 0061d6e0  8a10                 mov dl, byte ptr [eax]
// 0061d6e2  3a11                 cmp dl, byte ptr [ecx]
// 0061d6e4  751a                 jne 0x61d700
// 0061d6e6  84d2                 test dl, dl
// 0061d6e8  7412                 je 0x61d6fc
// 0061d6ea  8a5001               mov dl, byte ptr [eax + 1]
// 0061d6ed  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d6f0  750e                 jne 0x61d700
// 0061d6f2  83c002               add eax, 2
// 0061d6f5  83c102               add ecx, 2
// 0061d6f8  84d2                 test dl, dl
// 0061d6fa  75e4                 jne 0x61d6e0
// 0061d6fc  33c0                 xor eax, eax
// 0061d6fe  eb05                 jmp 0x61d705
// 0061d700  1bc0                 sbb eax, eax
// 0061d702  83d8ff               sbb eax, -1
// 0061d705  85c0                 test eax, eax
// 0061d707  7535                 jne 0x61d73e
// 0061d709  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0061d70d  83ec0c               sub esp, 0xc
// 0061d710  8bc4                 mov eax, esp
// 0061d712  89642410             mov dword ptr [esp + 0x10], esp
// 0061d716  50                   push eax
// 0061d717  e8548bf9ff           call 0x5b6270
// 0061d71c  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0061d720  51                   push ecx
// 0061d721  e81ab6f8ff           call 0x5a8d40
// 0061d726  83c410               add esp, 0x10
// 0061d729  b801000000           mov eax, 1
// 0061d72e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0061d732  64890d00000000       mov dword ptr fs:[0], ecx
// 0061d739  5e                   pop esi
// 0061d73a  83c460               add esp, 0x60
// 0061d73d  c3                   ret 
// 0061d73e  b904728200           mov ecx, 0x827204
// 0061d743  8bc6                 mov eax, esi
// 0061d745  8a10                 mov dl, byte ptr [eax]
// 0061d747  3a11                 cmp dl, byte ptr [ecx]
// 0061d749  751a                 jne 0x61d765
// 0061d74b  84d2                 test dl, dl
// 0061d74d  7412                 je 0x61d761
// 0061d74f  8a5001               mov dl, byte ptr [eax + 1]
// 0061d752  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d755  750e                 jne 0x61d765
// 0061d757  83c002               add eax, 2
// 0061d75a  83c102               add ecx, 2
// 0061d75d  84d2                 test dl, dl
// 0061d75f  75e4                 jne 0x61d745
// 0061d761  33c0                 xor eax, eax
// 0061d763  eb05                 jmp 0x61d76a
// 0061d765  1bc0                 sbb eax, eax
// 0061d767  83d8ff               sbb eax, -1
// 0061d76a  85c0                 test eax, eax
// 0061d76c  7538                 jne 0x61d7a6
// 0061d76e  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0061d772  8d542408             lea edx, [esp + 8]
// 0061d776  52                   push edx
// 0061d777  e8f48af9ff           call 0x5b6270
// 0061d77c  d900                 fld dword ptr [eax]
// 0061d77e  8b442470             mov eax, dword ptr [esp + 0x70]
// 0061d782  83ec08               sub esp, 8
// 0061d785  dd1c24               fstp qword ptr [esp]
// 0061d788  50                   push eax
// 0061d789  e8724affff           call 0x612200
// 0061d78e  83c40c               add esp, 0xc
// 0061d791  b801000000           mov eax, 1
// 0061d796  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0061d79a  64890d00000000       mov dword ptr fs:[0], ecx
// 0061d7a1  5e                   pop esi
// 0061d7a2  83c460               add esp, 0x60
// 0061d7a5  c3                   ret 
// 0061d7a6  b994448400           mov ecx, 0x844494
// 0061d7ab  8bc6                 mov eax, esi
// 0061d7ad  8d4900               lea ecx, [ecx]
// 0061d7b0  8a10                 mov dl, byte ptr [eax]
// 0061d7b2  3a11                 cmp dl, byte ptr [ecx]
// 0061d7b4  751a                 jne 0x61d7d0
// 0061d7b6  84d2                 test dl, dl
// 0061d7b8  7412                 je 0x61d7cc
// 0061d7ba  8a5001               mov dl, byte ptr [eax + 1]
// 0061d7bd  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d7c0  750e                 jne 0x61d7d0
// 0061d7c2  83c002               add eax, 2
// 0061d7c5  83c102               add ecx, 2
// 0061d7c8  84d2                 test dl, dl
// 0061d7ca  75e4                 jne 0x61d7b0
// 0061d7cc  33c0                 xor eax, eax
// 0061d7ce  eb05                 jmp 0x61d7d5
// 0061d7d0  1bc0                 sbb eax, eax
// 0061d7d2  83d8ff               sbb eax, -1
// 0061d7d5  85c0                 test eax, eax
// 0061d7d7  7539                 jne 0x61d812
// 0061d7d9  8d4c2408             lea ecx, [esp + 8]
// 0061d7dd  51                   push ecx
// 0061d7de  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0061d7e2  e8898af9ff           call 0x5b6270
// 0061d7e7  d94004               fld dword ptr [eax + 4]
// 0061d7ea  8b542470             mov edx, dword ptr [esp + 0x70]
// 0061d7ee  83ec08               sub esp, 8
// 0061d7f1  dd1c24               fstp qword ptr [esp]
// 0061d7f4  52                   push edx
// 0061d7f5  e8064affff           call 0x612200
// 0061d7fa  83c40c               add esp, 0xc
// 0061d7fd  b801000000           mov eax, 1
// 0061d802  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0061d806  64890d00000000       mov dword ptr fs:[0], ecx
// 0061d80d  5e                   pop esi
// 0061d80e  83c460               add esp, 0x60
// 0061d811  c3                   ret 
// 0061d812  b990448400           mov ecx, 0x844490
// 0061d817  8bc6                 mov eax, esi
// 0061d819  8da42400000000       lea esp, [esp]
// 0061d820  8a10                 mov dl, byte ptr [eax]
// 0061d822  3a11                 cmp dl, byte ptr [ecx]
// 0061d824  751a                 jne 0x61d840
// 0061d826  84d2                 test dl, dl
// 0061d828  7412                 je 0x61d83c
// 0061d82a  8a5001               mov dl, byte ptr [eax + 1]
// 0061d82d  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d830  750e                 jne 0x61d840
// 0061d832  83c002               add eax, 2
// 0061d835  83c102               add ecx, 2
// 0061d838  84d2                 test dl, dl
// 0061d83a  75e4                 jne 0x61d820
// 0061d83c  33c0                 xor eax, eax
// 0061d83e  eb05                 jmp 0x61d845
// 0061d840  1bc0                 sbb eax, eax
// 0061d842  83d8ff               sbb eax, -1
// 0061d845  85c0                 test eax, eax
// 0061d847  7539                 jne 0x61d882
// 0061d849  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0061d84d  8d442408             lea eax, [esp + 8]
// 0061d851  50                   push eax
// 0061d852  e8198af9ff           call 0x5b6270
// 0061d857  d94008               fld dword ptr [eax + 8]
// 0061d85a  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0061d85e  83ec08               sub esp, 8
// 0061d861  dd1c24               fstp qword ptr [esp]
// 0061d864  51                   push ecx
// 0061d865  e89649ffff           call 0x612200
// 0061d86a  83c40c               add esp, 0xc
// 0061d86d  b801000000           mov eax, 1
// 0061d872  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0061d876  64890d00000000       mov dword ptr fs:[0], ecx
// 0061d87d  5e                   pop esi
// 0061d87e  83c460               add esp, 0x60
// 0061d881  c3                   ret 
// 0061d882  b968c98100           mov ecx, 0x81c968
// 0061d887  8bc6                 mov eax, esi
// 0061d889  8da42400000000       lea esp, [esp]
// 0061d890  8a10                 mov dl, byte ptr [eax]
// 0061d892  3a11                 cmp dl, byte ptr [ecx]
// 0061d894  751a                 jne 0x61d8b0
// 0061d896  84d2                 test dl, dl
// 0061d898  7412                 je 0x61d8ac
// 0061d89a  8a5001               mov dl, byte ptr [eax + 1]
// 0061d89d  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d8a0  750e                 jne 0x61d8b0
// 0061d8a2  83c002               add eax, 2
// 0061d8a5  83c102               add ecx, 2
// 0061d8a8  84d2                 test dl, dl
// 0061d8aa  75e4                 jne 0x61d890
// 0061d8ac  33c0                 xor eax, eax
// 0061d8ae  eb05                 jmp 0x61d8b5
// 0061d8b0  1bc0                 sbb eax, eax
// 0061d8b2  83d8ff               sbb eax, -1
// 0061d8b5  85c0                 test eax, eax
// 0061d8b7  753a                 jne 0x61d8f3
// 0061d8b9  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0061d8bd  e8ee88f9ff           call 0x5b61b0
// 0061d8c2  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0061d8c6  7205                 jb 0x61d8cd
// 0061d8c8  8b4004               mov eax, dword ptr [eax + 4]
// 0061d8cb  eb03                 jmp 0x61d8d0
// 0061d8cd  83c004               add eax, 4
// 0061d8d0  8b542470             mov edx, dword ptr [esp + 0x70]
// 0061d8d4  50                   push eax
// 0061d8d5  52                   push edx
// 0061d8d6  e8a549ffff           call 0x612280
// 0061d8db  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0061d8df  83c408               add esp, 8
// 0061d8e2  b801000000           mov eax, 1
// 0061d8e7  64890d00000000       mov dword ptr fs:[0], ecx
// 0061d8ee  5e                   pop esi
// 0061d8ef  83c460               add esp, 0x60
// 0061d8f2  c3                   ret 
// 0061d8f3  b9ccf78000           mov ecx, 0x80f7cc
// 0061d8f8  8bc6                 mov eax, esi
// 0061d8fa  8d9b00000000         lea ebx, [ebx]
// 0061d900  8a10                 mov dl, byte ptr [eax]
// 0061d902  3a11                 cmp dl, byte ptr [ecx]
// 0061d904  751a                 jne 0x61d920
// 0061d906  84d2                 test dl, dl
// 0061d908  7412                 je 0x61d91c
// 0061d90a  8a5001               mov dl, byte ptr [eax + 1]
// 0061d90d  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d910  750e                 jne 0x61d920
// 0061d912  83c002               add eax, 2
// 0061d915  83c102               add ecx, 2
// 0061d918  84d2                 test dl, dl
// 0061d91a  75e4                 jne 0x61d900
// 0061d91c  33c0                 xor eax, eax
// 0061d91e  eb05                 jmp 0x61d925
// 0061d920  1bc0                 sbb eax, eax
// 0061d922  83d8ff               sbb eax, -1
// 0061d925  85c0                 test eax, eax
// 0061d927  7525                 jne 0x61d94e
// 0061d929  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0061d92d  e87e88f9ff           call 0x5b61b0
// 0061d932  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0061d936  720b                 jb 0x61d943
// 0061d938  8b4004               mov eax, dword ptr [eax + 4]
// 0061d93b  50                   push eax
// 0061d93c  8b442474             mov eax, dword ptr [esp + 0x74]
// 0061d940  50                   push eax
// 0061d941  eb93                 jmp 0x61d8d6
// 0061d943  83c004               add eax, 4
// 0061d946  50                   push eax
// 0061d947  8b442474             mov eax, dword ptr [esp + 0x74]
// 0061d94b  50                   push eax
// 0061d94c  eb88                 jmp 0x61d8d6
// 0061d94e  56                   push esi
// 0061d94f  8d4c2418             lea ecx, [esp + 0x18]
// 0061d953  6808228300           push 0x832208
// 0061d958  51                   push ecx
// 0061d959  e8b2c1eeff           call 0x509b10
// 0061d95e  83c40c               add esp, 0xc
// 0061d961  50                   push eax
// 0061d962  8d4c2434             lea ecx, [esp + 0x34]
// 0061d966  c744246400000000     mov dword ptr [esp + 0x64], 0
// 0061d96e  e8ddc3deff           call 0x409d50
// 0061d973  68c81b8d00           push 0x8d1bc8
// 0061d978  8d542434             lea edx, [esp + 0x34]
// 0061d97c  52                   push edx
// 0061d97d  e80a3c0800           call 0x6a158c
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_index@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHABVBrickColor@3@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
