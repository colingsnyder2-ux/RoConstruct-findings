// from server: 100% by auto
// roc 2010-06 007819d0  unit: seg_00780000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007819d0
//
// 007819d0  51                   push ecx
// 007819d1  8b4e04               mov ecx, dword ptr [esi + 4]
// 007819d4  6a04                 push 4
// 007819d6  8d442404             lea eax, [esp + 4]
// 007819da  50                   push eax
// 007819db  51                   push ecx
// 007819dc  e80fcaffff           call 0x77e3f0
// 007819e1  83c40c               add esp, 0xc
// 007819e4  85c0                 test eax, eax
// 007819e6  7423                 je 0x781a0b
// 007819e8  8b560c               mov edx, dword ptr [esi + 0xc]
// 007819eb  8b06                 mov eax, dword ptr [esi]
// 007819ed  68c032a500           push 0xa532c0
// 007819f2  52                   push edx
// 007819f3  68a432a500           push 0xa532a4
// 007819f8  50                   push eax
// 007819f9  e8e213fbff           call 0x732de0
// 007819fe  8b0e                 mov ecx, dword ptr [esi]
// 00781a00  6a03                 push 3
// 00781a02  51                   push ecx
// 00781a03  e8a8e6faff           call 0x7300b0
// 00781a08  83c418               add esp, 0x18
// 00781a0b  8b0424               mov eax, dword ptr [esp]
// 00781a0e  85c0                 test eax, eax
// 00781a10  7502                 jne 0x781a14
// 00781a12  59                   pop ecx
// 00781a13  c3                   ret 
// 00781a14  8b5608               mov edx, dword ptr [esi + 8]
// 00781a17  57                   push edi
// 00781a18  50                   push eax
// 00781a19  8b06                 mov eax, dword ptr [esi]
// 00781a1b  52                   push edx
// 00781a1c  50                   push eax
// 00781a1d  e85ecaffff           call 0x77e480
// 00781a22  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00781a26  8b5604               mov edx, dword ptr [esi + 4]
// 00781a29  51                   push ecx
// 00781a2a  8bf8                 mov edi, eax
// 00781a2c  57                   push edi
// 00781a2d  52                   push edx
// 00781a2e  e8bdc9ffff           call 0x77e3f0
// 00781a33  83c418               add esp, 0x18
// 00781a36  85c0                 test eax, eax
// 00781a38  7423                 je 0x781a5d
// 00781a3a  8b460c               mov eax, dword ptr [esi + 0xc]
// 00781a3d  8b0e                 mov ecx, dword ptr [esi]
// 00781a3f  68c032a500           push 0xa532c0
// 00781a44  50                   push eax
// 00781a45  68a432a500           push 0xa532a4
// 00781a4a  51                   push ecx
// 00781a4b  e89013fbff           call 0x732de0
// 00781a50  8b16                 mov edx, dword ptr [esi]
// 00781a52  6a03                 push 3
// 00781a54  52                   push edx
// 00781a55  e856e6faff           call 0x7300b0
// 00781a5a  83c418               add esp, 0x18
// 00781a5d  8b442404             mov eax, dword ptr [esp + 4]
// 00781a61  8b0e                 mov ecx, dword ptr [esi]
// 00781a63  48                   dec eax
// 00781a64  50                   push eax
// 00781a65  57                   push edi
// 00781a66  51                   push ecx
// 00781a67  e874c3ffff           call 0x77dde0
// 00781a6c  83c40c               add esp, 0xc
// 00781a6f  5f                   pop edi
// 00781a70  59                   pop ecx
// 00781a71  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadString)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
