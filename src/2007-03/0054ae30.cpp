// roc 2007-03 0054ae30  unit: seg_00540000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054ae30
//
// 0054ae30  53                   push ebx
// 0054ae31  55                   push ebp
// 0054ae32  56                   push esi
// 0054ae33  8bd9                 mov ebx, ecx
// 0054ae35  8b03                 mov eax, dword ptr [ebx]
// 0054ae37  8b68f4               mov ebp, dword ptr [eax - 0xc]
// 0054ae3a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054ae3e  57                   push edi
// 0054ae3f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0054ae43  2bf8                 sub edi, eax
// 0054ae45  ba01000000           mov edx, 1
// 0054ae4a  2b50fc               sub edx, dword ptr [eax - 4]
// 0054ae4d  8b40f8               mov eax, dword ptr [eax - 8]
// 0054ae50  8d3429               lea esi, [ecx + ebp]
// 0054ae53  2bc6                 sub eax, esi
// 0054ae55  0bd0                 or edx, eax
// 0054ae57  7d0c                 jge 0x54ae65
// 0054ae59  56                   push esi
// 0054ae5a  8bcb                 mov ecx, ebx
// 0054ae5c  e8df91ecff           call 0x414040
// 0054ae61  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0054ae65  3bfd                 cmp edi, ebp
// 0054ae67  8b03                 mov eax, dword ptr [ebx]
// 0054ae69  7707                 ja 0x54ae72
// 0054ae6b  8d1438               lea edx, [eax + edi]
// 0054ae6e  89542414             mov dword ptr [esp + 0x14], edx
// 0054ae72  8b542414             mov edx, dword ptr [esp + 0x14]
// 0054ae76  51                   push ecx
// 0054ae77  52                   push edx
// 0054ae78  51                   push ecx
// 0054ae79  03c5                 add eax, ebp
// 0054ae7b  50                   push eax
// 0054ae7c  ff1540e97700         call dword ptr [0x77e940]
// 0054ae82  83c410               add esp, 0x10
// 0054ae85  85f6                 test esi, esi
// 0054ae87  7c17                 jl 0x54aea0
// 0054ae89  8b03                 mov eax, dword ptr [ebx]
// 0054ae8b  3b70f8               cmp esi, dword ptr [eax - 8]
// 0054ae8e  7f10                 jg 0x54aea0
// 0054ae90  8970f4               mov dword ptr [eax - 0xc], esi
// 0054ae93  8b03                 mov eax, dword ptr [ebx]
// 0054ae95  5f                   pop edi
// 0054ae96  c6040600             mov byte ptr [esi + eax], 0
// 0054ae9a  5e                   pop esi
// 0054ae9b  5d                   pop ebp
// 0054ae9c  5b                   pop ebx
// 0054ae9d  c20800               ret 8
// 0054aea0  6857000780           push 0x80070057
// 0054aea5  e85661ebff           call 0x401000
// copied from an identical function in another client (function ?Append@?$CSimpleStringT@D$0A@@ATL@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-8.0-dll roc_boost_atl_f4b0910a5d2d7185.cpp