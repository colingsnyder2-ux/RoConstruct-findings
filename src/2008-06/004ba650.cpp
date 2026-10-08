// roc 2008-06 004ba650  unit: RBX::Network::IdSerializer  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba650
//
// 004ba650  83ec08               sub esp, 8
// 004ba653  56                   push esi
// 004ba654  8bf1                 mov esi, ecx
// 004ba656  807e1400             cmp byte ptr [esi + 0x14], 0
// 004ba65a  740d                 je 0x4ba669
// 004ba65c  8b4610               mov eax, dword ptr [esi + 0x10]
// 004ba65f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ba663  3bc8                 cmp ecx, eax
// 004ba665  7c02                 jl 0x4ba669
// 004ba667  742b                 je 0x4ba694
// 004ba669  6840a24b00           push 0x4ba240
// 004ba66e  8d44240b             lea eax, [esp + 0xb]
// 004ba672  50                   push eax
// 004ba673  8d4c2424             lea ecx, [esp + 0x24]
// 004ba677  51                   push ecx
// 004ba678  8bce                 mov ecx, esi
// 004ba67a  e8f1530100           call 0x4cfa70
// 004ba67f  807c240700           cmp byte ptr [esp + 7], 0
// 004ba684  7455                 je 0x4ba6db
// 004ba686  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004ba68a  89460c               mov dword ptr [esi + 0xc], eax
// 004ba68d  895610               mov dword ptr [esi + 0x10], edx
// 004ba690  c6461401             mov byte ptr [esi + 0x14], 1
// 004ba694  55                   push ebp
// 004ba695  57                   push edi
// 004ba696  8d442424             lea eax, [esp + 0x24]
// 004ba69a  50                   push eax
// 004ba69b  8bce                 mov ecx, esi
// 004ba69d  e80efdffff           call 0x4ba3b0
// 004ba6a2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004ba6a6  8b28                 mov ebp, dword ptr [eax]
// 004ba6a8  8b742418             mov esi, dword ptr [esp + 0x18]
// 004ba6ac  6a01                 push 1
// 004ba6ae  6a20                 push 0x20
// 004ba6b0  8d4c2418             lea ecx, [esp + 0x18]
// 004ba6b4  51                   push ecx
// 004ba6b5  8bcf                 mov ecx, edi
// 004ba6b7  c60600               mov byte ptr [esi], 0
// 004ba6ba  e801acfeff           call 0x4a52c0
// 004ba6bf  84c0                 test al, al
// 004ba6c1  740d                 je 0x4ba6d0
// 004ba6c3  8b17                 mov edx, dword ptr [edi]
// 004ba6c5  2b5708               sub edx, dword ptr [edi + 8]
// 004ba6c8  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ba6cc  3bd0                 cmp edx, eax
// 004ba6ce  7314                 jae 0x4ba6e4
// 004ba6d0  5f                   pop edi
// 004ba6d1  5d                   pop ebp
// 004ba6d2  32c0                 xor al, al
// 004ba6d4  5e                   pop esi
// 004ba6d5  83c408               add esp, 8
// 004ba6d8  c21000               ret 0x10
// 004ba6db  32c0                 xor al, al
// 004ba6dd  5e                   pop esi
// 004ba6de  83c408               add esp, 8
// 004ba6e1  c21000               ret 0x10
// 004ba6e4  53                   push ebx
// 004ba6e5  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004ba6e9  56                   push esi
// 004ba6ea  53                   push ebx
// 004ba6eb  50                   push eax
// 004ba6ec  57                   push edi
// 004ba6ed  8bcd                 mov ecx, ebp
// 004ba6ef  e8cc350100           call 0x4cdcc0
// 004ba6f4  3bc3                 cmp eax, ebx
// 004ba6f6  7d10                 jge 0x4ba708
// 004ba6f8  5b                   pop ebx
// 004ba6f9  5f                   pop edi
// 004ba6fa  c6043000             mov byte ptr [eax + esi], 0
// 004ba6fe  5d                   pop ebp
// 004ba6ff  b001                 mov al, 1
// 004ba701  5e                   pop esi
// 004ba702  83c408               add esp, 8
// 004ba705  c21000               ret 0x10
// 004ba708  c6441eff00           mov byte ptr [esi + ebx - 1], 0
// 004ba70d  5b                   pop ebx
// 004ba70e  5f                   pop edi
// 004ba70f  5d                   pop ebp
// 004ba710  b001                 mov al, 1
// 004ba712  5e                   pop esi
// 004ba713  83c408               add esp, 8
// 004ba716  c21000               ret 0x10
// library rbxgs-raknet/StringCompressor.cpp (function ?DecodeString@StringCompressor@@QAE_NPADHPAVBitStream@RakNet@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringCompressor.cpp
