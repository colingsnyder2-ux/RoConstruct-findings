// roc 2010-06 004968a0  unit: seg_00490000  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004968a0
//
// 004968a0  6aff                 push -1
// 004968a2  68e36a9800           push 0x986ae3
// 004968a7  64a100000000         mov eax, dword ptr fs:[0]
// 004968ad  50                   push eax
// 004968ae  64892500000000       mov dword ptr fs:[0], esp
// 004968b5  81ec68070000         sub esp, 0x768
// 004968bb  56                   push esi
// 004968bc  8bf1                 mov esi, ecx
// 004968be  8b4604               mov eax, dword ptr [esi + 4]
// 004968c1  3b4608               cmp eax, dword ptr [esi + 8]
// 004968c4  89742408             mov dword ptr [esp + 8], esi
// 004968c8  7d43                 jge 0x49690d
// 004968ca  69c060070000         imul eax, eax, 0x760
// 004968d0  0306                 add eax, dword ptr [esi]
// 004968d2  89442404             mov dword ptr [esp + 4], eax
// 004968d6  c784247407000000000000 mov dword ptr [esp + 0x774], 0
// 004968e1  740f                 je 0x4968f2
// 004968e3  8b8c247c070000       mov ecx, dword ptr [esp + 0x77c]
// 004968ea  51                   push ecx
// 004968eb  8bc8                 mov ecx, eax
// 004968ed  e8fef1ffff           call 0x495af0
// 004968f2  ff4604               inc dword ptr [esi + 4]
// 004968f5  5e                   pop esi
// 004968f6  8b8c2468070000       mov ecx, dword ptr [esp + 0x768]
// 004968fd  64890d00000000       mov dword ptr fs:[0], ecx
// 00496904  81c474070000         add esp, 0x774
// 0049690a  c20400               ret 4
// 0049690d  8b0e                 mov ecx, dword ptr [esi]
// 0049690f  57                   push edi
// 00496910  8bbc2480070000       mov edi, dword ptr [esp + 0x780]
// 00496917  3bf9                 cmp edi, ecx
// 00496919  7245                 jb 0x496960
// 0049691b  8bd0                 mov edx, eax
// 0049691d  69d260070000         imul edx, edx, 0x760
// 00496923  03d1                 add edx, ecx
// 00496925  3bfa                 cmp edi, edx
// 00496927  7337                 jae 0x496960
// 00496929  57                   push edi
// 0049692a  8d4c2414             lea ecx, [esp + 0x14]
// 0049692e  e8bdf1ffff           call 0x495af0
// 00496933  8d442410             lea eax, [esp + 0x10]
// 00496937  50                   push eax
// 00496938  8bce                 mov ecx, esi
// 0049693a  c784247c07000001000000 mov dword ptr [esp + 0x77c], 1
// 00496945  e856ffffff           call 0x4968a0
// 0049694a  8d4c2410             lea ecx, [esp + 0x10]
// 0049694e  c7842478070000ffffffff mov dword ptr [esp + 0x778], 0xffffffff
// 00496959  e812daffff           call 0x494370
// 0049695e  eb23                 jmp 0x496983
// 00496960  6a00                 push 0
// 00496962  40                   inc eax
// 00496963  50                   push eax
// 00496964  8bce                 mov ecx, esi
// 00496966  e8a5fdffff           call 0x496710
// 0049696b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049696e  8b16                 mov edx, dword ptr [esi]
// 00496970  69c960070000         imul ecx, ecx, 0x760
// 00496976  57                   push edi
// 00496977  8d8c11a0f8ffff       lea ecx, [ecx + edx - 0x760]
// 0049697e  e8bde2ffff           call 0x494c40
// 00496983  8b8c2470070000       mov ecx, dword ptr [esp + 0x770]
// 0049698a  5f                   pop edi
// 0049698b  5e                   pop esi
// 0049698c  64890d00000000       mov dword ptr fs:[0], ecx
// 00496993  81c474070000         add esp, 0x774
// 00496999  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?append@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAEXABVRenderState@RenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
