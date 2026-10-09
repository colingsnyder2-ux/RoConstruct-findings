// roc 2008-06 00606c50  unit: RBX::ContactConnector  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606c50
//
// 00606c50  53                   push ebx
// 00606c51  56                   push esi
// 00606c52  8bf1                 mov esi, ecx
// 00606c54  8b06                 mov eax, dword ptr [esi]
// 00606c56  8b5018               mov edx, dword ptr [eax + 0x18]
// 00606c59  ffd2                 call edx
// 00606c5b  8ad8                 mov bl, al
// 00606c5d  84db                 test bl, bl
// 00606c5f  7424                 je 0x606c85
// 00606c61  837e20ff             cmp dword ptr [esi + 0x20], -1
// 00606c65  7510                 jne 0x606c77
// 00606c67  8b4610               mov eax, dword ptr [esi + 0x10]
// 00606c6a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00606c6d  50                   push eax
// 00606c6e  51                   push ecx
// 00606c6f  e8bc08feff           call 0x5e7530
// 00606c74  83c408               add esp, 8
// 00606c77  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00606c7b  895620               mov dword ptr [esi + 0x20], edx
// 00606c7e  5e                   pop esi
// 00606c7f  8ac3                 mov al, bl
// 00606c81  5b                   pop ebx
// 00606c82  c20400               ret 4
// 00606c85  8b4620               mov eax, dword ptr [esi + 0x20]
// 00606c88  3b44240c             cmp eax, dword ptr [esp + 0xc]
// 00606c8c  7d07                 jge 0x606c95
// 00606c8e  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 00606c95  5e                   pop esi
// 00606c96  8ac3                 mov al, bl
// 00606c98  5b                   pop ebx
// 00606c99  c20400               ret 4
// library openrbx-client/App\v8world\Contact.cpp (function ?step@Contact@RBX@@QAE_NH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Contact.cpp
