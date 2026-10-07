// roc 2011-06 00521c60  unit: RBX::Network::ProfiledRakPeer  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00521c60
//
// 00521c60  56                   push esi
// 00521c61  8bf1                 mov esi, ecx
// 00521c63  8b4608               mov eax, dword ptr [esi + 8]
// 00521c66  394604               cmp dword ptr [esi + 4], eax
// 00521c69  756c                 jne 0x521cd7
// 00521c6b  85c0                 test eax, eax
// 00521c6d  7509                 jne 0x521c78
// 00521c6f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 00521c76  eb05                 jmp 0x521c7d
// 00521c78  03c0                 add eax, eax
// 00521c7a  894608               mov dword ptr [esi + 8], eax
// 00521c7d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00521c81  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00521c85  8b4608               mov eax, dword ptr [esi + 8]
// 00521c88  57                   push edi
// 00521c89  51                   push ecx
// 00521c8a  52                   push edx
// 00521c8b  50                   push eax
// 00521c8c  e8ffecffff           call 0x520990
// 00521c91  83c40c               add esp, 0xc
// 00521c94  833e00               cmp dword ptr [esi], 0
// 00521c97  8bf8                 mov edi, eax
// 00521c99  7439                 je 0x521cd4
// 00521c9b  33d2                 xor edx, edx
// 00521c9d  395604               cmp dword ptr [esi + 4], edx
// 00521ca0  7627                 jbe 0x521cc9
// 00521ca2  33c9                 xor ecx, ecx
// 00521ca4  53                   push ebx
// 00521ca5  8b06                 mov eax, dword ptr [esi]
// 00521ca7  8b1c08               mov ebx, dword ptr [eax + ecx]
// 00521caa  03c1                 add eax, ecx
// 00521cac  891c39               mov dword ptr [ecx + edi], ebx
// 00521caf  8b5804               mov ebx, dword ptr [eax + 4]
// 00521cb2  895c3904             mov dword ptr [ecx + edi + 4], ebx
// 00521cb6  668b4008             mov ax, word ptr [eax + 8]
// 00521cba  6689443908           mov word ptr [ecx + edi + 8], ax
// 00521cbf  42                   inc edx
// 00521cc0  83c110               add ecx, 0x10
// 00521cc3  3b5604               cmp edx, dword ptr [esi + 4]
// 00521cc6  72dd                 jb 0x521ca5
// 00521cc8  5b                   pop ebx
// 00521cc9  8b0e                 mov ecx, dword ptr [esi]
// 00521ccb  51                   push ecx
// 00521ccc  e833862e00           call 0x80a304
// 00521cd1  83c404               add esp, 4
// 00521cd4  893e                 mov dword ptr [esi], edi
// 00521cd6  5f                   pop edi
// 00521cd7  8b4604               mov eax, dword ptr [esi + 4]
// 00521cda  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00521cde  8b11                 mov edx, dword ptr [ecx]
// 00521ce0  c1e004               shl eax, 4
// 00521ce3  0306                 add eax, dword ptr [esi]
// 00521ce5  8910                 mov dword ptr [eax], edx
// 00521ce7  8b5104               mov edx, dword ptr [ecx + 4]
// 00521cea  895004               mov dword ptr [eax + 4], edx
// 00521ced  668b4908             mov cx, word ptr [ecx + 8]
// 00521cf1  66894808             mov word ptr [eax + 8], cx
// 00521cf5  ff4604               inc dword ptr [esi + 4]
// 00521cf8  5e                   pop esi
// 00521cf9  c20c00               ret 0xc
// library rbx2016-raknet/CloudServer.cpp (function ?Insert@?$List@URakNetGUID@RakNet@@@DataStructures@@QAEXABURakNetGUID@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
