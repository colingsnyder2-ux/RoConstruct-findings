// roc 2009-12 008c6810  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6810
//
// 008c6810  6aff                 push -1
// 008c6812  68ca459600           push 0x9645ca
// 008c6817  64a100000000         mov eax, dword ptr fs:[0]
// 008c681d  50                   push eax
// 008c681e  51                   push ecx
// 008c681f  56                   push esi
// 008c6820  a10052b600           mov eax, dword ptr [0xb65200]
// 008c6825  33c4                 xor eax, esp
// 008c6827  50                   push eax
// 008c6828  8d44240c             lea eax, [esp + 0xc]
// 008c682c  64a300000000         mov dword ptr fs:[0], eax
// 008c6832  8bf1                 mov esi, ecx
// 008c6834  6a64                 push 0x64
// 008c6836  e8e5fcffff           call 0x8c6520
// 008c683b  85c0                 test eax, eax
// 008c683d  7537                 jne 0x8c6876
// 008c683f  6a58                 push 0x58
// 008c6841  e81ad0f2ff           call 0x7f3860
// 008c6846  83c404               add esp, 4
// 008c6849  89442408             mov dword ptr [esp + 8], eax
// 008c684d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008c6855  85c0                 test eax, eax
// 008c6857  740b                 je 0x8c6864
// 008c6859  6a64                 push 0x64
// 008c685b  8bc8                 mov ecx, eax
// 008c685d  e80efbffff           call 0x8c6370
// 008c6862  eb02                 jmp 0x8c6866
// 008c6864  33c0                 xor eax, eax
// 008c6866  50                   push eax
// 008c6867  8bce                 mov ecx, esi
// 008c6869  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008c6871  e8dafeffff           call 0x8c6750
// 008c6876  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c687a  64890d00000000       mov dword ptr fs:[0], ecx
// 008c6881  59                   pop ecx
// 008c6882  5e                   pop esi
// 008c6883  83c410               add esp, 0x10
// 008c6886  c3                   ret 
// copied from an identical function in another client (function ?AddExpandButton@CXTPPropertyGridInplaceButtons@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp