// roc 2011-06 008efe80  unit: CXTShadowWnd  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008efe80
//
// 008efe80  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 008efe84  53                   push ebx
// 008efe85  55                   push ebp
// 008efe86  56                   push esi
// 008efe87  57                   push edi
// 008efe88  0f859d000000         jne 0x8eff2b
// 008efe8e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008efe92  bd03000000           mov ebp, 3
// 008efe97  896c2414             mov dword ptr [esp + 0x14], ebp
// 008efe9b  eb03                 jmp 0x8efea0
// 008efe9d  8d4900               lea ecx, [ecx]
// 008efea0  8b742414             mov esi, dword ptr [esp + 0x14]
// 008efea4  33ff                 xor edi, edi
// 008efea6  8b4304               mov eax, dword ptr [ebx + 4]
// 008efea9  57                   push edi
// 008efeaa  55                   push ebp
// 008efeab  50                   push eax
// 008efeac  ff151001a400         call dword ptr [0xa40110]
// 008efeb2  8bc8                 mov ecx, eax
// 008efeb4  e8d7fdffff           call 0x8efc90
// 008efeb9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008efebc  50                   push eax
// 008efebd  57                   push edi
// 008efebe  55                   push ebp
// 008efebf  51                   push ecx
// 008efec0  ff150c01a400         call dword ptr [0xa4010c]
// 008efec6  03742414             add esi, dword ptr [esp + 0x14]
// 008efeca  47                   inc edi
// 008efecb  83ff04               cmp edi, 4
// 008efece  7cd6                 jl 0x8efea6
// 008efed0  8344241403           add dword ptr [esp + 0x14], 3
// 008efed5  4d                   dec ebp
// 008efed6  83fdff               cmp ebp, -1
// 008efed9  7fc5                 jg 0x8efea0
// 008efedb  8b542418             mov edx, dword ptr [esp + 0x18]
// 008efedf  8b420c               mov eax, dword ptr [edx + 0xc]
// 008efee2  33ed                 xor ebp, ebp
// 008efee4  8d753c               lea esi, [ebp + 0x3c]
// 008efee7  bf04000000           mov edi, 4
// 008efeec  3bc7                 cmp eax, edi
// 008efeee  7e2c                 jle 0x8eff1c
// 008efef0  8b4304               mov eax, dword ptr [ebx + 4]
// 008efef3  57                   push edi
// 008efef4  55                   push ebp
// 008efef5  50                   push eax
// 008efef6  ff151001a400         call dword ptr [0xa40110]
// 008efefc  8bc8                 mov ecx, eax
// 008efefe  e88dfdffff           call 0x8efc90
// 008eff03  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008eff06  50                   push eax
// 008eff07  57                   push edi
// 008eff08  55                   push ebp
// 008eff09  51                   push ecx
// 008eff0a  ff150c01a400         call dword ptr [0xa4010c]
// 008eff10  8b542418             mov edx, dword ptr [esp + 0x18]
// 008eff14  8b420c               mov eax, dword ptr [edx + 0xc]
// 008eff17  47                   inc edi
// 008eff18  3bf8                 cmp edi, eax
// 008eff1a  7cd4                 jl 0x8efef0
// 008eff1c  83ee0f               sub esi, 0xf
// 008eff1f  45                   inc ebp
// 008eff20  85f6                 test esi, esi
// 008eff22  7fc3                 jg 0x8efee7
// 008eff24  5f                   pop edi
// 008eff25  5e                   pop esi
// 008eff26  5d                   pop ebp
// 008eff27  5b                   pop ebx
// 008eff28  c20800               ret 8
// 008eff2b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008eff2f  33ed                 xor ebp, ebp
// 008eff31  c744241403000000     mov dword ptr [esp + 0x14], 3
// 008eff39  8da42400000000       lea esp, [esp]
// 008eff40  8b742414             mov esi, dword ptr [esp + 0x14]
// 008eff44  bb03000000           mov ebx, 3
// 008eff49  8da42400000000       lea esp, [esp]
// 008eff50  8b4704               mov eax, dword ptr [edi + 4]
// 008eff53  53                   push ebx
// 008eff54  55                   push ebp
// 008eff55  50                   push eax
// 008eff56  ff151001a400         call dword ptr [0xa40110]
// 008eff5c  8bc8                 mov ecx, eax
// 008eff5e  e82dfdffff           call 0x8efc90
// 008eff63  8b4f04               mov ecx, dword ptr [edi + 4]
// 008eff66  50                   push eax
// 008eff67  53                   push ebx
// 008eff68  55                   push ebp
// 008eff69  51                   push ecx
// 008eff6a  ff150c01a400         call dword ptr [0xa4010c]
// 008eff70  03742414             add esi, dword ptr [esp + 0x14]
// 008eff74  4b                   dec ebx
// 008eff75  83fbff               cmp ebx, -1
// 008eff78  7fd6                 jg 0x8eff50
// 008eff7a  8b442414             mov eax, dword ptr [esp + 0x14]
// 008eff7e  83c003               add eax, 3
// 008eff81  45                   inc ebp
// 008eff82  83f80f               cmp eax, 0xf
// 008eff85  89442414             mov dword ptr [esp + 0x14], eax
// 008eff89  7cb5                 jl 0x8eff40
// 008eff8b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008eff8f  8b4508               mov eax, dword ptr [ebp + 8]
// 008eff92  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008eff9a  83c0fc               add eax, -4
// 008eff9d  be3c000000           mov esi, 0x3c
// 008effa2  bb04000000           mov ebx, 4
// 008effa7  3bc3                 cmp eax, ebx
// 008effa9  7e38                 jle 0x8effe3
// 008effab  eb03                 jmp 0x8effb0
// 008effad  8d4900               lea ecx, [ecx]
// 008effb0  8b542414             mov edx, dword ptr [esp + 0x14]
// 008effb4  8b4704               mov eax, dword ptr [edi + 4]
// 008effb7  52                   push edx
// 008effb8  53                   push ebx
// 008effb9  50                   push eax
// 008effba  ff151001a400         call dword ptr [0xa40110]
// 008effc0  8bc8                 mov ecx, eax
// 008effc2  e8c9fcffff           call 0x8efc90
// 008effc7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008effcb  8b5704               mov edx, dword ptr [edi + 4]
// 008effce  50                   push eax
// 008effcf  51                   push ecx
// 008effd0  53                   push ebx
// 008effd1  52                   push edx
// 008effd2  ff150c01a400         call dword ptr [0xa4010c]
// 008effd8  8b4508               mov eax, dword ptr [ebp + 8]
// 008effdb  43                   inc ebx
// 008effdc  83c0fc               add eax, -4
// 008effdf  3bd8                 cmp ebx, eax
// 008effe1  7ccd                 jl 0x8effb0
// 008effe3  ff442414             inc dword ptr [esp + 0x14]
// 008effe7  83ee0f               sub esi, 0xf
// 008effea  85f6                 test esi, esi
// 008effec  7fb4                 jg 0x8effa2
// 008effee  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008efff6  c744241403000000     mov dword ptr [esp + 0x14], 3
// 008efffe  8bff                 mov edi, edi
// 008f0000  8b742414             mov esi, dword ptr [esp + 0x14]
// 008f0004  bb03000000           mov ebx, 3
// 008f0009  8da42400000000       lea esp, [esp]
// 008f0010  8b4508               mov eax, dword ptr [ebp + 8]
// 008f0013  2b442418             sub eax, dword ptr [esp + 0x18]
// 008f0017  53                   push ebx
// 008f0018  48                   dec eax
// 008f0019  50                   push eax
// 008f001a  8b4704               mov eax, dword ptr [edi + 4]
// 008f001d  50                   push eax
// 008f001e  ff151001a400         call dword ptr [0xa40110]
// 008f0024  8bc8                 mov ecx, eax
// 008f0026  e865fcffff           call 0x8efc90
// 008f002b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008f002e  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 008f0032  8b5704               mov edx, dword ptr [edi + 4]
// 008f0035  50                   push eax
// 008f0036  53                   push ebx
// 008f0037  49                   dec ecx
// 008f0038  51                   push ecx
// 008f0039  52                   push edx
// 008f003a  ff150c01a400         call dword ptr [0xa4010c]
// 008f0040  03742414             add esi, dword ptr [esp + 0x14]
// 008f0044  4b                   dec ebx
// 008f0045  83fbff               cmp ebx, -1
// 008f0048  7fc6                 jg 0x8f0010
// 008f004a  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f004e  ff442418             inc dword ptr [esp + 0x18]
// 008f0052  83c003               add eax, 3
// 008f0055  83f80f               cmp eax, 0xf
// 008f0058  89442414             mov dword ptr [esp + 0x14], eax
// 008f005c  7ca2                 jl 0x8f0000
// 008f005e  5f                   pop edi
// 008f005f  5e                   pop esi
// 008f0060  5d                   pop ebp
// 008f0061  5b                   pop ebx
// 008f0062  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ComputePseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
