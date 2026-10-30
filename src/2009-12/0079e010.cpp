// roc 2009-12 0079e010  unit: seg_00790000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079e010
//
// 0079e010  53                   push ebx
// 0079e011  55                   push ebp
// 0079e012  56                   push esi
// 0079e013  8bf1                 mov esi, ecx
// 0079e015  8b6e08               mov ebp, dword ptr [esi + 8]
// 0079e018  6a03                 push 3
// 0079e01a  55                   push ebp
// 0079e01b  8bd8                 mov ebx, eax
// 0079e01d  e86ea9feff           call 0x788990
// 0079e022  83c0fd               add eax, -3
// 0079e025  83c408               add esp, 8
// 0079e028  83f803               cmp eax, 3
// 0079e02b  775c                 ja 0x79e089
// 0079e02d  ff248500e17900       jmp dword ptr [eax*4 + 0x79e100]
// 0079e034  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079e038  53                   push ebx
// 0079e039  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0079e03d  50                   push eax
// 0079e03e  8bc6                 mov eax, esi
// 0079e040  e8ebfeffff           call 0x79df30
// 0079e045  83c408               add esp, 8
// 0079e048  5e                   pop esi
// 0079e049  5d                   pop ebp
// 0079e04a  5b                   pop ebx
// 0079e04b  c3                   ret 
// 0079e04c  6a03                 push 3
// 0079e04e  55                   push ebp
// 0079e04f  e80ca9feff           call 0x788960
// 0079e054  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079e058  53                   push ebx
// 0079e059  51                   push ecx
// 0079e05a  8bc6                 mov eax, esi
// 0079e05c  e8dffaffff           call 0x79db40
// 0079e061  6a01                 push 1
// 0079e063  50                   push eax
// 0079e064  55                   push ebp
// 0079e065  e856b4feff           call 0x7894c0
// 0079e06a  83c41c               add esp, 0x1c
// 0079e06d  eb1a                 jmp 0x79e089
// 0079e06f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079e073  57                   push edi
// 0079e074  8bc3                 mov eax, ebx
// 0079e076  33ff                 xor edi, edi
// 0079e078  e843faffff           call 0x79dac0
// 0079e07d  6a03                 push 3
// 0079e07f  55                   push ebp
// 0079e080  e83baffeff           call 0x788fc0
// 0079e085  83c408               add esp, 8
// 0079e088  5f                   pop edi
// 0079e089  6aff                 push -1
// 0079e08b  55                   push ebp
// 0079e08c  e8dfaafeff           call 0x788b70
// 0079e091  83c408               add esp, 8
// 0079e094  85c0                 test eax, eax
// 0079e096  752a                 jne 0x79e0c2
// 0079e098  6afe                 push -2
// 0079e09a  55                   push ebp
// 0079e09b  e810a7feff           call 0x7887b0
// 0079e0a0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079e0a4  2bd8                 sub ebx, eax
// 0079e0a6  53                   push ebx
// 0079e0a7  50                   push eax
// 0079e0a8  55                   push ebp
// 0079e0a9  e8f2acfeff           call 0x788da0
// 0079e0ae  8b542424             mov edx, dword ptr [esp + 0x24]
// 0079e0b2  83c414               add esp, 0x14
// 0079e0b5  52                   push edx
// 0079e0b6  e8f5bffeff           call 0x78a0b0
// 0079e0bb  83c404               add esp, 4
// 0079e0be  5e                   pop esi
// 0079e0bf  5d                   pop ebp
// 0079e0c0  5b                   pop ebx
// 0079e0c1  c3                   ret 
// 0079e0c2  6aff                 push -1
// 0079e0c4  55                   push ebp
// 0079e0c5  e876a9feff           call 0x788a40
// 0079e0ca  83c408               add esp, 8
// 0079e0cd  85c0                 test eax, eax
// 0079e0cf  751e                 jne 0x79e0ef
// 0079e0d1  6aff                 push -1
// 0079e0d3  55                   push ebp
// 0079e0d4  e8b7a8feff           call 0x788990
// 0079e0d9  50                   push eax
// 0079e0da  55                   push ebp
// 0079e0db  e8d0a8feff           call 0x7889b0
// 0079e0e0  50                   push eax
// 0079e0e1  68c8b19e00           push 0x9eb1c8
// 0079e0e6  55                   push ebp
// 0079e0e7  e804bcfeff           call 0x789cf0
// 0079e0ec  83c41c               add esp, 0x1c
// 0079e0ef  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079e0f3  52                   push edx
// 0079e0f4  e8b7bffeff           call 0x78a0b0
// 0079e0f9  83c404               add esp, 4
// 0079e0fc  5e                   pop esi
// 0079e0fd  5d                   pop ebp
// 0079e0fe  5b                   pop ebx
// 0079e0ff  c3                   ret 
// 0079e100  34e0                 xor al, 0xe0
// 0079e102  7900                 jns 0x79e104
// 0079e104  34e0                 xor al, 0xe0
// 0079e106  7900                 jns 0x79e108
// 0079e108  6f                   outsd dx, dword ptr [esi]
// 0079e109  e079                 loopne 0x79e184
// 0079e10b  004ce079             add byte ptr [eax + 0x79], cl
// library lua-5.1.3/lstrlib.c (function _add_value)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.3 lstrlib.c
