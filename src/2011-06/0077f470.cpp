// roc 2011-06 0077f470  unit: lua_exception  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077f470
//
// 0077f470  53                   push ebx
// 0077f471  56                   push esi
// 0077f472  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0077f476  57                   push edi
// 0077f477  6a05                 push 5
// 0077f479  6a01                 push 1
// 0077f47b  56                   push esi
// 0077f47c  e88f4cfeff           call 0x764110
// 0077f481  6a01                 push 1
// 0077f483  56                   push esi
// 0077f484  e84733feff           call 0x7627d0
// 0077f489  6a06                 push 6
// 0077f48b  6a02                 push 2
// 0077f48d  56                   push esi
// 0077f48e  8bd8                 mov ebx, eax
// 0077f490  e87b4cfeff           call 0x764110
// 0077f495  bf01000000           mov edi, 1
// 0077f49a  83c420               add esp, 0x20
// 0077f49d  3bdf                 cmp ebx, edi
// 0077f49f  7c41                 jl 0x77f4e2
// 0077f4a1  6a02                 push 2
// 0077f4a3  56                   push esi
// 0077f4a4  e87730feff           call 0x762520
// 0077f4a9  57                   push edi
// 0077f4aa  56                   push esi
// 0077f4ab  e89034feff           call 0x762940
// 0077f4b0  57                   push edi
// 0077f4b1  6a01                 push 1
// 0077f4b3  56                   push esi
// 0077f4b4  e89737feff           call 0x762c50
// 0077f4b9  6a01                 push 1
// 0077f4bb  6a02                 push 2
// 0077f4bd  56                   push esi
// 0077f4be  e8bd3bfeff           call 0x763080
// 0077f4c3  6aff                 push -1
// 0077f4c5  56                   push esi
// 0077f4c6  e88530feff           call 0x762550
// 0077f4cb  83c430               add esp, 0x30
// 0077f4ce  85c0                 test eax, eax
// 0077f4d0  7516                 jne 0x77f4e8
// 0077f4d2  6afe                 push -2
// 0077f4d4  56                   push esi
// 0077f4d5  e8962efeff           call 0x762370
// 0077f4da  47                   inc edi
// 0077f4db  83c408               add esp, 8
// 0077f4de  3bfb                 cmp edi, ebx
// 0077f4e0  7ebf                 jle 0x77f4a1
// 0077f4e2  5f                   pop edi
// 0077f4e3  5e                   pop esi
// 0077f4e4  33c0                 xor eax, eax
// 0077f4e6  5b                   pop ebx
// 0077f4e7  c3                   ret 
// 0077f4e8  5f                   pop edi
// 0077f4e9  5e                   pop esi
// 0077f4ea  b801000000           mov eax, 1
// 0077f4ef  5b                   pop ebx
// 0077f4f0  c3                   ret 
// library lua-5.1.4/ltablib.c (function _foreachi)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
