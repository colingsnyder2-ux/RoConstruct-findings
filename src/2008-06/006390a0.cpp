// roc 2008-06 006390a0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006390a0
//
// 006390a0  6aff                 push -1
// 006390a2  6870e07c00           push 0x7ce070
// 006390a7  64a100000000         mov eax, dword ptr fs:[0]
// 006390ad  50                   push eax
// 006390ae  64892500000000       mov dword ptr fs:[0], esp
// 006390b5  83ec14               sub esp, 0x14
// 006390b8  53                   push ebx
// 006390b9  55                   push ebp
// 006390ba  56                   push esi
// 006390bb  8bf1                 mov esi, ecx
// 006390bd  57                   push edi
// 006390be  56                   push esi
// 006390bf  8d4c2420             lea ecx, [esp + 0x20]
// 006390c3  e89816f3ff           call 0x56a760
// 006390c8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006390cc  33c0                 xor eax, eax
// 006390ce  8944242c             mov dword ptr [esp + 0x2c], eax
// 006390d2  894c2414             mov dword ptr [esp + 0x14], ecx
// 006390d6  88442410             mov byte ptr [esp + 0x10], al
// 006390da  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006390de  8b36                 mov esi, dword ptr [esi]
// 006390e0  8b7e58               mov edi, dword ptr [esi + 0x58]
// 006390e3  83ec40               sub esp, 0x40
// 006390e6  89642458             mov dword ptr [esp + 0x58], esp
// 006390ea  8bdc                 mov ebx, esp
// 006390ec  8d542450             lea edx, [esp + 0x50]
// 006390f0  52                   push edx
// 006390f1  8be8                 mov ebp, eax
// 006390f3  8d442458             lea eax, [esp + 0x58]
// 006390f7  50                   push eax
// 006390f8  83ec1c               sub esp, 0x1c
// 006390fb  8bcc                 mov ecx, esp
// 006390fd  8964247c             mov dword ptr [esp + 0x7c], esp
// 00639101  51                   push ecx
// 00639102  8d4e08               lea ecx, [esi + 8]
// 00639105  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0063910d  83c704               add edi, 4
// 00639110  e89b82f3ff           call 0x5713b0
// 00639115  83ec1c               sub esp, 0x1c
// 00639118  8bd4                 mov edx, esp
// 0063911a  89a42498000000       mov dword ptr [esp + 0x98], esp
// 00639121  52                   push edx
// 00639122  8d4d08               lea ecx, [ebp + 8]
// 00639125  e88682f3ff           call 0x5713b0
// 0063912a  8bcb                 mov ecx, ebx
// 0063912c  e86f77e5ff           call 0x4908a0
// 00639131  83ec40               sub esp, 0x40
// 00639134  89a42498000000       mov dword ptr [esp + 0x98], esp
// 0063913b  8bdc                 mov ebx, esp
// 0063913d  8d842490000000       lea eax, [esp + 0x90]
// 00639144  50                   push eax
// 00639145  8d8c2498000000       lea ecx, [esp + 0x98]
// 0063914c  51                   push ecx
// 0063914d  83ec1c               sub esp, 0x1c
// 00639150  8bd4                 mov edx, esp
// 00639152  89a424bc000000       mov dword ptr [esp + 0xbc], esp
// 00639159  52                   push edx
// 0063915a  8d4e08               lea ecx, [esi + 8]
// 0063915d  e84e82f3ff           call 0x5713b0
// 00639162  83ec1c               sub esp, 0x1c
// 00639165  8bc4                 mov eax, esp
// 00639167  89a424d8000000       mov dword ptr [esp + 0xd8], esp
// 0063916e  8bcd                 mov ecx, ebp
// 00639170  50                   push eax
// 00639171  83c108               add ecx, 8
// 00639174  e80782f3ff           call 0x571380
// 00639179  8bcb                 mov ecx, ebx
// 0063917b  e82077e5ff           call 0x4908a0
// 00639180  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 00639187  56                   push esi
// 00639188  8bcf                 mov ecx, edi
// 0063918a  e86143ddff           call 0x40d4f0
// 0063918f  807c241000           cmp byte ptr [esp + 0x10], 0
// 00639194  7405                 je 0x63919b
// 00639196  c644241000           mov byte ptr [esp + 0x10], 0
// 0063919b  8d4c241c             lea ecx, [esp + 0x1c]
// 0063919f  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 006391a7  e8a414f3ff           call 0x56a650
// 006391ac  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006391b0  5f                   pop edi
// 006391b1  8bc6                 mov eax, esi
// 006391b3  5e                   pop esi
// 006391b4  5d                   pop ebp
// 006391b5  64890d00000000       mov dword ptr fs:[0], ecx
// 006391bc  5b                   pop ebx
// 006391bd  83c420               add esp, 0x20
// 006391c0  c20800               ret 8
// library rbxgs/script\Script.cpp (function ??R?$signal1@XPBVPropertyDescriptor@Reflection@RBX@@U?$last_value@X@boost@@HU?$less@H@std@@V?$function@$$A6AXPBVPropertyDescriptor@Reflection@RBX@@@ZV?$allocator@X@std@@@5@@boost@@QAE?AUunusable@?$last_value@X@1@PBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
