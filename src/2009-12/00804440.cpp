// roc 2009-12 00804440  unit: CXTPCommandBar  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804440
//
// 00804440  8b442404             mov eax, dword ptr [esp + 4]
// 00804444  83ec10               sub esp, 0x10
// 00804447  53                   push ebx
// 00804448  56                   push esi
// 00804449  57                   push edi
// 0080444a  50                   push eax
// 0080444b  8bf1                 mov esi, ecx
// 0080444d  e8de1f1200           call 0x926430
// 00804452  8bf8                 mov edi, eax
// 00804454  85ff                 test edi, edi
// 00804456  7432                 je 0x80448a
// 00804458  56                   push esi
// 00804459  8d4c2410             lea ecx, [esp + 0x10]
// 0080445d  e86e6e0400           call 0x84b2d0
// 00804462  8b18                 mov ebx, dword ptr [eax]
// 00804464  8b16                 mov edx, dword ptr [esi]
// 00804466  8b92b0010000         mov edx, dword ptr [edx + 0x1b0]
// 0080446c  83ec10               sub esp, 0x10
// 0080446f  8bcc                 mov ecx, esp
// 00804471  8919                 mov dword ptr [ecx], ebx
// 00804473  8b5804               mov ebx, dword ptr [eax + 4]
// 00804476  895904               mov dword ptr [ecx + 4], ebx
// 00804479  8b5808               mov ebx, dword ptr [eax + 8]
// 0080447c  8b400c               mov eax, dword ptr [eax + 0xc]
// 0080447f  895908               mov dword ptr [ecx + 8], ebx
// 00804482  89410c               mov dword ptr [ecx + 0xc], eax
// 00804485  57                   push edi
// 00804486  8bce                 mov ecx, esi
// 00804488  ffd2                 call edx
// 0080448a  5f                   pop edi
// 0080448b  5e                   pop esi
// 0080448c  b801000000           mov eax, 1
// 00804491  5b                   pop ebx
// 00804492  83c410               add esp, 0x10
// 00804495  c20800               ret 8
// copied from an identical function in another client (function ?OnPrintClient@CXTPCommandBar@@QAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp