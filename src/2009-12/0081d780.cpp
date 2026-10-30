// roc 2009-12 0081d780  unit: CXTPReportControl  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081d780
//
// 0081d780  6aff                 push -1
// 0081d782  68d8ac9500           push 0x95acd8
// 0081d787  64a100000000         mov eax, dword ptr fs:[0]
// 0081d78d  50                   push eax
// 0081d78e  83ec1c               sub esp, 0x1c
// 0081d791  53                   push ebx
// 0081d792  55                   push ebp
// 0081d793  56                   push esi
// 0081d794  57                   push edi
// 0081d795  a10052b600           mov eax, dword ptr [0xb65200]
// 0081d79a  33c4                 xor eax, esp
// 0081d79c  50                   push eax
// 0081d79d  8d442430             lea eax, [esp + 0x30]
// 0081d7a1  64a300000000         mov dword ptr fs:[0], eax
// 0081d7a7  8bf1                 mov esi, ecx
// 0081d7a9  8bae94000000         mov ebp, dword ptr [esi + 0x94]
// 0081d7af  33c0                 xor eax, eax
// 0081d7b1  39442444             cmp dword ptr [esp + 0x44], eax
// 0081d7b5  56                   push esi
// 0081d7b6  0f95c0               setne al
// 0081d7b9  8d4c2420             lea ecx, [esp + 0x20]
// 0081d7bd  8d4400ff             lea eax, [eax + eax - 1]
// 0081d7c1  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081d7c5  e80c6ffdff           call 0x7f46d6
// 0081d7ca  8b8688020000         mov eax, dword ptr [esi + 0x288]
// 0081d7d0  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 0081d7d6  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0081d7da  894c2414             mov dword ptr [esp + 0x14], ecx
// 0081d7de  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0081d7e4  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0081d7ec  8bfb                 mov edi, ebx
// 0081d7ee  e82df40000           call 0x82cc20
// 0081d7f3  3bd8                 cmp ebx, eax
// 0081d7f5  7d48                 jge 0x81d83f
// 0081d7f7  85ff                 test edi, edi
// 0081d7f9  7c44                 jl 0x81d83f
// 0081d7fb  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0081d801  8b11                 mov edx, dword ptr [ecx]
// 0081d803  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0081d806  57                   push edi
// 0081d807  ffd0                 call eax
// 0081d809  85c0                 test eax, eax
// 0081d80b  741f                 je 0x81d82c
// 0081d80d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081d811  8b10                 mov edx, dword ptr [eax]
// 0081d813  8b5268               mov edx, dword ptr [edx + 0x68]
// 0081d816  51                   push ecx
// 0081d817  8d4c2420             lea ecx, [esp + 0x20]
// 0081d81b  51                   push ecx
// 0081d81c  8bc8                 mov ecx, eax
// 0081d81e  ffd2                 call edx
// 0081d820  03c5                 add eax, ebp
// 0081d822  3b869c000000         cmp eax, dword ptr [esi + 0x9c]
// 0081d828  7f2d                 jg 0x81d857
// 0081d82a  8be8                 mov ebp, eax
// 0081d82c  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0081d832  037c2418             add edi, dword ptr [esp + 0x18]
// 0081d836  e8e5f30000           call 0x82cc20
// 0081d83b  3bf8                 cmp edi, eax
// 0081d83d  7cb8                 jl 0x81d7f7
// 0081d83f  837c244400           cmp dword ptr [esp + 0x44], 0
// 0081d844  7437                 je 0x81d87d
// 0081d846  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0081d84c  e8cff30000           call 0x82cc20
// 0081d851  8bf0                 mov esi, eax
// 0081d853  2bf3                 sub esi, ebx
// 0081d855  eb28                 jmp 0x81d87f
// 0081d857  837c244400           cmp dword ptr [esp + 0x44], 0
// 0081d85c  7405                 je 0x81d863
// 0081d85e  2bfb                 sub edi, ebx
// 0081d860  4f                   dec edi
// 0081d861  eb05                 jmp 0x81d868
// 0081d863  2bdf                 sub ebx, edi
// 0081d865  4b                   dec ebx
// 0081d866  8bfb                 mov edi, ebx
// 0081d868  8d4c241c             lea ecx, [esp + 0x1c]
// 0081d86c  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0081d874  e8576efdff           call 0x7f46d0
// 0081d879  8bc7                 mov eax, edi
// 0081d87b  eb15                 jmp 0x81d892
// 0081d87d  8bf3                 mov esi, ebx
// 0081d87f  8d4c241c             lea ecx, [esp + 0x1c]
// 0081d883  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0081d88b  e8406efdff           call 0x7f46d0
// 0081d890  8bc6                 mov eax, esi
// 0081d892  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0081d896  64890d00000000       mov dword ptr fs:[0], ecx
// 0081d89d  59                   pop ecx
// 0081d89e  5f                   pop edi
// 0081d89f  5e                   pop esi
// 0081d8a0  5d                   pop ebp
// 0081d8a1  5b                   pop ebx
// 0081d8a2  83c428               add esp, 0x28
// 0081d8a5  c20800               ret 8
// copied from an identical function in another client (function ?GetReportAreaRows@CXTPReportControl@@QAEHHH@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp