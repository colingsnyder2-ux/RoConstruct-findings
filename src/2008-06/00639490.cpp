// roc 2008-06 00639490  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639490
//
// 00639490  6aff                 push -1
// 00639492  6870a47d00           push 0x7da470
// 00639497  64a100000000         mov eax, dword ptr fs:[0]
// 0063949d  50                   push eax
// 0063949e  64892500000000       mov dword ptr fs:[0], esp
// 006394a5  83ec20               sub esp, 0x20
// 006394a8  53                   push ebx
// 006394a9  55                   push ebp
// 006394aa  56                   push esi
// 006394ab  8bf1                 mov esi, ecx
// 006394ad  57                   push edi
// 006394ae  56                   push esi
// 006394af  8d4c2420             lea ecx, [esp + 0x20]
// 006394b3  e8a812f3ff           call 0x56a760
// 006394b8  d9442444             fld dword ptr [esp + 0x44]
// 006394bc  d95c2424             fstp dword ptr [esp + 0x24]
// 006394c0  33c0                 xor eax, eax
// 006394c2  d9442448             fld dword ptr [esp + 0x48]
// 006394c6  89442438             mov dword ptr [esp + 0x38], eax
// 006394ca  d95c2428             fstp dword ptr [esp + 0x28]
// 006394ce  88442410             mov byte ptr [esp + 0x10], al
// 006394d2  d944244c             fld dword ptr [esp + 0x4c]
// 006394d6  d95c242c             fstp dword ptr [esp + 0x2c]
// 006394da  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006394de  8b36                 mov esi, dword ptr [esi]
// 006394e0  8b7e58               mov edi, dword ptr [esi + 0x58]
// 006394e3  83ec40               sub esp, 0x40
// 006394e6  89642458             mov dword ptr [esp + 0x58], esp
// 006394ea  8bdc                 mov ebx, esp
// 006394ec  8be8                 mov ebp, eax
// 006394ee  8d442450             lea eax, [esp + 0x50]
// 006394f2  50                   push eax
// 006394f3  8d4c2468             lea ecx, [esp + 0x68]
// 006394f7  51                   push ecx
// 006394f8  83ec1c               sub esp, 0x1c
// 006394fb  8bd4                 mov edx, esp
// 006394fd  8964247c             mov dword ptr [esp + 0x7c], esp
// 00639501  52                   push edx
// 00639502  8d4e08               lea ecx, [esi + 8]
// 00639505  c68424a000000001     mov byte ptr [esp + 0xa0], 1
// 0063950d  83c704               add edi, 4
// 00639510  e89b7ef3ff           call 0x5713b0
// 00639515  83ec1c               sub esp, 0x1c
// 00639518  8bc4                 mov eax, esp
// 0063951a  89a42498000000       mov dword ptr [esp + 0x98], esp
// 00639521  50                   push eax
// 00639522  8d4d08               lea ecx, [ebp + 8]
// 00639525  e8867ef3ff           call 0x5713b0
// 0063952a  8bcb                 mov ecx, ebx
// 0063952c  e86f73e5ff           call 0x4908a0
// 00639531  83ec40               sub esp, 0x40
// 00639534  89a42498000000       mov dword ptr [esp + 0x98], esp
// 0063953b  8bdc                 mov ebx, esp
// 0063953d  8d8c2490000000       lea ecx, [esp + 0x90]
// 00639544  51                   push ecx
// 00639545  8d9424a8000000       lea edx, [esp + 0xa8]
// 0063954c  52                   push edx
// 0063954d  83ec1c               sub esp, 0x1c
// 00639550  8bc4                 mov eax, esp
// 00639552  89a424bc000000       mov dword ptr [esp + 0xbc], esp
// 00639559  50                   push eax
// 0063955a  8d4e08               lea ecx, [esi + 8]
// 0063955d  e84e7ef3ff           call 0x5713b0
// 00639562  83ec1c               sub esp, 0x1c
// 00639565  8bcc                 mov ecx, esp
// 00639567  89a424d8000000       mov dword ptr [esp + 0xd8], esp
// 0063956e  51                   push ecx
// 0063956f  8bcd                 mov ecx, ebp
// 00639571  83c108               add ecx, 8
// 00639574  e8077ef3ff           call 0x571380
// 00639579  8bcb                 mov ecx, ebx
// 0063957b  e82073e5ff           call 0x4908a0
// 00639580  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 00639587  56                   push esi
// 00639588  8bcf                 mov ecx, edi
// 0063958a  e801f7ffff           call 0x638c90
// 0063958f  807c241000           cmp byte ptr [esp + 0x10], 0
// 00639594  7405                 je 0x63959b
// 00639596  c644241000           mov byte ptr [esp + 0x10], 0
// 0063959b  8d4c241c             lea ecx, [esp + 0x1c]
// 0063959f  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 006395a7  e8a410f3ff           call 0x56a650
// 006395ac  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006395b0  5f                   pop edi
// 006395b1  8bc6                 mov eax, esi
// 006395b3  5e                   pop esi
// 006395b4  5d                   pop ebp
// 006395b5  64890d00000000       mov dword ptr fs:[0], ecx
// 006395bc  5b                   pop ebx
// 006395bd  83c42c               add esp, 0x2c
// 006395c0  c21000               ret 0x10
// library rbxgs/roc_unit_659050ba9a7bf80e.cpp (function ??R?$signal1@XVVector3@G3D@@U?$last_value@X@boost@@HU?$less@H@std@@V?$function1@XVVector3@G3D@@V?$allocator@Vfunction_base@boost@@@std@@@4@@boost@@QBE?AUunusable@?$last_value@X@1@VVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_659050ba9a7bf80e.cpp
