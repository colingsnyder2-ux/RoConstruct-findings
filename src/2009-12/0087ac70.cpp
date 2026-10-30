// roc 2009-12 0087ac70  unit: CXTPControlGallery  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087ac70
//
// 0087ac70  83ec28               sub esp, 0x28
// 0087ac73  55                   push ebp
// 0087ac74  8be9                 mov ebp, ecx
// 0087ac76  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 0087ac7c  896c2404             mov dword ptr [esp + 4], ebp
// 0087ac80  85c0                 test eax, eax
// 0087ac82  0f8457010000         je 0x87addf
// 0087ac88  83782000             cmp dword ptr [eax + 0x20], 0
// 0087ac8c  0f844d010000         je 0x87addf
// 0087ac92  e849d5ffff           call 0x8781e0
// 0087ac97  85c0                 test eax, eax
// 0087ac99  0f8440010000         je 0x87addf
// 0087ac9f  53                   push ebx
// 0087aca0  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0087aca4  83fbff               cmp ebx, -1
// 0087aca7  0f8431010000         je 0x87adde
// 0087acad  8bcd                 mov ecx, ebp
// 0087acaf  e82cd5ffff           call 0x8781e0
// 0087acb4  3bd8                 cmp ebx, eax
// 0087acb6  0f8d22010000         jge 0x87adde
// 0087acbc  3b9d54020000         cmp ebx, dword ptr [ebp + 0x254]
// 0087acc2  0f8d16010000         jge 0x87adde
// 0087acc8  56                   push esi
// 0087acc9  57                   push edi
// 0087acca  8d8d4c020000         lea ecx, [ebp + 0x24c]
// 0087acd0  53                   push ebx
// 0087acd1  e83af5ffff           call 0x87a210
// 0087acd6  8bf0                 mov esi, eax
// 0087acd8  56                   push esi
// 0087acd9  8d44241c             lea eax, [esp + 0x1c]
// 0087acdd  50                   push eax
// 0087acde  ff1564cc9800         call dword ptr [0x98cc64]
// 0087ace4  8b8d0c020000         mov ecx, dword ptr [ebp + 0x20c]
// 0087acea  f7d9                 neg ecx
// 0087acec  51                   push ecx
// 0087aced  6a00                 push 0
// 0087acef  8d542420             lea edx, [esp + 0x20]
// 0087acf3  52                   push edx
// 0087acf4  ff156ccc9800         call dword ptr [0x98cc6c]
// 0087acfa  8d442428             lea eax, [esp + 0x28]
// 0087acfe  50                   push eax
// 0087acff  8bcd                 mov ecx, ebp
// 0087ad01  e84ad7ffff           call 0x878450
// 0087ad06  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0087ad0a  397c241c             cmp dword ptr [esp + 0x1c], edi
// 0087ad0e  0f8db1000000         jge 0x87adc5
// 0087ad14  8b4604               mov eax, dword ptr [esi + 4]
// 0087ad17  2bc7                 sub eax, edi
// 0087ad19  83bd2802000000       cmp dword ptr [ebp + 0x228], 0
// 0087ad20  89442414             mov dword ptr [esp + 0x14], eax
// 0087ad24  0f8485000000         je 0x87adaf
// 0087ad2a  8d43ff               lea eax, [ebx - 1]
// 0087ad2d  8944243c             mov dword ptr [esp + 0x3c], eax
// 0087ad31  85c0                 test eax, eax
// 0087ad33  7c7a                 jl 0x87adaf
// 0087ad35  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0087ad39  eb09                 jmp 0x87ad44
// 0087ad3b  eb03                 jmp 0x87ad40
// 0087ad3d  8d4900               lea ecx, [ecx]
// 0087ad40  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087ad44  50                   push eax
// 0087ad45  8d8d4c020000         lea ecx, [ebp + 0x24c]
// 0087ad4b  e8c0f4ffff           call 0x87a210
// 0087ad50  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0087ad53  83794800             cmp dword ptr [ecx + 0x48], 0
// 0087ad57  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087ad5b  7418                 je 0x87ad75
// 0087ad5d  8b5604               mov edx, dword ptr [esi + 4]
// 0087ad60  2b5004               sub edx, dword ptr [eax + 4]
// 0087ad63  8beb                 mov ebp, ebx
// 0087ad65  2be9                 sub ebp, ecx
// 0087ad67  2bef                 sub ebp, edi
// 0087ad69  036c241c             add ebp, dword ptr [esp + 0x1c]
// 0087ad6d  3bd5                 cmp edx, ebp
// 0087ad6f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0087ad73  7e31                 jle 0x87ada6
// 0087ad75  8b5604               mov edx, dword ptr [esi + 4]
// 0087ad78  2b5004               sub edx, dword ptr [eax + 4]
// 0087ad7b  8bc3                 mov eax, ebx
// 0087ad7d  2bc1                 sub eax, ecx
// 0087ad7f  2bc7                 sub eax, edi
// 0087ad81  0344241c             add eax, dword ptr [esp + 0x1c]
// 0087ad85  3bd0                 cmp edx, eax
// 0087ad87  7f26                 jg 0x87adaf
// 0087ad89  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0087ad8e  79b0                 jns 0x87ad40
// 0087ad90  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087ad94  51                   push ecx
// 0087ad95  8bcd                 mov ecx, ebp
// 0087ad97  e834feffff           call 0x87abd0
// 0087ad9c  5f                   pop edi
// 0087ad9d  5e                   pop esi
// 0087ad9e  5b                   pop ebx
// 0087ad9f  5d                   pop ebp
// 0087ada0  83c428               add esp, 0x28
// 0087ada3  c20400               ret 4
// 0087ada6  8b4004               mov eax, dword ptr [eax + 4]
// 0087ada9  2bc7                 sub eax, edi
// 0087adab  89442414             mov dword ptr [esp + 0x14], eax
// 0087adaf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087adb3  51                   push ecx
// 0087adb4  8bcd                 mov ecx, ebp
// 0087adb6  e815feffff           call 0x87abd0
// 0087adbb  5f                   pop edi
// 0087adbc  5e                   pop esi
// 0087adbd  5b                   pop ebx
// 0087adbe  5d                   pop ebp
// 0087adbf  83c428               add esp, 0x28
// 0087adc2  c20400               ret 4
// 0087adc5  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087adc9  39442424             cmp dword ptr [esp + 0x24], eax
// 0087adcd  7e0d                 jle 0x87addc
// 0087adcf  8b560c               mov edx, dword ptr [esi + 0xc]
// 0087add2  2bd0                 sub edx, eax
// 0087add4  52                   push edx
// 0087add5  8bcd                 mov ecx, ebp
// 0087add7  e8f4fdffff           call 0x87abd0
// 0087addc  5f                   pop edi
// 0087addd  5e                   pop esi
// 0087adde  5b                   pop ebx
// 0087addf  5d                   pop ebp
// 0087ade0  83c428               add esp, 0x28
// 0087ade3  c20400               ret 4
// copied from an identical function in another client (function ?EnsureVisible@CXTPControlGallery@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp