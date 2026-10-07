// roc 2012-06 00639010  unit: G3D::_internal::DialogTemplate  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00639010
//
// 00639010  8b442404             mov eax, dword ptr [esp + 4]
// 00639014  53                   push ebx
// 00639015  55                   push ebp
// 00639016  56                   push esi
// 00639017  57                   push edi
// 00639018  6a00                 push 0
// 0063901a  6a00                 push 0
// 0063901c  6aff                 push -1
// 0063901e  50                   push eax
// 0063901f  6a00                 push 0
// 00639021  6a00                 push 0
// 00639023  8be9                 mov ebp, ecx
// 00639025  ff15cc21b200         call dword ptr [0xb221cc]
// 0063902b  8bf8                 mov edi, eax
// 0063902d  8d1c3f               lea ebx, [edi + edi]
// 00639030  53                   push ebx
// 00639031  ff15f829b200         call dword ptr [0xb229f8]
// 00639037  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0063903b  83c404               add esp, 4
// 0063903e  57                   push edi
// 0063903f  8bf0                 mov esi, eax
// 00639041  56                   push esi
// 00639042  6aff                 push -1
// 00639044  51                   push ecx
// 00639045  6a00                 push 0
// 00639047  6a00                 push 0
// 00639049  ff15cc21b200         call dword ptr [0xb221cc]
// 0063904f  53                   push ebx
// 00639050  56                   push esi
// 00639051  8bcd                 mov ecx, ebp
// 00639053  e858ffffff           call 0x638fb0
// 00639058  56                   push esi
// 00639059  ff15c829b200         call dword ptr [0xb229c8]
// 0063905f  83c404               add esp, 4
// 00639062  5f                   pop edi
// 00639063  5e                   pop esi
// 00639064  5d                   pop ebp
// 00639065  5b                   pop ebx
// 00639066  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendString@DialogTemplate@_internal@G3D@@IAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
