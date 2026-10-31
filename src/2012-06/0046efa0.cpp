// roc 2012-06 0046efa0  unit: RBX::Security::VContext::?$thread_specific_ptr::delete_data  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046efa0
//
// 0046efa0  81ec10020000         sub esp, 0x210
// 0046efa6  8b942418020000       mov edx, dword ptr [esp + 0x218]
// 0046efad  53                   push ebx
// 0046efae  55                   push ebp
// 0046efaf  56                   push esi
// 0046efb0  8d442410             lea eax, [esp + 0x10]
// 0046efb4  50                   push eax
// 0046efb5  8b842424020000       mov eax, dword ptr [esp + 0x224]
// 0046efbc  8d4c2410             lea ecx, [esp + 0x10]
// 0046efc0  51                   push ecx
// 0046efc1  52                   push edx
// 0046efc2  50                   push eax
// 0046efc3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0046efcb  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0046efd3  e8e8f8ffff           call 0x46e8c0
// 0046efd8  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0046efdc  8b2d042bb200         mov ebp, dword ptr [0xb22b04]
// 0046efe2  8bf0                 mov esi, eax
// 0046efe4  85f6                 test esi, esi
// 0046efe6  0f8cac000000         jl 0x46f098
// 0046efec  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046eff0  33f6                 xor esi, esi
// 0046eff2  8d54240c             lea edx, [esp + 0xc]
// 0046eff6  52                   push edx
// 0046eff7  56                   push esi
// 0046eff8  56                   push esi
// 0046eff9  56                   push esi
// 0046effa  8974241c             mov dword ptr [esp + 0x1c], esi
// 0046effe  8b08                 mov ecx, dword ptr [eax]
// 0046f000  6aff                 push -1
// 0046f002  50                   push eax
// 0046f003  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0046f006  ffd0                 call eax
// 0046f008  85c0                 test eax, eax
// 0046f00a  7c4d                 jl 0x46f059
// 0046f00c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046f010  85c0                 test eax, eax
// 0046f012  7445                 je 0x46f059
// 0046f014  50                   push eax
// 0046f015  ff15182bb200         call dword ptr [0xb22b18]
// 0046f01b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046f01f  50                   push eax
// 0046f020  51                   push ecx
// 0046f021  8d54241c             lea edx, [esp + 0x1c]
// 0046f025  6804010000           push 0x104
// 0046f02a  52                   push edx
// 0046f02b  ff15502ab200         call dword ptr [0xb22a50]
// 0046f031  50                   push eax
// 0046f032  e8e94ff9ff           call 0x404020
// 0046f037  83c414               add esp, 0x14
// 0046f03a  8d4c2414             lea ecx, [esp + 0x14]
// 0046f03e  33c0                 xor eax, eax
// 0046f040  51                   push ecx
// 0046f041  668984241e020000     mov word ptr [esp + 0x21e], ax
// 0046f049  e832d7ffff           call 0x46c780
// 0046f04e  33d2                 xor edx, edx
// 0046f050  6689544414           mov word ptr [esp + eax*2 + 0x14], dx
// 0046f055  8d742414             lea esi, [esp + 0x14]
// 0046f059  803d2864e10001       cmp byte ptr [0xe16428], 1
// 0046f060  751f                 jne 0x46f081
// 0046f062  68c49eb500           push 0xb59ec4
// 0046f067  ff15ec22b200         call dword ptr [0xb222ec]
// 0046f06d  85c0                 test eax, eax
// 0046f06f  7410                 je 0x46f081
// 0046f071  68e09eb500           push 0xb59ee0
// 0046f076  50                   push eax
// 0046f077  ff15b021b200         call dword ptr [0xb221b0]
// 0046f07d  85c0                 test eax, eax
// 0046f07f  7505                 jne 0x46f086
// 0046f081  a1642bb200           mov eax, dword ptr [0xb22b64]
// 0046f086  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046f08a  56                   push esi
// 0046f08b  53                   push ebx
// 0046f08c  51                   push ecx
// 0046f08d  ffd0                 call eax
// 0046f08f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0046f093  52                   push edx
// 0046f094  8bf0                 mov esi, eax
// 0046f096  ffd5                 call ebp
// 0046f098  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046f09c  85c0                 test eax, eax
// 0046f09e  7408                 je 0x46f0a8
// 0046f0a0  8b08                 mov ecx, dword ptr [eax]
// 0046f0a2  8b5108               mov edx, dword ptr [ecx + 8]
// 0046f0a5  50                   push eax
// 0046f0a6  ffd2                 call edx
// 0046f0a8  53                   push ebx
// 0046f0a9  ffd5                 call ebp
// 0046f0ab  8bc6                 mov eax, esi
// 0046f0ad  5e                   pop esi
// 0046f0ae  5d                   pop ebp
// 0046f0af  5b                   pop ebx
// 0046f0b0  81c410020000         add esp, 0x210
// 0046f0b6  c20800               ret 8
// copied from an identical function in another client (function ?AtlRegisterTypeLib@ATL@@YGJPAUHINSTANCE__@@PB_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_nativeatldirabi3272e783e3521ab9.cpp