// roc 2010-06 005fe120  unit: RBX::VProtectedString::?$TypedPropertyDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fe120
//
// 005fe120  6aff                 push -1
// 005fe122  6830939900           push 0x999330
// 005fe127  64a100000000         mov eax, dword ptr fs:[0]
// 005fe12d  50                   push eax
// 005fe12e  64892500000000       mov dword ptr fs:[0], esp
// 005fe135  83ec38               sub esp, 0x38
// 005fe138  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 005fe13c  53                   push ebx
// 005fe13d  56                   push esi
// 005fe13e  57                   push edi
// 005fe13f  8bf1                 mov esi, ecx
// 005fe141  50                   push eax
// 005fe142  8d4c242c             lea ecx, [esp + 0x2c]
// 005fe146  51                   push ecx
// 005fe147  8bce                 mov ecx, esi
// 005fe149  e802fbffff           call 0x5fdc50
// 005fe14e  8bf8                 mov edi, eax
// 005fe150  8b542454             mov edx, dword ptr [esp + 0x54]
// 005fe154  52                   push edx
// 005fe155  8d442410             lea eax, [esp + 0x10]
// 005fe159  50                   push eax
// 005fe15a  8bce                 mov ecx, esi
// 005fe15c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 005fe164  e8e7faffff           call 0x5fdc50
// 005fe169  57                   push edi
// 005fe16a  50                   push eax
// 005fe16b  c644245401           mov byte ptr [esp + 0x54], 1
// 005fe170  ff158ca49e00         call dword ptr [0x9ea48c]
// 005fe176  83c408               add esp, 8
// 005fe179  8d4c240c             lea ecx, [esp + 0xc]
// 005fe17d  8ad8                 mov bl, al
// 005fe17f  c644244c00           mov byte ptr [esp + 0x4c], 0
// 005fe184  ff1500a49e00         call dword ptr [0x9ea400]
// 005fe18a  8d4c2428             lea ecx, [esp + 0x28]
// 005fe18e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 005fe196  ff1500a49e00         call dword ptr [0x9ea400]
// 005fe19c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005fe1a0  5f                   pop edi
// 005fe1a1  5e                   pop esi
// 005fe1a2  8ac3                 mov al, bl
// 005fe1a4  5b                   pop ebx
// 005fe1a5  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe1ac  83c444               add esp, 0x44
// 005fe1af  c20800               ret 8
// library openrbx-client/App\v8datamodel\Message.cpp (function ?equalValues@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Message.cpp
