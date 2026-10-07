// roc 2008-06 00476470  unit: G3D::VARArea  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476470
//
// 00476470  83ec0c               sub esp, 0xc
// 00476473  53                   push ebx
// 00476474  33db                 xor ebx, ebx
// 00476476  381df0ef9600         cmp byte ptr [0x96eff0], bl
// 0047647c  0f8592000000         jne 0x476514
// 00476482  53                   push ebx
// 00476483  ff1530418000         call dword ptr [0x804130]
// 00476489  8d442404             lea eax, [esp + 4]
// 0047648d  50                   push eax
// 0047648e  6858e48100           push 0x81e458
// 00476493  6a01                 push 1
// 00476495  53                   push ebx
// 00476496  6848e48100           push 0x81e448
// 0047649b  895c2418             mov dword ptr [esp + 0x18], ebx
// 0047649f  895c2420             mov dword ptr [esp + 0x20], ebx
// 004764a3  ff1518418000         call dword ptr [0x804118]
// 004764a9  85c0                 test eax, eax
// 004764ab  7c5a                 jl 0x476507
// 004764ad  8b442404             mov eax, dword ptr [esp + 4]
// 004764b1  8b08                 mov ecx, dword ptr [eax]
// 004764b3  8b5148               mov edx, dword ptr [ecx + 0x48]
// 004764b6  53                   push ebx
// 004764b7  50                   push eax
// 004764b8  ffd2                 call edx
// 004764ba  6a04                 push 4
// 004764bc  8d44240c             lea eax, [esp + 0xc]
// 004764c0  53                   push ebx
// 004764c1  50                   push eax
// 004764c2  e869250900           call 0x508a30
// 004764c7  8b442410             mov eax, dword ptr [esp + 0x10]
// 004764cb  83c40c               add esp, 0xc
// 004764ce  8d54240c             lea edx, [esp + 0xc]
// 004764d2  52                   push edx
// 004764d3  68ecef9600           push 0x96efec
// 004764d8  8d542410             lea edx, [esp + 0x10]
// 004764dc  c744241000400010     mov dword ptr [esp + 0x10], 0x10004000
// 004764e4  8b08                 mov ecx, dword ptr [eax]
// 004764e6  52                   push edx
// 004764e7  50                   push eax
// 004764e8  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 004764eb  ffd0                 call eax
// 004764ed  85c0                 test eax, eax
// 004764ef  7d0a                 jge 0x4764fb
// 004764f1  891decef9600         mov dword ptr [0x96efec], ebx
// 004764f7  895c240c             mov dword ptr [esp + 0xc], ebx
// 004764fb  8b442404             mov eax, dword ptr [esp + 4]
// 004764ff  8b08                 mov ecx, dword ptr [eax]
// 00476501  8b5108               mov edx, dword ptr [ecx + 8]
// 00476504  50                   push eax
// 00476505  ffd2                 call edx
// 00476507  ff152c418000         call dword ptr [0x80412c]
// 0047650d  c605f0ef960001       mov byte ptr [0x96eff0], 1
// 00476514  a1ecef9600           mov eax, dword ptr [0x96efec]
// 00476519  33d2                 xor edx, edx
// 0047651b  5b                   pop ebx
// 0047651c  83c40c               add esp, 0xc
// 0047651f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\DXCaps.cpp (function ?videoMemorySize@DXCaps@G3D@@SA_KXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/DXCaps.cpp
