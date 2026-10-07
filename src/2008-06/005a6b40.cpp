// roc 2008-06 005a6b40  unit: RBX::Workspace  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6b40
//
// 005a6b40  83ec08               sub esp, 8
// 005a6b43  837c241001           cmp dword ptr [esp + 0x10], 1
// 005a6b48  755d                 jne 0x5a6ba7
// 005a6b4a  53                   push ebx
// 005a6b4b  56                   push esi
// 005a6b4c  8d442408             lea eax, [esp + 8]
// 005a6b50  50                   push eax
// 005a6b51  ff159c228000         call dword ptr [0x80229c]
// 005a6b57  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a6b5b  6a01                 push 1
// 005a6b5d  6a00                 push 0
// 005a6b5f  6a00                 push 0
// 005a6b61  51                   push ecx
// 005a6b62  e869ab0f00           call 0x6a16d0
// 005a6b67  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a6b6b  33f6                 xor esi, esi
// 005a6b6d  03c1                 add eax, ecx
// 005a6b6f  13d6                 adc edx, esi
// 005a6b71  56                   push esi
// 005a6b72  050080c12a           add eax, 0x2ac18000
// 005a6b77  6880969800           push 0x989680
// 005a6b7c  81d2214e62fe         adc edx, 0xfe624e21
// 005a6b82  52                   push edx
// 005a6b83  50                   push eax
// 005a6b84  e867b20f00           call 0x6a1df0
// 005a6b89  6bc964               imul ecx, ecx, 0x64
// 005a6b8c  8b742414             mov esi, dword ptr [esp + 0x14]
// 005a6b90  8906                 mov dword ptr [esi], eax
// 005a6b92  895604               mov dword ptr [esi + 4], edx
// 005a6b95  894e08               mov dword ptr [esi + 8], ecx
// 005a6b98  5e                   pop esi
// 005a6b99  895c2408             mov dword ptr [esp + 8], ebx
// 005a6b9d  b801000000           mov eax, 1
// 005a6ba2  5b                   pop ebx
// 005a6ba3  83c408               add esp, 8
// 005a6ba6  c3                   ret 
// 005a6ba7  33c0                 xor eax, eax
// 005a6ba9  83c408               add esp, 8
// 005a6bac  c3                   ret 
// library boost-1.34.1/libs\thread\src\xtime.cpp (function ?xtime_get@boost@@YAHPAUxtime@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/xtime.cpp
