// roc 2007-08 0060eeb0  unit: RBX::Ball  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060eeb0
//
// 0060eeb0  56                   push esi
// 0060eeb1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060eeb5  8a06                 mov al, byte ptr [esi]
// 0060eeb7  3c3d                 cmp al, 0x3d
// 0060eeb9  57                   push edi
// 0060eeba  751f                 jne 0x60eedb
// 0060eebc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0060eec0  57                   push edi
// 0060eec1  83c601               add esi, 1
// 0060eec4  56                   push esi
// 0060eec5  8b742414             mov esi, dword ptr [esp + 0x14]
// 0060eec9  56                   push esi
// 0060eeca  ff1578e97700         call dword ptr [0x77e978]
// 0060eed0  83c40c               add esp, 0xc
// 0060eed3  c6443eff00           mov byte ptr [esi + edi - 1], 0
// 0060eed8  5f                   pop edi
// 0060eed9  5e                   pop esi
// 0060eeda  c3                   ret 
// 0060eedb  3c40                 cmp al, 0x40
// 0060eedd  756f                 jne 0x60ef4e
// 0060eedf  8b542414             mov edx, dword ptr [esp + 0x14]
// 0060eee3  83c601               add esi, 1
// 0060eee6  8bc6                 mov eax, esi
// 0060eee8  83ea08               sub edx, 8
// 0060eeeb  8d7801               lea edi, [eax + 1]
// 0060eeee  8bff                 mov edi, edi
// 0060eef0  8a08                 mov cl, byte ptr [eax]
// 0060eef2  83c001               add eax, 1
// 0060eef5  84c9                 test cl, cl
// 0060eef7  75f7                 jne 0x60eef0
// 0060eef9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060eefd  2bc7                 sub eax, edi
// 0060eeff  3bc2                 cmp eax, edx
// 0060ef01  c60100               mov byte ptr [ecx], 0
// 0060ef04  761b                 jbe 0x60ef21
// 0060ef06  2bc2                 sub eax, edx
// 0060ef08  8bf9                 mov edi, ecx
// 0060ef0a  03f0                 add esi, eax
// 0060ef0c  83c7ff               add edi, -1
// 0060ef0f  90                   nop 
// 0060ef10  8a4701               mov al, byte ptr [edi + 1]
// 0060ef13  83c701               add edi, 1
// 0060ef16  84c0                 test al, al
// 0060ef18  75f6                 jne 0x60ef10
// 0060ef1a  a118317c00           mov eax, dword ptr [0x7c3118]
// 0060ef1f  8907                 mov dword ptr [edi], eax
// 0060ef21  8bc6                 mov eax, esi
// 0060ef23  8a10                 mov dl, byte ptr [eax]
// 0060ef25  83c001               add eax, 1
// 0060ef28  84d2                 test dl, dl
// 0060ef2a  75f7                 jne 0x60ef23
// 0060ef2c  2bc6                 sub eax, esi
// 0060ef2e  83c1ff               add ecx, -1
// 0060ef31  8a5101               mov dl, byte ptr [ecx + 1]
// 0060ef34  83c101               add ecx, 1
// 0060ef37  84d2                 test dl, dl
// 0060ef39  75f6                 jne 0x60ef31
// 0060ef3b  8bf9                 mov edi, ecx
// 0060ef3d  8bc8                 mov ecx, eax
// 0060ef3f  c1e902               shr ecx, 2
// 0060ef42  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0060ef44  8bc8                 mov ecx, eax
// 0060ef46  83e103               and ecx, 3
// 0060ef49  f3a4                 rep movsb byte ptr es:[edi], byte ptr [esi]
// 0060ef4b  5f                   pop edi
// 0060ef4c  5e                   pop esi
// 0060ef4d  c3                   ret 
// 0060ef4e  688c447900           push 0x79448c
// 0060ef53  56                   push esi
// 0060ef54  ff15e0e77700         call dword ptr [0x77e7e0]
// 0060ef5a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060ef5e  83e911               sub ecx, 0x11
// 0060ef61  83c408               add esp, 8
// 0060ef64  3bc1                 cmp eax, ecx
// 0060ef66  7602                 jbe 0x60ef6a
// 0060ef68  8bc1                 mov eax, ecx
// 0060ef6a  8b0d0c317c00         mov ecx, dword ptr [0x7c310c]
// 0060ef70  53                   push ebx
// 0060ef71  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0060ef75  890b                 mov dword ptr [ebx], ecx
// 0060ef77  8b1510317c00         mov edx, dword ptr [0x7c3110]
// 0060ef7d  895304               mov dword ptr [ebx + 4], edx
// 0060ef80  668b0d14317c00       mov cx, word ptr [0x7c3114]
// 0060ef87  66894b08             mov word ptr [ebx + 8], cx
// 0060ef8b  803c3000             cmp byte ptr [eax + esi], 0
// 0060ef8f  7425                 je 0x60efb6
// 0060ef91  50                   push eax
// 0060ef92  56                   push esi
// 0060ef93  53                   push ebx
// 0060ef94  ff15e4e77700         call dword ptr [0x77e7e4]
// 0060ef9a  8bfb                 mov edi, ebx
// 0060ef9c  83c40c               add esp, 0xc
// 0060ef9f  83c7ff               add edi, -1
// 0060efa2  8a4701               mov al, byte ptr [edi + 1]
// 0060efa5  83c701               add edi, 1
// 0060efa8  84c0                 test al, al
// 0060efaa  75f6                 jne 0x60efa2
// 0060efac  8b1518317c00         mov edx, dword ptr [0x7c3118]
// 0060efb2  8917                 mov dword ptr [edi], edx
// 0060efb4  eb2a                 jmp 0x60efe0
// 0060efb6  8bc6                 mov eax, esi
// 0060efb8  8a08                 mov cl, byte ptr [eax]
// 0060efba  83c001               add eax, 1
// 0060efbd  84c9                 test cl, cl
// 0060efbf  75f7                 jne 0x60efb8
// 0060efc1  8bfb                 mov edi, ebx
// 0060efc3  2bc6                 sub eax, esi
// 0060efc5  83c7ff               add edi, -1
// 0060efc8  8a4f01               mov cl, byte ptr [edi + 1]
// 0060efcb  83c701               add edi, 1
// 0060efce  84c9                 test cl, cl
// 0060efd0  75f6                 jne 0x60efc8
// 0060efd2  8bc8                 mov ecx, eax
// 0060efd4  c1e902               shr ecx, 2
// 0060efd7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0060efd9  8bc8                 mov ecx, eax
// 0060efdb  83e103               and ecx, 3
// 0060efde  f3a4                 rep movsb byte ptr es:[edi], byte ptr [esi]
// 0060efe0  83c3ff               add ebx, -1
// 0060efe3  8a4301               mov al, byte ptr [ebx + 1]
// 0060efe6  83c301               add ebx, 1
// 0060efe9  84c0                 test al, al
// 0060efeb  75f6                 jne 0x60efe3
// 0060efed  66a108317c00         mov ax, word ptr [0x7c3108]
// 0060eff3  668903               mov word ptr [ebx], ax
// 0060eff6  8a0d0a317c00         mov cl, byte ptr [0x7c310a]
// 0060effc  884b02               mov byte ptr [ebx + 2], cl
// 0060efff  5b                   pop ebx
// 0060f000  5f                   pop edi
// 0060f001  5e                   pop esi
// 0060f002  c3                   ret 
// copied from an identical function in another client (function _luaO_chunkid)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: lua-5.1-dll lobject.c