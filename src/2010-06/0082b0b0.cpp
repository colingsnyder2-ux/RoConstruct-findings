// roc 2010-06 0082b0b0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082b0b0
//
// 0082b0b0  51                   push ecx
// 0082b0b1  53                   push ebx
// 0082b0b2  55                   push ebp
// 0082b0b3  894c2408             mov dword ptr [esp + 8], ecx
// 0082b0b7  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 0082b0bd  8d6904               lea ebp, [ecx + 4]
// 0082b0c0  83fd16               cmp ebp, 0x16
// 0082b0c3  56                   push esi
// 0082b0c4  57                   push edi
// 0082b0c5  7d05                 jge 0x82b0cc
// 0082b0c7  bd16000000           mov ebp, 0x16
// 0082b0cc  8b742418             mov esi, dword ptr [esp + 0x18]
// 0082b0d0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082b0d4  c70606000000         mov dword ptr [esi], 6
// 0082b0da  896e04               mov dword ptr [esi + 4], ebp
// 0082b0dd  85c9                 test ecx, ecx
// 0082b0df  742f                 je 0x82b110
// 0082b0e1  837c242400           cmp dword ptr [esp + 0x24], 0
// 0082b0e6  7428                 je 0x82b110
// 0082b0e8  6a10                 push 0x10
// 0082b0ea  6a14                 push 0x14
// 0082b0ec  ba03000000           mov edx, 3
// 0082b0f1  83ec10               sub esp, 0x10
// 0082b0f4  8bc4                 mov eax, esp
// 0082b0f6  8910                 mov dword ptr [eax], edx
// 0082b0f8  8bfa                 mov edi, edx
// 0082b0fa  8d5a03               lea ebx, [edx + 3]
// 0082b0fd  897804               mov dword ptr [eax + 4], edi
// 0082b100  51                   push ecx
// 0082b101  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0082b105  895808               mov dword ptr [eax + 8], ebx
// 0082b108  89680c               mov dword ptr [eax + 0xc], ebp
// 0082b10b  e80022f8ff           call 0x7ad310
// 0082b110  5f                   pop edi
// 0082b111  8bc6                 mov eax, esi
// 0082b113  5e                   pop esi
// 0082b114  5d                   pop ebp
// 0082b115  5b                   pop ebx
// 0082b116  59                   pop ecx
// 0082b117  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawDialogBarGripper@CXTPDefaultTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
