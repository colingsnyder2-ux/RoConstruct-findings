// roc 2011-06 0086f6d0  unit: CXTSplitterWnd  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f6d0
//
// 0086f6d0  8b442408             mov eax, dword ptr [esp + 8]
// 0086f6d4  53                   push ebx
// 0086f6d5  56                   push esi
// 0086f6d6  57                   push edi
// 0086f6d7  8bd9                 mov ebx, ecx
// 0086f6d9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086f6dd  50                   push eax
// 0086f6de  51                   push ecx
// 0086f6df  8bcb                 mov ecx, ebx
// 0086f6e1  e8a6b4f9ff           call 0x80ab8c
// 0086f6e6  50                   push eax
// 0086f6e7  e868b3f9ff           call 0x80aa54
// 0086f6ec  50                   push eax
// 0086f6ed  e84aadf9ff           call 0x80a43c
// 0086f6f2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0086f6f6  8bf0                 mov esi, eax
// 0086f6f8  83c408               add esp, 8
// 0086f6fb  3bf7                 cmp esi, edi
// 0086f6fd  7508                 jne 0x86f707
// 0086f6ff  5f                   pop edi
// 0086f700  5e                   pop esi
// 0086f701  33c0                 xor eax, eax
// 0086f703  5b                   pop ebx
// 0086f704  c20c00               ret 0xc
// 0086f707  55                   push ebp
// 0086f708  8bce                 mov ecx, esi
// 0086f70a  e807d11500           call 0x9cc816
// 0086f70f  8bcf                 mov ecx, edi
// 0086f711  8be8                 mov ebp, eax
// 0086f713  e8fed01500           call 0x9cc816
// 0086f718  6a00                 push 0
// 0086f71a  8bce                 mov ecx, esi
// 0086f71c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0086f720  e821acf9ff           call 0x80a346
// 0086f725  6a00                 push 0
// 0086f727  8bcf                 mov ecx, edi
// 0086f729  e818acf9ff           call 0x80a346
// 0086f72e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0086f732  52                   push edx
// 0086f733  8bce                 mov ecx, esi
// 0086f735  e87ed41500           call 0x9ccbb8
// 0086f73a  55                   push ebp
// 0086f73b  8bcf                 mov ecx, edi
// 0086f73d  e876d41500           call 0x9ccbb8
// 0086f742  6a05                 push 5
// 0086f744  8bce                 mov ecx, esi
// 0086f746  e8fbabf9ff           call 0x80a346
// 0086f74b  6a05                 push 5
// 0086f74d  8bcf                 mov ecx, edi
// 0086f74f  e8f2abf9ff           call 0x80a346
// 0086f754  8b03                 mov eax, dword ptr [ebx]
// 0086f756  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0086f75c  8bcb                 mov ecx, ebx
// 0086f75e  ffd2                 call edx
// 0086f760  5d                   pop ebp
// 0086f761  5f                   pop edi
// 0086f762  5e                   pop esi
// 0086f763  b801000000           mov eax, 1
// 0086f768  5b                   pop ebx
// 0086f769  c20c00               ret 0xc
// copied from an identical function in another client (function ?SwitchView@CXTSplitterWnd@@UAEHHHPAVCView@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1