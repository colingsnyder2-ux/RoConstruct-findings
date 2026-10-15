// roc 2008-06 005cc690  unit: RBX::VCamera::?$FactoryProduct  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc690
//
// 005cc690  83ec0c               sub esp, 0xc
// 005cc693  d9442414             fld dword ptr [esp + 0x14]
// 005cc697  53                   push ebx
// 005cc698  55                   push ebp
// 005cc699  56                   push esi
// 005cc69a  57                   push edi
// 005cc69b  83ec08               sub esp, 8
// 005cc69e  d95c2404             fstp dword ptr [esp + 4]
// 005cc6a2  8bd9                 mov ebx, ecx
// 005cc6a4  d9442428             fld dword ptr [esp + 0x28]
// 005cc6a8  8dab74010000         lea ebp, [ebx + 0x174]
// 005cc6ae  d91c24               fstp dword ptr [esp]
// 005cc6b1  55                   push ebp
// 005cc6b2  e809200100           call 0x5de6c0
// 005cc6b7  83c40c               add esp, 0xc
// 005cc6ba  8dbba4010000         lea edi, [ebx + 0x1a4]
// 005cc6c0  b909000000           mov ecx, 9
// 005cc6c5  8bf5                 mov esi, ebp
// 005cc6c7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005cc6c9  d905608b8200         fld dword ptr [0x828b60]
// 005cc6cf  d95c2424             fstp dword ptr [esp + 0x24]
// 005cc6d3  6a02                 push 2
// 005cc6d5  8d442414             lea eax, [esp + 0x14]
// 005cc6d9  50                   push eax
// 005cc6da  8bcd                 mov ecx, ebp
// 005cc6dc  e85f6bf4ff           call 0x513240
// 005cc6e1  5f                   pop edi
// 005cc6e2  d900                 fld dword ptr [eax]
// 005cc6e4  5e                   pop esi
// 005cc6e5  d944241c             fld dword ptr [esp + 0x1c]
// 005cc6e9  5d                   pop ebp
// 005cc6ea  dcc9                 fmul st(1), st(0)
// 005cc6ec  d94004               fld dword ptr [eax + 4]
// 005cc6ef  d8c9                 fmul st(1)
// 005cc6f1  d94008               fld dword ptr [eax + 8]
// 005cc6f4  deca                 fmulp st(2)
// 005cc6f6  d944241c             fld dword ptr [esp + 0x1c]
// 005cc6fa  dccb                 fmul st(3), st(0)
// 005cc6fc  dcc9                 fmul st(1), st(0)
// 005cc6fe  deca                 fmulp st(2)
// 005cc700  d983c8010000         fld dword ptr [ebx + 0x1c8]
// 005cc706  dee3                 fsubrp st(3)
// 005cc708  d8abcc010000         fsubr dword ptr [ebx + 0x1cc]
// 005cc70e  d983d0010000         fld dword ptr [ebx + 0x1d0]
// 005cc714  dee2                 fsubrp st(2)
// 005cc716  d9ca                 fxch st(2)
// 005cc718  d99b98010000         fstp dword ptr [ebx + 0x198]
// 005cc71e  d9c9                 fxch st(1)
// 005cc720  d99b9c010000         fstp dword ptr [ebx + 0x19c]
// 005cc726  d99ba0010000         fstp dword ptr [ebx + 0x1a0]
// 005cc72c  c683e401000001       mov byte ptr [ebx + 0x1e4], 1
// 005cc733  5b                   pop ebx
// 005cc734  83c40c               add esp, 0xc
// 005cc737  c20c00               ret 0xc
// library rbxgs/roc_unit_5cb02dbeca051387.cpp (function ?setHeadingElevationDistance@Camera@RBX@@AAEXMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_5cb02dbeca051387.cpp
