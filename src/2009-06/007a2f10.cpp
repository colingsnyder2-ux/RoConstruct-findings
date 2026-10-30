// roc 2009-06 007a2f10  unit: XTPPaintThemes::CXTPDefaultTheme  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a2f10
//
// 007a2f10  51                   push ecx
// 007a2f11  53                   push ebx
// 007a2f12  55                   push ebp
// 007a2f13  894c2408             mov dword ptr [esp + 8], ecx
// 007a2f17  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 007a2f1d  8d6904               lea ebp, [ecx + 4]
// 007a2f20  83fd16               cmp ebp, 0x16
// 007a2f23  56                   push esi
// 007a2f24  57                   push edi
// 007a2f25  7d05                 jge 0x7a2f2c
// 007a2f27  bd16000000           mov ebp, 0x16
// 007a2f2c  8b742418             mov esi, dword ptr [esp + 0x18]
// 007a2f30  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a2f34  c70606000000         mov dword ptr [esi], 6
// 007a2f3a  896e04               mov dword ptr [esi + 4], ebp
// 007a2f3d  85c9                 test ecx, ecx
// 007a2f3f  742f                 je 0x7a2f70
// 007a2f41  837c242400           cmp dword ptr [esp + 0x24], 0
// 007a2f46  7428                 je 0x7a2f70
// 007a2f48  6a10                 push 0x10
// 007a2f4a  6a14                 push 0x14
// 007a2f4c  ba03000000           mov edx, 3
// 007a2f51  83ec10               sub esp, 0x10
// 007a2f54  8bc4                 mov eax, esp
// 007a2f56  8910                 mov dword ptr [eax], edx
// 007a2f58  8bfa                 mov edi, edx
// 007a2f5a  8d5a03               lea ebx, [edx + 3]
// 007a2f5d  897804               mov dword ptr [eax + 4], edi
// 007a2f60  51                   push ecx
// 007a2f61  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007a2f65  895808               mov dword ptr [eax + 8], ebx
// 007a2f68  89680c               mov dword ptr [eax + 0xc], ebp
// 007a2f6b  e810faf7ff           call 0x722980
// 007a2f70  5f                   pop edi
// 007a2f71  8bc6                 mov eax, esi
// 007a2f73  5e                   pop esi
// 007a2f74  5d                   pop ebp
// 007a2f75  5b                   pop ebx
// 007a2f76  59                   pop ecx
// 007a2f77  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawDialogBarGripper@CXTPDefaultTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
