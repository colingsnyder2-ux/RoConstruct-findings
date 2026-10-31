// roc 2010-06 0044ef90  unit: CRbxPlayDocTemplate  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044ef90
//
// 0044ef90  81ec10020000         sub esp, 0x210
// 0044ef96  8b942418020000       mov edx, dword ptr [esp + 0x218]
// 0044ef9d  53                   push ebx
// 0044ef9e  55                   push ebp
// 0044ef9f  56                   push esi
// 0044efa0  8d442410             lea eax, [esp + 0x10]
// 0044efa4  50                   push eax
// 0044efa5  8b842424020000       mov eax, dword ptr [esp + 0x224]
// 0044efac  8d4c2410             lea ecx, [esp + 0x10]
// 0044efb0  51                   push ecx
// 0044efb1  52                   push edx
// 0044efb2  50                   push eax
// 0044efb3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0044efbb  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0044efc3  e8e8f8ffff           call 0x44e8b0
// 0044efc8  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0044efcc  8b2d40aa9e00         mov ebp, dword ptr [0x9eaa40]
// 0044efd2  8bf0                 mov esi, eax
// 0044efd4  85f6                 test esi, esi
// 0044efd6  0f8cac000000         jl 0x44f088
// 0044efdc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044efe0  33f6                 xor esi, esi
// 0044efe2  8d54240c             lea edx, [esp + 0xc]
// 0044efe6  52                   push edx
// 0044efe7  56                   push esi
// 0044efe8  56                   push esi
// 0044efe9  56                   push esi
// 0044efea  8974241c             mov dword ptr [esp + 0x1c], esi
// 0044efee  8b08                 mov ecx, dword ptr [eax]
// 0044eff0  6aff                 push -1
// 0044eff2  50                   push eax
// 0044eff3  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0044eff6  ffd0                 call eax
// 0044eff8  85c0                 test eax, eax
// 0044effa  7c4d                 jl 0x44f049
// 0044effc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044f000  85c0                 test eax, eax
// 0044f002  7445                 je 0x44f049
// 0044f004  50                   push eax
// 0044f005  ff1554aa9e00         call dword ptr [0x9eaa54]
// 0044f00b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044f00f  50                   push eax
// 0044f010  51                   push ecx
// 0044f011  8d54241c             lea edx, [esp + 0x1c]
// 0044f015  6804010000           push 0x104
// 0044f01a  52                   push edx
// 0044f01b  ff1560a89e00         call dword ptr [0x9ea860]
// 0044f021  50                   push eax
// 0044f022  e8193afbff           call 0x402a40
// 0044f027  83c414               add esp, 0x14
// 0044f02a  8d4c2414             lea ecx, [esp + 0x14]
// 0044f02e  33c0                 xor eax, eax
// 0044f030  51                   push ecx
// 0044f031  668984241e020000     mov word ptr [esp + 0x21e], ax
// 0044f039  e872e0ffff           call 0x44d0b0
// 0044f03e  33d2                 xor edx, edx
// 0044f040  6689544414           mov word ptr [esp + eax*2 + 0x14], dx
// 0044f045  8d742414             lea esi, [esp + 0x14]
// 0044f049  803decfabf0001       cmp byte ptr [0xbffaec], 1
// 0044f050  751f                 jne 0x44f071
// 0044f052  6800c2a000           push 0xa0c200
// 0044f057  ff15e4a29e00         call dword ptr [0x9ea2e4]
// 0044f05d  85c0                 test eax, eax
// 0044f05f  7410                 je 0x44f071
// 0044f061  681cc2a000           push 0xa0c21c
// 0044f066  50                   push eax
// 0044f067  ff1590a39e00         call dword ptr [0x9ea390]
// 0044f06d  85c0                 test eax, eax
// 0044f06f  7505                 jne 0x44f076
// 0044f071  a138aa9e00           mov eax, dword ptr [0x9eaa38]
// 0044f076  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044f07a  56                   push esi
// 0044f07b  53                   push ebx
// 0044f07c  51                   push ecx
// 0044f07d  ffd0                 call eax
// 0044f07f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0044f083  52                   push edx
// 0044f084  8bf0                 mov esi, eax
// 0044f086  ffd5                 call ebp
// 0044f088  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044f08c  85c0                 test eax, eax
// 0044f08e  7408                 je 0x44f098
// 0044f090  8b08                 mov ecx, dword ptr [eax]
// 0044f092  8b5108               mov edx, dword ptr [ecx + 8]
// 0044f095  50                   push eax
// 0044f096  ffd2                 call edx
// 0044f098  53                   push ebx
// 0044f099  ffd5                 call ebp
// 0044f09b  8bc6                 mov eax, esi
// 0044f09d  5e                   pop esi
// 0044f09e  5d                   pop ebp
// 0044f09f  5b                   pop ebx
// 0044f0a0  81c410020000         add esp, 0x210
// 0044f0a6  c20800               ret 8
// copied from an identical function in another client (function ?AtlRegisterTypeLib@ATL@@YGJPAUHINSTANCE__@@PB_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_nativeatldirabi3272e783e3521ab9.cpp