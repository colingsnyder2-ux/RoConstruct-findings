// roc 2007-03 00625500  unit: seg_00620000  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00625500
//
// 00625500  53                   push ebx
// 00625501  8b5904               mov ebx, dword ptr [ecx + 4]
// 00625504  85db                 test ebx, ebx
// 00625506  7505                 jne 0x62550d
// 00625508  e8a18effff           call 0x61e3ae
// 0062550d  55                   push ebp
// 0062550e  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00625512  56                   push esi
// 00625513  8b7500               mov esi, dword ptr [ebp]
// 00625516  85f6                 test esi, esi
// 00625518  7505                 jne 0x62551f
// 0062551a  e88f8effff           call 0x61e3ae
// 0062551f  83feff               cmp esi, -1
// 00625522  57                   push edi
// 00625523  7520                 jne 0x625545
// 00625525  8b7908               mov edi, dword ptr [ecx + 8]
// 00625528  33c0                 xor eax, eax
// 0062552a  85ff                 test edi, edi
// 0062552c  7617                 jbe 0x625545
// 0062552e  8bd3                 mov edx, ebx
// 00625530  8b32                 mov esi, dword ptr [edx]
// 00625532  85f6                 test esi, esi
// 00625534  750f                 jne 0x625545
// 00625536  83c001               add eax, 1
// 00625539  83c204               add edx, 4
// 0062553c  3bc7                 cmp eax, edi
// 0062553e  72f0                 jb 0x625530
// 00625540  e8698effff           call 0x61e3ae
// 00625545  8b7e08               mov edi, dword ptr [esi + 8]
// 00625548  85ff                 test edi, edi
// 0062554a  7524                 jne 0x625570
// 0062554c  8b4908               mov ecx, dword ptr [ecx + 8]
// 0062554f  8b460c               mov eax, dword ptr [esi + 0xc]
// 00625552  33d2                 xor edx, edx
// 00625554  f7f1                 div ecx
// 00625556  83c201               add edx, 1
// 00625559  3bd1                 cmp edx, ecx
// 0062555b  7313                 jae 0x625570
// 0062555d  8d0493               lea eax, [ebx + edx*4]
// 00625560  8b38                 mov edi, dword ptr [eax]
// 00625562  85ff                 test edi, edi
// 00625564  750a                 jne 0x625570
// 00625566  83c201               add edx, 1
// 00625569  83c004               add eax, 4
// 0062556c  3bd1                 cmp edx, ecx
// 0062556e  72f0                 jb 0x625560
// 00625570  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00625574  897d00               mov dword ptr [ebp], edi
// 00625577  8b06                 mov eax, dword ptr [esi]
// 00625579  8901                 mov dword ptr [ecx], eax
// 0062557b  8b5604               mov edx, dword ptr [esi + 4]
// 0062557e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00625582  5f                   pop edi
// 00625583  5e                   pop esi
// 00625584  5d                   pop ebp
// 00625585  8910                 mov dword ptr [eax], edx
// 00625587  5b                   pop ebx
// 00625588  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarController.cpp (function ?GetNextAssoc@?$CMap@JJII@@QBEXAAPAU__POSITION@@AAJAAI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarController.cpp
