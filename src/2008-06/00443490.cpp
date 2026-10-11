// roc 2008-06 00443490  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443490
//
// 00443490  6aff                 push -1
// 00443492  6802c57c00           push 0x7cc502
// 00443497  64a100000000         mov eax, dword ptr fs:[0]
// 0044349d  50                   push eax
// 0044349e  64892500000000       mov dword ptr fs:[0], esp
// 004434a5  83ec38               sub esp, 0x38
// 004434a8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004434ac  53                   push ebx
// 004434ad  56                   push esi
// 004434ae  57                   push edi
// 004434af  8bf1                 mov esi, ecx
// 004434b1  50                   push eax
// 004434b2  8d4c242c             lea ecx, [esp + 0x2c]
// 004434b6  51                   push ecx
// 004434b7  8bce                 mov ecx, esi
// 004434b9  e8f2721d00           call 0x61a7b0
// 004434be  8bf8                 mov edi, eax
// 004434c0  8b542454             mov edx, dword ptr [esp + 0x54]
// 004434c4  52                   push edx
// 004434c5  8d442410             lea eax, [esp + 0x10]
// 004434c9  50                   push eax
// 004434ca  8bce                 mov ecx, esi
// 004434cc  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004434d4  e8d7721d00           call 0x61a7b0
// 004434d9  57                   push edi
// 004434da  50                   push eax
// 004434db  c644245401           mov byte ptr [esp + 0x54], 1
// 004434e0  ff1544248000         call dword ptr [0x802444]
// 004434e6  83c408               add esp, 8
// 004434e9  8d4c240c             lea ecx, [esp + 0xc]
// 004434ed  8ad8                 mov bl, al
// 004434ef  c644244c00           mov byte ptr [esp + 0x4c], 0
// 004434f4  ff1568248000         call dword ptr [0x802468]
// 004434fa  8d4c2428             lea ecx, [esp + 0x28]
// 004434fe  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00443506  ff1568248000         call dword ptr [0x802468]
// 0044350c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00443510  5f                   pop edi
// 00443511  5e                   pop esi
// 00443512  8ac3                 mov al, bl
// 00443514  5b                   pop ebx
// 00443515  64890d00000000       mov dword ptr fs:[0], ecx
// 0044351c  83c444               add esp, 0x44
// 0044351f  c20800               ret 8
// library openrbx-client/App\v8datamodel\Message.cpp (function ?equalValues@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Message.cpp
