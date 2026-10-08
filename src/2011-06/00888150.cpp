// roc 2011-06 00888150  unit: XTPPaintThemes::CXTPDefaultTheme  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00888150
//
// 00888150  51                   push ecx
// 00888151  53                   push ebx
// 00888152  55                   push ebp
// 00888153  894c2408             mov dword ptr [esp + 8], ecx
// 00888157  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 0088815d  8d6904               lea ebp, [ecx + 4]
// 00888160  83fd16               cmp ebp, 0x16
// 00888163  56                   push esi
// 00888164  57                   push edi
// 00888165  7d05                 jge 0x88816c
// 00888167  bd16000000           mov ebp, 0x16
// 0088816c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00888170  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00888174  c70606000000         mov dword ptr [esi], 6
// 0088817a  896e04               mov dword ptr [esi + 4], ebp
// 0088817d  85c9                 test ecx, ecx
// 0088817f  742f                 je 0x8881b0
// 00888181  837c242400           cmp dword ptr [esp + 0x24], 0
// 00888186  7428                 je 0x8881b0
// 00888188  6a10                 push 0x10
// 0088818a  6a14                 push 0x14
// 0088818c  ba03000000           mov edx, 3
// 00888191  83ec10               sub esp, 0x10
// 00888194  8bc4                 mov eax, esp
// 00888196  8910                 mov dword ptr [eax], edx
// 00888198  8bfa                 mov edi, edx
// 0088819a  8d5a03               lea ebx, [edx + 3]
// 0088819d  897804               mov dword ptr [eax + 4], edi
// 008881a0  51                   push ecx
// 008881a1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008881a5  895808               mov dword ptr [eax + 8], ebx
// 008881a8  89680c               mov dword ptr [eax + 0xc], ebp
// 008881ab  e80076f8ff           call 0x80f7b0
// 008881b0  5f                   pop edi
// 008881b1  8bc6                 mov eax, esi
// 008881b3  5e                   pop esi
// 008881b4  5d                   pop ebp
// 008881b5  5b                   pop ebx
// 008881b6  59                   pop ecx
// 008881b7  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawDialogBarGripper@CXTPDefaultTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
