// roc 2007-03 00726fa0  unit: seg_00720000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00726fa0
//
// 00726fa0  83ec08               sub esp, 8
// 00726fa3  837c241001           cmp dword ptr [esp + 0x10], 1
// 00726fa8  755d                 jne 0x727007
// 00726faa  53                   push ebx
// 00726fab  56                   push esi
// 00726fac  8d442408             lea eax, [esp + 8]
// 00726fb0  50                   push eax
// 00726fb1  ff15a8d17700         call dword ptr [0x77d1a8]
// 00726fb7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00726fbb  6a01                 push 1
// 00726fbd  6a00                 push 0
// 00726fbf  6a00                 push 0
// 00726fc1  51                   push ecx
// 00726fc2  e81981efff           call 0x61f0e0
// 00726fc7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00726fcb  33f6                 xor esi, esi
// 00726fcd  03c1                 add eax, ecx
// 00726fcf  13d6                 adc edx, esi
// 00726fd1  56                   push esi
// 00726fd2  050080c12a           add eax, 0x2ac18000
// 00726fd7  6880969800           push 0x989680
// 00726fdc  81d2214e62fe         adc edx, 0xfe624e21
// 00726fe2  52                   push edx
// 00726fe3  50                   push eax
// 00726fe4  e867450100           call 0x73b550
// 00726fe9  6bc964               imul ecx, ecx, 0x64
// 00726fec  8b742414             mov esi, dword ptr [esp + 0x14]
// 00726ff0  8906                 mov dword ptr [esi], eax
// 00726ff2  895604               mov dword ptr [esi + 4], edx
// 00726ff5  894e08               mov dword ptr [esi + 8], ecx
// 00726ff8  5e                   pop esi
// 00726ff9  895c2408             mov dword ptr [esp + 8], ebx
// 00726ffd  b801000000           mov eax, 1
// 00727002  5b                   pop ebx
// 00727003  83c408               add esp, 8
// 00727006  c3                   ret 
// 00727007  33c0                 xor eax, eax
// 00727009  83c408               add esp, 8
// 0072700c  c3                   ret 
// library boost-1.34.1/libs\thread\src\xtime.cpp (function ?xtime_get@boost@@YAHPAUxtime@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/xtime.cpp
