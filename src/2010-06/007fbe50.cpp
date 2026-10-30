// roc 2010-06 007fbe50  unit: CXTPControls  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fbe50
//
// 007fbe50  53                   push ebx
// 007fbe51  55                   push ebp
// 007fbe52  56                   push esi
// 007fbe53  57                   push edi
// 007fbe54  8bf9                 mov edi, ecx
// 007fbe56  8b07                 mov eax, dword ptr [edi]
// 007fbe58  8b10                 mov edx, dword ptr [eax]
// 007fbe5a  ffd2                 call edx
// 007fbe5c  8bc8                 mov ecx, eax
// 007fbe5e  e83fc5faff           call 0x7a83a2
// 007fbe63  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007fbe67  8bd8                 mov ebx, eax
// 007fbe69  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007fbe6c  33f6                 xor esi, esi
// 007fbe6e  85c0                 test eax, eax
// 007fbe70  7e4a                 jle 0x7fbebc
// 007fbe72  85f6                 test esi, esi
// 007fbe74  7c11                 jl 0x7fbe87
// 007fbe76  3bf0                 cmp esi, eax
// 007fbe78  7d0d                 jge 0x7fbe87
// 007fbe7a  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 007fbe7d  7d5b                 jge 0x7fbeda
// 007fbe7f  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 007fbe82  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 007fbe85  eb02                 jmp 0x7fbe89
// 007fbe87  33c9                 xor ecx, ecx
// 007fbe89  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 007fbe90  7522                 jne 0x7fbeb4
// 007fbe92  85f6                 test esi, esi
// 007fbe94  7c11                 jl 0x7fbea7
// 007fbe96  3bf0                 cmp esi, eax
// 007fbe98  7d0d                 jge 0x7fbea7
// 007fbe9a  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 007fbe9d  7d3b                 jge 0x7fbeda
// 007fbe9f  8b5728               mov edx, dword ptr [edi + 0x28]
// 007fbea2  8b04b2               mov eax, dword ptr [edx + esi*4]
// 007fbea5  eb02                 jmp 0x7fbea9
// 007fbea7  33c0                 xor eax, eax
// 007fbea9  55                   push ebp
// 007fbeaa  6aff                 push -1
// 007fbeac  50                   push eax
// 007fbead  8bcb                 mov ecx, ebx
// 007fbeaf  e89cf4ffff           call 0x7fb350
// 007fbeb4  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007fbeb7  46                   inc esi
// 007fbeb8  3bf0                 cmp esi, eax
// 007fbeba  7cb6                 jl 0x7fbe72
// 007fbebc  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 007fbebf  85c9                 test ecx, ecx
// 007fbec1  740e                 je 0x7fbed1
// 007fbec3  55                   push ebp
// 007fbec4  e887ffffff           call 0x7fbe50
// 007fbec9  50                   push eax
// 007fbeca  8bcb                 mov ecx, ebx
// 007fbecc  e8ffd3ffff           call 0x7f92d0
// 007fbed1  5f                   pop edi
// 007fbed2  5e                   pop esi
// 007fbed3  5d                   pop ebp
// 007fbed4  8bc3                 mov eax, ebx
// 007fbed6  5b                   pop ebx
// 007fbed7  c20400               ret 4
// 007fbeda  e86dbdfaff           call 0x7a7c4c
// copied from an identical function in another client (function ?Duplicate@CXTPControls@@QAEPAV1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp