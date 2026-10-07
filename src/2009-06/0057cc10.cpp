// roc 2009-06 0057cc10  unit: G3D::_internal::DialogTemplate  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057cc10
//
// 0057cc10  8b442404             mov eax, dword ptr [esp + 4]
// 0057cc14  53                   push ebx
// 0057cc15  55                   push ebp
// 0057cc16  56                   push esi
// 0057cc17  57                   push edi
// 0057cc18  6a00                 push 0
// 0057cc1a  6a00                 push 0
// 0057cc1c  6aff                 push -1
// 0057cc1e  50                   push eax
// 0057cc1f  6a00                 push 0
// 0057cc21  6a00                 push 0
// 0057cc23  8be9                 mov ebp, ecx
// 0057cc25  ff1538e38900         call dword ptr [0x89e338]
// 0057cc2b  8bf8                 mov edi, eax
// 0057cc2d  8d1c3f               lea ebx, [edi + edi]
// 0057cc30  53                   push ebx
// 0057cc31  ff1594e98900         call dword ptr [0x89e994]
// 0057cc37  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057cc3b  83c404               add esp, 4
// 0057cc3e  57                   push edi
// 0057cc3f  8bf0                 mov esi, eax
// 0057cc41  56                   push esi
// 0057cc42  6aff                 push -1
// 0057cc44  51                   push ecx
// 0057cc45  6a00                 push 0
// 0057cc47  6a00                 push 0
// 0057cc49  ff1538e38900         call dword ptr [0x89e338]
// 0057cc4f  53                   push ebx
// 0057cc50  56                   push esi
// 0057cc51  8bcd                 mov ecx, ebp
// 0057cc53  e858ffffff           call 0x57cbb0
// 0057cc58  56                   push esi
// 0057cc59  ff15cce98900         call dword ptr [0x89e9cc]
// 0057cc5f  83c404               add esp, 4
// 0057cc62  5f                   pop edi
// 0057cc63  5e                   pop esi
// 0057cc64  5d                   pop ebp
// 0057cc65  5b                   pop ebx
// 0057cc66  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendString@DialogTemplate@_internal@G3D@@IAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
