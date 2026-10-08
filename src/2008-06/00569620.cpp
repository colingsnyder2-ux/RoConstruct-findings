// roc 2008-06 00569620  unit: RBX::ServiceProvider  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569620
//
// 00569620  6aff                 push -1
// 00569622  68c9f87c00           push 0x7cf8c9
// 00569627  64a100000000         mov eax, dword ptr fs:[0]
// 0056962d  50                   push eax
// 0056962e  64892500000000       mov dword ptr fs:[0], esp
// 00569635  51                   push ecx
// 00569636  c7042400000000       mov dword ptr [esp], 0
// 0056963d  f605b44a970001       test byte ptr [0x974ab4], 1
// 00569644  754d                 jne 0x569693
// 00569646  830db44a970001       or dword ptr [0x974ab4], 1
// 0056964d  6a30                 push 0x30
// 0056964f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00569657  e8c4721300           call 0x6a0920
// 0056965c  83c404               add esp, 4
// 0056965f  890424               mov dword ptr [esp], eax
// 00569662  c644240c01           mov byte ptr [esp + 0xc], 1
// 00569667  85c0                 test eax, eax
// 00569669  7409                 je 0x569674
// 0056966b  8bc8                 mov ecx, eax
// 0056966d  e8befeffff           call 0x569530
// 00569672  eb02                 jmp 0x569676
// 00569674  33c0                 xor eax, eax
// 00569676  50                   push eax
// 00569677  b9ac4a9700           mov ecx, 0x974aac
// 0056967c  c644241000           mov byte ptr [esp + 0x10], 0
// 00569681  e86afcffff           call 0x5692f0
// 00569686  6810d17f00           push 0x7fd110
// 0056968b  e81f811300           call 0x6a17af
// 00569690  83c404               add esp, 4
// 00569693  8b0dac4a9700         mov ecx, dword ptr [0x974aac]
// 00569699  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056969d  8908                 mov dword ptr [eax], ecx
// 0056969f  8b15b04a9700         mov edx, dword ptr [0x974ab0]
// 005696a5  895004               mov dword ptr [eax + 4], edx
// 005696a8  8b0db04a9700         mov ecx, dword ptr [0x974ab0]
// 005696ae  85c9                 test ecx, ecx
// 005696b0  740c                 je 0x5696be
// 005696b2  83c104               add ecx, 4
// 005696b5  ba01000000           mov edx, 1
// 005696ba  f00fc111             lock xadd dword ptr [ecx], edx
// 005696be  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005696c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005696c9  83c410               add esp, 0x10
// 005696cc  c3                   ret 
// library rbxgs/util\standardout.cpp (function ?singleton@StandardOut@RBX@@SA?AV?$shared_ptr@VStandardOut@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
