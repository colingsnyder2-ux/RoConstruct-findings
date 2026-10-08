// roc 2007-08 004cf6c0  unit: 0RBX::View  size: 346 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cf6c0
//
// 004cf6c0  6aff                 push -1
// 004cf6c2  6884c17400           push 0x74c184
// 004cf6c7  64a100000000         mov eax, dword ptr fs:[0]
// 004cf6cd  50                   push eax
// 004cf6ce  64892500000000       mov dword ptr fs:[0], esp
// 004cf6d5  83ec0c               sub esp, 0xc
// 004cf6d8  53                   push ebx
// 004cf6d9  56                   push esi
// 004cf6da  57                   push edi
// 004cf6db  8bf9                 mov edi, ecx
// 004cf6dd  897c240c             mov dword ptr [esp + 0xc], edi
// 004cf6e1  8b4720               mov eax, dword ptr [edi + 0x20]
// 004cf6e4  8b08                 mov ecx, dword ptr [eax]
// 004cf6e6  8d771c               lea esi, [edi + 0x1c]
// 004cf6e9  50                   push eax
// 004cf6ea  56                   push esi
// 004cf6eb  51                   push ecx
// 004cf6ec  56                   push esi
// 004cf6ed  8d442420             lea eax, [esp + 0x20]
// 004cf6f1  50                   push eax
// 004cf6f2  8bce                 mov ecx, esi
// 004cf6f4  c744243404000000     mov dword ptr [esp + 0x34], 4
// 004cf6fc  e80ff9ffff           call 0x4cf010
// 004cf701  8b4604               mov eax, dword ptr [esi + 4]
// 004cf704  50                   push eax
// 004cf705  e858051600           call 0x62fc62
// 004cf70a  33db                 xor ebx, ebx
// 004cf70c  895e04               mov dword ptr [esi + 4], ebx
// 004cf70f  895e08               mov dword ptr [esi + 8], ebx
// 004cf712  8b4714               mov eax, dword ptr [edi + 0x14]
// 004cf715  8b08                 mov ecx, dword ptr [eax]
// 004cf717  83c404               add esp, 4
// 004cf71a  8d7710               lea esi, [edi + 0x10]
// 004cf71d  50                   push eax
// 004cf71e  56                   push esi
// 004cf71f  51                   push ecx
// 004cf720  56                   push esi
// 004cf721  8d4c2420             lea ecx, [esp + 0x20]
// 004cf725  51                   push ecx
// 004cf726  8bce                 mov ecx, esi
// 004cf728  c644243403           mov byte ptr [esp + 0x34], 3
// 004cf72d  e8def8ffff           call 0x4cf010
// 004cf732  8b4604               mov eax, dword ptr [esi + 4]
// 004cf735  50                   push eax
// 004cf736  e827051600           call 0x62fc62
// 004cf73b  895e04               mov dword ptr [esi + 4], ebx
// 004cf73e  895e08               mov dword ptr [esi + 8], ebx
// 004cf741  8b470c               mov eax, dword ptr [edi + 0xc]
// 004cf744  8b35e8d27700         mov esi, dword ptr [0x77d2e8]
// 004cf74a  83c404               add esp, 4
// 004cf74d  3bc3                 cmp eax, ebx
// 004cf74f  c644242002           mov byte ptr [esp + 0x20], 2
// 004cf754  7424                 je 0x4cf77a
// 004cf756  83c004               add eax, 4
// 004cf759  50                   push eax
// 004cf75a  ffd6                 call esi
// 004cf75c  85c0                 test eax, eax
// 004cf75e  7517                 jne 0x4cf777
// 004cf760  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004cf763  e86886f8ff           call 0x457dd0
// 004cf768  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004cf76b  3bcb                 cmp ecx, ebx
// 004cf76d  7408                 je 0x4cf777
// 004cf76f  8b11                 mov edx, dword ptr [ecx]
// 004cf771  8b02                 mov eax, dword ptr [edx]
// 004cf773  6a01                 push 1
// 004cf775  ffd0                 call eax
// 004cf777  895f0c               mov dword ptr [edi + 0xc], ebx
// 004cf77a  8b4708               mov eax, dword ptr [edi + 8]
// 004cf77d  3bc3                 cmp eax, ebx
// 004cf77f  c644242001           mov byte ptr [esp + 0x20], 1
// 004cf784  7424                 je 0x4cf7aa
// 004cf786  83c004               add eax, 4
// 004cf789  50                   push eax
// 004cf78a  ffd6                 call esi
// 004cf78c  85c0                 test eax, eax
// 004cf78e  7517                 jne 0x4cf7a7
// 004cf790  8b4f08               mov ecx, dword ptr [edi + 8]
// 004cf793  e83886f8ff           call 0x457dd0
// 004cf798  8b4f08               mov ecx, dword ptr [edi + 8]
// 004cf79b  3bcb                 cmp ecx, ebx
// 004cf79d  7408                 je 0x4cf7a7
// 004cf79f  8b11                 mov edx, dword ptr [ecx]
// 004cf7a1  8b02                 mov eax, dword ptr [edx]
// 004cf7a3  6a01                 push 1
// 004cf7a5  ffd0                 call eax
// 004cf7a7  895f08               mov dword ptr [edi + 8], ebx
// 004cf7aa  8b4704               mov eax, dword ptr [edi + 4]
// 004cf7ad  3bc3                 cmp eax, ebx
// 004cf7af  885c2420             mov byte ptr [esp + 0x20], bl
// 004cf7b3  7424                 je 0x4cf7d9
// 004cf7b5  83c004               add eax, 4
// 004cf7b8  50                   push eax
// 004cf7b9  ffd6                 call esi
// 004cf7bb  85c0                 test eax, eax
// 004cf7bd  7517                 jne 0x4cf7d6
// 004cf7bf  8b4f04               mov ecx, dword ptr [edi + 4]
// 004cf7c2  e80986f8ff           call 0x457dd0
// 004cf7c7  8b4f04               mov ecx, dword ptr [edi + 4]
// 004cf7ca  3bcb                 cmp ecx, ebx
// 004cf7cc  7408                 je 0x4cf7d6
// 004cf7ce  8b11                 mov edx, dword ptr [ecx]
// 004cf7d0  8b02                 mov eax, dword ptr [edx]
// 004cf7d2  6a01                 push 1
// 004cf7d4  ffd0                 call eax
// 004cf7d6  895f04               mov dword ptr [edi + 4], ebx
// 004cf7d9  8b07                 mov eax, dword ptr [edi]
// 004cf7db  3bc3                 cmp eax, ebx
// 004cf7dd  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004cf7e5  7421                 je 0x4cf808
// 004cf7e7  83c004               add eax, 4
// 004cf7ea  50                   push eax
// 004cf7eb  ffd6                 call esi
// 004cf7ed  85c0                 test eax, eax
// 004cf7ef  7515                 jne 0x4cf806
// 004cf7f1  8b0f                 mov ecx, dword ptr [edi]
// 004cf7f3  e8d885f8ff           call 0x457dd0
// 004cf7f8  8b0f                 mov ecx, dword ptr [edi]
// 004cf7fa  3bcb                 cmp ecx, ebx
// 004cf7fc  7408                 je 0x4cf806
// 004cf7fe  8b11                 mov edx, dword ptr [ecx]
// 004cf800  8b02                 mov eax, dword ptr [edx]
// 004cf802  6a01                 push 1
// 004cf804  ffd0                 call eax
// 004cf806  891f                 mov dword ptr [edi], ebx
// 004cf808  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004cf80c  5f                   pop edi
// 004cf80d  5e                   pop esi
// 004cf80e  5b                   pop ebx
// 004cf80f  64890d00000000       mov dword ptr fs:[0], ecx
// 004cf816  83c418               add esp, 0x18
// 004cf819  c3                   ret 
// library rbxgs-view/View.cpp (function ??1MaterialFactory@View@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
