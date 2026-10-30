// roc 2009-12 008cf4e0  unit: CXTPTabManagerItem  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf4e0
//
// 008cf4e0  6aff                 push -1
// 008cf4e2  68954f9600           push 0x964f95
// 008cf4e7  64a100000000         mov eax, dword ptr fs:[0]
// 008cf4ed  50                   push eax
// 008cf4ee  53                   push ebx
// 008cf4ef  56                   push esi
// 008cf4f0  57                   push edi
// 008cf4f1  a10052b600           mov eax, dword ptr [0xb65200]
// 008cf4f6  33c4                 xor eax, esp
// 008cf4f8  50                   push eax
// 008cf4f9  8d442410             lea eax, [esp + 0x10]
// 008cf4fd  64a300000000         mov dword ptr fs:[0], eax
// 008cf503  8bf1                 mov esi, ecx
// 008cf505  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008cf509  85ff                 test edi, edi
// 008cf50b  752e                 jne 0x8cf53b
// 008cf50d  6884000000           push 0x84
// 008cf512  e84943f2ff           call 0x7f3860
// 008cf517  83c404               add esp, 4
// 008cf51a  89442424             mov dword ptr [esp + 0x24], eax
// 008cf51e  897c2418             mov dword ptr [esp + 0x18], edi
// 008cf522  85c0                 test eax, eax
// 008cf524  7409                 je 0x8cf52f
// 008cf526  8bc8                 mov ecx, eax
// 008cf528  e813faffff           call 0x8cef40
// 008cf52d  eb02                 jmp 0x8cf531
// 008cf52f  33c0                 xor eax, eax
// 008cf531  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008cf539  8bf8                 mov edi, eax
// 008cf53b  8b442420             mov eax, dword ptr [esp + 0x20]
// 008cf53f  897760               mov dword ptr [edi + 0x60], esi
// 008cf542  85c0                 test eax, eax
// 008cf544  7c05                 jl 0x8cf54b
// 008cf546  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 008cf549  7e03                 jle 0x8cf54e
// 008cf54b  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008cf54e  6a01                 push 1
// 008cf550  57                   push edi
// 008cf551  50                   push eax
// 008cf552  8d4e54               lea ecx, [esi + 0x54]
// 008cf555  e8e6e50100           call 0x8edb40
// 008cf55a  8b06                 mov eax, dword ptr [esi]
// 008cf55c  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008cf55f  8bce                 mov ecx, esi
// 008cf561  ffd2                 call edx
// 008cf563  8b8830010000         mov ecx, dword ptr [eax + 0x130]
// 008cf569  0530010000           add eax, 0x130
// 008cf56e  81e107000080         and ecx, 0x80000007
// 008cf574  7905                 jns 0x8cf57b
// 008cf576  49                   dec ecx
// 008cf577  83c9f8               or ecx, 0xfffffff8
// 008cf57a  41                   inc ecx
// 008cf57b  81c100000001         add ecx, 0x1000000
// 008cf581  894f5c               mov dword ptr [edi + 0x5c], ecx
// 008cf584  ff00                 inc dword ptr [eax]
// 008cf586  837e2000             cmp dword ptr [esi + 0x20], 0
// 008cf58a  744d                 je 0x8cf5d9
// 008cf58c  6a30                 push 0x30
// 008cf58e  e8cd42f2ff           call 0x7f3860
// 008cf593  8bd8                 mov ebx, eax
// 008cf595  83c404               add esp, 4
// 008cf598  895c2424             mov dword ptr [esp + 0x24], ebx
// 008cf59c  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008cf5a4  85db                 test ebx, ebx
// 008cf5a6  741a                 je 0x8cf5c2
// 008cf5a8  8b4620               mov eax, dword ptr [esi + 0x20]
// 008cf5ab  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008cf5ae  50                   push eax
// 008cf5af  51                   push ecx
// 008cf5b0  8bcb                 mov ecx, ebx
// 008cf5b2  e8c9f5ffff           call 0x8ceb80
// 008cf5b7  c70324a7a000         mov dword ptr [ebx], 0xa0a724
// 008cf5bd  897b2c               mov dword ptr [ebx + 0x2c], edi
// 008cf5c0  eb02                 jmp 0x8cf5c4
// 008cf5c2  33db                 xor ebx, ebx
// 008cf5c4  8b5774               mov edx, dword ptr [edi + 0x74]
// 008cf5c7  8d4f6c               lea ecx, [edi + 0x6c]
// 008cf5ca  53                   push ebx
// 008cf5cb  52                   push edx
// 008cf5cc  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008cf5d4  e897b6f9ff           call 0x86ac70
// 008cf5d9  8b06                 mov eax, dword ptr [esi]
// 008cf5db  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008cf5de  8bce                 mov ecx, esi
// 008cf5e0  ffd2                 call edx
// 008cf5e2  8bc7                 mov eax, edi
// 008cf5e4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008cf5e8  64890d00000000       mov dword ptr fs:[0], ecx
// 008cf5ef  59                   pop ecx
// 008cf5f0  5f                   pop edi
// 008cf5f1  5e                   pop esi
// 008cf5f2  5b                   pop ebx
// 008cf5f3  83c40c               add esp, 0xc
// 008cf5f6  c20800               ret 8
// copied from an identical function in another client (function ?AddItem@CXTPTabManager@@IAEPAVCXTPTabManagerItem@@HPAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp