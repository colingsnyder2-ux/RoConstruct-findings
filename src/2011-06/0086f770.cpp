// roc 2011-06 0086f770  unit: CXTSplitterWnd  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f770
//
// 0086f770  8b442408             mov eax, dword ptr [esp + 8]
// 0086f774  53                   push ebx
// 0086f775  56                   push esi
// 0086f776  57                   push edi
// 0086f777  8bf9                 mov edi, ecx
// 0086f779  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086f77d  50                   push eax
// 0086f77e  51                   push ecx
// 0086f77f  8bcf                 mov ecx, edi
// 0086f781  e806b4f9ff           call 0x80ab8c
// 0086f786  50                   push eax
// 0086f787  e8c8b2f9ff           call 0x80aa54
// 0086f78c  50                   push eax
// 0086f78d  e8aaacf9ff           call 0x80a43c
// 0086f792  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0086f796  8bf0                 mov esi, eax
// 0086f798  83c408               add esp, 8
// 0086f79b  3bf3                 cmp esi, ebx
// 0086f79d  7508                 jne 0x86f7a7
// 0086f79f  5f                   pop edi
// 0086f7a0  5e                   pop esi
// 0086f7a1  33c0                 xor eax, eax
// 0086f7a3  5b                   pop ebx
// 0086f7a4  c20c00               ret 0xc
// 0086f7a7  55                   push ebp
// 0086f7a8  8bce                 mov ecx, esi
// 0086f7aa  e867d01500           call 0x9cc816
// 0086f7af  6a00                 push 0
// 0086f7b1  8bce                 mov ecx, esi
// 0086f7b3  8be8                 mov ebp, eax
// 0086f7b5  e8fed31500           call 0x9ccbb8
// 0086f7ba  55                   push ebp
// 0086f7bb  8bcb                 mov ecx, ebx
// 0086f7bd  e8f6d31500           call 0x9ccbb8
// 0086f7c2  6a00                 push 0
// 0086f7c4  8bce                 mov ecx, esi
// 0086f7c6  e87babf9ff           call 0x80a346
// 0086f7cb  6a05                 push 5
// 0086f7cd  8bcb                 mov ecx, ebx
// 0086f7cf  e872abf9ff           call 0x80a346
// 0086f7d4  8b17                 mov edx, dword ptr [edi]
// 0086f7d6  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0086f7dc  8bcf                 mov ecx, edi
// 0086f7de  ffd0                 call eax
// 0086f7e0  5d                   pop ebp
// 0086f7e1  5f                   pop edi
// 0086f7e2  8bc6                 mov eax, esi
// 0086f7e4  5e                   pop esi
// 0086f7e5  5b                   pop ebx
// 0086f7e6  c20c00               ret 0xc
// copied from an identical function in another client (function ?ReplaceView@CXTSplitterWnd@@UAEPAVCView@@HHPAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1