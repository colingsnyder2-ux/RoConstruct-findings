// roc 2007-03 0054af90  unit: seg_00540000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054af90
//
// 0054af90  55                   push ebp
// 0054af91  56                   push esi
// 0054af92  8bf1                 mov esi, ecx
// 0054af94  8b6e04               mov ebp, dword ptr [esi + 4]
// 0054af97  57                   push edi
// 0054af98  8b7d00               mov edi, dword ptr [ebp]
// 0054af9b  eb03                 jmp 0x54afa0
// 0054af9d  8d4900               lea ecx, [ecx]
// 0054afa0  3bfd                 cmp edi, ebp
// 0054afa2  7452                 je 0x54aff6
// 0054afa4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0054afa7  a801                 test al, 1
// 0054afa9  7404                 je 0x54afaf
// 0054afab  a804                 test al, 4
// 0054afad  7517                 jne 0x54afc6
// 0054afaf  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054afb2  7506                 jne 0x54afba
// 0054afb4  ff1544e97700         call dword ptr [0x77e944]
// 0054afba  8b4f08               mov ecx, dword ptr [edi + 8]
// 0054afbd  8b01                 mov eax, dword ptr [ecx]
// 0054afbf  8b5044               mov edx, dword ptr [eax + 0x44]
// 0054afc2  6a00                 push 0
// 0054afc4  ffd2                 call edx
// 0054afc6  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054afc9  7506                 jne 0x54afd1
// 0054afcb  ff1544e97700         call dword ptr [0x77e944]
// 0054afd1  8b4f08               mov ecx, dword ptr [edi + 8]
// 0054afd4  85c9                 test ecx, ecx
// 0054afd6  c7470800000000       mov dword ptr [edi + 8], 0
// 0054afdd  7408                 je 0x54afe7
// 0054afdf  8b01                 mov eax, dword ptr [ecx]
// 0054afe1  8b10                 mov edx, dword ptr [eax]
// 0054afe3  6a01                 push 1
// 0054afe5  ffd2                 call edx
// 0054afe7  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054afea  7506                 jne 0x54aff2
// 0054afec  ff1544e97700         call dword ptr [0x77e944]
// 0054aff2  8b3f                 mov edi, dword ptr [edi]
// 0054aff4  ebaa                 jmp 0x54afa0
// 0054aff6  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054aff9  8b01                 mov eax, dword ptr [ecx]
// 0054affb  8909                 mov dword ptr [ecx], ecx
// 0054affd  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054b000  894904               mov dword ptr [ecx + 4], ecx
// 0054b003  3b4604               cmp eax, dword ptr [esi + 4]
// 0054b006  c7460800000000       mov dword ptr [esi + 8], 0
// 0054b00d  7413                 je 0x54b022
// 0054b00f  90                   nop 
// 0054b010  8b38                 mov edi, dword ptr [eax]
// 0054b012  50                   push eax
// 0054b013  e8d8300d00           call 0x61e0f0
// 0054b018  83c404               add esp, 4
// 0054b01b  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054b01e  8bc7                 mov eax, edi
// 0054b020  75ee                 jne 0x54b010
// 0054b022  83661cfc             and dword ptr [esi + 0x1c], 0xfffffffc
// 0054b026  5f                   pop edi
// 0054b027  5e                   pop esi
// 0054b028  5d                   pop ebp
// 0054b029  c3                   ret 
// copied from an identical function in another client (function ?reset@chain_impl@?$chain_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@QAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_8be15fbf9b64785c.cpp