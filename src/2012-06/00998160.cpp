// roc 2012-06 00998160  unit: CXTPPropertyGridItemConstraint  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998160
//
// 00998160  53                   push ebx
// 00998161  8b5904               mov ebx, dword ptr [ecx + 4]
// 00998164  85db                 test ebx, ebx
// 00998166  7505                 jne 0x99816d
// 00998168  e853a2feff           call 0x9823c0
// 0099816d  55                   push ebp
// 0099816e  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00998172  56                   push esi
// 00998173  8b7500               mov esi, dword ptr [ebp]
// 00998176  85f6                 test esi, esi
// 00998178  7505                 jne 0x99817f
// 0099817a  e841a2feff           call 0x9823c0
// 0099817f  57                   push edi
// 00998180  83feff               cmp esi, -1
// 00998183  751e                 jne 0x9981a3
// 00998185  8b7908               mov edi, dword ptr [ecx + 8]
// 00998188  33c0                 xor eax, eax
// 0099818a  85ff                 test edi, edi
// 0099818c  7615                 jbe 0x9981a3
// 0099818e  8bd3                 mov edx, ebx
// 00998190  8b32                 mov esi, dword ptr [edx]
// 00998192  85f6                 test esi, esi
// 00998194  750d                 jne 0x9981a3
// 00998196  40                   inc eax
// 00998197  83c204               add edx, 4
// 0099819a  3bc7                 cmp eax, edi
// 0099819c  72f2                 jb 0x998190
// 0099819e  e81da2feff           call 0x9823c0
// 009981a3  8b7e08               mov edi, dword ptr [esi + 8]
// 009981a6  85ff                 test edi, edi
// 009981a8  7524                 jne 0x9981ce
// 009981aa  8b4908               mov ecx, dword ptr [ecx + 8]
// 009981ad  8b460c               mov eax, dword ptr [esi + 0xc]
// 009981b0  33d2                 xor edx, edx
// 009981b2  f7f1                 div ecx
// 009981b4  42                   inc edx
// 009981b5  3bd1                 cmp edx, ecx
// 009981b7  7315                 jae 0x9981ce
// 009981b9  8d0493               lea eax, [ebx + edx*4]
// 009981bc  8d642400             lea esp, [esp]
// 009981c0  8b38                 mov edi, dword ptr [eax]
// 009981c2  85ff                 test edi, edi
// 009981c4  7508                 jne 0x9981ce
// 009981c6  42                   inc edx
// 009981c7  83c004               add eax, 4
// 009981ca  3bd1                 cmp edx, ecx
// 009981cc  72f2                 jb 0x9981c0
// 009981ce  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009981d2  897d00               mov dword ptr [ebp], edi
// 009981d5  8b06                 mov eax, dword ptr [esi]
// 009981d7  8901                 mov dword ptr [ecx], eax
// 009981d9  8b5604               mov edx, dword ptr [esi + 4]
// 009981dc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009981e0  5f                   pop edi
// 009981e1  5e                   pop esi
// 009981e2  5d                   pop ebp
// 009981e3  8910                 mov dword ptr [eax], edx
// 009981e5  5b                   pop ebx
// 009981e6  c20c00               ret 0xc
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ?GetNextAssoc@?$CMap@JJII@@QBEXAAPAU__POSITION@@AAJAAI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
