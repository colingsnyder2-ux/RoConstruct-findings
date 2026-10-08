// from server: 100% by auto
// roc 2007-08 00726780  unit: boost::thread_resource_error  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00726780
//
// 00726780  83ec08               sub esp, 8
// 00726783  837c241001           cmp dword ptr [esp + 0x10], 1
// 00726788  755d                 jne 0x7267e7
// 0072678a  53                   push ebx
// 0072678b  56                   push esi
// 0072678c  8d442408             lea eax, [esp + 8]
// 00726790  50                   push eax
// 00726791  ff15e0d17700         call dword ptr [0x77d1e0]
// 00726797  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072679b  6a01                 push 1
// 0072679d  6a00                 push 0
// 0072679f  6a00                 push 0
// 007267a1  51                   push ecx
// 007267a2  e8a9a4f0ff           call 0x630c50
// 007267a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007267ab  33f6                 xor esi, esi
// 007267ad  03c1                 add eax, ecx
// 007267af  13d6                 adc edx, esi
// 007267b1  56                   push esi
// 007267b2  050080c12a           add eax, 0x2ac18000
// 007267b7  6880969800           push 0x989680
// 007267bc  81d2214e62fe         adc edx, 0xfe624e21
// 007267c2  52                   push edx
// 007267c3  50                   push eax
// 007267c4  e817260100           call 0x738de0
// 007267c9  6bc964               imul ecx, ecx, 0x64
// 007267cc  8b742414             mov esi, dword ptr [esp + 0x14]
// 007267d0  8906                 mov dword ptr [esi], eax
// 007267d2  895604               mov dword ptr [esi + 4], edx
// 007267d5  894e08               mov dword ptr [esi + 8], ecx
// 007267d8  5e                   pop esi
// 007267d9  895c2408             mov dword ptr [esp + 8], ebx
// 007267dd  b801000000           mov eax, 1
// 007267e2  5b                   pop ebx
// 007267e3  83c408               add esp, 8
// 007267e6  c3                   ret 
// 007267e7  33c0                 xor eax, eax
// 007267e9  83c408               add esp, 8
// 007267ec  c3                   ret 
// library boost-1.34.1/libs\thread\src\xtime.cpp (function ?xtime_get@boost@@YAHPAUxtime@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/xtime.cpp
