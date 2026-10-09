// roc 2008-06 006474e0  unit: RBX::GlueJoint  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006474e0
//
// 006474e0  53                   push ebx
// 006474e1  55                   push ebp
// 006474e2  56                   push esi
// 006474e3  57                   push edi
// 006474e4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006474e8  8bcf                 mov ecx, edi
// 006474ea  e8a106faff           call 0x5e7b90
// 006474ef  8bf0                 mov esi, eax
// 006474f1  85f6                 test esi, esi
// 006474f3  7433                 je 0x647528
// 006474f5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006474f9  8da42400000000       lea esp, [esp]
// 00647500  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00647503  3bfb                 cmp edi, ebx
// 00647505  7503                 jne 0x64750a
// 00647507  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0064750a  55                   push ebp
// 0064750b  56                   push esi
// 0064750c  57                   push edi
// 0064750d  53                   push ebx
// 0064750e  e81dffffff           call 0x647430
// 00647513  83c410               add esp, 0x10
// 00647516  84c0                 test al, al
// 00647518  7515                 jne 0x64752f
// 0064751a  56                   push esi
// 0064751b  8bcf                 mov ecx, edi
// 0064751d  e87e06faff           call 0x5e7ba0
// 00647522  8bf0                 mov esi, eax
// 00647524  85f6                 test esi, esi
// 00647526  75d8                 jne 0x647500
// 00647528  5f                   pop edi
// 00647529  5e                   pop esi
// 0064752a  5d                   pop ebp
// 0064752b  33c0                 xor eax, eax
// 0064752d  5b                   pop ebx
// 0064752e  c3                   ret 
// 0064752f  5f                   pop edi
// 00647530  5e                   pop esi
// 00647531  5d                   pop ebp
// 00647532  8bc3                 mov eax, ebx
// 00647534  5b                   pop ebx
// 00647535  c3                   ret 
// library openrbx-client/App\v8world\Clump2.cpp (function ?findParent@PrimIterator@RBX@@SAPAVPrimitive@2@PAV32@W4SearchType@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Clump2.cpp
