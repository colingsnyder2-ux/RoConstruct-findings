// roc 2007-08 00535af0  unit: std::logic_error  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535af0
//
// 00535af0  83ec08               sub esp, 8
// 00535af3  53                   push ebx
// 00535af4  55                   push ebp
// 00535af5  8be9                 mov ebp, ecx
// 00535af7  8b5d00               mov ebx, dword ptr [ebp]
// 00535afa  85db                 test ebx, ebx
// 00535afc  8b4504               mov eax, dword ptr [ebp + 4]
// 00535aff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00535b03  56                   push esi
// 00535b04  57                   push edi
// 00535b05  89442414             mov dword ptr [esp + 0x14], eax
// 00535b09  7507                 jne 0x535b12
// 00535b0b  3d00000080           cmp eax, 0x80000000
// 00535b10  744f                 je 0x535b61
// 00535b12  83fbff               cmp ebx, -1
// 00535b15  7507                 jne 0x535b1e
// 00535b17  3dffffff7f           cmp eax, 0x7fffffff
// 00535b1c  7443                 je 0x535b61
// 00535b1e  83fbfe               cmp ebx, -2
// 00535b21  750b                 jne 0x535b2e
// 00535b23  3dffffff7f           cmp eax, 0x7fffffff
// 00535b28  0f8421010000         je 0x535c4f
// 00535b2e  8b31                 mov esi, dword ptr [ecx]
// 00535b30  85f6                 test esi, esi
// 00535b32  8b7904               mov edi, dword ptr [ecx + 4]
// 00535b35  7508                 jne 0x535b3f
// 00535b37  81ff00000080         cmp edi, 0x80000000
// 00535b3d  7422                 je 0x535b61
// 00535b3f  83feff               cmp esi, -1
// 00535b42  7508                 jne 0x535b4c
// 00535b44  81ffffffff7f         cmp edi, 0x7fffffff
// 00535b4a  7415                 je 0x535b61
// 00535b4c  83fefe               cmp esi, -2
// 00535b4f  0f85e3000000         jne 0x535c38
// 00535b55  81ffffffff7f         cmp edi, 0x7fffffff
// 00535b5b  0f85d7000000         jne 0x535c38
// 00535b61  83fbfe               cmp ebx, -2
// 00535b64  750b                 jne 0x535b71
// 00535b66  3dffffff7f           cmp eax, 0x7fffffff
// 00535b6b  0f84de000000         je 0x535c4f
// 00535b71  8b31                 mov esi, dword ptr [ecx]
// 00535b73  83fefe               cmp esi, -2
// 00535b76  8b7904               mov edi, dword ptr [ecx + 4]
// 00535b79  750c                 jne 0x535b87
// 00535b7b  81ffffffff7f         cmp edi, 0x7fffffff
// 00535b81  0f84c8000000         je 0x535c4f
// 00535b87  83fbff               cmp ebx, -1
// 00535b8a  7517                 jne 0x535ba3
// 00535b8c  3dffffff7f           cmp eax, 0x7fffffff
// 00535b91  7510                 jne 0x535ba3
// 00535b93  85f6                 test esi, esi
// 00535b95  750c                 jne 0x535ba3
// 00535b97  81ff00000080         cmp edi, 0x80000000
// 00535b9d  0f84ac000000         je 0x535c4f
// 00535ba3  85db                 test ebx, ebx
// 00535ba5  7518                 jne 0x535bbf
// 00535ba7  3d00000080           cmp eax, 0x80000000
// 00535bac  7511                 jne 0x535bbf
// 00535bae  83feff               cmp esi, -1
// 00535bb1  750c                 jne 0x535bbf
// 00535bb3  81ffffffff7f         cmp edi, 0x7fffffff
// 00535bb9  0f8490000000         je 0x535c4f
// 00535bbf  8bcd                 mov ecx, ebp
// 00535bc1  e84aeaffff           call 0x534610
// 00535bc6  84c0                 test al, al
// 00535bc8  7418                 je 0x535be2
// 00535bca  8b5504               mov edx, dword ptr [ebp + 4]
// 00535bcd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00535bd1  5f                   pop edi
// 00535bd2  5e                   pop esi
// 00535bd3  8bcb                 mov ecx, ebx
// 00535bd5  5d                   pop ebp
// 00535bd6  8908                 mov dword ptr [eax], ecx
// 00535bd8  895004               mov dword ptr [eax + 4], edx
// 00535bdb  5b                   pop ebx
// 00535bdc  83c408               add esp, 8
// 00535bdf  c20800               ret 8
// 00535be2  57                   push edi
// 00535be3  56                   push esi
// 00535be4  e807eaffff           call 0x5345f0
// 00535be9  83c408               add esp, 8
// 00535bec  84c0                 test al, al
// 00535bee  741b                 je 0x535c0b
// 00535bf0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00535bf4  5f                   pop edi
// 00535bf5  5e                   pop esi
// 00535bf6  5d                   pop ebp
// 00535bf7  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 00535bfd  c74004ffffff7f       mov dword ptr [eax + 4], 0x7fffffff
// 00535c04  5b                   pop ebx
// 00535c05  83c408               add esp, 8
// 00535c08  c20800               ret 8
// 00535c0b  57                   push edi
// 00535c0c  56                   push esi
// 00535c0d  e8bee9ffff           call 0x5345d0
// 00535c12  83c408               add esp, 8
// 00535c15  84c0                 test al, al
// 00535c17  741b                 je 0x535c34
// 00535c19  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00535c1d  5f                   pop edi
// 00535c1e  5e                   pop esi
// 00535c1f  5d                   pop ebp
// 00535c20  c70000000000         mov dword ptr [eax], 0
// 00535c26  c7400400000080       mov dword ptr [eax + 4], 0x80000000
// 00535c2d  5b                   pop ebx
// 00535c2e  83c408               add esp, 8
// 00535c31  c20800               ret 8
// 00535c34  8b442414             mov eax, dword ptr [esp + 0x14]
// 00535c38  03f3                 add esi, ebx
// 00535c3a  13f8                 adc edi, eax
// 00535c3c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00535c40  897804               mov dword ptr [eax + 4], edi
// 00535c43  5f                   pop edi
// 00535c44  8930                 mov dword ptr [eax], esi
// 00535c46  5e                   pop esi
// 00535c47  5d                   pop ebp
// 00535c48  5b                   pop ebx
// 00535c49  83c408               add esp, 8
// 00535c4c  c20800               ret 8
// 00535c4f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00535c53  5f                   pop edi
// 00535c54  5e                   pop esi
// 00535c55  5d                   pop ebp
// 00535c56  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 00535c5c  c74004ffffff7f       mov dword ptr [eax + 4], 0x7fffffff
// 00535c63  5b                   pop ebx
// 00535c64  83c408               add esp, 8
// 00535c67  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ??$?H_J@?$int_adapter@_J@date_time@boost@@QBE?AV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
