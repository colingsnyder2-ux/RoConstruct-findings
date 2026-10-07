// roc 2008-06 0078ee70  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078ee70
//
// 0078ee70  53                   push ebx
// 0078ee71  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0078ee75  56                   push esi
// 0078ee76  8bf1                 mov esi, ecx
// 0078ee78  3bf3                 cmp esi, ebx
// 0078ee7a  7505                 jne 0x78ee81
// 0078ee7c  e8c31af1ff           call 0x6a0944
// 0078ee81  8b4308               mov eax, dword ptr [ebx + 8]
// 0078ee84  57                   push edi
// 0078ee85  8b7e08               mov edi, dword ptr [esi + 8]
// 0078ee88  6aff                 push -1
// 0078ee8a  03c7                 add eax, edi
// 0078ee8c  50                   push eax
// 0078ee8d  e83ef3f7ff           call 0x70e1d0
// 0078ee92  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0078ee95  8b5304               mov edx, dword ptr [ebx + 4]
// 0078ee98  8b4604               mov eax, dword ptr [esi + 4]
// 0078ee9b  51                   push ecx
// 0078ee9c  52                   push edx
// 0078ee9d  8d0cb8               lea ecx, [eax + edi*4]
// 0078eea0  51                   push ecx
// 0078eea1  e89afffbff           call 0x74ee40
// 0078eea6  8bc7                 mov eax, edi
// 0078eea8  5f                   pop edi
// 0078eea9  5e                   pop esi
// 0078eeaa  5b                   pop ebx
// 0078eeab  c20400               ret 4
// library xtp-11.2.2/Source\Calendar\XTPCalendarEventLabel.cpp (function ?Append@?$CArray@II@@QAEHABV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarEventLabel.cpp
