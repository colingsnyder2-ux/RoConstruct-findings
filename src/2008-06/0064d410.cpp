// roc 2008-06 0064d410  unit: RBX::SimJobStage  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064d410
//
// 0064d410  83ec18               sub esp, 0x18
// 0064d413  53                   push ebx
// 0064d414  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0064d418  55                   push ebp
// 0064d419  56                   push esi
// 0064d41a  8bcb                 mov ecx, ebx
// 0064d41c  e82fa6f9ff           call 0x5e7a50
// 0064d421  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0064d425  8bcd                 mov ecx, ebp
// 0064d427  8bf0                 mov esi, eax
// 0064d429  e822a6f9ff           call 0x5e7a50
// 0064d42e  d90530c48100         fld dword ptr [0x81c430]
// 0064d434  51                   push ecx
// 0064d435  d91c24               fstp dword ptr [esp]
// 0064d438  50                   push eax
// 0064d439  8bce                 mov ecx, esi
// 0064d43b  e81023fcff           call 0x60f750
// 0064d440  84c0                 test al, al
// 0064d442  7409                 je 0x64d44d
// 0064d444  5e                   pop esi
// 0064d445  5d                   pop ebp
// 0064d446  33c0                 xor eax, eax
// 0064d448  5b                   pop ebx
// 0064d449  83c418               add esp, 0x18
// 0064d44c  c3                   ret 
// 0064d44d  57                   push edi
// 0064d44e  8bcb                 mov ecx, ebx
// 0064d450  e86baef9ff           call 0x5e82c0
// 0064d455  8bf8                 mov edi, eax
// 0064d457  8bcd                 mov ecx, ebp
// 0064d459  897c2410             mov dword ptr [esp + 0x10], edi
// 0064d45d  e85eaef9ff           call 0x5e82c0
// 0064d462  89442418             mov dword ptr [esp + 0x18], eax
// 0064d466  33f6                 xor esi, esi
// 0064d468  eb0a                 jmp 0x64d474
// 0064d46a  8d9b00000000         lea ebx, [ebx]
// 0064d470  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064d474  b856555555           mov eax, 0x55555556
// 0064d479  f7ee                 imul esi
// 0064d47b  8bc2                 mov eax, edx
// 0064d47d  c1e81f               shr eax, 0x1f
// 0064d480  03c2                 add eax, edx
// 0064d482  8d0c40               lea ecx, [eax + eax*2]
// 0064d485  8bd1                 mov edx, ecx
// 0064d487  8bce                 mov ecx, esi
// 0064d489  2bca                 sub ecx, edx
// 0064d48b  03c0                 add eax, eax
// 0064d48d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064d491  d9048f               fld dword ptr [edi + ecx*4]
// 0064d494  52                   push edx
// 0064d495  d9448f0c             fld dword ptr [edi + ecx*4 + 0xc]
// 0064d499  d9448f18             fld dword ptr [edi + ecx*4 + 0x18]
// 0064d49d  b901000000           mov ecx, 1
// 0064d4a2  2bc8                 sub ecx, eax
// 0064d4a4  894c2418             mov dword ptr [esp + 0x18], ecx
// 0064d4a8  8d442420             lea eax, [esp + 0x20]
// 0064d4ac  db442418             fild dword ptr [esp + 0x18]
// 0064d4b0  50                   push eax
// 0064d4b1  d9c0                 fld st(0)
// 0064d4b3  decc                 fmulp st(4)
// 0064d4b5  d9c0                 fld st(0)
// 0064d4b7  decb                 fmulp st(3)
// 0064d4b9  dec9                 fmulp st(1)
// 0064d4bb  d9ca                 fxch st(2)
// 0064d4bd  d9e0                 fchs 
// 0064d4bf  d95c2424             fstp dword ptr [esp + 0x24]
// 0064d4c3  d9e0                 fchs 
// 0064d4c5  d95c2428             fstp dword ptr [esp + 0x28]
// 0064d4c9  d9e0                 fchs 
// 0064d4cb  d95c242c             fstp dword ptr [esp + 0x2c]
// 0064d4cf  e88c10f9ff           call 0x5de560
// 0064d4d4  8bf8                 mov edi, eax
// 0064d4d6  57                   push edi
// 0064d4d7  56                   push esi
// 0064d4d8  55                   push ebp
// 0064d4d9  53                   push ebx
// 0064d4da  e8818affff           call 0x645f60
// 0064d4df  83c418               add esp, 0x18
// 0064d4e2  85c0                 test eax, eax
// 0064d4e4  753a                 jne 0x64d520
// 0064d4e6  57                   push edi
// 0064d4e7  56                   push esi
// 0064d4e8  55                   push ebp
// 0064d4e9  53                   push ebx
// 0064d4ea  e831c90100           call 0x669e20
// 0064d4ef  83c410               add esp, 0x10
// 0064d4f2  85c0                 test eax, eax
// 0064d4f4  752a                 jne 0x64d520
// 0064d4f6  57                   push edi
// 0064d4f7  56                   push esi
// 0064d4f8  55                   push ebp
// 0064d4f9  53                   push ebx
// 0064d4fa  e831c80100           call 0x669d30
// 0064d4ff  83c410               add esp, 0x10
// 0064d502  85c0                 test eax, eax
// 0064d504  751a                 jne 0x64d520
// 0064d506  57                   push edi
// 0064d507  56                   push esi
// 0064d508  55                   push ebp
// 0064d509  53                   push ebx
// 0064d50a  e8519affff           call 0x646f60
// 0064d50f  83c410               add esp, 0x10
// 0064d512  85c0                 test eax, eax
// 0064d514  750a                 jne 0x64d520
// 0064d516  46                   inc esi
// 0064d517  83fe06               cmp esi, 6
// 0064d51a  0f8c50ffffff         jl 0x64d470
// 0064d520  5f                   pop edi
// 0064d521  5e                   pop esi
// 0064d522  5d                   pop ebp
// 0064d523  5b                   pop ebx
// 0064d524  83c418               add esp, 0x18
// 0064d527  c3                   ret 
// library rbxgs-dll/v8world\JointBuilder.cpp (function ?canJoin@JointBuilder@RBX@@SAPAVJoint@2@PAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8world/JointBuilder.cpp
