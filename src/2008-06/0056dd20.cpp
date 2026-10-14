// from server: 100% by colin
// roc 2008-06 0056dd20  unit: G3D::VColor3::?$holder  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056dd20
//
// 0056dd20  64a100000000         mov eax, dword ptr fs:[0]
// 0056dd26  6aff                 push -1
// 0056dd28  68b9fe7c00           push 0x7cfeb9
// 0056dd2d  50                   push eax
// 0056dd2e  64892500000000       mov dword ptr fs:[0], esp
// 0056dd35  83ec48               sub esp, 0x48
// 0056dd38  53                   push ebx
// 0056dd39  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056dd3f  56                   push esi
// 0056dd40  57                   push edi
// 0056dd41  8bf9                 mov edi, ecx
// 0056dd43  8d7704               lea esi, [edi + 4]
// 0056dd46  85f6                 test esi, esi
// 0056dd48  7428                 je 0x56dd72
// 0056dd4a  8b0e                 mov ecx, dword ptr [esi]
// 0056dd4c  85c9                 test ecx, ecx
// 0056dd4e  7409                 je 0x56dd59
// 0056dd50  8b01                 mov eax, dword ptr [ecx]
// 0056dd52  8b5004               mov edx, dword ptr [eax + 4]
// 0056dd55  ffd2                 call edx
// 0056dd57  eb05                 jmp 0x56dd5e
// 0056dd59  b814969200           mov eax, 0x929614
// 0056dd5e  6898539300           push 0x935398
// 0056dd63  8bc8                 mov ecx, eax
// 0056dd65  ffd3                 call ebx
// 0056dd67  84c0                 test al, al
// 0056dd69  7407                 je 0x56dd72
// 0056dd6b  8b06                 mov eax, dword ptr [esi]
// 0056dd6d  83c004               add eax, 4
// 0056dd70  7550                 jne 0x56ddc2
// 0056dd72  8b07                 mov eax, dword ptr [edi]
// 0056dd74  8b4008               mov eax, dword ptr [eax + 8]
// 0056dd77  50                   push eax
// 0056dd78  b9f8be9200           mov ecx, 0x92bef8
// 0056dd7d  ffd3                 call ebx
// 0056dd7f  84c0                 test al, al
// 0056dd81  7451                 je 0x56ddd4
// 0056dd83  8d4c240c             lea ecx, [esp + 0xc]
// 0056dd87  51                   push ecx
// 0056dd88  56                   push esi
// 0056dd89  c7442414c2000000     mov dword ptr [esp + 0x14], 0xc2
// 0056dd91  e8fa7eeaff           call 0x415c90
// 0056dd96  83c404               add esp, 4
// 0056dd99  50                   push eax
// 0056dd9a  e801130500           call 0x5bf0a0
// 0056dd9f  83c408               add esp, 8
// 0056dda2  84c0                 test al, al
// 0056dda4  742e                 je 0x56ddd4
// 0056dda6  8d54240c             lea edx, [esp + 0xc]
// 0056ddaa  52                   push e