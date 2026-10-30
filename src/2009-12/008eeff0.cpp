// roc 2009-12 008eeff0  unit: CXTPRibbonGroupPopupToolBar  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eeff0
//
// 008eeff0  83ec10               sub esp, 0x10
// 008eeff3  53                   push ebx
// 008eeff4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008eeff8  56                   push esi
// 008eeff9  8b7338               mov esi, dword ptr [ebx + 0x38]
// 008eeffc  57                   push edi
// 008eeffd  8bf9                 mov edi, ecx
// 008eefff  8b07                 mov eax, dword ptr [edi]
// 008ef001  8b5004               mov edx, dword ptr [eax + 4]
// 008ef004  8d4c240c             lea ecx, [esp + 0xc]
// 008ef008  51                   push ecx
// 008ef009  8bcf                 mov ecx, edi
// 008ef00b  ffd2                 call edx
// 008ef00d  837c24240c           cmp dword ptr [esp + 0x24], 0xc
// 008ef012  7d1d                 jge 0x8ef031
// 008ef014  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008ef017  8b01                 mov eax, dword ptr [ecx]
// 008ef019  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008ef01f  6a00                 push 0
// 008ef021  ffd2                 call edx
// 008ef023  85c0                 test eax, eax
// 008ef025  740a                 je 0x8ef031
// 008ef027  8b442424             mov eax, dword ptr [esp + 0x24]
// 008ef02b  8d7406f4             lea esi, [esi + eax - 0xc]
// 008ef02f  eb2d                 jmp 0x8ef05e
// 008ef031  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008ef035  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 008ef039  7e29                 jle 0x8ef064
// 008ef03b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 008ef03e  8b11                 mov edx, dword ptr [ecx]
// 008ef040  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008ef046  6a00                 push 0
// 008ef048  ffd0                 call eax
// 008ef04a  85c0                 test eax, eax
// 008ef04c  7416                 je 0x8ef064
// 008ef04e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ef052  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 008ef056  034c242c             add ecx, dword ptr [esp + 0x2c]
// 008ef05a  8d740e0c             lea esi, [esi + ecx + 0xc]
// 008ef05e  85f6                 test esi, esi
// 008ef060  7d02                 jge 0x8ef064
// 008ef062  33f6                 xor esi, esi
// 008ef064  3b7704               cmp esi, dword ptr [edi + 4]
// 008ef067  7416                 je 0x8ef07f
// 008ef069  897704               mov dword ptr [edi + 4], esi
// 008ef06c  8b5334               mov edx, dword ptr [ebx + 0x34]
// 008ef06f  8b8a8c000000         mov ecx, dword ptr [edx + 0x8c]
// 008ef075  8b01                 mov eax, dword ptr [ecx]
// 008ef077  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 008ef07d  ffd2                 call edx
// 008ef07f  5f                   pop edi
// 008ef080  5e                   pop esi
// 008ef081  5b                   pop ebx
// 008ef082  83c410               add esp, 0x10
// 008ef085  c21400               ret 0x14
// copied from an identical function in another client (function ?ShowScrollableRect@CXTPRibbonScrollableBar@@IAEXPAVCXTPRibbonGroups@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp