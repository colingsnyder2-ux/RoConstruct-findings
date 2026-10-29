// roc 2009-12 0085de90  unit: CXTSplitterWnd  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085de90
//
// 0085de90  8b442408             mov eax, dword ptr [esp + 8]
// 0085de94  53                   push ebx
// 0085de95  56                   push esi
// 0085de96  57                   push edi
// 0085de97  8bd9                 mov ebx, ecx
// 0085de99  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085de9d  50                   push eax
// 0085de9e  51                   push ecx
// 0085de9f  8bcb                 mov ecx, ebx
// 0085dea1  e8e264f9ff           call 0x7f4388
// 0085dea6  50                   push eax
// 0085dea7  e8a463f9ff           call 0x7f4250
// 0085deac  50                   push eax
// 0085dead  e88c5df9ff           call 0x7f3c3e
// 0085deb2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0085deb6  8bf0                 mov esi, eax
// 0085deb8  83c408               add esp, 8
// 0085debb  3bf7                 cmp esi, edi
// 0085debd  7508                 jne 0x85dec7
// 0085debf  5f                   pop edi
// 0085dec0  5e                   pop esi
// 0085dec1  33c0                 xor eax, eax
// 0085dec3  5b                   pop ebx
// 0085dec4  c20c00               ret 0xc
// 0085dec7  55                   push ebp
// 0085dec8  8bce                 mov ecx, esi
// 0085deca  e8fb870c00           call 0x9266ca
// 0085decf  8bcf                 mov ecx, edi
// 0085ded1  8be8                 mov ebp, eax
// 0085ded3  e8f2870c00           call 0x9266ca
// 0085ded8  6a00                 push 0
// 0085deda  8bce                 mov ecx, esi
// 0085dedc  8944241c             mov dword ptr [esp + 0x1c], eax
// 0085dee0  e8635cf9ff           call 0x7f3b48
// 0085dee5  6a00                 push 0
// 0085dee7  8bcf                 mov ecx, edi
// 0085dee9  e85a5cf9ff           call 0x7f3b48
// 0085deee  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085def2  52                   push edx
// 0085def3  8bce                 mov ecx, esi
// 0085def5  e8d48c0c00           call 0x926bce
// 0085defa  55                   push ebp
// 0085defb  8bcf                 mov ecx, edi
// 0085defd  e8cc8c0c00           call 0x926bce
// 0085df02  6a05                 push 5
// 0085df04  8bce                 mov ecx, esi
// 0085df06  e83d5cf9ff           call 0x7f3b48
// 0085df0b  6a05                 push 5
// 0085df0d  8bcf                 mov ecx, edi
// 0085df0f  e8345cf9ff           call 0x7f3b48
// 0085df14  8b03                 mov eax, dword ptr [ebx]
// 0085df16  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0085df1c  8bcb                 mov ecx, ebx
// 0085df1e  ffd2                 call edx
// 0085df20  5d                   pop ebp
// 0085df21  5f                   pop edi
// 0085df22  5e                   pop esi
// 0085df23  b801000000           mov eax, 1
// 0085df28  5b                   pop ebx
// 0085df29  c20c00               ret 0xc
// copied from an identical function in another client (function ?SwitchView@CXTSplitterWnd@@UAEHHHPAVCView@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1