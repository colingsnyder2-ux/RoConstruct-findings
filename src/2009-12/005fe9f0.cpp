// roc 2009-12 005fe9f0  unit: G3D::_internal::DialogTemplate  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe9f0
//
// 005fe9f0  8b442404             mov eax, dword ptr [esp + 4]
// 005fe9f4  53                   push ebx
// 005fe9f5  55                   push ebp
// 005fe9f6  56                   push esi
// 005fe9f7  57                   push edi
// 005fe9f8  6a00                 push 0
// 005fe9fa  6a00                 push 0
// 005fe9fc  6aff                 push -1
// 005fe9fe  50                   push eax
// 005fe9ff  6a00                 push 0
// 005fea01  6a00                 push 0
// 005fea03  8be9                 mov ebp, ecx
// 005fea05  ff1540b29800         call dword ptr [0x98b240]
// 005fea0b  8bf8                 mov edi, eax
// 005fea0d  8d1c3f               lea ebx, [edi + edi]
// 005fea10  53                   push ebx
// 005fea11  ff1578b79800         call dword ptr [0x98b778]
// 005fea17  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005fea1b  83c404               add esp, 4
// 005fea1e  57                   push edi
// 005fea1f  8bf0                 mov esi, eax
// 005fea21  56                   push esi
// 005fea22  6aff                 push -1
// 005fea24  51                   push ecx
// 005fea25  6a00                 push 0
// 005fea27  6a00                 push 0
// 005fea29  ff1540b29800         call dword ptr [0x98b240]
// 005fea2f  53                   push ebx
// 005fea30  56                   push esi
// 005fea31  8bcd                 mov ecx, ebp
// 005fea33  e858ffffff           call 0x5fe990
// 005fea38  56                   push esi
// 005fea39  ff1540b79800         call dword ptr [0x98b740]
// 005fea3f  83c404               add esp, 4
// 005fea42  5f                   pop edi
// 005fea43  5e                   pop esi
// 005fea44  5d                   pop ebp
// 005fea45  5b                   pop ebx
// 005fea46  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendString@DialogTemplate@_internal@G3D@@IAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
