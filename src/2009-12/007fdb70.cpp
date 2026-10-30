// roc 2009-12 007fdb70  unit: CXTPPaintManager  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fdb70
//
// 007fdb70  51                   push ecx
// 007fdb71  53                   push ebx
// 007fdb72  56                   push esi
// 007fdb73  8b742410             mov esi, dword ptr [esp + 0x10]
// 007fdb77  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 007fdb7e  8bd9                 mov ebx, ecx
// 007fdb80  57                   push edi
// 007fdb81  895c240c             mov dword ptr [esp + 0xc], ebx
// 007fdb85  755e                 jne 0x7fdbe5
// 007fdb87  8bce                 mov ecx, esi
// 007fdb89  e80281ffff           call 0x7f5c90
// 007fdb8e  83f804               cmp eax, 4
// 007fdb91  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007fdb97  7424                 je 0x7fdbbd
// 007fdb99  83f8ff               cmp eax, -1
// 007fdb9c  750f                 jne 0x7fdbad
// 007fdb9e  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007fdba4  85c9                 test ecx, ecx
// 007fdba6  7405                 je 0x7fdbad
// 007fdba8  e8038affff           call 0x7f65b0
// 007fdbad  85c0                 test eax, eax
// 007fdbaf  7430                 je 0x7fdbe1
// 007fdbb1  83f804               cmp eax, 4
// 007fdbb4  742b                 je 0x7fdbe1
// 007fdbb6  bf01000000           mov edi, 1
// 007fdbbb  eb44                 jmp 0x7fdc01
// 007fdbbd  83f8ff               cmp eax, -1
// 007fdbc0  750f                 jne 0x7fdbd1
// 007fdbc2  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007fdbc8  85c9                 test ecx, ecx
// 007fdbca  7405                 je 0x7fdbd1
// 007fdbcc  e8df89ffff           call 0x7f65b0
// 007fdbd1  85c0                 test eax, eax
// 007fdbd3  740c                 je 0x7fdbe1
// 007fdbd5  83f803               cmp eax, 3
// 007fdbd8  7407                 je 0x7fdbe1
// 007fdbda  bf01000000           mov edi, 1
// 007fdbdf  eb20                 jmp 0x7fdc01
// 007fdbe1  33ff                 xor edi, edi
// 007fdbe3  eb1c                 jmp 0x7fdc01
// 007fdbe5  8bbe9c000000         mov edi, dword ptr [esi + 0x9c]
// 007fdbeb  83ffff               cmp edi, -1
// 007fdbee  7511                 jne 0x7fdc01
// 007fdbf0  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007fdbf6  85c9                 test ecx, ecx
// 007fdbf8  7407                 je 0x7fdc01
// 007fdbfa  e8b189ffff           call 0x7f65b0
// 007fdbff  8bf8                 mov edi, eax
// 007fdc01  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 007fdc07  83f809               cmp eax, 9
// 007fdc0a  7405                 je 0x7fdc11
// 007fdc0c  83f80b               cmp eax, 0xb
// 007fdc0f  753b                 jne 0x7fdc4c
// 007fdc11  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007fdc17  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 007fdc1e  742c                 je 0x7fdc4c
// 007fdc20  8b13                 mov edx, dword ptr [ebx]
// 007fdc22  8bf0                 mov esi, eax
// 007fdc24  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007fdc2a  8bb6f8000000         mov esi, dword ptr [esi + 0xf8]
// 007fdc30  50                   push eax
// 007fdc31  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007fdc37  56                   push esi
// 007fdc38  6a00                 push 0
// 007fdc3a  6a00                 push 0
// 007fdc3c  57                   push edi
// 007fdc3d  6a00                 push 0
// 007fdc3f  6a00                 push 0
// 007fdc41  8bcb                 mov ecx, ebx
// 007fdc43  ffd0                 call eax
// 007fdc45  5f                   pop edi
// 007fdc46  5e                   pop esi
// 007fdc47  5b                   pop ebx
// 007fdc48  59                   pop ecx
// 007fdc49  c20400               ret 4
// 007fdc4c  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007fdc52  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 007fdc58  8b9000010000         mov edx, dword ptr [eax + 0x100]
// 007fdc5e  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 007fdc64  55                   push ebp
// 007fdc65  83f9ff               cmp ecx, -1
// 007fdc68  750f                 jne 0x7fdc79
// 007fdc6a  8bae5c010000         mov ebp, dword ptr [esi + 0x15c]
// 007fdc70  85ed                 test ebp, ebp
// 007fdc72  7405                 je 0x7fdc79
// 007fdc74  8b6d38               mov ebp, dword ptr [ebp + 0x38]
// 007fdc77  eb02                 jmp 0x7fdc7b
// 007fdc79  8be9                 mov ebp, ecx
// 007fdc7b  8b1b                 mov ebx, dword ptr [ebx]
// 007fdc7d  52                   push edx
// 007fdc7e  8b16                 mov edx, dword ptr [esi]
// 007fdc80  50                   push eax
// 007fdc81  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 007fdc87  8bce                 mov ecx, esi
// 007fdc89  ffd0                 call eax
// 007fdc8b  8b16                 mov edx, dword ptr [esi]
// 007fdc8d  50                   push eax
// 007fdc8e  8b4278               mov eax, dword ptr [edx + 0x78]
// 007fdc91  55                   push ebp
// 007fdc92  57                   push edi
// 007fdc93  8bce                 mov ecx, esi
// 007fdc95  ffd0                 call eax
// 007fdc97  8b16                 mov edx, dword ptr [esi]
// 007fdc99  50                   push eax
// 007fdc9a  8b426c               mov eax, dword ptr [edx + 0x6c]
// 007fdc9d  8bce                 mov ecx, esi
// 007fdc9f  ffd0                 call eax
// 007fdca1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fdca5  8b9380000000         mov edx, dword ptr [ebx + 0x80]
// 007fdcab  50                   push eax
// 007fdcac  ffd2                 call edx
// 007fdcae  5d                   pop ebp
// 007fdcaf  5f                   pop edi
// 007fdcb0  5e                   pop esi
// 007fdcb1  5b                   pop ebx
// 007fdcb2  59                   pop ecx
// 007fdcb3  c20400               ret 4
// copied from an identical function in another client (function ?GetControlTextColor@CXTPPaintManager@@UAEKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp