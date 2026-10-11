// roc 2008-06 00558110  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00558110
//
// 00558110  55                   push ebp
// 00558111  8ba908010000         mov ebp, dword ptr [ecx + 0x108]
// 00558117  85ed                 test ebp, ebp
// 00558119  0f848d000000         je 0x5581ac
// 0055811f  56                   push esi
// 00558120  8b750c               mov esi, dword ptr [ebp + 0xc]
// 00558123  3b7510               cmp esi, dword ptr [ebp + 0x10]
// 00558126  7606                 jbe 0x55812e
// 00558128  ff1590288000         call dword ptr [0x802890]
// 0055812e  53                   push ebx
// 0055812f  8b5d00               mov ebx, dword ptr [ebp]
// 00558132  57                   push edi
// 00558133  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00558136  397d0c               cmp dword ptr [ebp + 0xc], edi
// 00558139  7606                 jbe 0x558141
// 0055813b  ff1590288000         call dword ptr [0x802890]
// 00558141  8b4500               mov eax, dword ptr [ebp]
// 00558144  85db                 test ebx, ebx
// 00558146  7404                 je 0x55814c
// 00558148  3bd8                 cmp ebx, eax
// 0055814a  7406                 je 0x558152
// 0055814c  ff1590288000         call dword ptr [0x802890]
// 00558152  3bf7                 cmp esi, edi
// 00558154  7453                 je 0x5581a9
// 00558156  8b3d90288000         mov edi, dword ptr [0x802890]
// 0055815c  85db                 test ebx, ebx
// 0055815e  7528                 jne 0x558188
// 00558160  ffd7                 call edi
// 00558162  33c0                 xor eax, eax
// 00558164  3b7010               cmp esi, dword ptr [eax + 0x10]
// 00558167  7202                 jb 0x55816b
// 00558169  ffd7                 call edi
// 0055816b  8b0e                 mov ecx, dword ptr [esi]
// 0055816d  8b01                 mov eax, dword ptr [ecx]
// 0055816f  8b5038               mov edx, dword ptr [eax + 0x38]
// 00558172  ffd2                 call edx
// 00558174  85c0                 test eax, eax
// 00558176  7419                 je 0x558191
// 00558178  8b542414             mov edx, dword ptr [esp + 0x14]
// 0055817c  8b4a08               mov ecx, dword ptr [edx + 8]
// 0055817f  85c9                 test ecx, ecx
// 00558181  7509                 jne 0x55818c
// 00558183  894204               mov dword ptr [edx + 4], eax
// 00558186  eb06                 jmp 0x55818e
// 00558188  8b03                 mov eax, dword ptr [ebx]
// 0055818a  ebd8                 jmp 0x558164
// 0055818c  8901                 mov dword ptr [ecx], eax
// 0055818e  894208               mov dword ptr [edx + 8], eax
// 00558191  85db                 test ebx, ebx
// 00558193  7510                 jne 0x5581a5
// 00558195  ffd7                 call edi
// 00558197  33c0                 xor eax, eax
// 00558199  3b7010               cmp esi, dword ptr [eax + 0x10]
// 0055819c  7202                 jb 0x5581a0
// 0055819e  ffd7                 call edi
// 005581a0  83c608               add esi, 8
// 005581a3  eb8e                 jmp 0x558133
// 005581a5  8b03                 mov eax, dword ptr [ebx]
// 005581a7  ebf0                 jmp 0x558199
// 005581a9  5f                   pop edi
// 005581aa  5b                   pop ebx
// 005581ab  5e                   pop esi
// 005581ac  5d                   pop ebp
// 005581ad  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ?writeChildren@Instance@RBX@@QAEXPAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
