// roc 2007-08 005ccb00  unit: seg_005c0000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ccb00
//
// 005ccb00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ccb04  83f804               cmp eax, 4
// 005ccb07  7531                 jne 0x5ccb3a
// 005ccb09  8b442404             mov eax, dword ptr [esp + 4]
// 005ccb0d  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 005ccb10  7523                 jne 0x5ccb35
// 005ccb12  8b542408             mov edx, dword ptr [esp + 8]
// 005ccb16  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 005ccb19  751a                 jne 0x5ccb35
// 005ccb1b  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ccb1f  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 005ccb22  7511                 jne 0x5ccb35
// 005ccb24  8b542414             mov edx, dword ptr [esp + 0x14]
// 005ccb28  3b511c               cmp edx, dword ptr [ecx + 0x1c]
// 005ccb2b  7508                 jne 0x5ccb35
// 005ccb2d  b801000000           mov eax, 1
// 005ccb32  c21400               ret 0x14
// 005ccb35  33c0                 xor eax, eax
// 005ccb37  c21400               ret 0x14
// 005ccb3a  83f805               cmp eax, 5
// 005ccb3d  751b                 jne 0x5ccb5a
// 005ccb3f  8b442404             mov eax, dword ptr [esp + 4]
// 005ccb43  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 005ccb46  75ed                 jne 0x5ccb35
// 005ccb48  8b542408             mov edx, dword ptr [esp + 8]
// 005ccb4c  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 005ccb4f  75e4                 jne 0x5ccb35
// 005ccb51  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ccb55  3b4118               cmp eax, dword ptr [ecx + 0x18]
// 005ccb58  ebc8                 jmp 0x5ccb22
// 005ccb5a  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005ccb5d  8b542404             mov edx, dword ptr [esp + 4]
// 005ccb61  3bd0                 cmp edx, eax
// 005ccb63  53                   push ebx
// 005ccb64  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005ccb68  56                   push esi
// 005ccb69  8b742410             mov esi, dword ptr [esp + 0x10]
// 005ccb6d  57                   push edi
// 005ccb6e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005ccb72  750f                 jne 0x5ccb83
// 005ccb74  3b7110               cmp esi, dword ptr [ecx + 0x10]
// 005ccb77  750a                 jne 0x5ccb83
// 005ccb79  3b7918               cmp edi, dword ptr [ecx + 0x18]
// 005ccb7c  7505                 jne 0x5ccb83
// 005ccb7e  3b591c               cmp ebx, dword ptr [ecx + 0x1c]
// 005ccb81  7413                 je 0x5ccb96
// 005ccb83  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 005ccb86  7519                 jne 0x5ccba1
// 005ccb88  3bf0                 cmp esi, eax
// 005ccb8a  7515                 jne 0x5ccba1
// 005ccb8c  3b791c               cmp edi, dword ptr [ecx + 0x1c]
// 005ccb8f  7510                 jne 0x5ccba1
// 005ccb91  3b5918               cmp ebx, dword ptr [ecx + 0x18]
// 005ccb94  750b                 jne 0x5ccba1
// 005ccb96  5f                   pop edi
// 005ccb97  5e                   pop esi
// 005ccb98  b801000000           mov eax, 1
// 005ccb9d  5b                   pop ebx
// 005ccb9e  c21400               ret 0x14
// 005ccba1  5f                   pop edi
// 005ccba2  5e                   pop esi
// 005ccba3  33c0                 xor eax, eax
// 005ccba5  5b                   pop ebx
// 005ccba6  c21400               ret 0x14
// library rbxgs/v8world\Contact.cpp (function ?match@GeoPair@RBX@@QAE_NPAVBody@2@0W4GeoPairType@2@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
