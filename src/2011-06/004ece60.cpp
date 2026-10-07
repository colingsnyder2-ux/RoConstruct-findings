// roc 2011-06 004ece60  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ece60
//
// 004ece60  51                   push ecx
// 004ece61  53                   push ebx
// 004ece62  55                   push ebp
// 004ece63  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004ece67  56                   push esi
// 004ece68  57                   push edi
// 004ece69  55                   push ebp
// 004ece6a  8bf1                 mov esi, ecx
// 004ece6c  e85ffdffff           call 0x4ecbd0
// 004ece71  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004ece75  8b4f08               mov ecx, dword ptr [edi + 8]
// 004ece78  f6c107               test cl, 7
// 004ece7b  754a                 jne 0x4ecec7
// 004ece7d  8b06                 mov eax, dword ptr [esi]
// 004ece7f  a807                 test al, 7
// 004ece81  7544                 jne 0x4ecec7
// 004ece83  8b570c               mov edx, dword ptr [edi + 0xc]
// 004ece86  c1e903               shr ecx, 3
// 004ece89  8bdd                 mov ebx, ebp
// 004ece8b  c1eb03               shr ebx, 3
// 004ece8e  c1e803               shr eax, 3
// 004ece91  03460c               add eax, dword ptr [esi + 0xc]
// 004ece94  53                   push ebx
// 004ece95  03d1                 add edx, ecx
// 004ece97  52                   push edx
// 004ece98  50                   push eax
// 004ece99  894c2428             mov dword ptr [esp + 0x28], ecx
// 004ece9d  e83ae73100           call 0x80b5dc
// 004ecea2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004ecea6  8d140b               lea edx, [ebx + ecx]
// 004ecea9  03d2                 add edx, edx
// 004eceab  8d04dd00000000       lea eax, [ebx*8]
// 004eceb2  03d2                 add edx, edx
// 004eceb4  2be8                 sub ebp, eax
// 004eceb6  03d2                 add edx, edx
// 004eceb8  8d04dd00000000       lea eax, [ebx*8]
// 004ecebf  83c40c               add esp, 0xc
// 004ecec2  895708               mov dword ptr [edi + 8], edx
// 004ecec5  0106                 add dword ptr [esi], eax
// 004ecec7  85ed                 test ebp, ebp
// 004ecec9  0f867f000000         jbe 0x4ecf4e
// 004ececf  90                   nop 
// 004eced0  8b4f08               mov ecx, dword ptr [edi + 8]
// 004eced3  4d                   dec ebp
// 004eced4  8d5101               lea edx, [ecx + 1]
// 004eced7  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004ecedb  3b17                 cmp edx, dword ptr [edi]
// 004ecedd  776f                 ja 0x4ecf4e
// 004ecedf  8b06                 mov eax, dword ptr [esi]
// 004ecee1  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 004ecee4  8bd0                 mov edx, eax
// 004ecee6  83e207               and edx, 7
// 004ecee9  89542410             mov dword ptr [esp + 0x10], edx
// 004eceed  8bd1                 mov edx, ecx
// 004eceef  b880000000           mov eax, 0x80
// 004ecef4  7527                 jne 0x4ecf1d
// 004ecef6  83e107               and ecx, 7
// 004ecef9  d3f8                 sar eax, cl
// 004ecefb  c1ea03               shr edx, 3
// 004ecefe  84041a               test byte ptr [edx + ebx], al
// 004ecf01  8b06                 mov eax, dword ptr [esi]
// 004ecf03  740c                 je 0x4ecf11
// 004ecf05  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ecf08  c1e803               shr eax, 3
// 004ecf0b  c6040880             mov byte ptr [eax + ecx], 0x80
// 004ecf0f  eb30                 jmp 0x4ecf41
// 004ecf11  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ecf14  c1e803               shr eax, 3
// 004ecf17  c6041000             mov byte ptr [eax + edx], 0
// 004ecf1b  eb24                 jmp 0x4ecf41
// 004ecf1d  83e107               and ecx, 7
// 004ecf20  d3f8                 sar eax, cl
// 004ecf22  c1ea03               shr edx, 3
// 004ecf25  84041a               test byte ptr [edx + ebx], al
// 004ecf28  8b06                 mov eax, dword ptr [esi]
// 004ecf2a  7415                 je 0x4ecf41
// 004ecf2c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ecf2f  c1e803               shr eax, 3
// 004ecf32  03c1                 add eax, ecx
// 004ecf34  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ecf38  ba80000000           mov edx, 0x80
// 004ecf3d  d3fa                 sar edx, cl
// 004ecf3f  0810                 or byte ptr [eax], dl
// 004ecf41  ff4708               inc dword ptr [edi + 8]
// 004ecf44  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004ecf48  ff06                 inc dword ptr [esi]
// 004ecf4a  85ed                 test ebp, ebp
// 004ecf4c  7782                 ja 0x4eced0
// 004ecf4e  5f                   pop edi
// 004ecf4f  5e                   pop esi
// 004ecf50  5d                   pop ebp
// 004ecf51  5b                   pop ebx
// 004ecf52  59                   pop ecx
// 004ecf53  c20800               ret 8
// library rbx2016-raknet/BitStream.cpp (function ?Write@BitStream@RakNet@@QAEXPAV12@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
