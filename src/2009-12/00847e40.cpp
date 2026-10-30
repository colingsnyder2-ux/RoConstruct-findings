// roc 2009-12 00847e40  unit: CXTPControls  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00847e40
//
// 00847e40  6aff                 push -1
// 00847e42  686aef9500           push 0x95ef6a
// 00847e47  64a100000000         mov eax, dword ptr fs:[0]
// 00847e4d  50                   push eax
// 00847e4e  51                   push ecx
// 00847e4f  53                   push ebx
// 00847e50  56                   push esi
// 00847e51  57                   push edi
// 00847e52  a10052b600           mov eax, dword ptr [0xb65200]
// 00847e57  33c4                 xor eax, esp
// 00847e59  50                   push eax
// 00847e5a  8d442414             lea eax, [esp + 0x14]
// 00847e5e  64a300000000         mov dword ptr fs:[0], eax
// 00847e64  8bf9                 mov edi, ecx
// 00847e66  e8a5d3ffff           call 0x845210
// 00847e6b  6a44                 push 0x44
// 00847e6d  e8eeb9faff           call 0x7f3860
// 00847e72  83c404               add esp, 4
// 00847e75  89442410             mov dword ptr [esp + 0x10], eax
// 00847e79  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00847e81  85c0                 test eax, eax
// 00847e83  740b                 je 0x847e90
// 00847e85  8bc8                 mov ecx, eax
// 00847e87  e8d4edffff           call 0x846c60
// 00847e8c  8bd8                 mov ebx, eax
// 00847e8e  eb02                 jmp 0x847e92
// 00847e90  33db                 xor ebx, ebx
// 00847e92  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00847e95  33f6                 xor esi, esi
// 00847e97  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00847e9f  85c0                 test eax, eax
// 00847ea1  7e4b                 jle 0x847eee
// 00847ea3  85f6                 test esi, esi
// 00847ea5  7c11                 jl 0x847eb8
// 00847ea7  3bf0                 cmp esi, eax
// 00847ea9  7d0d                 jge 0x847eb8
// 00847eab  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00847eae  7d59                 jge 0x847f09
// 00847eb0  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00847eb3  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00847eb6  eb02                 jmp 0x847eba
// 00847eb8  33c9                 xor ecx, ecx
// 00847eba  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 00847ec1  7523                 jne 0x847ee6
// 00847ec3  85f6                 test esi, esi
// 00847ec5  7c11                 jl 0x847ed8
// 00847ec7  3bf0                 cmp esi, eax
// 00847ec9  7d0d                 jge 0x847ed8
// 00847ecb  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00847ece  7d39                 jge 0x847f09
// 00847ed0  8b5728               mov edx, dword ptr [edi + 0x28]
// 00847ed3  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00847ed6  eb02                 jmp 0x847eda
// 00847ed8  33c0                 xor eax, eax
// 00847eda  6a01                 push 1
// 00847edc  6aff                 push -1
// 00847ede  50                   push eax
// 00847edf  8bcb                 mov ecx, ebx
// 00847ee1  e8caf3ffff           call 0x8472b0
// 00847ee6  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00847ee9  46                   inc esi
// 00847eea  3bf0                 cmp esi, eax
// 00847eec  7cb5                 jl 0x847ea3
// 00847eee  53                   push ebx
// 00847eef  8bcf                 mov ecx, edi
// 00847ef1  e83ad3ffff           call 0x845230
// 00847ef6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00847efa  64890d00000000       mov dword ptr fs:[0], ecx
// 00847f01  59                   pop ecx
// 00847f02  5f                   pop edi
// 00847f03  5e                   pop esi
// 00847f04  5b                   pop ebx
// 00847f05  83c410               add esp, 0x10
// 00847f08  c3                   ret 
// 00847f09  e8febbfaff           call 0x7f3b0c
// copied from an identical function in another client (function ?CreateOriginalControls@CXTPControls@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp