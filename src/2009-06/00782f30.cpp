// roc 2009-06 00782f30  unit: CXTSplitterWnd  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00782f30
//
// 00782f30  8b442408             mov eax, dword ptr [esp + 8]
// 00782f34  53                   push ebx
// 00782f35  56                   push esi
// 00782f36  57                   push edi
// 00782f37  8bf9                 mov edi, ecx
// 00782f39  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00782f3d  50                   push eax
// 00782f3e  51                   push ecx
// 00782f3f  8bcf                 mov ecx, edi
// 00782f41  e81466f9ff           call 0x71955a
// 00782f46  50                   push eax
// 00782f47  e8dc64f9ff           call 0x719428
// 00782f4c  50                   push eax
// 00782f4d  e87460f9ff           call 0x718fc6
// 00782f52  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00782f56  8bf0                 mov esi, eax
// 00782f58  83c408               add esp, 8
// 00782f5b  3bf3                 cmp esi, ebx
// 00782f5d  7508                 jne 0x782f67
// 00782f5f  5f                   pop edi
// 00782f60  5e                   pop esi
// 00782f61  33c0                 xor eax, eax
// 00782f63  5b                   pop ebx
// 00782f64  c20c00               ret 0xc
// 00782f67  55                   push ebp
// 00782f68  8bce                 mov ecx, esi
// 00782f6a  e8ef910c00           call 0x84c15e
// 00782f6f  6a00                 push 0
// 00782f71  8bce                 mov ecx, esi
// 00782f73  8be8                 mov ebp, eax
// 00782f75  e8e8960c00           call 0x84c662
// 00782f7a  55                   push ebp
// 00782f7b  8bcb                 mov ecx, ebx
// 00782f7d  e8e0960c00           call 0x84c662
// 00782f82  6a00                 push 0
// 00782f84  8bce                 mov ecx, esi
// 00782f86  e8955df9ff           call 0x718d20
// 00782f8b  6a05                 push 5
// 00782f8d  8bcb                 mov ecx, ebx
// 00782f8f  e88c5df9ff           call 0x718d20
// 00782f94  8b17                 mov edx, dword ptr [edi]
// 00782f96  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00782f9c  8bcf                 mov ecx, edi
// 00782f9e  ffd0                 call eax
// 00782fa0  5d                   pop ebp
// 00782fa1  5f                   pop edi
// 00782fa2  8bc6                 mov eax, esi
// 00782fa4  5e                   pop esi
// 00782fa5  5b                   pop ebx
// 00782fa6  c20c00               ret 0xc
// copied from an identical function in another client (function ?ReplaceView@CXTSplitterWnd@@UAEPAVCView@@HHPAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1