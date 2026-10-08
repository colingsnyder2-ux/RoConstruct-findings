// roc 2007-03 00573020  unit: seg_00570000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573020
//
// 00573020  55                   push ebp
// 00573021  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00573025  56                   push esi
// 00573026  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057302a  3bf5                 cmp esi, ebp
// 0057302c  7443                 je 0x573071
// 0057302e  53                   push ebx
// 0057302f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00573033  57                   push edi
// 00573034  8b03                 mov eax, dword ptr [ebx]
// 00573036  8906                 mov dword ptr [esi], eax
// 00573038  8b7b04               mov edi, dword ptr [ebx + 4]
// 0057303b  85ff                 test edi, edi
// 0057303d  740c                 je 0x57304b
// 0057303f  8d4f08               lea ecx, [edi + 8]
// 00573042  ba01000000           mov edx, 1
// 00573047  f00fc111             lock xadd dword ptr [ecx], edx
// 0057304b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057304e  85c9                 test ecx, ecx
// 00573050  7413                 je 0x573065
// 00573052  8d4108               lea eax, [ecx + 8]
// 00573055  83caff               or edx, 0xffffffff
// 00573058  f00fc110             lock xadd dword ptr [eax], edx
// 0057305c  7507                 jne 0x573065
// 0057305e  8b01                 mov eax, dword ptr [ecx]
// 00573060  8b5008               mov edx, dword ptr [eax + 8]
// 00573063  ffd2                 call edx
// 00573065  897e04               mov dword ptr [esi + 4], edi
// 00573068  83c608               add esi, 8
// 0057306b  3bf5                 cmp esi, ebp
// 0057306d  75c5                 jne 0x573034
// 0057306f  5f                   pop edi
// 00573070  5b                   pop ebx
// 00573071  5e                   pop esi
// 00573072  5d                   pop ebp
// 00573073  c3                   ret 
// library rbxgs/v8datamodel\ICameraOwner.cpp (function ??$_Fill@PAV?$weak_ptr@VPartInstance@RBX@@@boost@@V12@@std@@YAXPAV?$weak_ptr@VPartInstance@RBX@@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICameraOwner.cpp
