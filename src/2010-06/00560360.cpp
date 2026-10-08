// from server: 100% by auto
// roc 2010-06 00560360  unit: G3D::_internal::DialogTemplate  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560360
//
// 00560360  8b442404             mov eax, dword ptr [esp + 4]
// 00560364  53                   push ebx
// 00560365  55                   push ebp
// 00560366  56                   push esi
// 00560367  57                   push edi
// 00560368  6a00                 push 0
// 0056036a  6a00                 push 0
// 0056036c  6aff                 push -1
// 0056036e  50                   push eax
// 0056036f  6a00                 push 0
// 00560371  6a00                 push 0
// 00560373  8be9                 mov ebp, ecx
// 00560375  ff15b0a39e00         call dword ptr [0x9ea3b0]
// 0056037b  8bf8                 mov edi, eax
// 0056037d  8d1c3f               lea ebx, [edi + edi]
// 00560380  53                   push ebx
// 00560381  ff15c8a89e00         call dword ptr [0x9ea8c8]
// 00560387  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056038b  83c404               add esp, 4
// 0056038e  57                   push edi
// 0056038f  8bf0                 mov esi, eax
// 00560391  56                   push esi
// 00560392  6aff                 push -1
// 00560394  51                   push ecx
// 00560395  6a00                 push 0
// 00560397  6a00                 push 0
// 00560399  ff15b0a39e00         call dword ptr [0x9ea3b0]
// 0056039f  53                   push ebx
// 005603a0  56                   push esi
// 005603a1  8bcd                 mov ecx, ebp
// 005603a3  e858ffffff           call 0x560300
// 005603a8  56                   push esi
// 005603a9  ff1508aa9e00         call dword ptr [0x9eaa08]
// 005603af  83c404               add esp, 4
// 005603b2  5f                   pop edi
// 005603b3  5e                   pop esi
// 005603b4  5d                   pop ebp
// 005603b5  5b                   pop ebx
// 005603b6  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendString@DialogTemplate@_internal@G3D@@IAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
