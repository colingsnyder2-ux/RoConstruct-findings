// roc 2008-06 004823d0  unit: G3D::Win32Window  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004823d0
//
// 004823d0  6aff                 push -1
// 004823d2  64a100000000         mov eax, dword ptr fs:[0]
// 004823d8  681d537c00           push 0x7c531d
// 004823dd  50                   push eax
// 004823de  64892500000000       mov dword ptr fs:[0], esp
// 004823e5  83ec08               sub esp, 8
// 004823e8  53                   push ebx
// 004823e9  55                   push ebp
// 004823ea  56                   push esi
// 004823eb  57                   push edi
// 004823ec  8bf9                 mov edi, ecx
// 004823ee  8b4708               mov eax, dword ptr [edi + 8]
// 004823f1  8b2f                 mov ebp, dword ptr [edi]
// 004823f3  8d0cc500000000       lea ecx, [eax*8]
// 004823fa  2bc8                 sub ecx, eax
// 004823fc  03c9                 add ecx, ecx
// 004823fe  03c9                 add ecx, ecx
// 00482400  03c9                 add ecx, ecx
// 00482402  6a10                 push 0x10
// 00482404  51                   push ecx
// 00482405  e876610800           call 0x508580
// 0048240a  8b4f08               mov ecx, dword ptr [edi + 8]
// 0048240d  8b542430             mov edx, dword ptr [esp + 0x30]
// 00482411  83c408               add esp, 8
// 00482414  3bd1                 cmp edx, ecx
// 00482416  8907                 mov dword ptr [edi], eax
// 00482418  7d02                 jge 0x48241c
// 0048241a  8bca                 mov ecx, edx
// 0048241c  8d34cd00000000       lea esi, [ecx*8]
// 00482423  2bf1                 sub esi, ecx
// 00482425  8d3cf0               lea edi, [eax + esi*8]
// 00482428  8bf0                 mov esi, eax
// 0048242a  8bdd                 mov ebx, ebp
// 0048242c  89742410             mov dword ptr [esp + 0x10], esi
// 00482430  3bf7                 cmp esi, edi
// 00482432  733e                 jae 0x482472
// 00482434  eb0a                 jmp 0x482440
// 00482436  8da42400000000       lea esp, [esp]
// 0048243d  8d4900               lea ecx, [ecx]
// 00482440  89742414             mov dword ptr [esp + 0x14], esi
// 00482444  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0048244c  85f6                 test esi, esi
// 0048244e  740c                 je 0x48245c
// 00482450  53                   push ebx
// 00482451  8bce                 mov ecx, esi
// 00482453  e808ffffff           call 0x482360
// 00482458  8b542428             mov edx, dword ptr [esp + 0x28]
// 0048245c  83c638               add esi, 0x38
// 0048245f  83c338               add ebx, 0x38
// 00482462  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0048246a  89742410             mov dword ptr [esp + 0x10], esi
// 0048246e  3bf7                 cmp esi, edi
// 00482470  72ce                 jb 0x482440
// 00482472  8d04d500000000       lea eax, [edx*8]
// 00482479  2bc2                 sub eax, edx
// 0048247b  8d7cc500             lea edi, [ebp + eax*8]
// 0048247f  8bf5                 mov esi, ebp
// 00482481  89742428             mov dword ptr [esp + 0x28], esi
// 00482485  3bef                 cmp ebp, edi
// 00482487  733e                 jae 0x4824c7
// 00482489  bb01000000           mov ebx, 1
// 0048248e  8bff                 mov edi, edi
// 00482490  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00482493  51                   push ecx
// 00482494  895c2424             mov dword ptr [esp + 0x24], ebx
// 00482498  e883580800           call 0x507d20
// 0048249d  33c0                 xor eax, eax
// 0048249f  83c404               add esp, 4
// 004824a2  8d4e04               lea ecx, [esi + 4]
// 004824a5  89462c               mov dword ptr [esi + 0x2c], eax
// 004824a8  894630               mov dword ptr [esi + 0x30], eax
// 004824ab  894634               mov dword ptr [esi + 0x34], eax
// 004824ae  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004824b6  ff1568248000         call dword ptr [0x802468]
// 004824bc  83c638               add esi, 0x38
// 004824bf  89742428             mov dword ptr [esp + 0x28], esi
// 004824c3  3bf7                 cmp esi, edi
// 004824c5  72c9                 jb 0x482490
// 004824c7  55                   push ebp
// 004824c8  e853580800           call 0x507d20
// 004824cd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004824d1  83c404               add esp, 4
// 004824d4  5f                   pop edi
// 004824d5  5e                   pop esi
// 004824d6  5d                   pop ebp
// 004824d7  5b                   pop ebx
// 004824d8  64890d00000000       mov dword ptr fs:[0], ecx
// 004824df  83c414               add esp, 0x14
// 004824e2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?realloc@?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
