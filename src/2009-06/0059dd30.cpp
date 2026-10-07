// roc 2009-06 0059dd30  unit: seg_00590000  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059dd30
//
// 0059dd30  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059dd34  53                   push ebx
// 0059dd35  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0059dd39  2b03                 sub eax, dword ptr [ebx]
// 0059dd3b  56                   push esi
// 0059dd3c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059dd40  57                   push edi
// 0059dd41  8bbe8c010000         mov edi, dword ptr [esi + 0x18c]
// 0059dd47  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0059dd4a  3bc1                 cmp eax, ecx
// 0059dd4c  7602                 jbe 0x59dd50
// 0059dd4e  8bc1                 mov eax, ecx
// 0059dd50  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 0059dd56  50                   push eax
// 0059dd57  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059dd5f  8b470c               mov eax, dword ptr [edi + 0xc]
// 0059dd62  8d542414             lea edx, [esp + 0x14]
// 0059dd66  52                   push edx
// 0059dd67  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059dd6b  50                   push eax
// 0059dd6c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059dd70  52                   push edx
// 0059dd71  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059dd75  50                   push eax
// 0059dd76  8b4104               mov eax, dword ptr [ecx + 4]
// 0059dd79  52                   push edx
// 0059dd7a  56                   push esi
// 0059dd7b  ffd0                 call eax
// 0059dd7d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059dd81  8b03                 mov eax, dword ptr [ebx]
// 0059dd83  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 0059dd89  52                   push edx
// 0059dd8a  8b542440             mov edx, dword ptr [esp + 0x40]
// 0059dd8e  8d0482               lea eax, [edx + eax*4]
// 0059dd91  8b570c               mov edx, dword ptr [edi + 0xc]
// 0059dd94  50                   push eax
// 0059dd95  8b4104               mov eax, dword ptr [ecx + 4]
// 0059dd98  52                   push edx
// 0059dd99  56                   push esi
// 0059dd9a  ffd0                 call eax
// 0059dd9c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0059dda0  010b                 add dword ptr [ebx], ecx
// 0059dda2  83c42c               add esp, 0x2c
// 0059dda5  5f                   pop edi
// 0059dda6  5e                   pop esi
// 0059dda7  5b                   pop ebx
// 0059dda8  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_1pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
