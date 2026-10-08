// from server: 100% by auto
// roc 2010-06 0055c710  unit: G3D::GCamera  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055c710
//
// 0055c710  83ec0c               sub esp, 0xc
// 0055c713  56                   push esi
// 0055c714  8bf1                 mov esi, ecx
// 0055c716  837e2402             cmp dword ptr [esi + 0x24], 2
// 0055c71a  0f851a010000         jne 0x55c83a
// 0055c720  57                   push edi
// 0055c721  8b3d58a49e00         mov edi, dword ptr [0x9ea458]
// 0055c727  68780aa200           push 0xa20a78
// 0055c72c  56                   push esi
// 0055c72d  ffd7                 call edi
// 0055c72f  83c408               add esp, 8
// 0055c732  84c0                 test al, al
// 0055c734  742c                 je 0x55c762
// 0055c736  b801000000           mov eax, 1
// 0055c73b  8405f89ec000         test byte ptr [0xc09ef8], al
// 0055c741  7513                 jne 0x55c756
// 0055c743  0905f89ec000         or dword ptr [0xc09ef8], eax
// 0055c749  a198a69e00           mov eax, dword ptr [0x9ea698]
// 0055c74e  dd00                 fld qword ptr [eax]
// 0055c750  dd1df09ec000         fstp qword ptr [0xc09ef0]
// 0055c756  dd05f09ec000         fld qword ptr [0xc09ef0]
// 0055c75c  5f                   pop edi
// 0055c75d  5e                   pop esi
// 0055c75e  83c40c               add esp, 0xc
// 0055c761  c3                   ret 
// 0055c762  686c0aa200           push 0xa20a6c
// 0055c767  56                   push esi
// 0055c768  ffd7                 call edi
// 0055c76a  83c408               add esp, 8
// 0055c76d  84c0                 test al, al
// 0055c76f  740d                 je 0x55c77e
// 0055c771  e8fa42f3ff           call 0x490a70
// 0055c776  dd00                 fld qword ptr [eax]
// 0055c778  5f                   pop edi
// 0055c779  5e                   pop esi
// 0055c77a  83c40c               add esp, 0xc
// 0055c77d  c3                   ret 
// 0055c77e  68600aa200           push 0xa20a60
// 0055c783  56                   push esi
// 0055c784  ffd7                 call edi
// 0055c786  83c408               add esp, 8
// 0055c789  84c0                 test al, al
// 0055c78b  740f                 je 0x55c79c
// 0055c78d  e8de42f3ff           call 0x490a70
// 0055c792  dd00                 fld qword ptr [eax]
// 0055c794  5f                   pop edi
// 0055c795  d9e0                 fchs 
// 0055c797  5e                   pop esi
// 0055c798  83c40c               add esp, 0xc
// 0055c79b  c3                   ret 
// 0055c79c  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0055c79f  83f902               cmp ecx, 2
// 0055c7a2  766a                 jbe 0x55c80e
// 0055c7a4  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0055c7a8  8d7e04               lea edi, [esi + 4]
// 0055c7ab  7204                 jb 0x55c7b1
// 0055c7ad  8b07                 mov eax, dword ptr [edi]
// 0055c7af  eb02                 jmp 0x55c7b3
// 0055c7b1  8bc7                 mov eax, edi
// 0055c7b3  803830               cmp byte ptr [eax], 0x30
// 0055c7b6  7556                 jne 0x55c80e
// 0055c7b8  83f901               cmp ecx, 1
// 0055c7bb  7306                 jae 0x55c7c3
// 0055c7bd  ff150ca99e00         call dword ptr [0x9ea90c]
// 0055c7c3  8b4618               mov eax, dword ptr [esi + 0x18]
// 0055c7c6  83f810               cmp eax, 0x10
// 0055c7c9  7204                 jb 0x55c7cf
// 0055c7cb  8b0f                 mov ecx, dword ptr [edi]
// 0055c7cd  eb02                 jmp 0x55c7d1
// 0055c7cf  8bcf                 mov ecx, edi
// 0055c7d1  80790178             cmp byte ptr [ecx + 1], 0x78
// 0055c7d5  7537                 jne 0x55c80e
// 0055c7d7  83f810               cmp eax, 0x10
// 0055c7da  7202                 jb 0x55c7de
// 0055c7dc  8b3f                 mov edi, dword ptr [edi]
// 0055c7de  8d4c2408             lea ecx, [esp + 8]
// 0055c7e2  51                   push ecx
// 0055c7e3  685c0aa200           push 0xa20a5c
// 0055c7e8  57                   push edi
// 0055c7e9  ff1518a79e00         call dword ptr [0x9ea718]
// 0055c7ef  db442414             fild dword ptr [esp + 0x14]
// 0055c7f3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0055c7f7  83c40c               add esp, 0xc
// 0055c7fa  85d2                 test edx, edx
// 0055c7fc  0f8d5affffff         jge 0x55c75c
// 0055c802  dc054852a000         fadd qword ptr [0xa05248]
// 0055c808  5f                   pop edi
// 0055c809  5e                   pop esi
// 0055c80a  83c40c               add esp, 0xc
// 0055c80d  c3                   ret 
// 0055c80e  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0055c812  7205                 jb 0x55c819
// 0055c814  8b7604               mov esi, dword ptr [esi + 4]
// 0055c817  eb03                 jmp 0x55c81c
// 0055c819  83c604               add esi, 4
// 0055c81c  8d44240c             lea eax, [esp + 0xc]
// 0055c820  50                   push eax
// 0055c821  68580aa200           push 0xa20a58
// 0055c826  56                   push esi
// 0055c827  ff1518a79e00         call dword ptr [0x9ea718]
// 0055c82d  dd442418             fld qword ptr [esp + 0x18]
// 0055c831  83c40c               add esp, 0xc
// 0055c834  5f                   pop edi
// 0055c835  5e                   pop esi
// 0055c836  83c40c               add esp, 0xc
// 0055c839  c3                   ret 
// 0055c83a  d9ee                 fldz 
// 0055c83c  5e                   pop esi
// 0055c83d  83c40c               add esp, 0xc
// 0055c840  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?number@Token@G3D@@QBENXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
