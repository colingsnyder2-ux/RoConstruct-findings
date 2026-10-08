// roc 2009-06 006aed50  unit: RBX::NormalBreakConnector  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006aed50
//
// 006aed50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006aed54  83f804               cmp eax, 4
// 006aed57  7531                 jne 0x6aed8a
// 006aed59  8b442404             mov eax, dword ptr [esp + 4]
// 006aed5d  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 006aed60  7523                 jne 0x6aed85
// 006aed62  8b542408             mov edx, dword ptr [esp + 8]
// 006aed66  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 006aed69  751a                 jne 0x6aed85
// 006aed6b  8b442410             mov eax, dword ptr [esp + 0x10]
// 006aed6f  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 006aed72  7511                 jne 0x6aed85
// 006aed74  8b542414             mov edx, dword ptr [esp + 0x14]
// 006aed78  3b511c               cmp edx, dword ptr [ecx + 0x1c]
// 006aed7b  7508                 jne 0x6aed85
// 006aed7d  b801000000           mov eax, 1
// 006aed82  c21400               ret 0x14
// 006aed85  33c0                 xor eax, eax
// 006aed87  c21400               ret 0x14
// 006aed8a  83f805               cmp eax, 5
// 006aed8d  751b                 jne 0x6aedaa
// 006aed8f  8b442404             mov eax, dword ptr [esp + 4]
// 006aed93  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 006aed96  75ed                 jne 0x6aed85
// 006aed98  8b542408             mov edx, dword ptr [esp + 8]
// 006aed9c  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 006aed9f  75e4                 jne 0x6aed85
// 006aeda1  8b442410             mov eax, dword ptr [esp + 0x10]
// 006aeda5  3b4118               cmp eax, dword ptr [ecx + 0x18]
// 006aeda8  ebc8                 jmp 0x6aed72
// 006aedaa  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006aedad  8b542404             mov edx, dword ptr [esp + 4]
// 006aedb1  53                   push ebx
// 006aedb2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006aedb6  56                   push esi
// 006aedb7  8b742410             mov esi, dword ptr [esp + 0x10]
// 006aedbb  57                   push edi
// 006aedbc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006aedc0  3bd0                 cmp edx, eax
// 006aedc2  750f                 jne 0x6aedd3
// 006aedc4  3b7110               cmp esi, dword ptr [ecx + 0x10]
// 006aedc7  750a                 jne 0x6aedd3
// 006aedc9  3b7918               cmp edi, dword ptr [ecx + 0x18]
// 006aedcc  7505                 jne 0x6aedd3
// 006aedce  3b591c               cmp ebx, dword ptr [ecx + 0x1c]
// 006aedd1  7413                 je 0x6aede6
// 006aedd3  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 006aedd6  7519                 jne 0x6aedf1
// 006aedd8  3bf0                 cmp esi, eax
// 006aedda  7515                 jne 0x6aedf1
// 006aeddc  3b791c               cmp edi, dword ptr [ecx + 0x1c]
// 006aeddf  7510                 jne 0x6aedf1
// 006aede1  3b5918               cmp ebx, dword ptr [ecx + 0x18]
// 006aede4  750b                 jne 0x6aedf1
// 006aede6  5f                   pop edi
// 006aede7  5e                   pop esi
// 006aede8  b801000000           mov eax, 1
// 006aeded  5b                   pop ebx
// 006aedee  c21400               ret 0x14
// 006aedf1  5f                   pop edi
// 006aedf2  5e                   pop esi
// 006aedf3  33c0                 xor eax, eax
// 006aedf5  5b                   pop ebx
// 006aedf6  c21400               ret 0x14
// library rbxgs/v8world\Contact.cpp (function ?match@GeoPair@RBX@@QAE_NPAVBody@2@0W4GeoPairType@2@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
