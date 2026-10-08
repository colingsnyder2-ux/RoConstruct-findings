// from server: 100% by auto
// roc 2008-06 0078ff50  unit: CXTShadowWnd  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078ff50
//
// 0078ff50  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 0078ff54  53                   push ebx
// 0078ff55  55                   push ebp
// 0078ff56  56                   push esi
// 0078ff57  57                   push edi
// 0078ff58  0f859d000000         jne 0x78fffb
// 0078ff5e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0078ff62  bd03000000           mov ebp, 3
// 0078ff67  896c2414             mov dword ptr [esp + 0x14], ebp
// 0078ff6b  eb03                 jmp 0x78ff70
// 0078ff6d  8d4900               lea ecx, [ecx]
// 0078ff70  8b742414             mov esi, dword ptr [esp + 0x14]
// 0078ff74  33ff                 xor edi, edi
// 0078ff76  8b4304               mov eax, dword ptr [ebx + 4]
// 0078ff79  57                   push edi
// 0078ff7a  55                   push ebp
// 0078ff7b  50                   push eax
// 0078ff7c  ff15bc208000         call dword ptr [0x8020bc]
// 0078ff82  8bc8                 mov ecx, eax
// 0078ff84  e8e7fdffff           call 0x78fd70
// 0078ff89  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0078ff8c  50                   push eax
// 0078ff8d  57                   push edi
// 0078ff8e  55                   push ebp
// 0078ff8f  51                   push ecx
// 0078ff90  ff15b8208000         call dword ptr [0x8020b8]
// 0078ff96  03742414             add esi, dword ptr [esp + 0x14]
// 0078ff9a  47                   inc edi
// 0078ff9b  83ff04               cmp edi, 4
// 0078ff9e  7cd6                 jl 0x78ff76
// 0078ffa0  8344241403           add dword ptr [esp + 0x14], 3
// 0078ffa5  4d                   dec ebp
// 0078ffa6  83fdff               cmp ebp, -1
// 0078ffa9  7fc5                 jg 0x78ff70
// 0078ffab  8b542418             mov edx, dword ptr [esp + 0x18]
// 0078ffaf  8b420c               mov eax, dword ptr [edx + 0xc]
// 0078ffb2  33ed                 xor ebp, ebp
// 0078ffb4  8d753c               lea esi, [ebp + 0x3c]
// 0078ffb7  bf04000000           mov edi, 4
// 0078ffbc  3bc7                 cmp eax, edi
// 0078ffbe  7e2c                 jle 0x78ffec
// 0078ffc0  8b4304               mov eax, dword ptr [ebx + 4]
// 0078ffc3  57                   push edi
// 0078ffc4  55                   push ebp
// 0078ffc5  50                   push eax
// 0078ffc6  ff15bc208000         call dword ptr [0x8020bc]
// 0078ffcc  8bc8                 mov ecx, eax
// 0078ffce  e89dfdffff           call 0x78fd70
// 0078ffd3  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0078ffd6  50                   push eax
// 0078ffd7  57                   push edi
// 0078ffd8  55                   push ebp
// 0078ffd9  51                   push ecx
// 0078ffda  ff15b8208000         call dword ptr [0x8020b8]
// 0078ffe0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0078ffe4  8b420c               mov eax, dword ptr [edx + 0xc]
// 0078ffe7  47                   inc edi
// 0078ffe8  3bf8                 cmp edi, eax
// 0078ffea  7cd4                 jl 0x78ffc0
// 0078ffec  83ee0f               sub esi, 0xf
// 0078ffef  45                   inc ebp
// 0078fff0  85f6                 test esi, esi
// 0078fff2  7fc3                 jg 0x78ffb7
// 0078fff4  5f                   pop edi
// 0078fff5  5e                   pop esi
// 0078fff6  5d                   pop ebp
// 0078fff7  5b                   pop ebx
// 0078fff8  c20800               ret 8
// 0078fffb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0078ffff  33ed                 xor ebp, ebp
// 00790001  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00790009  8da42400000000       lea esp, [esp]
// 00790010  8b742414             mov esi, dword ptr [esp + 0x14]
// 00790014  bb03000000           mov ebx, 3
// 00790019  8da42400000000       lea esp, [esp]
// 00790020  8b4704               mov eax, dword ptr [edi + 4]
// 00790023  53                   push ebx
// 00790024  55                   push ebp
// 00790025  50                   push eax
// 00790026  ff15bc208000         call dword ptr [0x8020bc]
// 0079002c  8bc8                 mov ecx, eax
// 0079002e  e83dfdffff           call 0x78fd70
// 00790033  8b4f04               mov ecx, dword ptr [edi + 4]
// 00790036  50                   push eax
// 00790037  53                   push ebx
// 00790038  55                   push ebp
// 00790039  51                   push ecx
// 0079003a  ff15b8208000         call dword ptr [0x8020b8]
// 00790040  03742414             add esi, dword ptr [esp + 0x14]
// 00790044  4b                   dec ebx
// 00790045  83fbff               cmp ebx, -1
// 00790048  7fd6                 jg 0x790020
// 0079004a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079004e  83c003               add eax, 3
// 00790051  45                   inc ebp
// 00790052  83f80f               cmp eax, 0xf
// 00790055  89442414             mov dword ptr [esp + 0x14], eax
// 00790059  7cb5                 jl 0x790010
// 0079005b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0079005f  8b4508               mov eax, dword ptr [ebp + 8]
// 00790062  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0079006a  83c0fc               add eax, -4
// 0079006d  be3c000000           mov esi, 0x3c
// 00790072  bb04000000           mov ebx, 4
// 00790077  3bc3                 cmp eax, ebx
// 00790079  7e38                 jle 0x7900b3
// 0079007b  eb03                 jmp 0x790080
// 0079007d  8d4900               lea ecx, [ecx]
// 00790080  8b542414             mov edx, dword ptr [esp + 0x14]
// 00790084  8b4704               mov eax, dword ptr [edi + 4]
// 00790087  52                   push edx
// 00790088  53                   push ebx
// 00790089  50                   push eax
// 0079008a  ff15bc208000         call dword ptr [0x8020bc]
// 00790090  8bc8                 mov ecx, eax
// 00790092  e8d9fcffff           call 0x78fd70
// 00790097  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079009b  8b5704               mov edx, dword ptr [edi + 4]
// 0079009e  50                   push eax
// 0079009f  51                   push ecx
// 007900a0  53                   push ebx
// 007900a1  52                   push edx
// 007900a2  ff15b8208000         call dword ptr [0x8020b8]
// 007900a8  8b4508               mov eax, dword ptr [ebp + 8]
// 007900ab  43                   inc ebx
// 007900ac  83c0fc               add eax, -4
// 007900af  3bd8                 cmp ebx, eax
// 007900b1  7ccd                 jl 0x790080
// 007900b3  ff442414             inc dword ptr [esp + 0x14]
// 007900b7  83ee0f               sub esi, 0xf
// 007900ba  85f6                 test esi, esi
// 007900bc  7fb4                 jg 0x790072
// 007900be  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007900c6  c744241403000000     mov dword ptr [esp + 0x14], 3
// 007900ce  8bff                 mov edi, edi
// 007900d0  8b742414             mov esi, dword ptr [esp + 0x14]
// 007900d4  bb03000000           mov ebx, 3
// 007900d9  8da42400000000       lea esp, [esp]
// 007900e0  8b4508               mov eax, dword ptr [ebp + 8]
// 007900e3  2b442418             sub eax, dword ptr [esp + 0x18]
// 007900e7  53                   push ebx
// 007900e8  48                   dec eax
// 007900e9  50                   push eax
// 007900ea  8b4704               mov eax, dword ptr [edi + 4]
// 007900ed  50                   push eax
// 007900ee  ff15bc208000         call dword ptr [0x8020bc]
// 007900f4  8bc8                 mov ecx, eax
// 007900f6  e875fcffff           call 0x78fd70
// 007900fb  8b4d08               mov ecx, dword ptr [ebp + 8]
// 007900fe  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00790102  8b5704               mov edx, dword ptr [edi + 4]
// 00790105  50                   push eax
// 00790106  53                   push ebx
// 00790107  49                   dec ecx
// 00790108  51                   push ecx
// 00790109  52                   push edx
// 0079010a  ff15b8208000         call dword ptr [0x8020b8]
// 00790110  03742414             add esi, dword ptr [esp + 0x14]
// 00790114  4b                   dec ebx
// 00790115  83fbff               cmp ebx, -1
// 00790118  7fc6                 jg 0x7900e0
// 0079011a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079011e  ff442418             inc dword ptr [esp + 0x18]
// 00790122  83c003               add eax, 3
// 00790125  83f80f               cmp eax, 0xf
// 00790128  89442414             mov dword ptr [esp + 0x14], eax
// 0079012c  7ca2                 jl 0x7900d0
// 0079012e  5f                   pop edi
// 0079012f  5e                   pop esi
// 00790130  5d                   pop ebp
// 00790131  5b                   pop ebx
// 00790132  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ComputePseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
