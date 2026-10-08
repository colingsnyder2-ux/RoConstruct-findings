// roc 2008-06 00606a50  unit: RBX::ContactConnector  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606a50
//
// 00606a50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00606a54  83f804               cmp eax, 4
// 00606a57  7531                 jne 0x606a8a
// 00606a59  8b442404             mov eax, dword ptr [esp + 4]
// 00606a5d  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 00606a60  7523                 jne 0x606a85
// 00606a62  8b542408             mov edx, dword ptr [esp + 8]
// 00606a66  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 00606a69  751a                 jne 0x606a85
// 00606a6b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00606a6f  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 00606a72  7511                 jne 0x606a85
// 00606a74  8b542414             mov edx, dword ptr [esp + 0x14]
// 00606a78  3b511c               cmp edx, dword ptr [ecx + 0x1c]
// 00606a7b  7508                 jne 0x606a85
// 00606a7d  b801000000           mov eax, 1
// 00606a82  c21400               ret 0x14
// 00606a85  33c0                 xor eax, eax
// 00606a87  c21400               ret 0x14
// 00606a8a  83f805               cmp eax, 5
// 00606a8d  751b                 jne 0x606aaa
// 00606a8f  8b442404             mov eax, dword ptr [esp + 4]
// 00606a93  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 00606a96  75ed                 jne 0x606a85
// 00606a98  8b542408             mov edx, dword ptr [esp + 8]
// 00606a9c  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 00606a9f  75e4                 jne 0x606a85
// 00606aa1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00606aa5  3b4118               cmp eax, dword ptr [ecx + 0x18]
// 00606aa8  ebc8                 jmp 0x606a72
// 00606aaa  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00606aad  8b542404             mov edx, dword ptr [esp + 4]
// 00606ab1  53                   push ebx
// 00606ab2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00606ab6  56                   push esi
// 00606ab7  8b742410             mov esi, dword ptr [esp + 0x10]
// 00606abb  57                   push edi
// 00606abc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00606ac0  3bd0                 cmp edx, eax
// 00606ac2  750f                 jne 0x606ad3
// 00606ac4  3b7110               cmp esi, dword ptr [ecx + 0x10]
// 00606ac7  750a                 jne 0x606ad3
// 00606ac9  3b7918               cmp edi, dword ptr [ecx + 0x18]
// 00606acc  7505                 jne 0x606ad3
// 00606ace  3b591c               cmp ebx, dword ptr [ecx + 0x1c]
// 00606ad1  7413                 je 0x606ae6
// 00606ad3  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 00606ad6  7519                 jne 0x606af1
// 00606ad8  3bf0                 cmp esi, eax
// 00606ada  7515                 jne 0x606af1
// 00606adc  3b791c               cmp edi, dword ptr [ecx + 0x1c]
// 00606adf  7510                 jne 0x606af1
// 00606ae1  3b5918               cmp ebx, dword ptr [ecx + 0x18]
// 00606ae4  750b                 jne 0x606af1
// 00606ae6  5f                   pop edi
// 00606ae7  5e                   pop esi
// 00606ae8  b801000000           mov eax, 1
// 00606aed  5b                   pop ebx
// 00606aee  c21400               ret 0x14
// 00606af1  5f                   pop edi
// 00606af2  5e                   pop esi
// 00606af3  33c0                 xor eax, eax
// 00606af5  5b                   pop ebx
// 00606af6  c21400               ret 0x14
// library rbxgs/v8world\Contact.cpp (function ?match@GeoPair@RBX@@QAE_NPAVBody@2@0W4GeoPairType@2@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
