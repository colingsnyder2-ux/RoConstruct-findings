// roc 2007-03 005692c0  unit: seg_00560000  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005692c0
//
// 005692c0  64a100000000         mov eax, dword ptr fs:[0]
// 005692c6  6aff                 push -1
// 005692c8  685e597500           push 0x75595e
// 005692cd  50                   push eax
// 005692ce  64892500000000       mov dword ptr fs:[0], esp
// 005692d5  53                   push ebx
// 005692d6  55                   push ebp
// 005692d7  56                   push esi
// 005692d8  57                   push edi
// 005692d9  bb01000000           mov ebx, 1
// 005692de  33ff                 xor edi, edi
// 005692e0  841dacc68b00         test byte ptr [0x8bc6ac], bl
// 005692e6  7526                 jne 0x56930e
// 005692e8  091dacc68b00         or dword ptr [0x8bc6ac], ebx
// 005692ee  6aff                 push -1
// 005692f0  68acb27a00           push 0x7ab2ac
// 005692f5  897c2420             mov dword ptr [esp + 0x20], edi
// 005692f9  e8e245fcff           call 0x52d8e0
// 005692fe  83c408               add esp, 8
// 00569301  a3a8c68b00           mov dword ptr [0x8bc6a8], eax
// 00569306  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0056930e  6a20                 push 0x20
// 00569310  e8f34d0b00           call 0x61e108
// 00569315  83c404               add esp, 4
// 00569318  3bc7                 cmp eax, edi
// 0056931a  741e                 je 0x56933a
// 0056931c  8b0d64c68b00         mov ecx, dword ptr [0x8bc664]
// 00569322  8938                 mov dword ptr [eax], edi
// 00569324  897804               mov dword ptr [eax + 4], edi
// 00569327  897808               mov dword ptr [eax + 8], edi
// 0056932a  89480c               mov dword ptr [eax + 0xc], ecx
// 0056932d  897810               mov dword ptr [eax + 0x10], edi
// 00569330  897818               mov dword ptr [eax + 0x18], edi
// 00569333  89781c               mov dword ptr [eax + 0x1c], edi
// 00569336  8bf0                 mov esi, eax
// 00569338  eb02                 jmp 0x56933c
// 0056933a  33f6                 xor esi, esi
// 0056933c  a1a8c68b00           mov eax, dword ptr [0x8bc6a8]
// 00569341  6888b27a00           push 0x7ab288
// 00569346  50                   push eax
// 00569347  8bce                 mov ecx, esi
// 00569349  e892feffff           call 0x5691e0
// 0056934e  8b0de4c58b00         mov ecx, dword ptr [0x8bc5e4]
// 00569354  685cb27a00           push 0x7ab25c
// 00569359  51                   push ecx
// 0056935a  8bce                 mov ecx, esi
// 0056935c  e87ffeffff           call 0x5691e0
// 00569361  8b151cc68b00         mov edx, dword ptr [0x8bc61c]
// 00569367  6838b27a00           push 0x7ab238
// 0056936c  52                   push edx
// 0056936d  8bce                 mov ecx, esi
// 0056936f  e86cfeffff           call 0x5691e0
// 00569374  8b2d4cc68b00         mov ebp, dword ptr [0x8bc64c]
// 0056937a  6a10                 push 0x10
// 0056937c  e8874d0b00           call 0x61e108
// 00569381  83c404               add esp, 4
// 00569384  3bc7                 cmp eax, edi
// 00569386  7415                 je 0x56939d
// 00569388  8938                 mov dword ptr [eax], edi
// 0056938a  896804               mov dword ptr [eax + 4], ebp
// 0056938d  c7400805000000       mov dword ptr [eax + 8], 5
// 00569394  c7400c04000000       mov dword ptr [eax + 0xc], 4
// 0056939b  eb02                 jmp 0x56939f
// 0056939d  33c0                 xor eax, eax
// 0056939f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005693a2  3bcf                 cmp ecx, edi
// 005693a4  7505                 jne 0x5693ab
// 005693a6  894618               mov dword ptr [esi + 0x18], eax
// 005693a9  eb02                 jmp 0x5693ad
// 005693ab  8901                 mov dword ptr [ecx], eax
// 005693ad  6a20                 push 0x20
// 005693af  89461c               mov dword ptr [esi + 0x1c], eax
// 005693b2  e8514d0b00           call 0x61e108
// 005693b7  83c404               add esp, 4
// 005693ba  3bc7                 cmp eax, edi
// 005693bc  7425                 je 0x5693e3
// 005693be  8b0d04c68b00         mov ecx, dword ptr [0x8bc604]
// 005693c4  8b1544c68b00         mov edx, dword ptr [0x8bc644]
// 005693ca  8938                 mov dword ptr [eax], edi
// 005693cc  897804               mov dword ptr [eax + 4], edi
// 005693cf  897808               mov dword ptr [eax + 8], edi
// 005693d2  89500c               mov dword ptr [eax + 0xc], edx
// 005693d5  895810               mov dword ptr [eax + 0x10], ebx
// 005693d8  894814               mov dword ptr [eax + 0x14], ecx
// 005693db  897818               mov dword ptr [eax + 0x18], edi
// 005693de  89781c               mov dword ptr [eax + 0x1c], edi
// 005693e1  eb02                 jmp 0x5693e5
// 005693e3  33c0                 xor eax, eax
// 005693e5  8b4e08               mov ecx, dword ptr [esi + 8]
// 005693e8  3bcf                 cmp ecx, edi
// 005693ea  7505                 jne 0x5693f1
// 005693ec  894604               mov dword ptr [esi + 4], eax
// 005693ef  eb02                 jmp 0x5693f3
// 005693f1  8901                 mov dword ptr [ecx], eax
// 005693f3  6a20                 push 0x20
// 005693f5  894608               mov dword ptr [esi + 8], eax
// 005693f8  e80b4d0b00           call 0x61e108
// 005693fd  83c404               add esp, 4
// 00569400  3bc7                 cmp eax, edi
// 00569402  7425                 je 0x569429
// 00569404  8b0d74c68b00         mov ecx, dword ptr [0x8bc674]
// 0056940a  8b1544c68b00         mov edx, dword ptr [0x8bc644]
// 00569410  8938                 mov dword ptr [eax], edi
// 00569412  897804               mov dword ptr [eax + 4], edi
// 00569415  897808               mov dword ptr [eax + 8], edi
// 00569418  89500c               mov dword ptr [eax + 0xc], edx
// 0056941b  895810               mov dword ptr [eax + 0x10], ebx
// 0056941e  894814               mov dword ptr [eax + 0x14], ecx
// 00569421  897818               mov dword ptr [eax + 0x18], edi
// 00569424  89781c               mov dword ptr [eax + 0x1c], edi
// 00569427  eb02                 jmp 0x56942b
// 00569429  33c0                 xor eax, eax
// 0056942b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0056942e  3bcf                 cmp ecx, edi
// 00569430  7505                 jne 0x569437
// 00569432  894604               mov dword ptr [esi + 4], eax
// 00569435  eb02                 jmp 0x569439
// 00569437  8901                 mov dword ptr [ecx], eax
// 00569439  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056943d  894608               mov dword ptr [esi + 8], eax
// 00569440  5f                   pop edi
// 00569441  8bc6                 mov eax, esi
// 00569443  5e                   pop esi
// 00569444  5d                   pop ebp
// 00569445  64890d00000000       mov dword ptr fs:[0], ecx
// 0056944c  5b                   pop ebx
// 0056944d  83c40c               add esp, 0xc
// 00569450  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?newRootElement@SerializerV2@@SAPAVXmlElement@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
