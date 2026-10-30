// roc 2009-12 00827f80  unit: CXTPReportColumn  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827f80
//
// 00827f80  6aff                 push -1
// 00827f82  6880b79500           push 0x95b780
// 00827f87  64a100000000         mov eax, dword ptr fs:[0]
// 00827f8d  50                   push eax
// 00827f8e  83ec38               sub esp, 0x38
// 00827f91  53                   push ebx
// 00827f92  55                   push ebp
// 00827f93  56                   push esi
// 00827f94  57                   push edi
// 00827f95  a10052b600           mov eax, dword ptr [0xb65200]
// 00827f9a  33c4                 xor eax, esp
// 00827f9c  50                   push eax
// 00827f9d  8d44244c             lea eax, [esp + 0x4c]
// 00827fa1  64a300000000         mov dword ptr fs:[0], eax
// 00827fa7  8bf9                 mov edi, ecx
// 00827fa9  e8e2fcffff           call 0x827c90
// 00827fae  8be8                 mov ebp, eax
// 00827fb0  8b9d00010000         mov ebx, dword ptr [ebp + 0x100]
// 00827fb6  55                   push ebp
// 00827fb7  8d4c243c             lea ecx, [esp + 0x3c]
// 00827fbb  895c2418             mov dword ptr [esp + 0x18], ebx
// 00827fbf  e812c7fcff           call 0x7f46d6
// 00827fc4  8d4330               lea eax, [ebx + 0x30]
// 00827fc7  50                   push eax
// 00827fc8  8d4c243c             lea ecx, [esp + 0x3c]
// 00827fcc  51                   push ecx
// 00827fcd  8d4c2420             lea ecx, [esp + 0x20]
// 00827fd1  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00827fd9  e882360200           call 0x84b660
// 00827fde  8d542438             lea edx, [esp + 0x38]
// 00827fe2  52                   push edx
// 00827fe3  8bcf                 mov ecx, edi
// 00827fe5  c644245801           mov byte ptr [esp + 0x58], 1
// 00827fea  e8f1feffff           call 0x827ee0
// 00827fef  8bf0                 mov esi, eax
// 00827ff1  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00827ff4  83c606               add esi, 6
// 00827ff7  83f8ff               cmp eax, -1
// 00827ffa  743d                 je 0x828039
// 00827ffc  8d442428             lea eax, [esp + 0x28]
// 00828000  50                   push eax
// 00828001  8bcf                 mov ecx, edi
// 00828003  e8c8faffff           call 0x827ad0
// 00828008  8b13                 mov edx, dword ptr [ebx]
// 0082800a  8b18                 mov ebx, dword ptr [eax]
// 0082800c  8b92a8000000         mov edx, dword ptr [edx + 0xa8]
// 00828012  56                   push esi
// 00828013  83ec10               sub esp, 0x10
// 00828016  8bcc                 mov ecx, esp
// 00828018  8919                 mov dword ptr [ecx], ebx
// 0082801a  8b5804               mov ebx, dword ptr [eax + 4]
// 0082801d  895904               mov dword ptr [ecx + 4], ebx
// 00828020  8b5808               mov ebx, dword ptr [eax + 8]
// 00828023  8b400c               mov eax, dword ptr [eax + 0xc]
// 00828026  895908               mov dword ptr [ecx + 8], ebx
// 00828029  55                   push ebp
// 0082802a  89410c               mov dword ptr [ecx + 0xc], eax
// 0082802d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00828031  6a00                 push 0
// 00828033  ffd2                 call edx
// 00828035  8d740602             lea esi, [esi + eax + 2]
// 00828039  8bcf                 mov ecx, edi
// 0082803b  e8a0fbffff           call 0x827be0
// 00828040  85c0                 test eax, eax
// 00828042  7403                 je 0x828047
// 00828044  83c61b               add esi, 0x1b
// 00828047  8b4500               mov eax, dword ptr [ebp]
// 0082804a  8b9008020000         mov edx, dword ptr [eax + 0x208]
// 00828050  57                   push edi
// 00828051  8bcd                 mov ecx, ebp
// 00828053  ffd2                 call edx
// 00828055  3bf0                 cmp esi, eax
// 00828057  7f02                 jg 0x82805b
// 00828059  8bf0                 mov esi, eax
// 0082805b  8bbf90000000         mov edi, dword ptr [edi + 0x90]
// 00828061  3bf7                 cmp esi, edi
// 00828063  7f02                 jg 0x828067
// 00828065  8bf7                 mov esi, edi
// 00828067  8d4c2418             lea ecx, [esp + 0x18]
// 0082806b  c644245400           mov byte ptr [esp + 0x54], 0
// 00828070  e86b360200           call 0x84b6e0
// 00828075  8d4c2438             lea ecx, [esp + 0x38]
// 00828079  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00828081  e84ac6fcff           call 0x7f46d0
// 00828086  8bc6                 mov eax, esi
// 00828088  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0082808c  64890d00000000       mov dword ptr fs:[0], ecx
// 00828093  59                   pop ecx
// 00828094  5f                   pop edi
// 00828095  5e                   pop esi
// 00828096  5d                   pop ebp
// 00828097  5b                   pop ebx
// 00828098  83c444               add esp, 0x44
// 0082809b  c3                   ret 
// copied from an identical function in another client (function ?GetBestFitWidth@CXTPReportColumn@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumn.cpp