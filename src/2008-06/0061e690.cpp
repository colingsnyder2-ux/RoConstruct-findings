// roc 2008-06 0061e690  unit: RBX::Lua::LuaArguments  size: 1436 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061e690
//
// 0061e690  64a100000000         mov eax, dword ptr fs:[0]
// 0061e696  6aff                 push -1
// 0061e698  68b9fe7c00           push 0x7cfeb9
// 0061e69d  50                   push eax
// 0061e69e  64892500000000       mov dword ptr fs:[0], esp
// 0061e6a5  83ec48               sub esp, 0x48
// 0061e6a8  56                   push esi
// 0061e6a9  8b742460             mov esi, dword ptr [esp + 0x60]
// 0061e6ad  b980458400           mov ecx, 0x844580
// 0061e6b2  8bc6                 mov eax, esi
// 0061e6b4  8a10                 mov dl, byte ptr [eax]
// 0061e6b6  3a11                 cmp dl, byte ptr [ecx]
// 0061e6b8  751a                 jne 0x61e6d4
// 0061e6ba  84d2                 test dl, dl
// 0061e6bc  7412                 je 0x61e6d0
// 0061e6be  8a5001               mov dl, byte ptr [eax + 1]
// 0061e6c1  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061e6c4  750e                 jne 0x61e6d4
// 0061e6c6  83c002               add eax, 2
// 0061e6c9  83c102               add ecx, 2
// 0061e6cc  84d2                 test dl, dl
// 0061e6ce  75e4                 jne 0x61e6b4
// 0061e6d0  33c0                 xor eax, eax
// 0061e6d2  eb05                 jmp 0x61e6d9
// 0061e6d4  1bc0                 sbb eax, eax
// 0061e6d6  83d8ff               sbb eax, -1
// 0061e6d9  85c0                 test eax, eax
// 0061e6db  7540                 jne 0x61e71d
// 0061e6dd  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0061e6e1  d94124               fld dword ptr [ecx + 0x24]
// 0061e6e4  83ec0c               sub esp, 0xc
// 0061e6e7  8bc4                 mov eax, esp
// 0061e6e9  d918                 fstp dword ptr [eax]
// 0061e6eb  89642410             mov dword ptr [esp + 0x10], esp
// 0061e6ef  d94128               fld dword ptr [ecx + 0x28]
// 0061e6f2  d95804               fstp dword ptr [eax + 4]
// 0061e6f5  d9412c               fld dword ptr [ecx + 0x2c]
// 0061e6f8  d95808               fstp dword ptr [eax + 8]
// 0061e6fb  8b442470             mov eax, dword ptr [esp + 0x70]
// 0061e6ff  50                   push eax
// 0061e700  e83ba9f8ff           call 0x5a9040
// 0061e705  83c410               add esp, 0x10
// 0061e708  b801000000           mov eax, 1
// 0061e70d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061e711  64890d00000000       mov dword ptr fs:[0], ecx
// 0061e718  5e                   pop esi
// 0061e719  83c454               add esp, 0x54
// 0061e71c  c3                   ret 
// 0061e71d  b974458400           mov ecx, 0x844574
// 0061e722  8bc6                 mov eax, esi
// 0061e724  8a10                 mov dl, byte ptr [eax]
// 0061e726  3a11                 cmp dl, byte ptr [ecx]
// 0061e728  751a                 jne 0x61e744
// 0061e72a  84d2                 test dl, dl
// 0061e72c  7412                 je 0x61e740
// 0061e72e  8a5001               mov dl, byte ptr [eax + 1]
// 0061e731  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061e734  750e                 jne 0x61e744
// 0061e736  83c002               add eax, 2
// 0061e739  83c102               add ecx, 2
// 0061e73c  84d2                 test dl, dl
// 0061e73e  75e4                 jne 0x61e724
// 0061e740  33c0                 xor eax, eax
// 0061e742  eb05                 jmp 0x61e749
// 0061e744  1bc0                 sbb eax, eax
// 0061e746  83d8ff               sbb eax, -1
// 0061e749  85c0                 test eax, eax
// 0061e74b  751a                 jne 0x61e767
// 0061e74d  83ec0c               sub esp, 0xc
// 0061e750  8bcc                 mov ecx, esp
// 0061e752  89642410             mov dword ptr [esp + 0x10], esp
// 0061e756  51                   push ecx
// 0061e757  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0061e75b  e890a0efff           call 0x5187f0
// 0061e760  8b542470             mov edx, dword ptr [esp + 0x70]
// 0061e764  52                   push edx
// 0061e765  eb99                 jmp 0x61e700
// 0061e767  b918458300           mov ecx, 0x834518
// 0061e76c  8bc6                 mov eax, esi
// 0061e76e  8bff                 mov edi, edi
// 0061e770  8a10                 mov dl, byte ptr [eax]
// 0061e772  3a11                 cmp dl, byte ptr [ecx]
// 0061e774  751a                 jne 0x61e790
// 0061e776  84d2                 test dl, dl
// 0061e778  7412                 je 0x61e78c
// 0061e77a  8a5001               mov dl, byte ptr [eax + 1]
// 0061e77d  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061e780  750e                 jne 0x61e790
// 0061e782  83c002               add eax, 2
// 0061e785  83c102               add ecx, 2
// 0061e788  84d2                 test dl, dl
// 0061e78a  75e4                 jne 0x61e770
// 0061e78c  33c0                 xor eax, eax
// 0061e78e  eb05                 jmp 0x61e795
// 0061e790  1bc0                 sbb eax, eax
// 0061e792  83d8ff               sbb eax, -1
// 0061e795  85c0                 test eax, eax
// 0061e797  7531                 jne 0x61e7ca
// 0061e799  8b742464             mov esi, dword ptr [esp + 0x64]
// 0061e79d  6aff                 push -1
// 0061e79f  56                   push esi
// 0061e7a0  e82b36ffff           call 0x611dd0
// 0061e7a5  6a01                 push 1
// 0061e7a7  68f0dc6100           push 0x61dcf0
// 0061e7ac  56                   push esi
// 0061e7ad  e89e3bffff           call 0x612350
// 0061e7b2  83c414               add esp, 0x14
// 0061e7b5  b801000000           mov eax, 1
// 0061e7ba  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061e7be  64890d00000000       mov dword ptr fs:[0], ecx
// 0061e7c5  5e                   pop esi
// 0061e7c6  83c454               add esp, 0x54
// 0061e7c9  c3                   ret 
// 0061e7ca  b964458400           mov ecx, 0x844564
// 0061e7cf  8bc6                 mov eax, esi
// 0061e7d1  8a10                 mov dl, byte ptr [eax]
// 0061e7d3  3a11                 cmp dl, byte ptr [ecx]
// 0061e7d5  751a                 jne 0x61e7f1
// 0061e7d7  84d2                 test dl, dl
// 0061e7d9  7412                 je 0x61e7ed
// 0061e7db  8a5001               mov dl, byte ptr [eax + 1]
// 0061e7de  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061e7e1  750e                 jne 0x61e7f1
// 0061e7e3  83c002               add eax, 2
// 0061e7e6  83c102               add ecx, 2
// 0061e7e9  84d2                 test dl, dl
// 0061e7eb  75e4                 jne 0x61e7d1
// 0061e7ed  33c0                 xor eax, eax
// 0061e7ef  eb05                 jmp 0x61e7f6
// 0061e7f1  1bc0                 sbb eax, eax
// 0061e7f3  83d8ff               sbb eax, -1
// 0061e7f6  85c0                 test eax, eax
// 0061e7f8  7531                 jne 0x61e82b
// 0061e7fa  8b742464             mov esi, dword ptr [esp + 0x64]
// 0061e7fe  6aff                 push -1
// 0061e800  56                   push esi
// 0061e801  e8ca35ffff           call 0x611dd0
// 0061e806  6a01                 push 1
// 0061e808  6860dd6100           push 0x61dd60
// 0061e80d  56                   push esi
// 0061e80e  e83d3bffff           call 0x612350
// 0061e813  83c414               add esp, 0x14
// 0061e816  b801000000           mov eax, 1
// 0061e81b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061e81f  64890d00000000       mov dword ptr fs:[0], ecx
// 0061e826  5e                   pop esi
// 0061e827  83c454               add esp, 0x54
// 0061e82a  c3                   ret 
// 0061e82b  b954458400           mov ecx, 0x844554
// 0061e830  8bc6                 mov eax, esi
// 0061e832  8a10                 mov dl, byte ptr [eax]
// 0061e834  3a11                 cmp dl, byte ptr [ecx]
// 0061e836  751a                 jne 0x61e852
// 0061e838  84d2                 test dl, dl
// 0061e83a  7412                 je 0x61e84e
// 0061e83c  8a5001               mov dl, byte ptr [eax + 1]
// 0061e83f  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061e842  750e                 jne 0x61e852
// 0061e844  83c002               add eax, 2
// 0061e847  83c102               add ecx, 2
// 0061e84a  84d2                 test dl, dl
// 0061e84c  75e4                 jne 0x61e832
// 0061e84e  33c0                 xor eax, eax
// 0061e850  eb05                 jmp 0x61e857
// 0061e852  1bc0                 sbb eax, eax
// 0061e854  83d8ff               sbb eax, -1
// 0061e857  85c0                 test eax, eax
// 0061e859  7531                 jne 0x61e88c
// 0061e85b  8b742464             mov esi, dword ptr [esp + 0x64]
// 0061e85f  6aff                 push -1
// 0061e861  56                   push esi
// 0061e862  e86935ffff           call 0x611dd0
// 0061e867  6a01                 push 1
// 0061e869  6860de6100           push 0x61de60
// 0061e86e  56                   push esi
// 0061e86f  e8dc3affff           call 0x612350
// 0061e874  83c414               add esp, 0x14
// 0061e877  b801000000           mov eax, 1
// 0061e87c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061e880  64890d00000000       mov dword ptr fs:[0], ecx
// 0061e887  5e                   pop esi
// 0061e888  83c454               add esp, 0x54
// 0061e88b  c3                   ret 
// 0061e88c  b940458400           mov ecx, 0x844540
// 0061e891  8bc6                 mov eax, esi
// 0061e893  8a10                 mov dl, byte ptr [eax]
// 0061e895  3a11                 cmp dl, byte ptr [ecx]
// 0061e897  751a                 jne 0x61e8b3
// 0061e899  84d2                 test dl, dl
// 0061e89b  7412                 je 0x61e8af
// 0061e89d  8a5001               mov dl, byte ptr [eax + 1]
// 0061e8a0  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061e8a3  750e                 jne 0x61e8b3
// 0061e8a5  83c002               add eax, 2
// 0061e8a8  83c102               add ecx, 2
// 0061e8ab  84d2                 test dl, dl
// 0061e8ad  75e4                 jne 0x61e893
// 0061e8af  33c0                 xor eax, eax
// 0061e8b1  eb05                 jmp 0x61e8b8
// 0061e8b3  1bc0                 sbb eax, eax
// 0061e8b5  83d8ff               sbb eax, -1
// 0061e8b8  85c0                 test eax, eax
// 0061e8ba  7531                 jne 0x61e8ed
// 0061e8bc  8b742464             mov esi, dword ptr [esp + 0x64]
// 0061e8c0  6aff                 push -1
// 0061e8c2  56                   push esi
// 0061e8c3  e80835ffff           call 0x611dd0
// 0061e8c8  6a01                 push 1
// 0061e8ca  6850df6100           push 0x61df50
// 0061e8cf  56                   push esi
// 0061e8d0  e87b3affff           call 0x612350
// 0061e8d5  83c414               add esp, 0x14
// 0061e8d8  b801000000           mov eax, 1
// 0061e8dd  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061e8e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0061e8e8  5e                   pop esi
// 0061e8e9  83c454               add esp, 0x54
// 0061e8ec  c3                   ret 
// 0061e8ed  b92c458400           mov ecx, 0x84452c
// 0061e8f2  8bc6                 mov eax, esi
// 0061e8f4  8a10                 mov dl, byte ptr [eax]
// 0061e8f6  3a11                 cmp dl, byte ptr [ecx]
// 0061e8f8  751a                 jne 0x61e914
// 0061e8fa  84d2                 test dl, dl
// 0061e8fc  7412                 je 0x61e910
// 0061e8fe  8a5001               mov dl, byte ptr [eax + 1]
// 0061e901  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061e904  750e                 jne 0x61e914
// 0061e906  83c002               add eax, 2
// 0061e909  83c102               add ecx, 2
// 0061e90c  84d2                 test dl, dl
// 0061e90e  75e4                 jne 0x61e8f4
// 0061e910  33c0                 xor eax, eax
// 0061e912  eb05                 jmp 0x61e919
// 0061e914  1bc0                 sbb eax, eax
// 0061e916  83d8ff               sbb eax, -1
// 0061e919  85c0                 test eax, eax
// 0061e91b  7531                 jne 0x61e94e
// 0061e91d  8b742464             mov esi, dword ptr [esp + 0x64]
// 0061e921  6aff                 push -1
// 0061e923  56                   push esi
// 0061e924  e8a734ffff           call 0x611dd0
// 0061e929  6a01                 push 1
// 0061e92b  6850e06100           push 0x61e050
// 0061e930  56                   push esi
// 0061e931  e81a3affff           call 0x612350
// 0061e936  83c414               add esp, 0x14
// 0061e939  b801000000           mov eax, 1
// 0061e93e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061e942  64890d00000000       mov dword ptr fs:[0], ecx
// 0061e949  5e                   pop esi
// 0061e94a  83c454               add esp, 0x54
// 0061e94d  c3                   ret 
// 0061e94e  b918458400           mov ecx, 0x844518
// 0061e953  8bc6                 mov eax, esi
// 0061e955  8a10                 mov dl, byte ptr [eax]
// 0061e957  3a11                 cmp dl, byte ptr [ecx]
// 0061e959  751a                 jne 0x61e975
// 0061e95b  84d2                 test dl, dl
// 0061e95d  7412                 je 0x61e971
// 0061e95f  8a5001               mov dl, byte ptr [eax + 1]
// 0061e962  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061e965  750e                 jne 0x61e975
// 0061e967  83c002               add eax, 2
// 0061e96a  83c102               add ecx, 2
// 0061e96d  84d2                 test dl, dl
// 0061e96f  75e4                 jne 0x61e955
// 0061e971  33c0                 xor eax, eax
// 0061e973  eb05                 jmp 0x61e97a
// 0061e975  1bc0                 sbb eax, eax
// 0061e977  83d8ff               sbb eax, -1
// 0061e97a  85c0                 test eax, eax
// 0061e97c  7531                 jne 0x61e9af
// 0061e97e  8b742464             mov esi, dword ptr [esp + 0x64]
// 0061e982  6aff                 push -1
// 0061e984  56                   push esi
// 0061e985  e84634ffff           call 0x611dd0
// 0061e98a  6a01                 push 1
// 0061e98c  6850e16100           push 0x61e150
// 0061e991  56                   push esi
// 0061e992  e8b939ffff           call 0x612350
// 0061e997  83c414               add esp, 0x14
// 0061e99a  b801000000           mov eax, 1
// 0061e99f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061e9a3  64890d00000000       mov dword ptr fs:[0], ecx
// 0061e9aa  5e                   pop esi
// 0061e9ab  83c454               add esp, 0x54
// 0061e9ae  c3                   ret 
// 0061e9af  b904458400           mov ecx, 0x844504
// 0061e9b4  8bc6                 mov eax, esi
// 0061e9b6  8a10                 mov dl, byte ptr [eax]
// 0061e9b8  3a11                 cmp dl, byte ptr [ecx]
// 0061e9ba  751a                 jne 0x61e9d6
// 0061e9bc  84d2                 test dl, dl
// 0061e9be  7412                 je 0x61e9d2
// 0061e9c0  8a5001               mov dl, byte ptr [eax + 1]
// 0061e9c3  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061e9c6  750e                 jne 0x61e9d6
// 0061e9c8  83c002               add eax, 2
// 0061e9cb  83c102               add ecx, 2
// 0061e9ce  84d2                 test dl, dl
// 0061e9d0  75e4                 jne 0x61e9b6
// 0061e9d2  33c0                 xor eax, eax
// 0061e9d4  eb05                 jmp 0x61e9db
// 0061e9d6  1bc0                 sbb eax, eax
// 0061e9d8  83d8ff               sbb eax, -1
// 0061e9db  85c0                 test eax, eax
// 0061e9dd  7531                 jne 0x61ea10
// 0061e9df  8b742464             mov esi, dword ptr [esp + 0x64]
// 0061e9e3  6aff                 push -1
// 0061e9e5  56                   push esi
// 0061e9e6  e8e533ffff           call 0x611dd0
// 0061e9eb  6a01                 push 1
// 0061e9ed  68b0e36100           push 0x61e3b0
// 0061e9f2  56                   push esi
// 0061e9f3  e85839ffff           call 0x612350
// 0061e9f8  83c414               add esp, 0x14
// 0061e9fb  b801000000           mov eax, 1
// 0061ea00  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061ea04  64890d00000000       mov dword ptr fs:[0], ecx
// 0061ea0b  5e                   pop esi
// 0061ea0c  83c454               add esp, 0x54
// 0061ea0f  c3                   ret 
// 0061ea10  b9f0448400           mov ecx, 0x8444f0
// 0061ea15  8bc6                 mov eax, esi
// 0061ea17  8a10                 mov dl, byte ptr [eax]
// 0061ea19  3a11                 cmp dl, byte ptr [ecx]
// 0061ea1b  751a                 jne 0x61ea37
// 0061ea1d  84d2                 test dl, dl
// 0061ea1f  7412                 je 0x61ea33
// 0061ea21  8a5001               mov dl, byte ptr [eax + 1]
// 0061ea24  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061ea27  750e                 jne 0x61ea37
// 0061ea29  83c002               add eax, 2
// 0061ea2c  83c102               add ecx, 2
// 0061ea2f  84d2                 test dl, dl
// 0061ea31  75e4                 jne 0x61ea17
// 0061ea33  33c0                 xor eax, eax
// 0061ea35  eb05                 jmp 0x61ea3c
// 0061ea37  1bc0                 sbb eax, eax
// 0061ea39  83d8ff               sbb eax, -1
// 0061ea3c  85c0                 test eax, eax
// 0061ea3e  7531                 jne 0x61ea71
// 0061ea40  8b742464             mov esi, dword ptr [esp + 0x64]
// 0061ea44  6aff                 push -1
// 0061ea46  56                   push esi
// 0061ea47  e88433ffff           call 0x611dd0
// 0061ea4c  6a01                 push 1
// 0061ea4e  6840e36100           push 0x61e340
// 0061ea53  56                   push esi
// 0061ea54  e8f738ffff           call 0x612350
// 0061ea59  83c414               add esp, 0x14
// 0061ea5c  b801000000           mov eax, 1
// 0061ea61  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061ea65  64890d00000000       mov dword ptr fs:[0], ecx
// 0061ea6c  5e                   pop esi
// 0061ea6d  83c454               add esp, 0x54
// 0061ea70  c3                   ret 
// 0061ea71  b9e4448400           mov ecx, 0x8444e4
// 0061ea76  8bc6                 mov eax, esi
// 0061ea78  8a10                 mov dl, byte ptr [eax]
// 0061ea7a  3a11                 cmp dl, byte ptr [ecx]
// 0061ea7c  751a                 jne 0x61ea98
// 0061ea7e  84d2                 test dl, dl
// 0061ea80  7412                 je 0x61ea94
// 0061ea82  8a5001               mov dl, byte ptr [eax + 1]
// 0061ea85  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061ea88  750e                 jne 0x61ea98
// 0061ea8a  83c002               add eax, 2
// 0061ea8d  83c102               add ecx, 2
// 0061ea90  84d2                 test dl, dl
// 0061ea92  75e4                 jne 0x61ea78
// 0061ea94  33c0                 xor eax, eax
// 0061ea96  eb05                 jmp 0x61ea9d
// 0061ea98  1bc0                 sbb eax, eax
// 0061ea9a  83d8ff               sbb eax, -1
// 0061ea9d  85c0                 test eax, eax
// 0061ea9f  7531                 jne 0x61ead2
// 0061eaa1  8b742464             mov esi, dword ptr [esp + 0x64]
// 0061eaa5  6aff                 push -1
// 0061eaa7  56                   push esi
// 0061eaa8  e82333ffff           call 0x611dd0
// 0061eaad  6a01                 push 1
// 0061eaaf  68b0e26100           push 0x61e2b0
// 0061eab4  56                   push esi
// 0061eab5  e89638ffff           call 0x612350
// 0061eaba  83c414               add esp, 0x14
// 0061eabd  b801000000           mov eax, 1
// 0061eac2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061eac6  64890d00000000       mov dword ptr fs:[0], ecx
// 0061eacd  5e                   pop esi
// 0061eace  83c454               add esp, 0x54
// 0061ead1  c3                   ret 
// 0061ead2  b9ccf08000           mov ecx, 0x80f0cc
// 0061ead7  8bc6                 mov eax, esi
// 0061ead9  8da42400000000       lea esp, [esp]
// 0061eae0  8a10                 mov dl, byte ptr [eax]
// 0061eae2  3a11                 cmp dl, byte ptr [ecx]
// 0061eae4  751a                 jne 0x61eb00
// 0061eae6  84d2                 test dl, dl
// 0061eae8  7412                 je 0x61eafc
// 0061eaea  8a5001               mov dl, byte ptr [eax + 1]
// 0061eaed  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061eaf0  750e                 jne 0x61eb00
// 0061eaf2  83c002               add eax, 2
// 0061eaf5  83c102               add ecx, 2
// 0061eaf8  84d2                 test dl, dl
// 0061eafa  75e4                 jne 0x61eae0
// 0061eafc  33c0                 xor eax, eax
// 0061eafe  eb05                 jmp 0x61eb05
// 0061eb00  1bc0                 sbb eax, eax
// 0061eb02  83d8ff               sbb eax, -1
// 0061eb05  85c0                 test eax, eax
// 0061eb07  752f                 jne 0x61eb38
// 0061eb09  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0061eb0d  d94024               fld dword ptr [eax + 0x24]
// 0061eb10  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0061eb14  83ec08               sub esp, 8
// 0061eb17  dd1c24               fstp qword ptr [esp]
// 0061eb1a  51                   push ecx
// 0061eb1b  e8e036ffff           call 0x612200
// 0061eb20  83c40c               add esp, 0xc
// 0061eb23  b801000000           mov eax, 1
// 0061eb28  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061eb2c  64890d00000000       mov dword ptr fs:[0], ecx
// 0061eb33  5e                   pop esi
// 0061eb34  83c454               add esp, 0x54
// 0061eb37  c3                   ret 
// 0061eb38  b9d0f08000           mov ecx, 0x80f0d0
// 0061eb3d  8bc6                 mov eax, esi
// 0061eb3f  90                   nop 
// 0061eb40  8a10                 mov dl, byte ptr [eax]
// 0061eb42  3a11                 cmp dl, byte ptr [ecx]
// 0061eb44  751a                 jne 0x61eb60
// 0061eb46  84d2                 test dl, dl
// 0061eb48  7412                 je 0x61eb5c
// 0061eb4a  8a5001               mov dl, byte ptr [eax + 1]
// 0061eb4d  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061eb50  750e                 jne 0x61eb60
// 0061eb52  83c002               add eax, 2
// 0061eb55  83c102               add ecx, 2
// 0061eb58  84d2                 test dl, dl
// 0061eb5a  75e4                 jne 0x61eb40
// 0061eb5c  33c0                 xor eax, eax
// 0061eb5e  eb05                 jmp 0x61eb65
// 0061eb60  1bc0                 sbb eax, eax
// 0061eb62  83d8ff               sbb eax, -1
// 0061eb65  85c0                 test eax, eax
// 0061eb67  752f                 jne 0x61eb98
// 0061eb69  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0061eb6d  d94228               fld dword ptr [edx + 0x28]
// 0061eb70  8b442464             mov eax, dword ptr [esp + 0x64]
// 0061eb74  83ec08               sub esp, 8
// 0061eb77  dd1c24               fstp qword ptr [esp]
// 0061eb7a  50                   push eax
// 0061eb7b  e88036ffff           call 0x612200
// 0061eb80  83c40c               add esp, 0xc
// 0061eb83  b801000000           mov eax, 1
// 0061eb88  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061eb8c  64890d00000000       mov dword ptr fs:[0], ecx
// 0061eb93  5e                   pop esi
// 0061eb94  83c454               add esp, 0x54
// 0061eb97  c3                   ret 
// 0061eb98  b9744a8100           mov ecx, 0x814a74
// 0061eb9d  8bc6                 mov eax, esi
// 0061eb9f  90                   nop 
// 0061eba0  8a10                 mov dl, byte ptr [eax]
// 0061eba2  3a11                 cmp dl, byte ptr [ecx]
// 0061eba4  751a                 jne 0x61ebc0
// 0061eba6  84d2                 test dl, dl
// 0061eba8  7412                 je 0x61ebbc
// 0061ebaa  8a5001               mov dl, byte ptr [eax + 1]
// 0061ebad  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061ebb0  750e                 jne 0x61ebc0
// 0061ebb2  83c002               add eax, 2
// 0061ebb5  83c102               add ecx, 2
// 0061ebb8  84d2                 test dl, dl
// 0061ebba  75e4                 jne 0x61eba0
// 0061ebbc  33c0                 xor eax, eax
// 0061ebbe  eb05                 jmp 0x61ebc5
// 0061ebc0  1bc0                 sbb eax, eax
// 0061ebc2  83d8ff               sbb eax, -1
// 0061ebc5  85c0                 test eax, eax
// 0061ebc7  752f                 jne 0x61ebf8
// 0061ebc9  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0061ebcd  d9412c               fld dword ptr [ecx + 0x2c]
// 0061ebd0  8b542464             mov edx, dword ptr [esp + 0x64]
// 0061ebd4  83ec08               sub esp, 8
// 0061ebd7  dd1c24               fstp qword ptr [esp]
// 0061ebda  52                   push edx
// 0061ebdb  e82036ffff           call 0x612200
// 0061ebe0  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0061ebe4  83c40c               add esp, 0xc
// 0061ebe7  b801000000           mov eax, 1
// 0061ebec  64890d00000000       mov dword ptr fs:[0], ecx
// 0061ebf3  5e                   pop esi
// 0061ebf4  83c454               add esp, 0x54
// 0061ebf7  c3                   ret 
// 0061ebf8  56                   push esi
// 0061ebf9  8d44240c             lea eax, [esp + 0xc]
// 0061ebfd  6808228300           push 0x832208
// 0061ec02  50                   push eax
// 0061ec03  e808afeeff           call 0x509b10
// 0061ec08  83c40c               add esp, 0xc
// 0061ec0b  50                   push eax
// 0061ec0c  8d4c2428             lea ecx, [esp + 0x28]
// 0061ec10  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0061ec18  e833b1deff           call 0x409d50
// 0061ec1d  68c81b8d00           push 0x8d1bc8
// 0061ec22  8d4c2428             lea ecx, [esp + 0x28]
// 0061ec26  51                   push ecx
// 0061ec27  e860290800           call 0x6a158c
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_index@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHABVCoordinateFrame@G3D@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
