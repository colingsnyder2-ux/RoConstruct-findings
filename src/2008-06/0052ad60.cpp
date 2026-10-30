// from server: 100% by auto
// roc 2008-06 0052ad60  unit: seg_00520000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052ad60
//
// 0052ad60  53                   push ebx
// 0052ad61  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052ad65  33d2                 xor edx, edx
// 0052ad67  b8f0c99a3b           mov eax, 0x3b9ac9f0
// 0052ad6c  f7f3                 div ebx
// 0052ad6e  55                   push ebp
// 0052ad6f  56                   push esi
// 0052ad70  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052ad74  8b6e04               mov ebp, dword ptr [esi + 4]
// 0052ad77  57                   push edi
// 0052ad78  8bf8                 mov edi, eax
// 0052ad7a  85ff                 test edi, edi
// 0052ad7c  7f13                 jg 0x52ad91
// 0052ad7e  8b06                 mov eax, dword ptr [esi]
// 0052ad80  c7401446000000       mov dword ptr [eax + 0x14], 0x46
// 0052ad87  8b0e                 mov ecx, dword ptr [esi]
// 0052ad89  8b11                 mov edx, dword ptr [ecx]
// 0052ad8b  56                   push esi
// 0052ad8c  ffd2                 call edx
// 0052ad8e  83c404               add esp, 4
// 0052ad91  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052ad95  3bf8                 cmp edi, eax
// 0052ad97  7c02                 jl 0x52ad9b
// 0052ad99  8bf8                 mov edi, eax
// 0052ad9b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052ad9f  03c0                 add eax, eax
// 0052ada1  03c0                 add eax, eax
// 0052ada3  50                   push eax
// 0052ada4  51                   push ecx
// 0052ada5  56                   push esi
// 0052ada6  897d50               mov dword ptr [ebp + 0x50], edi
// 0052ada9  e8a2fdffff           call 0x52ab50
// 0052adae  33f6                 xor esi, esi
// 0052adb0  83c40c               add esp, 0xc
// 0052adb3  8be8                 mov ebp, eax
// 0052adb5  39742420             cmp dword ptr [esp + 0x20], esi
// 0052adb9  7647                 jbe 0x52ae02
// 0052adbb  eb03                 jmp 0x52adc0
// 0052adbd  8d4900               lea ecx, [ecx]
// 0052adc0  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052adc4  2bc6                 sub eax, esi
// 0052adc6  3bf8                 cmp edi, eax
// 0052adc8  7202                 jb 0x52adcc
// 0052adca  8bf8                 mov edi, eax
// 0052adcc  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052add0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052add4  8bd7                 mov edx, edi
// 0052add6  0fafd3               imul edx, ebx
// 0052add9  52                   push edx
// 0052adda  50                   push eax
// 0052addb  51                   push ecx
// 0052addc  e8bffeffff           call 0x52aca0
// 0052ade1  83c40c               add esp, 0xc
// 0052ade4  8bcf                 mov ecx, edi
// 0052ade6  85ff                 test edi, edi
// 0052ade8  7612                 jbe 0x52adfc
// 0052adea  8d9b00000000         lea ebx, [ebx]
// 0052adf0  8944b500             mov dword ptr [ebp + esi*4], eax
// 0052adf4  46                   inc esi
// 0052adf5  03c3                 add eax, ebx
// 0052adf7  83e901               sub ecx, 1
// 0052adfa  75f4                 jne 0x52adf0
// 0052adfc  3b742420             cmp esi, dword ptr [esp + 0x20]
// 0052ae00  72be                 jb 0x52adc0
// 0052ae02  5f                   pop edi
// 0052ae03  5e                   pop esi
// 0052ae04  8bc5                 mov eax, ebp
// 0052ae06  5d                   pop ebp
// 0052ae07  5b                   pop ebx
// 0052ae08  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
