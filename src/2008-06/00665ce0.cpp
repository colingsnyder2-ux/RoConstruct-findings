// roc 2008-06 00665ce0  unit: RBX::PartDragTool  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00665ce0
//
// 00665ce0  64a100000000         mov eax, dword ptr fs:[0]
// 00665ce6  6aff                 push -1
// 00665ce8  68d0c07d00           push 0x7dc0d0
// 00665ced  50                   push eax
// 00665cee  64892500000000       mov dword ptr fs:[0], esp
// 00665cf5  83ec50               sub esp, 0x50
// 00665cf8  56                   push esi
// 00665cf9  8bf1                 mov esi, ecx
// 00665cfb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00665cfe  e8dd80faff           call 0x60dde0
// 00665d03  84c0                 test al, al
// 00665d05  0f84fb000000         je 0x665e06
// 00665d0b  807e3400             cmp byte ptr [esi + 0x34], 0
// 00665d0f  0f84dd000000         je 0x665df2
// 00665d15  8b442464             mov eax, dword ptr [esp + 0x64]
// 00665d19  8b4008               mov eax, dword ptr [eax + 8]
// 00665d1c  83e872               sub eax, 0x72
// 00665d1f  746d                 je 0x665d8e
// 00665d21  83e802               sub eax, 2
// 00665d24  0f85c8000000         jne 0x665df2
// 00665d2a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00665d2d  57                   push edi
// 00665d2e  8d542410             lea edx, [esp + 0x10]
// 00665d32  52                   push edx
// 00665d33  e868fdffff           call 0x665aa0
// 00665d38  8d4c2408             lea ecx, [esp + 8]
// 00665d3c  51                   push ecx
// 00665d3d  8bc8                 mov ecx, eax
// 00665d3f  c744246402000000     mov dword ptr [esp + 0x64], 2
// 00665d47  e8b44df6ff           call 0x5cab00
// 00665d4c  8b38                 mov edi, dword ptr [eax]
// 00665d4e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00665d51  8d8888020000         lea ecx, [eax + 0x288]
// 00665d57  8b01                 mov eax, dword ptr [ecx]
// 00665d59  8d542428             lea edx, [esp + 0x28]
// 00665d5d  52                   push edx
// 00665d5e  8b5004               mov edx, dword ptr [eax + 4]
// 00665d61  c644246403           mov byte ptr [esp + 0x64], 3
// 00665d66  ffd2                 call edx
// 00665d68  8bc8                 mov ecx, eax
// 00665d6a  e89151dfff           call 0x45af00
// 00665d6f  50                   push eax
// 00665d70  57                   push edi
// 00665d71  e85a710000           call 0x66ced0
// 00665d76  83c408               add esp, 8
// 00665d79  8d4c2408             lea ecx, [esp + 8]
// 00665d7d  c644246002           mov byte ptr [esp + 0x60], 2
// 00665d82  e8d9a8f9ff           call 0x600660
// 00665d87  8b442414             mov eax, dword ptr [esp + 0x14]
// 00665d8b  5f                   pop edi
// 00665d8c  eb43                 jmp 0x665dd1
// 00665d8e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00665d91  8d44241c             lea eax, [esp + 0x1c]
// 00665d95  50                   push eax
// 00665d96  e805fdffff           call 0x665aa0
// 00665d9b  8d4c2414             lea ecx, [esp + 0x14]
// 00665d9f  51                   push ecx
// 00665da0  8bc8                 mov ecx, eax
// 00665da2  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00665daa  e8514df6ff           call 0x5cab00
// 00665daf  8b00                 mov eax, dword ptr [eax]
// 00665db1  50                   push eax
// 00665db2  c644246001           mov byte ptr [esp + 0x60], 1
// 00665db7  e8e4670000           call 0x66c5a0
// 00665dbc  83c404               add esp, 4
// 00665dbf  8d4c2414             lea ecx, [esp + 0x14]
// 00665dc3  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00665dc8  e893a8f9ff           call 0x600660
// 00665dcd  8b442420             mov eax, dword ptr [esp + 0x20]
// 00665dd1  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00665dd9  85c0                 test eax, eax
// 00665ddb  7415                 je 0x665df2
// 00665ddd  8bc8                 mov ecx, eax
// 00665ddf  83caff               or edx, 0xffffffff
// 00665de2  83c008               add eax, 8
// 00665de5  f00fc110             lock xadd dword ptr [eax], edx
// 00665de9  7507                 jne 0x665df2
// 00665deb  8b01                 mov eax, dword ptr [ecx]
// 00665ded  8b5008               mov edx, dword ptr [eax + 8]
// 00665df0  ffd2                 call edx
// 00665df2  8bc6                 mov eax, esi
// 00665df4  5e                   pop esi
// 00665df5  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00665df9  64890d00000000       mov dword ptr fs:[0], ecx
// 00665e00  83c45c               add esp, 0x5c
// 00665e03  c20400               ret 4
// 00665e06  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00665e0a  33c0                 xor eax, eax
// 00665e0c  5e                   pop esi
// 00665e0d  64890d00000000       mov dword ptr fs:[0], ecx
// 00665e14  83c45c               add esp, 0x5c
// 00665e17  c20400               ret 4
// library rbxgs/roc_unit_338671d888ed95d1.cpp (function ?onKeyDown@PartDragTool@RBX@@UAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_338671d888ed95d1.cpp
