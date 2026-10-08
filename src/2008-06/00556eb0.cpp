// roc 2008-06 00556eb0  unit: RBX::VRunService::?$BoundFuncDesc  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00556eb0
//
// 00556eb0  6aff                 push -1
// 00556eb2  6870e07c00           push 0x7ce070
// 00556eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00556ebd  50                   push eax
// 00556ebe  64892500000000       mov dword ptr fs:[0], esp
// 00556ec5  83ec14               sub esp, 0x14
// 00556ec8  53                   push ebx
// 00556ec9  55                   push ebp
// 00556eca  56                   push esi
// 00556ecb  8bf1                 mov esi, ecx
// 00556ecd  57                   push edi
// 00556ece  56                   push esi
// 00556ecf  8d4c2420             lea ecx, [esp + 0x20]
// 00556ed3  e888380100           call 0x56a760
// 00556ed8  d9442438             fld dword ptr [esp + 0x38]
// 00556edc  d95c2414             fstp dword ptr [esp + 0x14]
// 00556ee0  33c0                 xor eax, eax
// 00556ee2  d944243c             fld dword ptr [esp + 0x3c]
// 00556ee6  8944242c             mov dword ptr [esp + 0x2c], eax
// 00556eea  d95c2418             fstp dword ptr [esp + 0x18]
// 00556eee  88442410             mov byte ptr [esp + 0x10], al
// 00556ef2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00556ef6  8b36                 mov esi, dword ptr [esi]
// 00556ef8  8b7e58               mov edi, dword ptr [esi + 0x58]
// 00556efb  83ec40               sub esp, 0x40
// 00556efe  8964247c             mov dword ptr [esp + 0x7c], esp
// 00556f02  8bdc                 mov ebx, esp
// 00556f04  8be8                 mov ebp, eax
// 00556f06  8d442450             lea eax, [esp + 0x50]
// 00556f0a  50                   push eax
// 00556f0b  8d4c2458             lea ecx, [esp + 0x58]
// 00556f0f  51                   push ecx
// 00556f10  83ec1c               sub esp, 0x1c
// 00556f13  8bd4                 mov edx, esp
// 00556f15  89a424a0000000       mov dword ptr [esp + 0xa0], esp
// 00556f1c  52                   push edx
// 00556f1d  8d4e08               lea ecx, [esi + 8]
// 00556f20  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00556f28  83c704               add edi, 4
// 00556f2b  e880a40100           call 0x5713b0
// 00556f30  83ec1c               sub esp, 0x1c
// 00556f33  8bc4                 mov eax, esp
// 00556f35  89a424bc000000       mov dword ptr [esp + 0xbc], esp
// 00556f3c  50                   push eax
// 00556f3d  8d4d08               lea ecx, [ebp + 8]
// 00556f40  e86ba40100           call 0x5713b0
// 00556f45  8bcb                 mov ecx, ebx
// 00556f47  e85499f3ff           call 0x4908a0
// 00556f4c  83ec40               sub esp, 0x40
// 00556f4f  89a424bc000000       mov dword ptr [esp + 0xbc], esp
// 00556f56  8bdc                 mov ebx, esp
// 00556f58  8d8c2490000000       lea ecx, [esp + 0x90]
// 00556f5f  51                   push ecx
// 00556f60  8d942498000000       lea edx, [esp + 0x98]
// 00556f67  52                   push edx
// 00556f68  83ec1c               sub esp, 0x1c
// 00556f6b  8bc4                 mov eax, esp
// 00556f6d  89a424e0000000       mov dword ptr [esp + 0xe0], esp
// 00556f74  50                   push eax
// 00556f75  8d4e08               lea ecx, [esi + 8]
// 00556f78  e833a40100           call 0x5713b0
// 00556f7d  83ec1c               sub esp, 0x1c
// 00556f80  8bcc                 mov ecx, esp
// 00556f82  89a424fc000000       mov dword ptr [esp + 0xfc], esp
// 00556f89  51                   push ecx
// 00556f8a  8bcd                 mov ecx, ebp
// 00556f8c  83c108               add ecx, 8
// 00556f8f  e8eca30100           call 0x571380
// 00556f94  8bcb                 mov ecx, ebx
// 00556f96  e80599f3ff           call 0x4908a0
// 00556f9b  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 00556fa2  56                   push esi
// 00556fa3  8bcf                 mov ecx, edi
// 00556fa5  e876fdffff           call 0x556d20
// 00556faa  807c241000           cmp byte ptr [esp + 0x10], 0
// 00556faf  7405                 je 0x556fb6
// 00556fb1  c644241000           mov byte ptr [esp + 0x10], 0
// 00556fb6  8d4c241c             lea ecx, [esp + 0x1c]
// 00556fba  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00556fc2  e889360100           call 0x56a650
// 00556fc7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00556fcb  5f                   pop edi
// 00556fcc  8bc6                 mov eax, esi
// 00556fce  5e                   pop esi
// 00556fcf  5d                   pop ebp
// 00556fd0  64890d00000000       mov dword ptr fs:[0], ecx
// 00556fd7  5b                   pop ebx
// 00556fd8  83c420               add esp, 0x20
// 00556fdb  c20c00               ret 0xc
// library rbxgs/util\RunStateOwner.cpp (function ??R?$signal2@XMMU?$last_value@X@boost@@HU?$less@H@std@@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@2@@boost@@QAE?AUunusable@?$last_value@X@1@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
