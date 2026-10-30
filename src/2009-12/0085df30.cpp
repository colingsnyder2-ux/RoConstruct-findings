// roc 2009-12 0085df30  unit: CXTSplitterWnd  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085df30
//
// 0085df30  8b442408             mov eax, dword ptr [esp + 8]
// 0085df34  53                   push ebx
// 0085df35  56                   push esi
// 0085df36  57                   push edi
// 0085df37  8bf9                 mov edi, ecx
// 0085df39  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085df3d  50                   push eax
// 0085df3e  51                   push ecx
// 0085df3f  8bcf                 mov ecx, edi
// 0085df41  e84264f9ff           call 0x7f4388
// 0085df46  50                   push eax
// 0085df47  e80463f9ff           call 0x7f4250
// 0085df4c  50                   push eax
// 0085df4d  e8ec5cf9ff           call 0x7f3c3e
// 0085df52  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0085df56  8bf0                 mov esi, eax
// 0085df58  83c408               add esp, 8
// 0085df5b  3bf3                 cmp esi, ebx
// 0085df5d  7508                 jne 0x85df67
// 0085df5f  5f                   pop edi
// 0085df60  5e                   pop esi
// 0085df61  33c0                 xor eax, eax
// 0085df63  5b                   pop ebx
// 0085df64  c20c00               ret 0xc
// 0085df67  55                   push ebp
// 0085df68  8bce                 mov ecx, esi
// 0085df6a  e85b870c00           call 0x9266ca
// 0085df6f  6a00                 push 0
// 0085df71  8bce                 mov ecx, esi
// 0085df73  8be8                 mov ebp, eax
// 0085df75  e8548c0c00           call 0x926bce
// 0085df7a  55                   push ebp
// 0085df7b  8bcb                 mov ecx, ebx
// 0085df7d  e84c8c0c00           call 0x926bce
// 0085df82  6a00                 push 0
// 0085df84  8bce                 mov ecx, esi
// 0085df86  e8bd5bf9ff           call 0x7f3b48
// 0085df8b  6a05                 push 5
// 0085df8d  8bcb                 mov ecx, ebx
// 0085df8f  e8b45bf9ff           call 0x7f3b48
// 0085df94  8b17                 mov edx, dword ptr [edi]
// 0085df96  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0085df9c  8bcf                 mov ecx, edi
// 0085df9e  ffd0                 call eax
// 0085dfa0  5d                   pop ebp
// 0085dfa1  5f                   pop edi
// 0085dfa2  8bc6                 mov eax, esi
// 0085dfa4  5e                   pop esi
// 0085dfa5  5b                   pop ebx
// 0085dfa6  c20c00               ret 0xc
// copied from an identical function in another client (function ?ReplaceView@CXTSplitterWnd@@UAEPAVCView@@HHPAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1