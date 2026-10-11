// roc 2009-12 00442420  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00442420
//
// 00442420  6aff                 push -1
// 00442422  6872009400           push 0x940072
// 00442427  64a100000000         mov eax, dword ptr fs:[0]
// 0044242d  50                   push eax
// 0044242e  64892500000000       mov dword ptr fs:[0], esp
// 00442435  83ec38               sub esp, 0x38
// 00442438  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0044243c  53                   push ebx
// 0044243d  56                   push esi
// 0044243e  57                   push edi
// 0044243f  8bf1                 mov esi, ecx
// 00442441  50                   push eax
// 00442442  8d4c242c             lea ecx, [esp + 0x2c]
// 00442446  51                   push ecx
// 00442447  8bce                 mov ecx, esi
// 00442449  e892feffff           call 0x4422e0
// 0044244e  8bf8                 mov edi, eax
// 00442450  8b542454             mov edx, dword ptr [esp + 0x54]
// 00442454  52                   push edx
// 00442455  8d442410             lea eax, [esp + 0x10]
// 00442459  50                   push eax
// 0044245a  8bce                 mov ecx, esi
// 0044245c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00442464  e877feffff           call 0x4422e0
// 00442469  57                   push edi
// 0044246a  50                   push eax
// 0044246b  c644245401           mov byte ptr [esp + 0x54], 1
// 00442470  ff157cb69800         call dword ptr [0x98b67c]
// 00442476  83c408               add esp, 8
// 00442479  8d4c240c             lea ecx, [esp + 0xc]
// 0044247d  8ad8                 mov bl, al
// 0044247f  c644244c00           mov byte ptr [esp + 0x4c], 0
// 00442484  ff15e4b69800         call dword ptr [0x98b6e4]
// 0044248a  8d4c2428             lea ecx, [esp + 0x28]
// 0044248e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00442496  ff15e4b69800         call dword ptr [0x98b6e4]
// 0044249c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004424a0  5f                   pop edi
// 004424a1  5e                   pop esi
// 004424a2  8ac3                 mov al, bl
// 004424a4  5b                   pop ebx
// 004424a5  64890d00000000       mov dword ptr fs:[0], ecx
// 004424ac  83c444               add esp, 0x44
// 004424af  c20800               ret 8
// library openrbx-client/App\v8datamodel\Message.cpp (function ?equalValues@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Message.cpp
