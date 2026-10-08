// from server: 100% by auto
// roc 2010-06 00498100  unit: G3D::GWindow  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498100
//
// 00498100  6aff                 push -1
// 00498102  68146d9800           push 0x986d14
// 00498107  64a100000000         mov eax, dword ptr fs:[0]
// 0049810d  50                   push eax
// 0049810e  64892500000000       mov dword ptr fs:[0], esp
// 00498115  51                   push ecx
// 00498116  53                   push ebx
// 00498117  56                   push esi
// 00498118  8bf1                 mov esi, ecx
// 0049811a  33db                 xor ebx, ebx
// 0049811c  c7065032a100         mov dword ptr [esi], 0xa13250
// 00498122  895e04               mov dword ptr [esi + 4], ebx
// 00498125  89742408             mov dword ptr [esp + 8], esi
// 00498129  895e08               mov dword ptr [esi + 8], ebx
// 0049812c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00498130  50                   push eax
// 00498131  8d4e10               lea ecx, [esi + 0x10]
// 00498134  895c2418             mov dword ptr [esp + 0x18], ebx
// 00498138  c706ac72a100         mov dword ptr [esi], 0xa172ac
// 0049813e  ff150ca49e00         call dword ptr [0x9ea40c]
// 00498144  885e2c               mov byte ptr [esi + 0x2c], bl
// 00498147  c644241401           mov byte ptr [esp + 0x14], 1
// 0049814c  391dd439c000         cmp dword ptr [0xc039d4], ebx
// 00498152  7446                 je 0x49819a
// 00498154  a1f03cc000           mov eax, dword ptr [0xc03cf0]
// 00498159  3bc3                 cmp eax, ebx
// 0049815b  7521                 jne 0x49817e
// 0049815d  53                   push ebx
// 0049815e  6a0a                 push 0xa
// 00498160  b9ec3cc000           mov ecx, 0xc03cec
// 00498165  e83610ffff           call 0x4891a0
// 0049816a  8b0dec3cc000         mov ecx, dword ptr [0xc03cec]
// 00498170  51                   push ecx
// 00498171  6a0a                 push 0xa
// 00498173  ff15d439c000         call dword ptr [0xc039d4]
// 00498179  a1f03cc000           mov eax, dword ptr [0xc03cf0]
// 0049817e  8b15ec3cc000         mov edx, dword ptr [0xc03cec]
// 00498184  57                   push edi
// 00498185  8b7c82fc             mov edi, dword ptr [edx + eax*4 - 4]
// 00498189  53                   push ebx
// 0049818a  48                   dec eax
// 0049818b  50                   push eax
// 0049818c  b9ec3cc000           mov ecx, 0xc03cec
// 00498191  e80a10ffff           call 0x4891a0
// 00498196  897e0c               mov dword ptr [esi + 0xc], edi
// 00498199  5f                   pop edi
// 0049819a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049819e  8bc6                 mov eax, esi
// 004981a0  5e                   pop esi
// 004981a1  5b                   pop ebx
// 004981a2  64890d00000000       mov dword ptr fs:[0], ecx
// 004981a9  83c410               add esp, 0x10
// 004981ac  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ??0Milestone@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
