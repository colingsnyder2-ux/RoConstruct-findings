// roc 2007-08 006ebd30  unit: CXTPDockingPanePaintManager  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ebd30
//
// 006ebd30  53                   push ebx
// 006ebd31  8b5904               mov ebx, dword ptr [ecx + 4]
// 006ebd34  85db                 test ebx, ebx
// 006ebd36  7505                 jne 0x6ebd3d
// 006ebd38  e8e341f4ff           call 0x62ff20
// 006ebd3d  55                   push ebp
// 006ebd3e  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006ebd42  56                   push esi
// 006ebd43  8b7500               mov esi, dword ptr [ebp]
// 006ebd46  85f6                 test esi, esi
// 006ebd48  7505                 jne 0x6ebd4f
// 006ebd4a  e8d141f4ff           call 0x62ff20
// 006ebd4f  83feff               cmp esi, -1
// 006ebd52  57                   push edi
// 006ebd53  7520                 jne 0x6ebd75
// 006ebd55  8b7908               mov edi, dword ptr [ecx + 8]
// 006ebd58  33c0                 xor eax, eax
// 006ebd5a  85ff                 test edi, edi
// 006ebd5c  7617                 jbe 0x6ebd75
// 006ebd5e  8bd3                 mov edx, ebx
// 006ebd60  8b32                 mov esi, dword ptr [edx]
// 006ebd62  85f6                 test esi, esi
// 006ebd64  750f                 jne 0x6ebd75
// 006ebd66  83c001               add eax, 1
// 006ebd69  83c204               add edx, 4
// 006ebd6c  3bc7                 cmp eax, edi
// 006ebd6e  72f0                 jb 0x6ebd60
// 006ebd70  e8ab41f4ff           call 0x62ff20
// 006ebd75  8b7e08               mov edi, dword ptr [esi + 8]
// 006ebd78  85ff                 test edi, edi
// 006ebd7a  7524                 jne 0x6ebda0
// 006ebd7c  8b4908               mov ecx, dword ptr [ecx + 8]
// 006ebd7f  8b460c               mov eax, dword ptr [esi + 0xc]
// 006ebd82  33d2                 xor edx, edx
// 006ebd84  f7f1                 div ecx
// 006ebd86  83c201               add edx, 1
// 006ebd89  3bd1                 cmp edx, ecx
// 006ebd8b  7313                 jae 0x6ebda0
// 006ebd8d  8d0493               lea eax, [ebx + edx*4]
// 006ebd90  8b38                 mov edi, dword ptr [eax]
// 006ebd92  85ff                 test edi, edi
// 006ebd94  750a                 jne 0x6ebda0
// 006ebd96  83c201               add edx, 1
// 006ebd99  83c004               add eax, 4
// 006ebd9c  3bd1                 cmp edx, ecx
// 006ebd9e  72f0                 jb 0x6ebd90
// 006ebda0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ebda4  897d00               mov dword ptr [ebp], edi
// 006ebda7  8b06                 mov eax, dword ptr [esi]
// 006ebda9  8901                 mov dword ptr [ecx], eax
// 006ebdab  8b5604               mov edx, dword ptr [esi + 4]
// 006ebdae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006ebdb2  5f                   pop edi
// 006ebdb3  5e                   pop esi
// 006ebdb4  5d                   pop ebp
// 006ebdb5  8910                 mov dword ptr [eax], edx
// 006ebdb7  5b                   pop ebx
// 006ebdb8  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarController.cpp (function ?GetNextAssoc@?$CMap@JJII@@QBEXAAPAU__POSITION@@AAJAAI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarController.cpp
