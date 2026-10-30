// roc 2009-12 0087de50  unit: XTPPaintThemes::CXTPDefaultTheme  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087de50
//
// 0087de50  51                   push ecx
// 0087de51  53                   push ebx
// 0087de52  55                   push ebp
// 0087de53  894c2408             mov dword ptr [esp + 8], ecx
// 0087de57  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 0087de5d  8d6904               lea ebp, [ecx + 4]
// 0087de60  83fd16               cmp ebp, 0x16
// 0087de63  56                   push esi
// 0087de64  57                   push edi
// 0087de65  7d05                 jge 0x87de6c
// 0087de67  bd16000000           mov ebp, 0x16
// 0087de6c  8b742418             mov esi, dword ptr [esp + 0x18]
// 0087de70  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087de74  c70606000000         mov dword ptr [esi], 6
// 0087de7a  896e04               mov dword ptr [esi + 4], ebp
// 0087de7d  85c9                 test ecx, ecx
// 0087de7f  742f                 je 0x87deb0
// 0087de81  837c242400           cmp dword ptr [esp + 0x24], 0
// 0087de86  7428                 je 0x87deb0
// 0087de88  6a10                 push 0x10
// 0087de8a  6a14                 push 0x14
// 0087de8c  ba03000000           mov edx, 3
// 0087de91  83ec10               sub esp, 0x10
// 0087de94  8bc4                 mov eax, esp
// 0087de96  8910                 mov dword ptr [eax], edx
// 0087de98  8bfa                 mov edi, edx
// 0087de9a  8d5a03               lea ebx, [edx + 3]
// 0087de9d  897804               mov dword ptr [eax + 4], edi
// 0087dea0  51                   push ecx
// 0087dea1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087dea5  895808               mov dword ptr [eax + 8], ebx
// 0087dea8  89680c               mov dword ptr [eax + 0xc], ebp
// 0087deab  e890f9f7ff           call 0x7fd840
// 0087deb0  5f                   pop edi
// 0087deb1  8bc6                 mov eax, esi
// 0087deb3  5e                   pop esi
// 0087deb4  5d                   pop ebp
// 0087deb5  5b                   pop ebx
// 0087deb6  59                   pop ecx
// 0087deb7  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawDialogBarGripper@CXTPDefaultTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
