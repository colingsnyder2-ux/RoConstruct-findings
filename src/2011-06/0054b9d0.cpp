// roc 2011-06 0054b9d0  unit: G3D::_internal::DialogTemplate  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054b9d0
//
// 0054b9d0  8b442404             mov eax, dword ptr [esp + 4]
// 0054b9d4  53                   push ebx
// 0054b9d5  55                   push ebp
// 0054b9d6  56                   push esi
// 0054b9d7  57                   push edi
// 0054b9d8  6a00                 push 0
// 0054b9da  6a00                 push 0
// 0054b9dc  6aff                 push -1
// 0054b9de  50                   push eax
// 0054b9df  6a00                 push 0
// 0054b9e1  6a00                 push 0
// 0054b9e3  8be9                 mov ebp, ecx
// 0054b9e5  ff159003a400         call dword ptr [0xa40390]
// 0054b9eb  8bf8                 mov edi, eax
// 0054b9ed  8d1c3f               lea ebx, [edi + edi]
// 0054b9f0  53                   push ebx
// 0054b9f1  ff15400aa400         call dword ptr [0xa40a40]
// 0054b9f7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0054b9fb  83c404               add esp, 4
// 0054b9fe  57                   push edi
// 0054b9ff  8bf0                 mov esi, eax
// 0054ba01  56                   push esi
// 0054ba02  6aff                 push -1
// 0054ba04  51                   push ecx
// 0054ba05  6a00                 push 0
// 0054ba07  6a00                 push 0
// 0054ba09  ff159003a400         call dword ptr [0xa40390]
// 0054ba0f  53                   push ebx
// 0054ba10  56                   push esi
// 0054ba11  8bcd                 mov ecx, ebp
// 0054ba13  e858ffffff           call 0x54b970
// 0054ba18  56                   push esi
// 0054ba19  ff15740aa400         call dword ptr [0xa40a74]
// 0054ba1f  83c404               add esp, 4
// 0054ba22  5f                   pop edi
// 0054ba23  5e                   pop esi
// 0054ba24  5d                   pop ebp
// 0054ba25  5b                   pop ebx
// 0054ba26  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendString@DialogTemplate@_internal@G3D@@IAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
