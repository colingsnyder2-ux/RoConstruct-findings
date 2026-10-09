// roc 2010-06 005f2960  unit: ArchiveBinder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f2960
//
// 005f2960  53                   push ebx
// 005f2961  55                   push ebp
// 005f2962  56                   push esi
// 005f2963  8bf1                 mov esi, ecx
// 005f2965  8b5e50               mov ebx, dword ptr [esi + 0x50]
// 005f2968  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005f296b  8bcb                 mov ecx, ebx
// 005f296d  8b29                 mov ebp, dword ptr [ecx]
// 005f296f  57                   push edi
// 005f2970  bf10285f00           mov edi, 0x5f2810
// 005f2975  8bc8                 mov ecx, eax
// 005f2977  85c0                 test eax, eax
// 005f2979  7404                 je 0x5f297f
// 005f297b  8b00                 mov eax, dword ptr [eax]
// 005f297d  eb02                 jmp 0x5f2981
// 005f297f  33c0                 xor eax, eax
// 005f2981  8b10                 mov edx, dword ptr [eax]
// 005f2983  85c9                 test ecx, ecx
// 005f2985  7404                 je 0x5f298b
// 005f2987  8b01                 mov eax, dword ptr [ecx]
// 005f2989  eb02                 jmp 0x5f298d
// 005f298b  33c0                 xor eax, eax
// 005f298d  8b00                 mov eax, dword ptr [eax]
// 005f298f  56                   push esi
// 005f2990  57                   push edi
// 005f2991  53                   push ebx
// 005f2992  52                   push edx
// 005f2993  55                   push ebp
// 005f2994  50                   push eax
// 005f2995  e8b6fcffff           call 0x5f2650
// 005f299a  83c418               add esp, 0x18
// 005f299d  8bce                 mov ecx, esi
// 005f299f  8bf8                 mov edi, eax
// 005f29a1  e8fa1ae5ff           call 0x4444a0
// 005f29a6  84c0                 test al, al
// 005f29a8  740f                 je 0x5f29b9
// 005f29aa  3b7e54               cmp edi, dword ptr [esi + 0x54]
// 005f29ad  750a                 jne 0x5f29b9
// 005f29af  5f                   pop edi
// 005f29b0  5e                   pop esi
// 005f29b1  5d                   pop ebp
// 005f29b2  b801000000           mov eax, 1
// 005f29b7  5b                   pop ebx
// 005f29b8  c3                   ret 
// 005f29b9  5f                   pop edi
// 005f29ba  5e                   pop esi
// 005f29bb  5d                   pop ebp
// 005f29bc  33c0                 xor eax, eax
// 005f29be  5b                   pop ebx
// 005f29bf  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?resolveRefs@ArchiveBinder@@UAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
