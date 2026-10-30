// roc 2011-06 008598d0  unit: CXTPControls  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008598d0
//
// 008598d0  6aff                 push -1
// 008598d2  685a6ea000           push 0xa06e5a
// 008598d7  64a100000000         mov eax, dword ptr fs:[0]
// 008598dd  50                   push eax
// 008598de  51                   push ecx
// 008598df  53                   push ebx
// 008598e0  56                   push esi
// 008598e1  57                   push edi
// 008598e2  a12058c900           mov eax, dword ptr [0xc95820]
// 008598e7  33c4                 xor eax, esp
// 008598e9  50                   push eax
// 008598ea  8d442414             lea eax, [esp + 0x14]
// 008598ee  64a300000000         mov dword ptr fs:[0], eax
// 008598f4  8bf9                 mov edi, ecx
// 008598f6  e8f5d2ffff           call 0x856bf0
// 008598fb  6a44                 push 0x44
// 008598fd  e85c07fbff           call 0x80a05e
// 00859902  83c404               add esp, 4
// 00859905  89442410             mov dword ptr [esp + 0x10], eax
// 00859909  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00859911  85c0                 test eax, eax
// 00859913  740b                 je 0x859920
// 00859915  8bc8                 mov ecx, eax
// 00859917  e8d4edffff           call 0x8586f0
// 0085991c  8bd8                 mov ebx, eax
// 0085991e  eb02                 jmp 0x859922
// 00859920  33db                 xor ebx, ebx
// 00859922  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00859925  33f6                 xor esi, esi
// 00859927  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0085992f  85c0                 test eax, eax
// 00859931  7e4b                 jle 0x85997e
// 00859933  85f6                 test esi, esi
// 00859935  7c11                 jl 0x859948
// 00859937  3bf0                 cmp esi, eax
// 00859939  7d0d                 jge 0x859948
// 0085993b  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0085993e  7d59                 jge 0x859999
// 00859940  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00859943  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00859946  eb02                 jmp 0x85994a
// 00859948  33c9                 xor ecx, ecx
// 0085994a  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 00859951  7523                 jne 0x859976
// 00859953  85f6                 test esi, esi
// 00859955  7c11                 jl 0x859968
// 00859957  3bf0                 cmp esi, eax
// 00859959  7d0d                 jge 0x859968
// 0085995b  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0085995e  7d39                 jge 0x859999
// 00859960  8b5728               mov edx, dword ptr [edi + 0x28]
// 00859963  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00859966  eb02                 jmp 0x85996a
// 00859968  33c0                 xor eax, eax
// 0085996a  6a01                 push 1
// 0085996c  6aff                 push -1
// 0085996e  50                   push eax
// 0085996f  8bcb                 mov ecx, ebx
// 00859971  e8caf3ffff           call 0x858d40
// 00859976  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00859979  46                   inc esi
// 0085997a  3bf0                 cmp esi, eax
// 0085997c  7cb5                 jl 0x859933
// 0085997e  53                   push ebx
// 0085997f  8bcf                 mov ecx, edi
// 00859981  e88ad2ffff           call 0x856c10
// 00859986  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085998a  64890d00000000       mov dword ptr fs:[0], ecx
// 00859991  59                   pop ecx
// 00859992  5f                   pop edi
// 00859993  5e                   pop esi
// 00859994  5b                   pop ebx
// 00859995  83c410               add esp, 0x10
// 00859998  c3                   ret 
// 00859999  e86c09fbff           call 0x80a30a
// copied from an identical function in another client (function ?CreateOriginalControls@CXTPControls@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp