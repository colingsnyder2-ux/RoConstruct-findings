// roc 2009-06 00676810  unit: RBX::Assembly  size: 463 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00676810
//
// 00676810  51                   push ecx
// 00676811  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00676815  53                   push ebx
// 00676816  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0067681a  55                   push ebp
// 0067681b  56                   push esi
// 0067681c  57                   push edi
// 0067681d  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00676821  8bc1                 mov eax, ecx
// 00676823  2bc7                 sub eax, edi
// 00676825  c1f802               sar eax, 2
// 00676828  99                   cdq 
// 00676829  2bc2                 sub eax, edx
// 0067682b  53                   push ebx
// 0067682c  d1f8                 sar eax, 1
// 0067682e  83c1fc               add ecx, -4
// 00676831  51                   push ecx
// 00676832  8d3487               lea esi, [edi + eax*4]
// 00676835  56                   push esi
// 00676836  57                   push edi
// 00676837  e894fcffff           call 0x6764d0
// 0067683c  83c410               add esp, 0x10
// 0067683f  8d6e04               lea ebp, [esi + 4]
// 00676842  3bfe                 cmp edi, esi
// 00676844  7327                 jae 0x67686d
// 00676846  8b06                 mov eax, dword ptr [esi]
// 00676848  8b4efc               mov ecx, dword ptr [esi - 4]
// 0067684b  50                   push eax
// 0067684c  51                   push ecx
// 0067684d  ffd3                 call ebx
// 0067684f  83c408               add esp, 8
// 00676852  84c0                 test al, al
// 00676854  7517                 jne 0x67686d
// 00676856  8b56fc               mov edx, dword ptr [esi - 4]
// 00676859  8b06                 mov eax, dword ptr [esi]
// 0067685b  52                   push edx
// 0067685c  50                   push eax
// 0067685d  ffd3                 call ebx
// 0067685f  83c408               add esp, 8
// 00676862  84c0                 test al, al
// 00676864  7507                 jne 0x67686d
// 00676866  83c6fc               add esi, -4
// 00676869  3bfe                 cmp edi, esi
// 0067686b  72d9                 jb 0x676846
// 0067686d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00676871  3bef                 cmp ebp, edi
// 00676873  7327                 jae 0x67689c
// 00676875  8b0e                 mov ecx, dword ptr [esi]
// 00676877  8b5500               mov edx, dword ptr [ebp]
// 0067687a  51                   push ecx
// 0067687b  52                   push edx
// 0067687c  ffd3                 call ebx
// 0067687e  83c408               add esp, 8
// 00676881  84c0                 test al, al
// 00676883  7517                 jne 0x67689c
// 00676885  8b4500               mov eax, dword ptr [ebp]
// 00676888  8b0e                 mov ecx, dword ptr [esi]
// 0067688a  50                   push eax
// 0067688b  51                   push ecx
// 0067688c  ffd3                 call ebx
// 0067688e  83c408               add esp, 8
// 00676891  84c0                 test al, al
// 00676893  7507                 jne 0x67689c
// 00676895  83c504               add ebp, 4
// 00676898  3bef                 cmp ebp, edi
// 0067689a  72d9                 jb 0x676875
// 0067689c  8bde                 mov ebx, esi
// 0067689e  8bfd                 mov edi, ebp
// 006768a0  895c2410             mov dword ptr [esp + 0x10], ebx
// 006768a4  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 006768a8  7342                 jae 0x6768ec
// 006768aa  8d9b00000000         lea ebx, [ebx]
// 006768b0  8b17                 mov edx, dword ptr [edi]
// 006768b2  8b06                 mov eax, dword ptr [esi]
// 006768b4  52                   push edx
// 006768b5  50                   push eax
// 006768b6  ff54242c             call dword ptr [esp + 0x2c]
// 006768ba  83c408               add esp, 8
// 006768bd  84c0                 test al, al
// 006768bf  7522                 jne 0x6768e3
// 006768c1  8b0e                 mov ecx, dword ptr [esi]
// 006768c3  8b17                 mov edx, dword ptr [edi]
// 006768c5  51                   push ecx
// 006768c6  52                   push edx
// 006768c7  ff54242c             call dword ptr [esp + 0x2c]
// 006768cb  83c408               add esp, 8
// 006768ce  84c0                 test al, al
// 006768d0  751a                 jne 0x6768ec
// 006768d2  8bc5                 mov eax, ebp
// 006768d4  83c504               add ebp, 4
// 006768d7  3bc7                 cmp eax, edi
// 006768d9  7408                 je 0x6768e3
// 006768db  8b17                 mov edx, dword ptr [edi]
// 006768dd  8b08                 mov ecx, dword ptr [eax]
// 006768df  8910                 mov dword ptr [eax], edx
// 006768e1  890f                 mov dword ptr [edi], ecx
// 006768e3  83c704               add edi, 4
// 006768e6  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 006768ea  72c4                 jb 0x6768b0
// 006768ec  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 006768f0  7650                 jbe 0x676942
// 006768f2  83c3fc               add ebx, -4
// 006768f5  8b06                 mov eax, dword ptr [esi]
// 006768f7  8b0b                 mov ecx, dword ptr [ebx]
// 006768f9  50                   push eax
// 006768fa  51                   push ecx
// 006768fb  ff54242c             call dword ptr [esp + 0x2c]
// 006768ff  83c408               add esp, 8
// 00676902  84c0                 test al, al
// 00676904  7520                 jne 0x676926
// 00676906  8b13                 mov edx, dword ptr [ebx]
// 00676908  8b06                 mov eax, dword ptr [esi]
// 0067690a  52                   push edx
// 0067690b  50                   push eax
// 0067690c  ff54242c             call dword ptr [esp + 0x2c]
// 00676910  83c408               add esp, 8
// 00676913  84c0                 test al, al
// 00676915  7523                 jne 0x67693a
// 00676917  83ee04               sub esi, 4
// 0067691a  3bf3                 cmp esi, ebx
// 0067691c  7408                 je 0x676926
// 0067691e  8b0b                 mov ecx, dword ptr [ebx]
// 00676920  8b06                 mov eax, dword ptr [esi]
// 00676922  890e                 mov dword ptr [esi], ecx
// 00676924  8903                 mov dword ptr [ebx], eax
// 00676926  8b442410             mov eax, dword ptr [esp + 0x10]
// 0067692a  83e804               sub eax, 4
// 0067692d  83eb04               sub ebx, 4
// 00676930  89442410             mov dword ptr [esp + 0x10], eax
// 00676934  3944241c             cmp dword ptr [esp + 0x1c], eax
// 00676938  72bb                 jb 0x6768f5
// 0067693a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0067693e  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00676942  7542                 jne 0x676986
// 00676944  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00676948  0f8482000000         je 0x6769d0
// 0067694e  3bef                 cmp ebp, edi
// 00676950  740e                 je 0x676960
// 00676952  3bf5                 cmp esi, ebp
// 00676954  740a                 je 0x676960
// 00676956  8b5500               mov edx, dword ptr [ebp]
// 00676959  8b06                 mov eax, dword ptr [esi]
// 0067695b  8916                 mov dword ptr [esi], edx
// 0067695d  894500               mov dword ptr [ebp], eax
// 00676960  8bc7                 mov eax, edi
// 00676962  8bce                 mov ecx, esi
// 00676964  83c504               add ebp, 4
// 00676967  83c604               add esi, 4
// 0067696a  83c704               add edi, 4
// 0067696d  3bc8                 cmp ecx, eax
// 0067696f  0f842fffffff         je 0x6768a4
// 00676975  8b18                 mov ebx, dword ptr [eax]
// 00676977  8b11                 mov edx, dword ptr [ecx]
// 00676979  8919                 mov dword ptr [ecx], ebx
// 0067697b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0067697f  8910                 mov dword ptr [eax], edx
// 00676981  e91effffff           jmp 0x6768a4
// 00676986  83eb04               sub ebx, 4
// 00676989  895c2410             mov dword ptr [esp + 0x10], ebx
// 0067698d  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00676991  7529                 jne 0x6769bc
// 00676993  83ee04               sub esi, 4
// 00676996  3bde                 cmp ebx, esi
// 00676998  7408                 je 0x6769a2
// 0067699a  8b0e                 mov ecx, dword ptr [esi]
// 0067699c  8b03                 mov eax, dword ptr [ebx]
// 0067699e  890b                 mov dword ptr [ebx], ecx
// 006769a0  8906                 mov dword ptr [esi], eax
// 006769a2  83ed04               sub ebp, 4
// 006769a5  3bf5                 cmp esi, ebp
// 006769a7  0f84f7feffff         je 0x6768a4
// 006769ad  8b5500               mov edx, dword ptr [ebp]
// 006769b0  8b06                 mov eax, dword ptr [esi]
// 006769b2  8916                 mov dword ptr [esi], edx
// 006769b4  894500               mov dword ptr [ebp], eax
// 006769b7  e9e8feffff           jmp 0x6768a4
// 006769bc  3bfb                 cmp edi, ebx
// 006769be  7408                 je 0x6769c8
// 006769c0  8b0b                 mov ecx, dword ptr [ebx]
// 006769c2  8b07                 mov eax, dword ptr [edi]
// 006769c4  890f                 mov dword ptr [edi], ecx
// 006769c6  8903                 mov dword ptr [ebx], eax
// 006769c8  83c704               add edi, 4
// 006769cb  e9d4feffff           jmp 0x6768a4
// 006769d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006769d4  5f                   pop edi
// 006769d5  8930                 mov dword ptr [eax], esi
// 006769d7  5e                   pop esi
// 006769d8  896804               mov dword ptr [eax + 4], ebp
// 006769db  5d                   pop ebp
// 006769dc  5b                   pop ebx
// 006769dd  59                   pop ecx
// 006769de  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Unguarded_partition@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YA?AU?$pair@PAPAVMotorJoint@RBX@@PAPAV12@@0@PAPAVMotorJoint@RBX@@0P6A_NPBV23@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
