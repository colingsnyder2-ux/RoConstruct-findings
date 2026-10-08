// roc 2007-03 005060d0  unit: seg_00500000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005060d0
//
// 005060d0  8b442404             mov eax, dword ptr [esp + 4]
// 005060d4  53                   push ebx
// 005060d5  55                   push ebp
// 005060d6  56                   push esi
// 005060d7  57                   push edi
// 005060d8  6a00                 push 0
// 005060da  6a00                 push 0
// 005060dc  6aff                 push -1
// 005060de  50                   push eax
// 005060df  6a00                 push 0
// 005060e1  6a00                 push 0
// 005060e3  8be9                 mov ebp, ecx
// 005060e5  ff15d8d27700         call dword ptr [0x77d2d8]
// 005060eb  8bf8                 mov edi, eax
// 005060ed  8d1c3f               lea ebx, [edi + edi]
// 005060f0  53                   push ebx
// 005060f1  ff153ce97700         call dword ptr [0x77e93c]
// 005060f7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005060fb  83c404               add esp, 4
// 005060fe  57                   push edi
// 005060ff  8bf0                 mov esi, eax
// 00506101  56                   push esi
// 00506102  6aff                 push -1
// 00506104  51                   push ecx
// 00506105  6a00                 push 0
// 00506107  6a00                 push 0
// 00506109  ff15d8d27700         call dword ptr [0x77d2d8]
// 0050610f  53                   push ebx
// 00506110  56                   push esi
// 00506111  8bcd                 mov ecx, ebp
// 00506113  e858ffffff           call 0x506070
// 00506118  56                   push esi
// 00506119  ff1530e97700         call dword ptr [0x77e930]
// 0050611f  83c404               add esp, 4
// 00506122  5f                   pop edi
// 00506123  5e                   pop esi
// 00506124  5d                   pop ebp
// 00506125  5b                   pop ebx
// 00506126  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\prompt.cpp (function ?AppendString@DialogTemplate@_internal@G3D@@IAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/prompt.cpp
