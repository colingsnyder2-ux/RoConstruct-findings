// roc 2010-06 00811f20  unit: CXTSplitterWnd  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00811f20
//
// 00811f20  8b442408             mov eax, dword ptr [esp + 8]
// 00811f24  53                   push ebx
// 00811f25  56                   push esi
// 00811f26  57                   push edi
// 00811f27  8bf9                 mov edi, ecx
// 00811f29  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00811f2d  50                   push eax
// 00811f2e  51                   push ecx
// 00811f2f  8bcf                 mov ecx, edi
// 00811f31  e89265f9ff           call 0x7a84c8
// 00811f36  50                   push eax
// 00811f37  e85464f9ff           call 0x7a8390
// 00811f3c  50                   push eax
// 00811f3d  e83c5ef9ff           call 0x7a7d7e
// 00811f42  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00811f46  8bf0                 mov esi, eax
// 00811f48  83c408               add esp, 8
// 00811f4b  3bf3                 cmp esi, ebx
// 00811f4d  7508                 jne 0x811f57
// 00811f4f  5f                   pop edi
// 00811f50  5e                   pop esi
// 00811f51  33c0                 xor eax, eax
// 00811f53  5b                   pop ebx
// 00811f54  c20c00               ret 0xc
// 00811f57  55                   push ebp
// 00811f58  8bce                 mov ecx, esi
// 00811f5a  e8a7b01600           call 0x97d006
// 00811f5f  6a00                 push 0
// 00811f61  8bce                 mov ecx, esi
// 00811f63  8be8                 mov ebp, eax
// 00811f65  e8a6b51600           call 0x97d510
// 00811f6a  55                   push ebp
// 00811f6b  8bcb                 mov ecx, ebx
// 00811f6d  e89eb51600           call 0x97d510
// 00811f72  6a00                 push 0
// 00811f74  8bce                 mov ecx, esi
// 00811f76  e80d5df9ff           call 0x7a7c88
// 00811f7b  6a05                 push 5
// 00811f7d  8bcb                 mov ecx, ebx
// 00811f7f  e8045df9ff           call 0x7a7c88
// 00811f84  8b17                 mov edx, dword ptr [edi]
// 00811f86  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00811f8c  8bcf                 mov ecx, edi
// 00811f8e  ffd0                 call eax
// 00811f90  5d                   pop ebp
// 00811f91  5f                   pop edi
// 00811f92  8bc6                 mov eax, esi
// 00811f94  5e                   pop esi
// 00811f95  5b                   pop ebx
// 00811f96  c20c00               ret 0xc
// copied from an identical function in another client (function ?ReplaceView@CXTSplitterWnd@@UAEPAVCView@@HHPAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1