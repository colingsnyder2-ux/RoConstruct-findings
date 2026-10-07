// roc 2008-06 00599c80  unit: RBX::PartInstance  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599c80
//
// 00599c80  55                   push ebp
// 00599c81  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00599c85  56                   push esi
// 00599c86  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00599c8a  3bf5                 cmp esi, ebp
// 00599c8c  7443                 je 0x599cd1
// 00599c8e  53                   push ebx
// 00599c8f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00599c93  57                   push edi
// 00599c94  8b03                 mov eax, dword ptr [ebx]
// 00599c96  8906                 mov dword ptr [esi], eax
// 00599c98  8b7b04               mov edi, dword ptr [ebx + 4]
// 00599c9b  85ff                 test edi, edi
// 00599c9d  740c                 je 0x599cab
// 00599c9f  8d4f08               lea ecx, [edi + 8]
// 00599ca2  ba01000000           mov edx, 1
// 00599ca7  f00fc111             lock xadd dword ptr [ecx], edx
// 00599cab  8b4e04               mov ecx, dword ptr [esi + 4]
// 00599cae  85c9                 test ecx, ecx
// 00599cb0  7413                 je 0x599cc5
// 00599cb2  8d4108               lea eax, [ecx + 8]
// 00599cb5  83caff               or edx, 0xffffffff
// 00599cb8  f00fc110             lock xadd dword ptr [eax], edx
// 00599cbc  7507                 jne 0x599cc5
// 00599cbe  8b01                 mov eax, dword ptr [ecx]
// 00599cc0  8b5008               mov edx, dword ptr [eax + 8]
// 00599cc3  ffd2                 call edx
// 00599cc5  897e04               mov dword ptr [esi + 4], edi
// 00599cc8  83c608               add esi, 8
// 00599ccb  3bf5                 cmp esi, ebp
// 00599ccd  75c5                 jne 0x599c94
// 00599ccf  5f                   pop edi
// 00599cd0  5b                   pop ebx
// 00599cd1  5e                   pop esi
// 00599cd2  5d                   pop ebp
// 00599cd3  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Fill@PAV?$weak_ptr@UT@@@boost@@V12@@std@@YAXPAV?$weak_ptr@UT@@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
