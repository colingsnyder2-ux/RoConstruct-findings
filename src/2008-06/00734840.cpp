// roc 2008-06 00734840  unit: XTPPaintThemes::CXTPDefaultTheme  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00734840
//
// 00734840  51                   push ecx
// 00734841  53                   push ebx
// 00734842  55                   push ebp
// 00734843  894c2408             mov dword ptr [esp + 8], ecx
// 00734847  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 0073484d  8d6904               lea ebp, [ecx + 4]
// 00734850  83fd16               cmp ebp, 0x16
// 00734853  56                   push esi
// 00734854  57                   push edi
// 00734855  7d05                 jge 0x73485c
// 00734857  bd16000000           mov ebp, 0x16
// 0073485c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00734860  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00734864  c70606000000         mov dword ptr [esi], 6
// 0073486a  896e04               mov dword ptr [esi + 4], ebp
// 0073486d  85c9                 test ecx, ecx
// 0073486f  742f                 je 0x7348a0
// 00734871  837c242400           cmp dword ptr [esp + 0x24], 0
// 00734876  7428                 je 0x7348a0
// 00734878  6a10                 push 0x10
// 0073487a  6a14                 push 0x14
// 0073487c  ba03000000           mov edx, 3
// 00734881  83ec10               sub esp, 0x10
// 00734884  8bc4                 mov eax, esp
// 00734886  8910                 mov dword ptr [eax], edx
// 00734888  8bfa                 mov edi, edx
// 0073488a  8d5a03               lea ebx, [edx + 3]
// 0073488d  897804               mov dword ptr [eax + 4], edi
// 00734890  51                   push ecx
// 00734891  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00734895  895808               mov dword ptr [eax + 8], ebx
// 00734898  89680c               mov dword ptr [eax + 0xc], ebp
// 0073489b  e8d099f7ff           call 0x6ae270
// 007348a0  5f                   pop edi
// 007348a1  8bc6                 mov eax, esi
// 007348a3  5e                   pop esi
// 007348a4  5d                   pop ebp
// 007348a5  5b                   pop ebx
// 007348a6  59                   pop ecx
// 007348a7  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawDialogBarGripper@CXTPDefaultTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
