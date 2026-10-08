// roc 2007-03 005f6720  unit: seg_005f0000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f6720
//
// 005f6720  83ec08               sub esp, 8
// 005f6723  53                   push ebx
// 005f6724  55                   push ebp
// 005f6725  56                   push esi
// 005f6726  57                   push edi
// 005f6727  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005f672b  57                   push edi
// 005f672c  8d442414             lea eax, [esp + 0x14]
// 005f6730  50                   push eax
// 005f6731  b91c0f8c00           mov ecx, 0x8c0f1c
// 005f6736  e815fbffff           call 0x5f6250
// 005f673b  8b742410             mov esi, dword ptr [esp + 0x10]
// 005f673f  85f6                 test esi, esi
// 005f6741  8b1d200f8c00         mov ebx, dword ptr [0x8c0f20]
// 005f6747  7408                 je 0x5f6751
// 005f6749  81fe1c0f8c00         cmp esi, 0x8c0f1c
// 005f674f  7406                 je 0x5f6757
// 005f6751  ff1544e97700         call dword ptr [0x77e944]
// 005f6757  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005f675b  3beb                 cmp ebp, ebx
// 005f675d  7420                 je 0x5f677f
// 005f675f  85f6                 test esi, esi
// 005f6761  7506                 jne 0x5f6769
// 005f6763  ff1544e97700         call dword ptr [0x77e944]
// 005f6769  3b6e04               cmp ebp, dword ptr [esi + 4]
// 005f676c  7506                 jne 0x5f6774
// 005f676e  ff1544e97700         call dword ptr [0x77e944]
// 005f6774  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005f6777  5f                   pop edi
// 005f6778  5e                   pop esi
// 005f6779  5d                   pop ebp
// 005f677a  5b                   pop ebx
// 005f677b  83c408               add esp, 8
// 005f677e  c3                   ret 
// 005f677f  6a60                 push 0x60
// 005f6781  e882790200           call 0x61e108
// 005f6786  83c404               add esp, 4
// 005f6789  85c0                 test eax, eax
// 005f678b  740c                 je 0x5f6799
// 005f678d  57                   push edi
// 005f678e  8bc8                 mov ecx, eax
// 005f6790  e86bf1ffff           call 0x5f5900
// 005f6795  8bf0                 mov esi, eax
// 005f6797  eb02                 jmp 0x5f679b
// 005f6799  33f6                 xor esi, esi
// 005f679b  57                   push edi
// 005f679c  b91c0f8c00           mov ecx, 0x8c0f1c
// 005f67a1  e8eafeffff           call 0x5f6690
// 005f67a6  5f                   pop edi
// 005f67a7  8930                 mov dword ptr [eax], esi
// 005f67a9  8bc6                 mov eax, esi
// 005f67ab  5e                   pop esi
// 005f67ac  5d                   pop ebp
// 005f67ad  5b                   pop ebx
// 005f67ae  83c408               add esp, 8
// 005f67b1  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ?getVertices@BlockTemplate@RBX@@SAPBVVector3@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
