// roc 2012-06 005bcf80  unit: RakNet::RakPeer  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bcf80
//
// 005bcf80  56                   push esi
// 005bcf81  8bf1                 mov esi, ecx
// 005bcf83  8b4608               mov eax, dword ptr [esi + 8]
// 005bcf86  394604               cmp dword ptr [esi + 4], eax
// 005bcf89  756c                 jne 0x5bcff7
// 005bcf8b  85c0                 test eax, eax
// 005bcf8d  7509                 jne 0x5bcf98
// 005bcf8f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 005bcf96  eb05                 jmp 0x5bcf9d
// 005bcf98  03c0                 add eax, eax
// 005bcf9a  894608               mov dword ptr [esi + 8], eax
// 005bcf9d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005bcfa1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005bcfa5  8b4608               mov eax, dword ptr [esi + 8]
// 005bcfa8  57                   push edi
// 005bcfa9  51                   push ecx
// 005bcfaa  52                   push edx
// 005bcfab  50                   push eax
// 005bcfac  e83fecffff           call 0x5bbbf0
// 005bcfb1  83c40c               add esp, 0xc
// 005bcfb4  833e00               cmp dword ptr [esi], 0
// 005bcfb7  8bf8                 mov edi, eax
// 005bcfb9  7439                 je 0x5bcff4
// 005bcfbb  33d2                 xor edx, edx
// 005bcfbd  395604               cmp dword ptr [esi + 4], edx
// 005bcfc0  7627                 jbe 0x5bcfe9
// 005bcfc2  33c9                 xor ecx, ecx
// 005bcfc4  53                   push ebx
// 005bcfc5  8b06                 mov eax, dword ptr [esi]
// 005bcfc7  8b1c08               mov ebx, dword ptr [eax + ecx]
// 005bcfca  03c1                 add eax, ecx
// 005bcfcc  891c39               mov dword ptr [ecx + edi], ebx
// 005bcfcf  8b5804               mov ebx, dword ptr [eax + 4]
// 005bcfd2  895c3904             mov dword ptr [ecx + edi + 4], ebx
// 005bcfd6  668b4008             mov ax, word ptr [eax + 8]
// 005bcfda  6689443908           mov word ptr [ecx + edi + 8], ax
// 005bcfdf  42                   inc edx
// 005bcfe0  83c110               add ecx, 0x10
// 005bcfe3  3b5604               cmp edx, dword ptr [esi + 4]
// 005bcfe6  72dd                 jb 0x5bcfc5
// 005bcfe8  5b                   pop ebx
// 005bcfe9  8b0e                 mov ecx, dword ptr [esi]
// 005bcfeb  51                   push ecx
// 005bcfec  e8c9533c00           call 0x9823ba
// 005bcff1  83c404               add esp, 4
// 005bcff4  893e                 mov dword ptr [esi], edi
// 005bcff6  5f                   pop edi
// 005bcff7  8b4604               mov eax, dword ptr [esi + 4]
// 005bcffa  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bcffe  8b11                 mov edx, dword ptr [ecx]
// 005bd000  c1e004               shl eax, 4
// 005bd003  0306                 add eax, dword ptr [esi]
// 005bd005  8910                 mov dword ptr [eax], edx
// 005bd007  8b5104               mov edx, dword ptr [ecx + 4]
// 005bd00a  895004               mov dword ptr [eax + 4], edx
// 005bd00d  668b4908             mov cx, word ptr [ecx + 8]
// 005bd011  66894808             mov word ptr [eax + 8], cx
// 005bd015  ff4604               inc dword ptr [esi + 4]
// 005bd018  5e                   pop esi
// 005bd019  c20c00               ret 0xc
// library rbx2016-raknet/CloudServer.cpp (function ?Insert@?$List@URakNetGUID@RakNet@@@DataStructures@@QAEXABURakNetGUID@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
