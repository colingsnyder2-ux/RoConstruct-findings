// roc 2009-12 0084faf0  unit: CXTPPropertyGrid  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084faf0
//
// 0084faf0  8b542408             mov edx, dword ptr [esp + 8]
// 0084faf4  56                   push esi
// 0084faf5  8b742408             mov esi, dword ptr [esp + 8]
// 0084faf9  57                   push edi
// 0084fafa  6a00                 push 0
// 0084fafc  8bf9                 mov edi, ecx
// 0084fafe  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084fb02  8b07                 mov eax, dword ptr [edi]
// 0084fb04  8b4060               mov eax, dword ptr [eax + 0x60]
// 0084fb07  51                   push ecx
// 0084fb08  52                   push edx
// 0084fb09  56                   push esi
// 0084fb0a  6800000346           push 0x46030000
// 0084fb0f  6856fd9900           push 0x99fd56
// 0084fb14  6878bc9f00           push 0x9fbc78
// 0084fb19  6a00                 push 0
// 0084fb1b  8bcf                 mov ecx, edi
// 0084fb1d  ffd0                 call eax
// 0084fb1f  85c0                 test eax, eax
// 0084fb21  7507                 jne 0x84fb2a
// 0084fb23  5f                   pop edi
// 0084fb24  33c0                 xor eax, eax
// 0084fb26  5e                   pop esi
// 0084fb27  c21000               ret 0x10
// 0084fb2a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084fb2e  51                   push ecx
// 0084fb2f  8bcf                 mov ecx, edi
// 0084fb31  e81affffff           call 0x84fa50
// 0084fb36  85c0                 test eax, eax
// 0084fb38  74e9                 je 0x84fb23
// 0084fb3a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0084fb3d  2b4604               sub eax, dword ptr [esi + 4]
// 0084fb40  8b4e08               mov ecx, dword ptr [esi + 8]
// 0084fb43  2b0e                 sub ecx, dword ptr [esi]
// 0084fb45  8b17                 mov edx, dword ptr [edi]
// 0084fb47  8b9258010000         mov edx, dword ptr [edx + 0x158]
// 0084fb4d  50                   push eax
// 0084fb4e  51                   push ecx
// 0084fb4f  8bcf                 mov ecx, edi
// 0084fb51  ffd2                 call edx
// 0084fb53  8b4604               mov eax, dword ptr [esi + 4]
// 0084fb56  8b560c               mov edx, dword ptr [esi + 0xc]
// 0084fb59  8b0e                 mov ecx, dword ptr [esi]
// 0084fb5b  6a44                 push 0x44
// 0084fb5d  2bd0                 sub edx, eax
// 0084fb5f  52                   push edx
// 0084fb60  8b5608               mov edx, dword ptr [esi + 8]
// 0084fb63  2bd1                 sub edx, ecx
// 0084fb65  52                   push edx
// 0084fb66  50                   push eax
// 0084fb67  51                   push ecx
// 0084fb68  6a00                 push 0
// 0084fb6a  8bcf                 mov ecx, edi
// 0084fb6c  e8bb40faff           call 0x7f3c2c
// 0084fb71  5f                   pop edi
// 0084fb72  b801000000           mov eax, 1
// 0084fb77  5e                   pop esi
// 0084fb78  c21000               ret 0x10
// copied from an identical function in another client (function ?Create@CXTPPropertyGrid@@UAEHABUtagRECT@@PAVCWnd@@IK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp