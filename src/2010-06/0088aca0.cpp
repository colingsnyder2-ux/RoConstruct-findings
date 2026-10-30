// roc 2010-06 0088aca0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088aca0
//
// 0088aca0  83ec14               sub esp, 0x14
// 0088aca3  53                   push ebx
// 0088aca4  55                   push ebp
// 0088aca5  56                   push esi
// 0088aca6  57                   push edi
// 0088aca7  894c2410             mov dword ptr [esp + 0x10], ecx
// 0088acab  e8c0ad0000           call 0x895a70
// 0088acb0  8bc8                 mov ecx, eax
// 0088acb2  e899940000           call 0x894150
// 0088acb7  85c0                 test eax, eax
// 0088acb9  0f84bd000000         je 0x88ad7c
// 0088acbf  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0088acc3  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088acc6  8b4650               mov eax, dword ptr [esi + 0x50]
// 0088acc9  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0088accc  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 0088accf  8b6e4c               mov ebp, dword ptr [esi + 0x4c]
// 0088acd2  89442420             mov dword ptr [esp + 0x20], eax
// 0088acd6  397104               cmp dword ptr [ecx + 4], esi
// 0088acd9  7405                 je 0x88ace0
// 0088acdb  397108               cmp dword ptr [ecx + 8], esi
// 0088acde  7572                 jne 0x88ad52
// 0088ace0  8b11                 mov edx, dword ptr [ecx]
// 0088ace2  8b4248               mov eax, dword ptr [edx + 0x48]
// 0088ace5  ffd0                 call eax
// 0088ace7  83f803               cmp eax, 3
// 0088acea  7766                 ja 0x88ad52
// 0088acec  ff248588ad8800       jmp dword ptr [eax*4 + 0x88ad88]
// 0088acf3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088acf7  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088acfb  83ec10               sub esp, 0x10
// 0088acfe  8bc4                 mov eax, esp
// 0088ad00  8938                 mov dword ptr [eax], edi
// 0088ad02  895804               mov dword ptr [eax + 4], ebx
// 0088ad05  896808               mov dword ptr [eax + 8], ebp
// 0088ad08  56                   push esi
// 0088ad09  89480c               mov dword ptr [eax + 0xc], ecx
// 0088ad0c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088ad10  52                   push edx
// 0088ad11  e86afcffff           call 0x88a980
// 0088ad16  eb3a                 jmp 0x88ad52
// 0088ad18  68f0bb8900           push 0x89bbf0
// 0088ad1d  6a00                 push 0
// 0088ad1f  eb0e                 jmp 0x88ad2f
// 0088ad21  68b0bc8900           push 0x89bcb0
// 0088ad26  eb05                 jmp 0x88ad2d
// 0088ad28  6850bc8900           push 0x89bc50
// 0088ad2d  6a01                 push 1
// 0088ad2f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088ad33  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088ad37  56                   push esi
// 0088ad38  83ec10               sub esp, 0x10
// 0088ad3b  8bc4                 mov eax, esp
// 0088ad3d  8938                 mov dword ptr [eax], edi
// 0088ad3f  895804               mov dword ptr [eax + 4], ebx
// 0088ad42  896808               mov dword ptr [eax + 8], ebp
// 0088ad45  89480c               mov dword ptr [eax + 0xc], ecx
// 0088ad48  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088ad4c  52                   push edx
// 0088ad4d  e80efdffff           call 0x88aa60
// 0088ad52  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088ad56  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 0088ad59  8b11                 mov edx, dword ptr [ecx]
// 0088ad5b  8b5268               mov edx, dword ptr [edx + 0x68]
// 0088ad5e  6a01                 push 1
// 0088ad60  83ec10               sub esp, 0x10
// 0088ad63  8bc4                 mov eax, esp
// 0088ad65  8938                 mov dword ptr [eax], edi
// 0088ad67  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0088ad6b  895804               mov dword ptr [eax + 4], ebx
// 0088ad6e  896808               mov dword ptr [eax + 8], ebp
// 0088ad71  89780c               mov dword ptr [eax + 0xc], edi
// 0088ad74  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088ad78  56                   push esi
// 0088ad79  50                   push eax
// 0088ad7a  ffd2                 call edx
// 0088ad7c  5f                   pop edi
// 0088ad7d  5e                   pop esi
// 0088ad7e  5d                   pop ebp
// 0088ad7f  5b                   pop ebx
// 0088ad80  83c414               add esp, 0x14
// 0088ad83  c20800               ret 8
// 0088ad86  8bff                 mov edi, edi
// 0088ad88  f3ac                 rep lodsb al, byte ptr [esi]
// 0088ad8a  8800                 mov byte ptr [eax], al
// 0088ad8c  21ad880018ad         and dword ptr [ebp - 0x52e7ff78], ebp
// 0088ad92  8800                 mov byte ptr [eax], al
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp