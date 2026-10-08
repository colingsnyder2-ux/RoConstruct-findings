// from server: 100% by auto
// roc 2007-08 005119a0  unit: G3D::_internal::DialogTemplate  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005119a0
//
// 005119a0  8b442404             mov eax, dword ptr [esp + 4]
// 005119a4  53                   push ebx
// 005119a5  55                   push ebp
// 005119a6  56                   push esi
// 005119a7  57                   push edi
// 005119a8  6a00                 push 0
// 005119aa  6a00                 push 0
// 005119ac  6aff                 push -1
// 005119ae  50                   push eax
// 005119af  6a00                 push 0
// 005119b1  6a00                 push 0
// 005119b3  8be9                 mov ebp, ecx
// 005119b5  ff1518d37700         call dword ptr [0x77d318]
// 005119bb  8bf8                 mov edi, eax
// 005119bd  8d1c3f               lea ebx, [edi + edi]
// 005119c0  53                   push ebx
// 005119c1  ff15d0e67700         call dword ptr [0x77e6d0]
// 005119c7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005119cb  83c404               add esp, 4
// 005119ce  57                   push edi
// 005119cf  8bf0                 mov esi, eax
// 005119d1  56                   push esi
// 005119d2  6aff                 push -1
// 005119d4  51                   push ecx
// 005119d5  6a00                 push 0
// 005119d7  6a00                 push 0
// 005119d9  ff1518d37700         call dword ptr [0x77d318]
// 005119df  53                   push ebx
// 005119e0  56                   push esi
// 005119e1  8bcd                 mov ecx, ebp
// 005119e3  e858ffffff           call 0x511940
// 005119e8  56                   push esi
// 005119e9  ff15c4e67700         call dword ptr [0x77e6c4]
// 005119ef  83c404               add esp, 4
// 005119f2  5f                   pop edi
// 005119f3  5e                   pop esi
// 005119f4  5d                   pop ebp
// 005119f5  5b                   pop ebx
// 005119f6  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendString@DialogTemplate@_internal@G3D@@IAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
