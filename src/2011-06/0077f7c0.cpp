// roc 2011-06 0077f7c0  unit: lua_exception  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077f7c0
//
// 0077f7c0  81ec10020000         sub esp, 0x210
// 0077f7c6  53                   push ebx
// 0077f7c7  55                   push ebp
// 0077f7c8  56                   push esi
// 0077f7c9  8bb42420020000       mov esi, dword ptr [esp + 0x220]
// 0077f7d0  57                   push edi
// 0077f7d1  8d442410             lea eax, [esp + 0x10]
// 0077f7d5  50                   push eax
// 0077f7d6  68cabea500           push 0xa5beca
// 0077f7db  6a02                 push 2
// 0077f7dd  56                   push esi
// 0077f7de  e80d4afeff           call 0x7641f0
// 0077f7e3  6a05                 push 5
// 0077f7e5  6a01                 push 1
// 0077f7e7  56                   push esi
// 0077f7e8  8be8                 mov ebp, eax
// 0077f7ea  e82149feff           call 0x764110
// 0077f7ef  6a01                 push 1
// 0077f7f1  6a03                 push 3
// 0077f7f3  56                   push esi
// 0077f7f4  e8474bfeff           call 0x764340
// 0077f7f9  6a04                 push 4
// 0077f7fb  56                   push esi
// 0077f7fc  8bf8                 mov edi, eax
// 0077f7fe  e84d2dfeff           call 0x762550
// 0077f803  83c430               add esp, 0x30
// 0077f806  85c0                 test eax, eax
// 0077f808  7f0a                 jg 0x77f814
// 0077f80a  6a01                 push 1
// 0077f80c  56                   push esi
// 0077f80d  e8be2ffeff           call 0x7627d0
// 0077f812  eb08                 jmp 0x77f81c
// 0077f814  6a04                 push 4
// 0077f816  56                   push esi
// 0077f817  e8b44afeff           call 0x7642d0
// 0077f81c  83c408               add esp, 8
// 0077f81f  8d4c2414             lea ecx, [esp + 0x14]
// 0077f823  51                   push ecx
// 0077f824  56                   push esi
// 0077f825  8bd8                 mov ebx, eax
// 0077f827  e82443feff           call 0x763b50
// 0077f82c  83c408               add esp, 8
// 0077f82f  3bfb                 cmp edi, ebx
// 0077f831  7d5c                 jge 0x77f88f
// 0077f833  57                   push edi
// 0077f834  6a01                 push 1
// 0077f836  56                   push esi
// 0077f837  e81434feff           call 0x762c50
// 0077f83c  6aff                 push -1
// 0077f83e  56                   push esi
// 0077f83f  e8bc2dfeff           call 0x762600
// 0077f844  83c414               add esp, 0x14
// 0077f847  85c0                 test eax, eax
// 0077f849  7522                 jne 0x77f86d
// 0077f84b  57                   push edi
// 0077f84c  6aff                 push -1
// 0077f84e  56                   push esi
// 0077f84f  e8fc2cfeff           call 0x762550
// 0077f854  50                   push eax
// 0077f855  56                   push esi
// 0077f856  e8152dfeff           call 0x762570
// 0077f85b  83c410               add esp, 0x10
// 0077f85e  50                   push eax
// 0077f85f  68a479ab00           push 0xab79a4
// 0077f864  56                   push esi
// 0077f865  e8a63efeff           call 0x763710
// 0077f86a  83c410               add esp, 0x10
// 0077f86d  8d542414             lea edx, [esp + 0x14]
// 0077f871  52                   push edx
// 0077f872  e85942feff           call 0x763ad0
// 0077f877  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077f87b  50                   push eax
// 0077f87c  8d4c241c             lea ecx, [esp + 0x1c]
// 0077f880  55                   push ebp
// 0077f881  51                   push ecx
// 0077f882  e8a941feff           call 0x763a30
// 0077f887  47                   inc edi
// 0077f888  83c410               add esp, 0x10
// 0077f88b  3bfb                 cmp edi, ebx
// 0077f88d  7ca4                 jl 0x77f833
// 0077f88f  7547                 jne 0x77f8d8
// 0077f891  57                   push edi
// 0077f892  6a01                 push 1
// 0077f894  56                   push esi
// 0077f895  e8b633feff           call 0x762c50
// 0077f89a  6aff                 push -1
// 0077f89c  56                   push esi
// 0077f89d  e85e2dfeff           call 0x762600
// 0077f8a2  83c414               add esp, 0x14
// 0077f8a5  85c0                 test eax, eax
// 0077f8a7  7522                 jne 0x77f8cb
// 0077f8a9  57                   push edi
// 0077f8aa  6aff                 push -1
// 0077f8ac  56                   push esi
// 0077f8ad  e89e2cfeff           call 0x762550
// 0077f8b2  50                   push eax
// 0077f8b3  56                   push esi
// 0077f8b4  e8b72cfeff           call 0x762570
// 0077f8b9  83c410               add esp, 0x10
// 0077f8bc  50                   push eax
// 0077f8bd  68a479ab00           push 0xab79a4
// 0077f8c2  56                   push esi
// 0077f8c3  e8483efeff           call 0x763710
// 0077f8c8  83c410               add esp, 0x10
// 0077f8cb  8d542414             lea edx, [esp + 0x14]
// 0077f8cf  52                   push edx
// 0077f8d0  e8fb41feff           call 0x763ad0
// 0077f8d5  83c404               add esp, 4
// 0077f8d8  8d442414             lea eax, [esp + 0x14]
// 0077f8dc  50                   push eax
// 0077f8dd  e8ae41feff           call 0x763a90
// 0077f8e2  83c404               add esp, 4
// 0077f8e5  5f                   pop edi
// 0077f8e6  5e                   pop esi
// 0077f8e7  5d                   pop ebp
// 0077f8e8  b801000000           mov eax, 1
// 0077f8ed  5b                   pop ebx
// 0077f8ee  81c410020000         add esp, 0x210
// 0077f8f4  c3                   ret 
// library lua-5.1.4/ltablib.c (function _tconcat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
