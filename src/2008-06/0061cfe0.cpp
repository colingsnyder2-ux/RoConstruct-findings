// roc 2008-06 0061cfe0  unit: RBX::Lua::LuaArguments  size: 581 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061cfe0
//
// 0061cfe0  64a100000000         mov eax, dword ptr fs:[0]
// 0061cfe6  6aff                 push -1
// 0061cfe8  68b9fe7c00           push 0x7cfeb9
// 0061cfed  50                   push eax
// 0061cfee  64892500000000       mov dword ptr fs:[0], esp
// 0061cff5  83ec48               sub esp, 0x48
// 0061cff8  56                   push esi
// 0061cff9  8b742460             mov esi, dword ptr [esp + 0x60]
// 0061cffd  b9ccf08000           mov ecx, 0x80f0cc
// 0061d002  8bc6                 mov eax, esi
// 0061d004  8a10                 mov dl, byte ptr [eax]
// 0061d006  3a11                 cmp dl, byte ptr [ecx]
// 0061d008  751a                 jne 0x61d024
// 0061d00a  84d2                 test dl, dl
// 0061d00c  7412                 je 0x61d020
// 0061d00e  8a5001               mov dl, byte ptr [eax + 1]
// 0061d011  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d014  750e                 jne 0x61d024
// 0061d016  83c002               add eax, 2
// 0061d019  83c102               add ecx, 2
// 0061d01c  84d2                 test dl, dl
// 0061d01e  75e4                 jne 0x61d004
// 0061d020  33c0                 xor eax, eax
// 0061d022  eb05                 jmp 0x61d029
// 0061d024  1bc0                 sbb eax, eax
// 0061d026  83d8ff               sbb eax, -1
// 0061d029  85c0                 test eax, eax
// 0061d02b  752e                 jne 0x61d05b
// 0061d02d  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0061d031  d900                 fld dword ptr [eax]
// 0061d033  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0061d037  83ec08               sub esp, 8
// 0061d03a  dd1c24               fstp qword ptr [esp]
// 0061d03d  51                   push ecx
// 0061d03e  e8bd51ffff           call 0x612200
// 0061d043  83c40c               add esp, 0xc
// 0061d046  b801000000           mov eax, 1
// 0061d04b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061d04f  64890d00000000       mov dword ptr fs:[0], ecx
// 0061d056  5e                   pop esi
// 0061d057  83c454               add esp, 0x54
// 0061d05a  c3                   ret 
// 0061d05b  b9d0f08000           mov ecx, 0x80f0d0
// 0061d060  8bc6                 mov eax, esi
// 0061d062  8a10                 mov dl, byte ptr [eax]
// 0061d064  3a11                 cmp dl, byte ptr [ecx]
// 0061d066  751a                 jne 0x61d082
// 0061d068  84d2                 test dl, dl
// 0061d06a  7412                 je 0x61d07e
// 0061d06c  8a5001               mov dl, byte ptr [eax + 1]
// 0061d06f  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d072  750e                 jne 0x61d082
// 0061d074  83c002               add eax, 2
// 0061d077  83c102               add ecx, 2
// 0061d07a  84d2                 test dl, dl
// 0061d07c  75e4                 jne 0x61d062
// 0061d07e  33c0                 xor eax, eax
// 0061d080  eb05                 jmp 0x61d087
// 0061d082  1bc0                 sbb eax, eax
// 0061d084  83d8ff               sbb eax, -1
// 0061d087  85c0                 test eax, eax
// 0061d089  7514                 jne 0x61d09f
// 0061d08b  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0061d08f  d94204               fld dword ptr [edx + 4]
// 0061d092  8b442464             mov eax, dword ptr [esp + 0x64]
// 0061d096  83ec08               sub esp, 8
// 0061d099  dd1c24               fstp qword ptr [esp]
// 0061d09c  50                   push eax
// 0061d09d  eb9f                 jmp 0x61d03e
// 0061d09f  b9744a8100           mov ecx, 0x814a74
// 0061d0a4  8bc6                 mov eax, esi
// 0061d0a6  8a10                 mov dl, byte ptr [eax]
// 0061d0a8  3a11                 cmp dl, byte ptr [ecx]
// 0061d0aa  751a                 jne 0x61d0c6
// 0061d0ac  84d2                 test dl, dl
// 0061d0ae  7412                 je 0x61d0c2
// 0061d0b0  8a5001               mov dl, byte ptr [eax + 1]
// 0061d0b3  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d0b6  750e                 jne 0x61d0c6
// 0061d0b8  83c002               add eax, 2
// 0061d0bb  83c102               add ecx, 2
// 0061d0be  84d2                 test dl, dl
// 0061d0c0  75e4                 jne 0x61d0a6
// 0061d0c2  33c0                 xor eax, eax
// 0061d0c4  eb05                 jmp 0x61d0cb
// 0061d0c6  1bc0                 sbb eax, eax
// 0061d0c8  83d8ff               sbb eax, -1
// 0061d0cb  85c0                 test eax, eax
// 0061d0cd  7517                 jne 0x61d0e6
// 0061d0cf  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0061d0d3  d94108               fld dword ptr [ecx + 8]
// 0061d0d6  8b542464             mov edx, dword ptr [esp + 0x64]
// 0061d0da  83ec08               sub esp, 8
// 0061d0dd  dd1c24               fstp qword ptr [esp]
// 0061d0e0  52                   push edx
// 0061d0e1  e958ffffff           jmp 0x61d03e
// 0061d0e6  b9ac448400           mov ecx, 0x8444ac
// 0061d0eb  8bc6                 mov eax, esi
// 0061d0ed  8d4900               lea ecx, [ecx]
// 0061d0f0  8a10                 mov dl, byte ptr [eax]
// 0061d0f2  3a11                 cmp dl, byte ptr [ecx]
// 0061d0f4  751a                 jne 0x61d110
// 0061d0f6  84d2                 test dl, dl
// 0061d0f8  7412                 je 0x61d10c
// 0061d0fa  8a5001               mov dl, byte ptr [eax + 1]
// 0061d0fd  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d100  750e                 jne 0x61d110
// 0061d102  83c002               add eax, 2
// 0061d105  83c102               add ecx, 2
// 0061d108  84d2                 test dl, dl
// 0061d10a  75e4                 jne 0x61d0f0
// 0061d10c  33c0                 xor eax, eax
// 0061d10e  eb05                 jmp 0x61d115
// 0061d110  1bc0                 sbb eax, eax
// 0061d112  83d8ff               sbb eax, -1
// 0061d115  85c0                 test eax, eax
// 0061d117  7535                 jne 0x61d14e
// 0061d119  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0061d11d  83ec0c               sub esp, 0xc
// 0061d120  8bc4                 mov eax, esp
// 0061d122  89642410             mov dword ptr [esp + 0x10], esp
// 0061d126  50                   push eax
// 0061d127  e844daedff           call 0x4fab70
// 0061d12c  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0061d130  51                   push ecx
// 0061d131  e8babbf8ff           call 0x5a8cf0
// 0061d136  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0061d13a  83c410               add esp, 0x10
// 0061d13d  b801000000           mov eax, 1
// 0061d142  64890d00000000       mov dword ptr fs:[0], ecx
// 0061d149  5e                   pop esi
// 0061d14a  83c454               add esp, 0x54
// 0061d14d  c3                   ret 
// 0061d14e  b9a0448400           mov ecx, 0x8444a0
// 0061d153  8bc6                 mov eax, esi
// 0061d155  8a10                 mov dl, byte ptr [eax]
// 0061d157  3a11                 cmp dl, byte ptr [ecx]
// 0061d159  751a                 jne 0x61d175
// 0061d15b  84d2                 test dl, dl
// 0061d15d  7412                 je 0x61d171
// 0061d15f  8a5001               mov dl, byte ptr [eax + 1]
// 0061d162  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d165  750e                 jne 0x61d175
// 0061d167  83c002               add eax, 2
// 0061d16a  83c102               add ecx, 2
// 0061d16d  84d2                 test dl, dl
// 0061d16f  75e4                 jne 0x61d155
// 0061d171  33c0                 xor eax, eax
// 0061d173  eb05                 jmp 0x61d17a
// 0061d175  1bc0                 sbb eax, eax
// 0061d177  83d8ff               sbb eax, -1
// 0061d17a  85c0                 test eax, eax
// 0061d17c  752e                 jne 0x61d1ac
// 0061d17e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0061d182  d94008               fld dword ptr [eax + 8]
// 0061d185  8b542464             mov edx, dword ptr [esp + 0x64]
// 0061d189  d94004               fld dword ptr [eax + 4]
// 0061d18c  83ec08               sub esp, 8
// 0061d18f  d900                 fld dword ptr [eax]
// 0061d191  d9c1                 fld st(1)
// 0061d193  deca                 fmulp st(2)
// 0061d195  d9c2                 fld st(2)
// 0061d197  decb                 fmulp st(3)
// 0061d199  d9c9                 fxch st(1)
// 0061d19b  dec2                 faddp st(2)
// 0061d19d  dcc8                 fmul st(0), st(0)
// 0061d19f  dec1                 faddp st(1)
// 0061d1a1  d9fa                 fsqrt 
// 0061d1a3  dd1c24               fstp qword ptr [esp]
// 0061d1a6  52                   push edx
// 0061d1a7  e992feffff           jmp 0x61d03e
// 0061d1ac  b998448400           mov ecx, 0x844498
// 0061d1b1  8bc6                 mov eax, esi
// 0061d1b3  8a10                 mov dl, byte ptr [eax]
// 0061d1b5  3a11                 cmp dl, byte ptr [ecx]
// 0061d1b7  751a                 jne 0x61d1d3
// 0061d1b9  84d2                 test dl, dl
// 0061d1bb  7412                 je 0x61d1cf
// 0061d1bd  8a5001               mov dl, byte ptr [eax + 1]
// 0061d1c0  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061d1c3  750e                 jne 0x61d1d3
// 0061d1c5  83c002               add eax, 2
// 0061d1c8  83c102               add ecx, 2
// 0061d1cb  84d2                 test dl, dl
// 0061d1cd  75e4                 jne 0x61d1b3
// 0061d1cf  33c0                 xor eax, eax
// 0061d1d1  eb05                 jmp 0x61d1d8
// 0061d1d3  1bc0                 sbb eax, eax
// 0061d1d5  83d8ff               sbb eax, -1
// 0061d1d8  85c0                 test eax, eax
// 0061d1da  7515                 jne 0x61d1f1
// 0061d1dc  50                   push eax
// 0061d1dd  8b442468             mov eax, dword ptr [esp + 0x68]
// 0061d1e1  6830cf6100           push 0x61cf30
// 0061d1e6  50                   push eax
// 0061d1e7  e86451ffff           call 0x612350
// 0061d1ec  e952feffff           jmp 0x61d043
// 0061d1f1  56                   push esi
// 0061d1f2  8d4c240c             lea ecx, [esp + 0xc]
// 0061d1f6  6808228300           push 0x832208
// 0061d1fb  51                   push ecx
// 0061d1fc  e80fc9eeff           call 0x509b10
// 0061d201  83c40c               add esp, 0xc
// 0061d204  50                   push eax
// 0061d205  8d4c2428             lea ecx, [esp + 0x28]
// 0061d209  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0061d211  e83acbdeff           call 0x409d50
// 0061d216  68c81b8d00           push 0x8d1bc8
// 0061d21b  8d542428             lea edx, [esp + 0x28]
// 0061d21f  52                   push edx
// 0061d220  e867430800           call 0x6a158c
// library rbxgs-dll/script\LuaAtomicClasses.cpp (function ?on_index@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll script/LuaAtomicClasses.cpp
