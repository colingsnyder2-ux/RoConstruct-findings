// roc 2009-12 00566f40  unit: RakPeer  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00566f40
//
// 00566f40  57                   push edi
// 00566f41  8bf9                 mov edi, ecx
// 00566f43  837f0400             cmp dword ptr [edi + 4], 0
// 00566f47  750d                 jne 0x566f56
// 00566f49  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00566f4d  c60000               mov byte ptr [eax], 0
// 00566f50  33c0                 xor eax, eax
// 00566f52  5f                   pop edi
// 00566f53  c20c00               ret 0xc
// 00566f56  8b4704               mov eax, dword ptr [edi + 4]
// 00566f59  53                   push ebx
// 00566f5a  55                   push ebp
// 00566f5b  8d68ff               lea ebp, [eax - 1]
// 00566f5e  99                   cdq 
// 00566f5f  2bc2                 sub eax, edx
// 00566f61  8b17                 mov edx, dword ptr [edi]
// 00566f63  56                   push esi
// 00566f64  8bf0                 mov esi, eax
// 00566f66  d1fe                 sar esi, 1
// 00566f68  8d0c76               lea ecx, [esi + esi*2]
// 00566f6b  8d048a               lea eax, [edx + ecx*4]
// 00566f6e  50                   push eax
// 00566f6f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00566f73  50                   push eax
// 00566f74  33db                 xor ebx, ebx
// 00566f76  ff542424             call dword ptr [esp + 0x24]
// 00566f7a  83c408               add esp, 8
// 00566f7d  85c0                 test eax, eax
// 00566f7f  7434                 je 0x566fb5
// 00566f81  7d05                 jge 0x566f88
// 00566f83  8d6eff               lea ebp, [esi - 1]
// 00566f86  eb03                 jmp 0x566f8b
// 00566f88  8d5e01               lea ebx, [esi + 1]
// 00566f8b  8bc5                 mov eax, ebp
// 00566f8d  2bc3                 sub eax, ebx
// 00566f8f  99                   cdq 
// 00566f90  2bc2                 sub eax, edx
// 00566f92  8bf0                 mov esi, eax
// 00566f94  d1fe                 sar esi, 1
// 00566f96  03f3                 add esi, ebx
// 00566f98  3bdd                 cmp ebx, ebp
// 00566f9a  7f29                 jg 0x566fc5
// 00566f9c  8b17                 mov edx, dword ptr [edi]
// 00566f9e  8d0c76               lea ecx, [esi + esi*2]
// 00566fa1  8d048a               lea eax, [edx + ecx*4]
// 00566fa4  50                   push eax
// 00566fa5  8b442418             mov eax, dword ptr [esp + 0x18]
// 00566fa9  50                   push eax
// 00566faa  ff542424             call dword ptr [esp + 0x24]
// 00566fae  83c408               add esp, 8
// 00566fb1  85c0                 test eax, eax
// 00566fb3  75cc                 jne 0x566f81
// 00566fb5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00566fb9  8bc6                 mov eax, esi
// 00566fbb  5e                   pop esi
// 00566fbc  5d                   pop ebp
// 00566fbd  5b                   pop ebx
// 00566fbe  c60101               mov byte ptr [ecx], 1
// 00566fc1  5f                   pop edi
// 00566fc2  c20c00               ret 0xc
// 00566fc5  8b542418             mov edx, dword ptr [esp + 0x18]
// 00566fc9  5e                   pop esi
// 00566fca  5d                   pop ebp
// 00566fcb  8bc3                 mov eax, ebx
// 00566fcd  5b                   pop ebx
// 00566fce  c60200               mov byte ptr [edx], 0
// 00566fd1  5f                   pop edi
// 00566fd2  c20c00               ret 0xc
// library rbxgs-raknet/CommandParserInterface.cpp (function ?GetIndexFromKey@?$OrderedList@PBDURegisteredCommand@@$1?RegisteredCommandComp@@YAHABQBDABU1@@Z@DataStructures@@QBEIABQBDPA_NP6AH0ABURegisteredCommand@@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet CommandParserInterface.cpp
