// from server: 100% by auto
// roc 2008-06 00519270  unit: G3D::_internal::DialogTemplate  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519270
//
// 00519270  8b442404             mov eax, dword ptr [esp + 4]
// 00519274  53                   push ebx
// 00519275  55                   push ebp
// 00519276  56                   push esi
// 00519277  57                   push edi
// 00519278  6a00                 push 0
// 0051927a  6a00                 push 0
// 0051927c  6aff                 push -1
// 0051927e  50                   push eax
// 0051927f  6a00                 push 0
// 00519281  6a00                 push 0
// 00519283  8be9                 mov ebp, ecx
// 00519285  ff151c238000         call dword ptr [0x80231c]
// 0051928b  8bf8                 mov edi, eax
// 0051928d  8d1c3f               lea ebx, [edi + edi]
// 00519290  53                   push ebx
// 00519291  ff15b0288000         call dword ptr [0x8028b0]
// 00519297  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051929b  83c404               add esp, 4
// 0051929e  57                   push edi
// 0051929f  8bf0                 mov esi, eax
// 005192a1  56                   push esi
// 005192a2  6aff                 push -1
// 005192a4  51                   push ecx
// 005192a5  6a00                 push 0
// 005192a7  6a00                 push 0
// 005192a9  ff151c238000         call dword ptr [0x80231c]
// 005192af  53                   push ebx
// 005192b0  56                   push esi
// 005192b1  8bcd                 mov ecx, ebp
// 005192b3  e858ffffff           call 0x519210
// 005192b8  56                   push esi
// 005192b9  ff15c0288000         call dword ptr [0x8028c0]
// 005192bf  83c404               add esp, 4
// 005192c2  5f                   pop edi
// 005192c3  5e                   pop esi
// 005192c4  5d                   pop ebp
// 005192c5  5b                   pop ebx
// 005192c6  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendString@DialogTemplate@_internal@G3D@@IAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
