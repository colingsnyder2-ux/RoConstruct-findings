// roc 2008-06 004b5950  unit: RBX::Network::VClient::?$FactoryProduct  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5950
//
// 004b5950  6aff                 push -1
// 004b5952  6870e07c00           push 0x7ce070
// 004b5957  64a100000000         mov eax, dword ptr fs:[0]
// 004b595d  50                   push eax
// 004b595e  64892500000000       mov dword ptr fs:[0], esp
// 004b5965  83ec18               sub esp, 0x18
// 004b5968  53                   push ebx
// 004b5969  55                   push ebp
// 004b596a  56                   push esi
// 004b596b  8bf1                 mov esi, ecx
// 004b596d  57                   push edi
// 004b596e  56                   push esi
// 004b596f  8d4c2424             lea ecx, [esp + 0x24]
// 004b5973  e8e84d0b00           call 0x56a760
// 004b5978  33c0                 xor eax, eax
// 004b597a  89442430             mov dword ptr [esp + 0x30], eax
// 004b597e  88442414             mov byte ptr [esp + 0x14], al
// 004b5982  8b442420             mov eax, dword ptr [esp + 0x20]
// 004b5986  8b36                 mov esi, dword ptr [esi]
// 004b5988  8b7e58               mov edi, dword ptr [esi + 0x58]
// 004b598b  83ec40               sub esp, 0x40
// 004b598e  8964245c             mov dword ptr [esp + 0x5c], esp
// 004b5992  8bdc                 mov ebx, esp
// 004b5994  8be8                 mov ebp, eax
// 004b5996  8d442454             lea eax, [esp + 0x54]
// 004b599a  50                   push eax
// 004b599b  8d4c2457             lea ecx, [esp + 0x57]
// 004b599f  51                   push ecx
// 004b59a0  83ec1c               sub esp, 0x1c
// 004b59a3  8bd4                 mov edx, esp
// 004b59a5  89a42480000000       mov dword ptr [esp + 0x80], esp
// 004b59ac  52                   push edx
// 004b59ad  8d4e08               lea ecx, [esi + 8]
// 004b59b0  c684249800000001     mov byte ptr [esp + 0x98], 1
// 004b59b8  83c704               add edi, 4
// 004b59bb  e8f0b90b00           call 0x5713b0
// 004b59c0  83ec1c               sub esp, 0x1c
// 004b59c3  8bc4                 mov eax, esp
// 004b59c5  89a4249c000000       mov dword ptr [esp + 0x9c], esp
// 004b59cc  50                   push eax
// 004b59cd  8d4d08               lea ecx, [ebp + 8]
// 004b59d0  e8dbb90b00           call 0x5713b0
// 004b59d5  8bcb                 mov ecx, ebx
// 004b59d7  e8c4aefdff           call 0x4908a0
// 004b59dc  83ec40               sub esp, 0x40
// 004b59df  89a4249c000000       mov dword ptr [esp + 0x9c], esp
// 004b59e6  8bdc                 mov ebx, esp
// 004b59e8  8d8c2494000000       lea ecx, [esp + 0x94]
// 004b59ef  51                   push ecx
// 004b59f0  8d942497000000       lea edx, [esp + 0x97]
// 004b59f7  52                   push edx
// 004b59f8  83ec1c               sub esp, 0x1c
// 004b59fb  8bc4                 mov eax, esp
// 004b59fd  89a424c0000000       mov dword ptr [esp + 0xc0], esp
// 004b5a04  50                   push eax
// 004b5a05  8d4e08               lea ecx, [esi + 8]
// 004b5a08  e8a3b90b00           call 0x5713b0
// 004b5a0d  83ec1c               sub esp, 0x1c
// 004b5a10  8bcc                 mov ecx, esp
// 004b5a12  89a424dc000000       mov dword ptr [esp + 0xdc], esp
// 004b5a19  51                   push ecx
// 004b5a1a  8bcd                 mov ecx, ebp
// 004b5a1c  83c108               add ecx, 8
// 004b5a1f  e85cb90b00           call 0x571380
// 004b5a24  8bcb                 mov ecx, ebx
// 004b5a26  e875aefdff           call 0x4908a0
// 004b5a2b  8bb424b8000000       mov esi, dword ptr [esp + 0xb8]
// 004b5a32  56                   push esi
// 004b5a33  8bcf                 mov ecx, edi
// 004b5a35  e896f4ffff           call 0x4b4ed0
// 004b5a3a  807c241400           cmp byte ptr [esp + 0x14], 0
// 004b5a3f  7405                 je 0x4b5a46
// 004b5a41  c644241400           mov byte ptr [esp + 0x14], 0
// 004b5a46  8d4c2420             lea ecx, [esp + 0x20]
// 004b5a4a  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 004b5a52  e8f94b0b00           call 0x56a650
// 004b5a57  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004b5a5b  5f                   pop edi
// 004b5a5c  8bc6                 mov eax, esi
// 004b5a5e  5e                   pop esi
// 004b5a5f  5d                   pop ebp
// 004b5a60  64890d00000000       mov dword ptr fs:[0], ecx
// 004b5a67  5b                   pop ebx
// 004b5a68  83c424               add esp, 0x24
// 004b5a6b  c20400               ret 4
// library rbxgs/roc_unit_5c2d9ebf33ac82fd.cpp (function ??R?$signal0@XU?$last_value@X@boost@@HU?$less@H@std@@V?$function@$$A6AXXZV?$allocator@X@std@@@2@@boost@@QAE?AUunusable@?$last_value@X@1@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_5c2d9ebf33ac82fd.cpp
