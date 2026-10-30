// roc 2009-12 008898a0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008898a0
//
// 008898a0  6aff                 push -1
// 008898a2  68d80c9600           push 0x960cd8
// 008898a7  64a100000000         mov eax, dword ptr fs:[0]
// 008898ad  50                   push eax
// 008898ae  83ec1c               sub esp, 0x1c
// 008898b1  53                   push ebx
// 008898b2  55                   push ebp
// 008898b3  56                   push esi
// 008898b4  57                   push edi
// 008898b5  a10052b600           mov eax, dword ptr [0xb65200]
// 008898ba  33c4                 xor eax, esp
// 008898bc  50                   push eax
// 008898bd  8d442430             lea eax, [esp + 0x30]
// 008898c1  64a300000000         mov dword ptr fs:[0], eax
// 008898c7  8be9                 mov ebp, ecx
// 008898c9  8b8510010000         mov eax, dword ptr [ebp + 0x110]
// 008898cf  83c004               add eax, 4
// 008898d2  83f816               cmp eax, 0x16
// 008898d5  7d05                 jge 0x8898dc
// 008898d7  b816000000           mov eax, 0x16
// 008898dc  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 008898e0  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 008898e4  c70706000000         mov dword ptr [edi], 6
// 008898ea  894704               mov dword ptr [edi + 4], eax
// 008898ed  85db                 test ebx, ebx
// 008898ef  746a                 je 0x88995b
// 008898f1  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 008898f6  7463                 je 0x88995b
// 008898f8  8b7304               mov esi, dword ptr [ebx + 4]
// 008898fb  6a26                 push 0x26
// 008898fd  e83e3df7ff           call 0x7fd640
// 00889902  50                   push eax
// 00889903  56                   push esi
// 00889904  8d4c2424             lea ecx, [esp + 0x24]
// 00889908  e8f31dfcff           call 0x84b700
// 0088990d  8b4704               mov eax, dword ptr [edi + 4]
// 00889910  be06000000           mov esi, 6
// 00889915  83e802               sub eax, 2
// 00889918  3bc6                 cmp eax, esi
// 0088991a  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00889922  7e26                 jle 0x88994a
// 00889924  89742414             mov dword ptr [esp + 0x14], esi
// 00889928  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088992c  56                   push esi
// 0088992d  51                   push ecx
// 0088992e  56                   push esi
// 0088992f  b803000000           mov eax, 3
// 00889934  50                   push eax
// 00889935  53                   push ebx
// 00889936  8bcd                 mov ecx, ebp
// 00889938  e82352f7ff           call 0x7feb60
// 0088993d  8b5704               mov edx, dword ptr [edi + 4]
// 00889940  83c602               add esi, 2
// 00889943  83ea02               sub edx, 2
// 00889946  3bf2                 cmp esi, edx
// 00889948  7cde                 jl 0x889928
// 0088994a  8d4c241c             lea ecx, [esp + 0x1c]
// 0088994e  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00889956  e8351efcff           call 0x84b790
// 0088995b  8bc7                 mov eax, edi
// 0088995d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00889961  64890d00000000       mov dword ptr fs:[0], ecx
// 00889968  59                   pop ecx
// 00889969  5f                   pop edi
// 0088996a  5e                   pop esi
// 0088996b  5d                   pop ebp
// 0088996c  5b                   pop ebx
// 0088996d  83c428               add esp, 0x28
// 00889970  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawDialogBarGripper@CXTPOfficeTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOfficeTheme.cpp