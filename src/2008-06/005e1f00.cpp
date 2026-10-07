// roc 2008-06 005e1f00  unit: RBX::Lighting  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1f00
//
// 005e1f00  6aff                 push -1
// 005e1f02  6890647d00           push 0x7d6490
// 005e1f07  64a100000000         mov eax, dword ptr fs:[0]
// 005e1f0d  50                   push eax
// 005e1f0e  64892500000000       mov dword ptr fs:[0], esp
// 005e1f15  83ec14               sub esp, 0x14
// 005e1f18  53                   push ebx
// 005e1f19  55                   push ebp
// 005e1f1a  56                   push esi
// 005e1f1b  8bf1                 mov esi, ecx
// 005e1f1d  57                   push edi
// 005e1f1e  56                   push esi
// 005e1f1f  8d4c2420             lea ecx, [esp + 0x20]
// 005e1f23  e83888f8ff           call 0x56a760
// 005e1f28  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 005e1f2c  33c0                 xor eax, eax
// 005e1f2e  8944242c             mov dword ptr [esp + 0x2c], eax
// 005e1f32  884c2413             mov byte ptr [esp + 0x13], cl
// 005e1f36  88442414             mov byte ptr [esp + 0x14], al
// 005e1f3a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e1f3e  8b36                 mov esi, dword ptr [esi]
// 005e1f40  8b7e58               mov edi, dword ptr [esi + 0x58]
// 005e1f43  83ec40               sub esp, 0x40
// 005e1f46  89642458             mov dword ptr [esp + 0x58], esp
// 005e1f4a  8bdc                 mov ebx, esp
// 005e1f4c  8d542454             lea edx, [esp + 0x54]
// 005e1f50  52                   push edx
// 005e1f51  8be8                 mov ebp, eax
// 005e1f53  8d442457             lea eax, [esp + 0x57]
// 005e1f57  50                   push eax
// 005e1f58  83ec1c               sub esp, 0x1c
// 005e1f5b  8bcc                 mov ecx, esp
// 005e1f5d  8964247c             mov dword ptr [esp + 0x7c], esp
// 005e1f61  51                   push ecx
// 005e1f62  8d4e08               lea ecx, [esi + 8]
// 005e1f65  c684249400000001     mov byte ptr [esp + 0x94], 1
// 005e1f6d  83c704               add edi, 4
// 005e1f70  e83bf4f8ff           call 0x5713b0
// 005e1f75  83ec1c               sub esp, 0x1c
// 005e1f78  8bd4                 mov edx, esp
// 005e1f7a  89a42498000000       mov dword ptr [esp + 0x98], esp
// 005e1f81  52                   push edx
// 005e1f82  8d4d08               lea ecx, [ebp + 8]
// 005e1f85  e826f4f8ff           call 0x5713b0
// 005e1f8a  8bcb                 mov ecx, ebx
// 005e1f8c  e80fe9eaff           call 0x4908a0
// 005e1f91  83ec40               sub esp, 0x40
// 005e1f94  89a42498000000       mov dword ptr [esp + 0x98], esp
// 005e1f9b  8bdc                 mov ebx, esp
// 005e1f9d  8d842494000000       lea eax, [esp + 0x94]
// 005e1fa4  50                   push eax
// 005e1fa5  8d8c2497000000       lea ecx, [esp + 0x97]
// 005e1fac  51                   push ecx
// 005e1fad  83ec1c               sub esp, 0x1c
// 005e1fb0  8bd4                 mov edx, esp
// 005e1fb2  89a424bc000000       mov dword ptr [esp + 0xbc], esp
// 005e1fb9  52                   push edx
// 005e1fba  8d4e08               lea ecx, [esi + 8]
// 005e1fbd  e8eef3f8ff           call 0x5713b0
// 005e1fc2  83ec1c               sub esp, 0x1c
// 005e1fc5  8bc4                 mov eax, esp
// 005e1fc7  89a424d8000000       mov dword ptr [esp + 0xd8], esp
// 005e1fce  8bcd                 mov ecx, ebp
// 005e1fd0  50                   push eax
// 005e1fd1  83c108               add ecx, 8
// 005e1fd4  e8a7f3f8ff           call 0x571380
// 005e1fd9  8bcb                 mov ecx, ebx
// 005e1fdb  e8c0e8eaff           call 0x4908a0
// 005e1fe0  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 005e1fe7  56                   push esi
// 005e1fe8  8bcf                 mov ecx, edi
// 005e1fea  e811feffff           call 0x5e1e00
// 005e1fef  807c241400           cmp byte ptr [esp + 0x14], 0
// 005e1ff4  7405                 je 0x5e1ffb
// 005e1ff6  c644241400           mov byte ptr [esp + 0x14], 0
// 005e1ffb  8d4c241c             lea ecx, [esp + 0x1c]
// 005e1fff  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005e2007  e84486f8ff           call 0x56a650
// 005e200c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e2010  5f                   pop edi
// 005e2011  8bc6                 mov eax, esi
// 005e2013  5e                   pop esi
// 005e2014  5d                   pop ebp
// 005e2015  64890d00000000       mov dword ptr fs:[0], ecx
// 005e201c  5b                   pop ebx
// 005e201d  83c420               add esp, 0x20
// 005e2020  c20800               ret 8
// library rbxgs/humanoid\FallingDown.cpp (function ??R?$signal1@X_NU?$last_value@X@boost@@HU?$less@H@std@@V?$function@$$A6AX_N@ZV?$allocator@X@std@@@2@@boost@@QAE?AUunusable@?$last_value@X@1@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
