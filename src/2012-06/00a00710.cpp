// roc 2012-06 00a00710  unit: XTPPaintThemes::CXTPDefaultTheme  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a00710
//
// 00a00710  51                   push ecx
// 00a00711  53                   push ebx
// 00a00712  55                   push ebp
// 00a00713  894c2408             mov dword ptr [esp + 8], ecx
// 00a00717  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 00a0071d  8d6904               lea ebp, [ecx + 4]
// 00a00720  83fd16               cmp ebp, 0x16
// 00a00723  56                   push esi
// 00a00724  57                   push edi
// 00a00725  7d05                 jge 0xa0072c
// 00a00727  bd16000000           mov ebp, 0x16
// 00a0072c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a00730  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a00734  c70606000000         mov dword ptr [esi], 6
// 00a0073a  896e04               mov dword ptr [esi + 4], ebp
// 00a0073d  85c9                 test ecx, ecx
// 00a0073f  742f                 je 0xa00770
// 00a00741  837c242400           cmp dword ptr [esp + 0x24], 0
// 00a00746  7428                 je 0xa00770
// 00a00748  6a10                 push 0x10
// 00a0074a  6a14                 push 0x14
// 00a0074c  ba03000000           mov edx, 3
// 00a00751  83ec10               sub esp, 0x10
// 00a00754  8bc4                 mov eax, esp
// 00a00756  8910                 mov dword ptr [eax], edx
// 00a00758  8bfa                 mov edi, edx
// 00a0075a  8d5a03               lea ebx, [edx + 3]
// 00a0075d  897804               mov dword ptr [eax + 4], edi
// 00a00760  51                   push ecx
// 00a00761  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a00765  895808               mov dword ptr [eax + 8], ebx
// 00a00768  89680c               mov dword ptr [eax + 0xc], ebp
// 00a0076b  e82073f8ff           call 0x987a90
// 00a00770  5f                   pop edi
// 00a00771  8bc6                 mov eax, esi
// 00a00773  5e                   pop esi
// 00a00774  5d                   pop ebp
// 00a00775  5b                   pop ebx
// 00a00776  59                   pop ecx
// 00a00777  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawDialogBarGripper@CXTPDefaultTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
