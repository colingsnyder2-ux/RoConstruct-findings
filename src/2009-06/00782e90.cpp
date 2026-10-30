// roc 2009-06 00782e90  unit: CXTSplitterWnd  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00782e90
//
// 00782e90  8b442408             mov eax, dword ptr [esp + 8]
// 00782e94  53                   push ebx
// 00782e95  56                   push esi
// 00782e96  57                   push edi
// 00782e97  8bd9                 mov ebx, ecx
// 00782e99  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00782e9d  50                   push eax
// 00782e9e  51                   push ecx
// 00782e9f  8bcb                 mov ecx, ebx
// 00782ea1  e8b466f9ff           call 0x71955a
// 00782ea6  50                   push eax
// 00782ea7  e87c65f9ff           call 0x719428
// 00782eac  50                   push eax
// 00782ead  e81461f9ff           call 0x718fc6
// 00782eb2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00782eb6  8bf0                 mov esi, eax
// 00782eb8  83c408               add esp, 8
// 00782ebb  3bf7                 cmp esi, edi
// 00782ebd  7508                 jne 0x782ec7
// 00782ebf  5f                   pop edi
// 00782ec0  5e                   pop esi
// 00782ec1  33c0                 xor eax, eax
// 00782ec3  5b                   pop ebx
// 00782ec4  c20c00               ret 0xc
// 00782ec7  55                   push ebp
// 00782ec8  8bce                 mov ecx, esi
// 00782eca  e88f920c00           call 0x84c15e
// 00782ecf  8bcf                 mov ecx, edi
// 00782ed1  8be8                 mov ebp, eax
// 00782ed3  e886920c00           call 0x84c15e
// 00782ed8  6a00                 push 0
// 00782eda  8bce                 mov ecx, esi
// 00782edc  8944241c             mov dword ptr [esp + 0x1c], eax
// 00782ee0  e83b5ef9ff           call 0x718d20
// 00782ee5  6a00                 push 0
// 00782ee7  8bcf                 mov ecx, edi
// 00782ee9  e8325ef9ff           call 0x718d20
// 00782eee  8b542418             mov edx, dword ptr [esp + 0x18]
// 00782ef2  52                   push edx
// 00782ef3  8bce                 mov ecx, esi
// 00782ef5  e868970c00           call 0x84c662
// 00782efa  55                   push ebp
// 00782efb  8bcf                 mov ecx, edi
// 00782efd  e860970c00           call 0x84c662
// 00782f02  6a05                 push 5
// 00782f04  8bce                 mov ecx, esi
// 00782f06  e8155ef9ff           call 0x718d20
// 00782f0b  6a05                 push 5
// 00782f0d  8bcf                 mov ecx, edi
// 00782f0f  e80c5ef9ff           call 0x718d20
// 00782f14  8b03                 mov eax, dword ptr [ebx]
// 00782f16  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00782f1c  8bcb                 mov ecx, ebx
// 00782f1e  ffd2                 call edx
// 00782f20  5d                   pop ebp
// 00782f21  5f                   pop edi
// 00782f22  5e                   pop esi
// 00782f23  b801000000           mov eax, 1
// 00782f28  5b                   pop ebx
// 00782f29  c20c00               ret 0xc
// copied from an identical function in another client (function ?SwitchView@CXTSplitterWnd@@UAEHHHPAVCView@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1