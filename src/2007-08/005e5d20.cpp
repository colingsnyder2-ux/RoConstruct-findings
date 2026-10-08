// roc 2007-08 005e5d20  unit: RBX::NewNullTool  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5d20
//
// 005e5d20  83ec0c               sub esp, 0xc
// 005e5d23  d9ee                 fldz 
// 005e5d25  53                   push ebx
// 005e5d26  56                   push esi
// 005e5d27  d9542408             fst dword ptr [esp + 8]
// 005e5d2b  8bf1                 mov esi, ecx
// 005e5d2d  d954240c             fst dword ptr [esp + 0xc]
// 005e5d31  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e5d35  d95c2410             fstp dword ptr [esp + 0x10]
// 005e5d39  8d442408             lea eax, [esp + 8]
// 005e5d3d  50                   push eax
// 005e5d3e  51                   push ecx
// 005e5d3f  8bce                 mov ecx, esi
// 005e5d41  e8cae1ffff           call 0x5e3f10
// 005e5d46  8bd8                 mov ebx, eax
// 005e5d48  85db                 test ebx, ebx
// 005e5d4a  7454                 je 0x5e5da0
// 005e5d4c  8d542408             lea edx, [esp + 8]
// 005e5d50  52                   push edx
// 005e5d51  8bce                 mov ecx, esi
// 005e5d53  e8d8daffff           call 0x5e3830
// 005e5d58  84c0                 test al, al
// 005e5d5a  7444                 je 0x5e5da0
// 005e5d5c  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e5d5f  57                   push edi
// 005e5d60  50                   push eax
// 005e5d61  e8dafaeaff           call 0x495840
// 005e5d66  8bf8                 mov edi, eax
// 005e5d68  83c404               add esp, 4
// 005e5d6b  85ff                 test edi, edi
// 005e5d6d  7426                 je 0x5e5d95
// 005e5d6f  53                   push ebx
// 005e5d70  8bcf                 mov ecx, edi
// 005e5d72  e84985f5ff           call 0x53e2c0
// 005e5d77  84c0                 test al, al
// 005e5d79  751a                 jne 0x5e5d95
// 005e5d7b  57                   push edi
// 005e5d7c  e82ff9fbff           call 0x5a56b0
// 005e5d81  83c404               add esp, 4
// 005e5d84  85c0                 test eax, eax
// 005e5d86  740d                 je 0x5e5d95
// 005e5d88  53                   push ebx
// 005e5d89  8d4c2410             lea ecx, [esp + 0x10]
// 005e5d8d  51                   push ecx
// 005e5d8e  8bc8                 mov ecx, eax
// 005e5d90  e85b25fcff           call 0x5a82f0
// 005e5d95  5f                   pop edi
// 005e5d96  8bc6                 mov eax, esi
// 005e5d98  5e                   pop esi
// 005e5d99  5b                   pop ebx
// 005e5d9a  83c40c               add esp, 0xc
// 005e5d9d  c20400               ret 4
// 005e5da0  8bc6                 mov eax, esi
// 005e5da2  5e                   pop esi
// 005e5da3  5b                   pop ebx
// 005e5da4  83c40c               add esp, 0xc
// 005e5da7  c20400               ret 4
// library rbxgs/tool\NullTool.cpp (function ?onMouseDown@NewNullTool@RBX@@EAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/NullTool.cpp
