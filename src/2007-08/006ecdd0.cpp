// from server: 100% by auto
// roc 2007-08 006ecdd0  unit: CXTPDockingPaneContext  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ecdd0
//
// 006ecdd0  83ec14               sub esp, 0x14
// 006ecdd3  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 006ecdd9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ecddd  56                   push esi
// 006ecdde  57                   push edi
// 006ecddf  8bb8c8000000         mov edi, dword ptr [eax + 0xc8]
// 006ecde5  51                   push ecx
// 006ecde6  8d4c2410             lea ecx, [esp + 0x10]
// 006ecdea  897c240c             mov dword ptr [esp + 0xc], edi
// 006ecdee  e8ad31f9ff           call 0x67ffa0
// 006ecdf3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ecdf7  8b742420             mov esi, dword ptr [esp + 0x20]
// 006ecdfb  2bd7                 sub edx, edi
// 006ecdfd  39560c               cmp dword ptr [esi + 0xc], edx
// 006ece00  0f8c31010000         jl 0x6ecf37
// 006ece06  8b4604               mov eax, dword ptr [esi + 4]
// 006ece09  55                   push ebp
// 006ece0a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006ece0e  8d0c2f               lea ecx, [edi + ebp]
// 006ece11  3bc1                 cmp eax, ecx
// 006ece13  0f8f1d010000         jg 0x6ecf36
// 006ece19  53                   push ebx
// 006ece1a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006ece1e  8bd3                 mov edx, ebx
// 006ece20  2bd7                 sub edx, edi
// 006ece22  395608               cmp dword ptr [esi + 8], edx
// 006ece25  0f8c0a010000         jl 0x6ecf35
// 006ece2b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ece2f  8d1439               lea edx, [ecx + edi]
// 006ece32  3916                 cmp dword ptr [esi], edx
// 006ece34  0f8ffb000000         jg 0x6ecf35
// 006ece3a  2be8                 sub ebp, eax
// 006ece3c  8bc5                 mov eax, ebp
// 006ece3e  99                   cdq 
// 006ece3f  33c2                 xor eax, edx
// 006ece41  2bc2                 sub eax, edx
// 006ece43  3bc7                 cmp eax, edi
// 006ece45  8b3dd8ed7700         mov edi, dword ptr [0x77edd8]
// 006ece4b  7d0e                 jge 0x6ece5b
// 006ece4d  55                   push ebp
// 006ece4e  6a00                 push 0
// 006ece50  56                   push esi
// 006ece51  ffd7                 call edi
// 006ece53  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ece57  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006ece5b  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 006ece5e  8bc5                 mov eax, ebp
// 006ece60  2b442418             sub eax, dword ptr [esp + 0x18]
// 006ece64  99                   cdq 
// 006ece65  33c2                 xor eax, edx
// 006ece67  2bc2                 sub eax, edx
// 006ece69  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006ece6d  7d14                 jge 0x6ece83
// 006ece6f  8b442418             mov eax, dword ptr [esp + 0x18]
// 006ece73  2bc5                 sub eax, ebp
// 006ece75  50                   push eax
// 006ece76  6a00                 push 0
// 006ece78  56                   push esi
// 006ece79  ffd7                 call edi
// 006ece7b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ece7f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006ece83  8beb                 mov ebp, ebx
// 006ece85  2b6e08               sub ebp, dword ptr [esi + 8]
// 006ece88  8bc5                 mov eax, ebp
// 006ece8a  99                   cdq 
// 006ece8b  33c2                 xor eax, edx
// 006ece8d  2bc2                 sub eax, edx
// 006ece8f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006ece93  7d0e                 jge 0x6ecea3
// 006ece95  6a00                 push 0
// 006ece97  55                   push ebp
// 006ece98  56                   push esi
// 006ece99  ffd7                 call edi
// 006ece9b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ece9f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006ecea3  8b2e                 mov ebp, dword ptr [esi]
// 006ecea5  8bc5                 mov eax, ebp
// 006ecea7  2bc1                 sub eax, ecx
// 006ecea9  99                   cdq 
// 006eceaa  33c2                 xor eax, edx
// 006eceac  2bc2                 sub eax, edx
// 006eceae  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006eceb2  7d10                 jge 0x6ecec4
// 006eceb4  6a00                 push 0
// 006eceb6  2bcd                 sub ecx, ebp
// 006eceb8  51                   push ecx
// 006eceb9  56                   push esi
// 006eceba  ffd7                 call edi
// 006ecebc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ecec0  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006ecec4  8b2e                 mov ebp, dword ptr [esi]
// 006ecec6  8bc5                 mov eax, ebp
// 006ecec8  2bc3                 sub eax, ebx
// 006ececa  99                   cdq 
// 006ececb  33c2                 xor eax, edx
// 006ececd  2bc2                 sub eax, edx
// 006ececf  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006eced3  7d0c                 jge 0x6ecee1
// 006eced5  6a00                 push 0
// 006eced7  2bdd                 sub ebx, ebp
// 006eced9  53                   push ebx
// 006eceda  56                   push esi
// 006ecedb  ffd7                 call edi
// 006ecedd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ecee1  8b5e08               mov ebx, dword ptr [esi + 8]
// 006ecee4  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006ecee8  8bc3                 mov eax, ebx
// 006eceea  2bc1                 sub eax, ecx
// 006eceec  99                   cdq 
// 006eceed  33c2                 xor eax, edx
// 006eceef  2bc2                 sub eax, edx
// 006ecef1  3bc5                 cmp eax, ebp
// 006ecef3  7d08                 jge 0x6ecefd
// 006ecef5  6a00                 push 0
// 006ecef7  2bcb                 sub ecx, ebx
// 006ecef9  51                   push ecx
// 006ecefa  56                   push esi
// 006ecefb  ffd7                 call edi
// 006ecefd  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 006ecf00  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006ecf04  8bc3                 mov eax, ebx
// 006ecf06  2bc1                 sub eax, ecx
// 006ecf08  99                   cdq 
// 006ecf09  33c2                 xor eax, edx
// 006ecf0b  2bc2                 sub eax, edx
// 006ecf0d  3bc5                 cmp eax, ebp
// 006ecf0f  7d08                 jge 0x6ecf19
// 006ecf11  2bcb                 sub ecx, ebx
// 006ecf13  51                   push ecx
// 006ecf14  6a00                 push 0
// 006ecf16  56                   push esi
// 006ecf17  ffd7                 call edi
// 006ecf19  8b5e04               mov ebx, dword ptr [esi + 4]
// 006ecf1c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ecf20  8bc3                 mov eax, ebx
// 006ecf22  2bc1                 sub eax, ecx
// 006ecf24  99                   cdq 
// 006ecf25  33c2                 xor eax, edx
// 006ecf27  2bc2                 sub eax, edx
// 006ecf29  3bc5                 cmp eax, ebp
// 006ecf2b  7d08                 jge 0x6ecf35
// 006ecf2d  2bcb                 sub ecx, ebx
// 006ecf2f  51                   push ecx
// 006ecf30  6a00                 push 0
// 006ecf32  56                   push esi
// 006ecf33  ffd7                 call edi
// 006ecf35  5b                   pop ebx
// 006ecf36  5d                   pop ebp
// 006ecf37  5f                   pop edi
// 006ecf38  5e                   pop esi
// 006ecf39  83c414               add esp, 0x14
// 006ecf3c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@IAEXAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
