// roc 2009-06 006285c0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006285c0
//
// 006285c0  6aff                 push -1
// 006285c2  6868eb8600           push 0x86eb68
// 006285c7  64a100000000         mov eax, dword ptr fs:[0]
// 006285cd  50                   push eax
// 006285ce  64892500000000       mov dword ptr fs:[0], esp
// 006285d5  83ec08               sub esp, 8
// 006285d8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006285dc  56                   push esi
// 006285dd  57                   push edi
// 006285de  8bf1                 mov esi, ecx
// 006285e0  89742408             mov dword ptr [esp + 8], esi
// 006285e4  50                   push eax
// 006285e5  51                   push ecx
// 006285e6  8bc4                 mov eax, esp
// 006285e8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006285f0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006285f8  89642414             mov dword ptr [esp + 0x14], esp
// 006285fc  c70000000000         mov dword ptr [eax], 0
// 00628602  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00628606  8b542428             mov edx, dword ptr [esp + 0x28]
// 0062860a  51                   push ecx
// 0062860b  52                   push edx
// 0062860c  c644242801           mov byte ptr [esp + 0x28], 1
// 00628611  e85a30fcff           call 0x5eb670
// 00628616  50                   push eax
// 00628617  8bce                 mov ecx, esi
// 00628619  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0062861e  e81d11deff           call 0x409740
// 00628623  6a00                 push 0
// 00628625  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0062862a  e803040f00           call 0x718a32
// 0062862f  6a18                 push 0x18
// 00628631  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 00628637  e8fc030f00           call 0x718a38
// 0062863c  83c408               add esp, 8
// 0062863f  85c0                 test eax, eax
// 00628641  741e                 je 0x628661
// 00628643  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00628647  33c9                 xor ecx, ecx
// 00628649  33d2                 xor edx, edx
// 0062864b  897808               mov dword ptr [eax + 8], edi
// 0062864e  c70074a48d00         mov dword ptr [eax], 0x8da474
// 00628654  897004               mov dword ptr [eax + 4], esi
// 00628657  894810               mov dword ptr [eax + 0x10], ecx
// 0062865a  895014               mov dword ptr [eax + 0x14], edx
// 0062865d  8bf8                 mov edi, eax
// 0062865f  eb02                 jmp 0x628663
// 00628661  33ff                 xor edi, edi
// 00628663  8b4618               mov eax, dword ptr [esi + 0x18]
// 00628666  3bf8                 cmp edi, eax
// 00628668  7409                 je 0x628673
// 0062866a  50                   push eax
// 0062866b  e8c2030f00           call 0x718a32
// 00628670  83c404               add esp, 4
// 00628673  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00628677  897e18               mov dword ptr [esi + 0x18], edi
// 0062867a  5f                   pop edi
// 0062867b  8bc6                 mov eax, esi
// 0062867d  64890d00000000       mov dword ptr fs:[0], ecx
// 00628684  5e                   pop esi
// 00628685  83c414               add esp, 0x14
// 00628688  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
