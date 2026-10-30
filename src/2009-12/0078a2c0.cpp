// roc 2009-12 0078a2c0  unit: RBX::UniversalTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078a2c0
//
// 0078a2c0  53                   push ebx
// 0078a2c1  ff1590b89800         call dword ptr [0x98b890]
// 0078a2c7  8b00                 mov eax, dword ptr [eax]
// 0078a2c9  50                   push eax
// 0078a2ca  ff1514b99800         call dword ptr [0x98b914]
// 0078a2d0  6a00                 push 0
// 0078a2d2  57                   push edi
// 0078a2d3  56                   push esi
// 0078a2d4  8bd8                 mov ebx, eax
// 0078a2d6  e8c5e8ffff           call 0x788ba0
// 0078a2db  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0078a2df  53                   push ebx
// 0078a2e0  40                   inc eax
// 0078a2e1  50                   push eax
// 0078a2e2  51                   push ecx
// 0078a2e3  68149d9e00           push 0x9e9d14
// 0078a2e8  56                   push esi
// 0078a2e9  e892ebffff           call 0x788e80
// 0078a2ee  57                   push edi
// 0078a2ef  56                   push esi
// 0078a2f0  e80be5ffff           call 0x788800
// 0078a2f5  83c42c               add esp, 0x2c
// 0078a2f8  b806000000           mov eax, 6
// 0078a2fd  5b                   pop ebx
// 0078a2fe  c3                   ret 
// copied from an identical function in another client (function _errfile)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lauxlib.c