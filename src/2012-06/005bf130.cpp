// roc 2012-06 005bf130  unit: RakNet::RakPeer  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bf130
//
// 005bf130  56                   push esi
// 005bf131  8bf1                 mov esi, ecx
// 005bf133  8b4608               mov eax, dword ptr [esi + 8]
// 005bf136  394604               cmp dword ptr [esi + 4], eax
// 005bf139  7579                 jne 0x5bf1b4
// 005bf13b  85c0                 test eax, eax
// 005bf13d  7509                 jne 0x5bf148
// 005bf13f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 005bf146  eb05                 jmp 0x5bf14d
// 005bf148  03c0                 add eax, eax
// 005bf14a  894608               mov dword ptr [esi + 8], eax
// 005bf14d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005bf151  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005bf155  8b4608               mov eax, dword ptr [esi + 8]
// 005bf158  53                   push ebx
// 005bf159  51                   push ecx
// 005bf15a  52                   push edx
// 005bf15b  50                   push eax
// 005bf15c  e8bfc6ffff           call 0x5bb820
// 005bf161  83c40c               add esp, 0xc
// 005bf164  833e00               cmp dword ptr [esi], 0
// 005bf167  8bd8                 mov ebx, eax
// 005bf169  7446                 je 0x5bf1b1
// 005bf16b  57                   push edi
// 005bf16c  33ff                 xor edi, edi
// 005bf16e  397e04               cmp dword ptr [esi + 4], edi
// 005bf171  761a                 jbe 0x5bf18d
// 005bf173  8b0e                 mov ecx, dword ptr [esi]
// 005bf175  8d04bd00000000       lea eax, [edi*4]
// 005bf17c  03c8                 add ecx, eax
// 005bf17e  51                   push ecx
// 005bf17f  8d0c18               lea ecx, [eax + ebx]
// 005bf182  e8098dfeff           call 0x5a7e90
// 005bf187  47                   inc edi
// 005bf188  3b7e04               cmp edi, dword ptr [esi + 4]
// 005bf18b  72e6                 jb 0x5bf173
// 005bf18d  8b06                 mov eax, dword ptr [esi]
// 005bf18f  85c0                 test eax, eax
// 005bf191  741d                 je 0x5bf1b0
// 005bf193  8b50fc               mov edx, dword ptr [eax - 4]
// 005bf196  8d78fc               lea edi, [eax - 4]
// 005bf199  68807e5a00           push 0x5a7e80
// 005bf19e  52                   push edx
// 005bf19f  6a04                 push 4
// 005bf1a1  50                   push eax
// 005bf1a2  e8c9403c00           call 0x983270
// 005bf1a7  57                   push edi
// 005bf1a8  e80d323c00           call 0x9823ba
// 005bf1ad  83c404               add esp, 4
// 005bf1b0  5f                   pop edi
// 005bf1b1  891e                 mov dword ptr [esi], ebx
// 005bf1b3  5b                   pop ebx
// 005bf1b4  8b442408             mov eax, dword ptr [esp + 8]
// 005bf1b8  8b4e04               mov ecx, dword ptr [esi + 4]
// 005bf1bb  8b16                 mov edx, dword ptr [esi]
// 005bf1bd  50                   push eax
// 005bf1be  8d0c8a               lea ecx, [edx + ecx*4]
// 005bf1c1  e8ca8cfeff           call 0x5a7e90
// 005bf1c6  ff4604               inc dword ptr [esi + 4]
// 005bf1c9  5e                   pop esi
// 005bf1ca  c20c00               ret 0xc
// library rbx2016-raknet/RPC4Plugin.cpp (function ?Insert@?$List@VRakString@RakNet@@@DataStructures@@QAEXABVRakString@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
