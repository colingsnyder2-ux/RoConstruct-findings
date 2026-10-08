// roc 2007-08 0060da60  unit: RBX::Block  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060da60
//
// 0060da60  83ec08               sub esp, 8
// 0060da63  53                   push ebx
// 0060da64  55                   push ebp
// 0060da65  56                   push esi
// 0060da66  8bf1                 mov esi, ecx
// 0060da68  8b4604               mov eax, dword ptr [esi + 4]
// 0060da6b  8b28                 mov ebp, dword ptr [eax]
// 0060da6d  57                   push edi
// 0060da6e  8bfe                 mov edi, esi
// 0060da70  896c2414             mov dword ptr [esp + 0x14], ebp
// 0060da74  897c2410             mov dword ptr [esp + 0x10], edi
// 0060da78  85ff                 test edi, edi
// 0060da7a  8b5e04               mov ebx, dword ptr [esi + 4]
// 0060da7d  7404                 je 0x60da83
// 0060da7f  3bfe                 cmp edi, esi
// 0060da81  7406                 je 0x60da89
// 0060da83  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060da89  3beb                 cmp ebp, ebx
// 0060da8b  7434                 je 0x60dac1
// 0060da8d  85ff                 test edi, edi
// 0060da8f  7506                 jne 0x60da97
// 0060da91  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060da97  3b6f04               cmp ebp, dword ptr [edi + 4]
// 0060da9a  7506                 jne 0x60daa2
// 0060da9c  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060daa2  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0060daa5  51                   push ecx
// 0060daa6  e8b7210200           call 0x62fc62
// 0060daab  83c404               add esp, 4
// 0060daae  8d4c2410             lea ecx, [esp + 0x10]
// 0060dab2  e8c9f2ffff           call 0x60cd80
// 0060dab7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0060dabb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0060dabf  ebb7                 jmp 0x60da78
// 0060dac1  8b4604               mov eax, dword ptr [esi + 4]
// 0060dac4  8b08                 mov ecx, dword ptr [eax]
// 0060dac6  50                   push eax
// 0060dac7  56                   push esi
// 0060dac8  51                   push ecx
// 0060dac9  56                   push esi
// 0060daca  8d542420             lea edx, [esp + 0x20]
// 0060dace  52                   push edx
// 0060dacf  8bce                 mov ecx, esi
// 0060dad1  e82afbffff           call 0x60d600
// 0060dad6  8b4604               mov eax, dword ptr [esi + 4]
// 0060dad9  50                   push eax
// 0060dada  e883210200           call 0x62fc62
// 0060dadf  83c404               add esp, 4
// 0060dae2  33c0                 xor eax, eax
// 0060dae4  5f                   pop edi
// 0060dae5  894604               mov dword ptr [esi + 4], eax
// 0060dae8  894608               mov dword ptr [esi + 8], eax
// 0060daeb  5e                   pop esi
// 0060daec  5d                   pop ebp
// 0060daed  5b                   pop ebx
// 0060daee  83c408               add esp, 8
// 0060daf1  c3                   ret 
// library openrbx-client/App\v8world\Block.cpp (function ??1BlockTemplates@BlockTemplate@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
