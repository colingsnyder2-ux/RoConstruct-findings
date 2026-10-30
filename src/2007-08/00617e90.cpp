// roc 2007-08 00617e90  unit: seg_00610000  size: 1172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00617e90
//
// 00617e90  83ec50               sub esp, 0x50
// 00617e93  53                   push ebx
// 00617e94  56                   push esi
// 00617e95  8bd8                 mov ebx, eax
// 00617e97  8b03                 mov eax, dword ptr [ebx]
// 00617e99  57                   push edi
// 00617e9a  50                   push eax
// 00617e9b  e860f5ffff           call 0x617400
// 00617ea0  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00617ea3  8b08                 mov ecx, dword ptr [eax]
// 00617ea5  83c404               add esp, 4
// 00617ea8  85c9                 test ecx, ecx
// 00617eaa  8d51ff               lea edx, [ecx - 1]
// 00617ead  8910                 mov dword ptr [eax], edx
// 00617eaf  7611                 jbe 0x617ec2
// 00617eb1  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00617eb4  8b5104               mov edx, dword ptr [ecx + 4]
// 00617eb7  0fb602               movzx eax, byte ptr [edx]
// 00617eba  83c201               add edx, 1
// 00617ebd  895104               mov dword ptr [ecx + 4], edx
// 00617ec0  eb0c                 jmp 0x617ece
// 00617ec2  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00617ec5  50                   push eax
// 00617ec6  e825b4ffff           call 0x6132f0
// 00617ecb  83c404               add esp, 4
// 00617ece  3b442460             cmp eax, dword ptr [esp + 0x60]
// 00617ed2  8903                 mov dword ptr [ebx], eax
// 00617ed4  0f84a7020000         je 0x618181
// 00617eda  55                   push ebp
// 00617edb  8b2d9ce87700         mov ebp, dword ptr [0x77e89c]
// 00617ee1  8b03                 mov eax, dword ptr [ebx]
// 00617ee3  8d4801               lea ecx, [eax + 1]
// 00617ee6  83f95d               cmp ecx, 0x5d
// 00617ee9  0f873c010000         ja 0x61802b
// 00617eef  0fb68924826100       movzx ecx, byte ptr [ecx + 0x618224]
// 00617ef6  ff248d14826100       jmp dword ptr [ecx*4 + 0x618214]
// 00617efd  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00617f00  6a50                 push 0x50
// 00617f02  83c210               add edx, 0x10
// 00617f05  52                   push edx
// 00617f06  8d442418             lea eax, [esp + 0x18]
// 00617f0a  50                   push eax
// 00617f0b  e8a06fffff           call 0x60eeb0
// 00617f10  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00617f13  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00617f16  68f0397c00           push 0x7c39f0
// 00617f1b  51                   push ecx
// 00617f1c  8d542424             lea edx, [esp + 0x24]
// 00617f20  52                   push edx
// 00617f21  6878977b00           push 0x7b9778
// 00617f26  50                   push eax
// 00617f27  e8646fffff           call 0x60ee90
// 00617f2c  8b0d28397c00         mov ecx, dword ptr [0x7c3928]
// 00617f32  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00617f35  51                   push ecx
// 00617f36  50                   push eax
// 00617f37  685c397c00           push 0x7c395c
// 00617f3c  52                   push edx
// 00617f3d  e84e6fffff           call 0x60ee90
// 00617f42  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00617f45  6a03                 push 3
// 00617f47  50                   push eax
// 00617f48  e8d3e0faff           call 0x5c6020
// 00617f4d  83c438               add esp, 0x38
// 00617f50  e91f020000           jmp 0x618174
// 00617f55  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00617f58  6a50                 push 0x50
// 00617f5a  83c110               add ecx, 0x10
// 00617f5d  51                   push ecx
// 00617f5e  8d542418             lea edx, [esp + 0x18]
// 00617f62  52                   push edx
// 00617f63  e8486fffff           call 0x60eeb0
// 00617f68  8b4304               mov eax, dword ptr [ebx + 4]
// 00617f6b  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00617f6e  68f0397c00           push 0x7c39f0
// 00617f73  50                   push eax
// 00617f74  8d4c2424             lea ecx, [esp + 0x24]
// 00617f78  51                   push ecx
// 00617f79  6878977b00           push 0x7b9778
// 00617f7e  52                   push edx
// 00617f7f  e80c6fffff           call 0x60ee90
// 00617f84  6a00                 push 0
// 00617f86  8bf0                 mov esi, eax
// 00617f88  e873f4ffff           call 0x617400
// 00617f8d  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 00617f90  8b00                 mov eax, dword ptr [eax]
// 00617f92  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00617f95  50                   push eax
// 00617f96  56                   push esi
// 00617f97  685c397c00           push 0x7c395c
// 00617f9c  51                   push ecx
// 00617f9d  e8ee6effff           call 0x60ee90
// 00617fa2  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00617fa5  6a03                 push 3
// 00617fa7  52                   push edx
// 00617fa8  e873e0faff           call 0x5c6020
// 00617fad  83c43c               add esp, 0x3c
// 00617fb0  e9bf010000           jmp 0x618174
// 00617fb5  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00617fb8  8b08                 mov ecx, dword ptr [eax]
// 00617fba  85c9                 test ecx, ecx
// 00617fbc  8d51ff               lea edx, [ecx - 1]
// 00617fbf  8910                 mov dword ptr [eax], edx
// 00617fc1  7611                 jbe 0x617fd4
// 00617fc3  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00617fc6  8b5104               mov edx, dword ptr [ecx + 4]
// 00617fc9  0fb602               movzx eax, byte ptr [edx]
// 00617fcc  83c201               add edx, 1
// 00617fcf  895104               mov dword ptr [ecx + 4], edx
// 00617fd2  eb0c                 jmp 0x617fe0
// 00617fd4  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00617fd7  50                   push eax
// 00617fd8  e813b3ffff           call 0x6132f0
// 00617fdd  83c404               add esp, 4
// 00617fe0  8d4801               lea ecx, [eax + 1]
// 00617fe3  83f977               cmp ecx, 0x77
// 00617fe6  8903                 mov dword ptr [ebx], eax
// 00617fe8  0f8782000000         ja 0x618070
// 00617fee  0fb689ac826100       movzx ecx, byte ptr [ecx + 0x6182ac]
// 00617ff5  ff248d84826100       jmp dword ptr [ecx*4 + 0x618284]
// 00617ffc  b807000000           mov eax, 7
// 00618001  eb28                 jmp 0x61802b
// 00618003  b808000000           mov eax, 8
// 00618008  eb21                 jmp 0x61802b
// 0061800a  b80c000000           mov eax, 0xc
// 0061800f  eb1a                 jmp 0x61802b
// 00618011  b80a000000           mov eax, 0xa
// 00618016  eb13                 jmp 0x61802b
// 00618018  b80d000000           mov eax, 0xd
// 0061801d  eb0c                 jmp 0x61802b
// 0061801f  b809000000           mov eax, 9
// 00618024  eb05                 jmp 0x61802b
// 00618026  b80b000000           mov eax, 0xb
// 0061802b  50                   push eax
// 0061802c  e8cff3ffff           call 0x617400
// 00618031  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00618034  8b08                 mov ecx, dword ptr [eax]
// 00618036  83c404               add esp, 4
// 00618039  85c9                 test ecx, ecx
// 0061803b  8d51ff               lea edx, [ecx - 1]
// 0061803e  8910                 mov dword ptr [eax], edx
// 00618040  0f8620010000         jbe 0x618166
// 00618046  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00618049  8b5104               mov edx, dword ptr [ecx + 4]
// 0061804c  0fb602               movzx eax, byte ptr [edx]
// 0061804f  83c201               add edx, 1
// 00618052  895104               mov dword ptr [ecx + 4], edx
// 00618055  e918010000           jmp 0x618172
// 0061805a  6a0a                 push 0xa
// 0061805c  e89ff3ffff           call 0x617400
// 00618061  83c404               add esp, 4
// 00618064  8bf3                 mov esi, ebx
// 00618066  e8c5f5ffff           call 0x617630
// 0061806b  e904010000           jmp 0x618174
// 00618070  50                   push eax
// 00618071  ffd5                 call ebp
// 00618073  83c404               add esp, 4
// 00618076  85c0                 test eax, eax
// 00618078  7531                 jne 0x6180ab
// 0061807a  8b0b                 mov ecx, dword ptr [ebx]
// 0061807c  51                   push ecx
// 0061807d  e87ef3ffff           call 0x617400
// 00618082  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00618085  8b08                 mov ecx, dword ptr [eax]
// 00618087  83c404               add esp, 4
// 0061808a  85c9                 test ecx, ecx
// 0061808c  8d51ff               lea edx, [ecx - 1]
// 0061808f  8910                 mov dword ptr [eax], edx
// 00618091  0f86cf000000         jbe 0x618166
// 00618097  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 0061809a  8b5104               mov edx, dword ptr [ecx + 4]
// 0061809d  0fb602               movzx eax, byte ptr [edx]
// 006180a0  83c201               add edx, 1
// 006180a3  895104               mov dword ptr [ecx + 4], edx
// 006180a6  e9c7000000           jmp 0x618172
// 006180ab  33f6                 xor esi, esi
// 006180ad  33ff                 xor edi, edi
// 006180af  90                   nop 
// 006180b0  8b13                 mov edx, dword ptr [ebx]
// 006180b2  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006180b5  8d0cbf               lea ecx, [edi + edi*4]
// 006180b8  8d7c4ad0             lea edi, [edx + ecx*2 - 0x30]
// 006180bc  8b08                 mov ecx, dword ptr [eax]
// 006180be  85c9                 test ecx, ecx
// 006180c0  8d51ff               lea edx, [ecx - 1]
// 006180c3  8910                 mov dword ptr [eax], edx
// 006180c5  7611                 jbe 0x6180d8
// 006180c7  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006180ca  8b5104               mov edx, dword ptr [ecx + 4]
// 006180cd  0fb602               movzx eax, byte ptr [edx]
// 006180d0  83c201               add edx, 1
// 006180d3  895104               mov dword ptr [ecx + 4], edx
// 006180d6  eb0c                 jmp 0x6180e4
// 006180d8  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006180db  50                   push eax
// 006180dc  e80fb2ffff           call 0x6132f0
// 006180e1  83c404               add esp, 4
// 006180e4  83c601               add esi, 1
// 006180e7  83fe03               cmp esi, 3
// 006180ea  8903                 mov dword ptr [ebx], eax
// 006180ec  7d0a                 jge 0x6180f8
// 006180ee  50                   push eax
// 006180ef  ffd5                 call ebp
// 006180f1  83c404               add esp, 4
// 006180f4  85c0                 test eax, eax
// 006180f6  75b8                 jne 0x6180b0
// 006180f8  81ffff000000         cmp edi, 0xff
// 006180fe  7e5b                 jle 0x61815b
// 00618100  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00618103  6a50                 push 0x50
// 00618105  83c110               add ecx, 0x10
// 00618108  51                   push ecx
// 00618109  8d542418             lea edx, [esp + 0x18]
// 0061810d  52                   push edx
// 0061810e  e89d6dffff           call 0x60eeb0
// 00618113  8b4304               mov eax, dword ptr [ebx + 4]
// 00618116  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00618119  68d4397c00           push 0x7c39d4
// 0061811e  50                   push eax
// 0061811f  8d4c2424             lea ecx, [esp + 0x24]
// 00618123  51                   push ecx
// 00618124  6878977b00           push 0x7b9778
// 00618129  52                   push edx
// 0061812a  e8616dffff           call 0x60ee90
// 0061812f  6a00                 push 0
// 00618131  8bf0                 mov esi, eax
// 00618133  e8c8f2ffff           call 0x617400
// 00618138  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0061813b  8b00                 mov eax, dword ptr [eax]
// 0061813d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00618140  50                   push eax
// 00618141  56                   push esi
// 00618142  685c397c00           push 0x7c395c
// 00618147  51                   push ecx
// 00618148  e8436dffff           call 0x60ee90
// 0061814d  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00618150  6a03                 push 3
// 00618152  52                   push edx
// 00618153  e8c8defaff           call 0x5c6020
// 00618158  83c43c               add esp, 0x3c
// 0061815b  57                   push edi
// 0061815c  e89ff2ffff           call 0x617400
// 00618161  83c404               add esp, 4
// 00618164  eb0e                 jmp 0x618174
// 00618166  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00618169  50                   push eax
// 0061816a  e881b1ffff           call 0x6132f0
// 0061816f  83c404               add esp, 4
// 00618172  8903                 mov dword ptr [ebx], eax
// 00618174  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00618178  390b                 cmp dword ptr [ebx], ecx
// 0061817a  0f8561fdffff         jne 0x617ee1
// 00618180  5d                   pop ebp
// 00618181  8b13                 mov edx, dword ptr [ebx]
// 00618183  52                   push edx
// 00618184  e877f2ffff           call 0x617400
// 00618189  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0061818c  8b08                 mov ecx, dword ptr [eax]
// 0061818e  83c404               add esp, 4
// 00618191  85c9                 test ecx, ecx
// 00618193  8d51ff               lea edx, [ecx - 1]
// 00618196  8910                 mov dword ptr [eax], edx
// 00618198  7611                 jbe 0x6181ab
// 0061819a  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 0061819d  8b5104               mov edx, dword ptr [ecx + 4]
// 006181a0  0fb602               movzx eax, byte ptr [edx]
// 006181a3  83c201               add edx, 1
// 006181a6  895104               mov dword ptr [ecx + 4], edx
// 006181a9  eb0c                 jmp 0x6181b7
// 006181ab  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006181ae  50                   push eax
// 006181af  e83cb1ffff           call 0x6132f0
// 006181b4  83c404               add esp, 4
// 006181b7  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 006181ba  8b7334               mov esi, dword ptr [ebx + 0x34]
// 006181bd  8903                 mov dword ptr [ebx], eax
// 006181bf  8b4104               mov eax, dword ptr [ecx + 4]
// 006181c2  8b09                 mov ecx, dword ptr [ecx]
// 006181c4  83e802               sub eax, 2
// 006181c7  50                   push eax
// 006181c8  83c101               add ecx, 1
// 006181cb  51                   push ecx
// 006181cc  56                   push esi
// 006181cd  e89eabffff           call 0x612d70
// 006181d2  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 006181d5  8b5104               mov edx, dword ptr [ecx + 4]
// 006181d8  8bf8                 mov edi, eax
// 006181da  57                   push edi
// 006181db  52                   push edx
// 006181dc  56                   push esi
// 006181dd  e8dea9ffff           call 0x612bc0
// 006181e2  83c418               add esp, 0x18
// 006181e5  83780800             cmp dword ptr [eax + 8], 0
// 006181e9  751a                 jne 0x618205
// 006181eb  c70001000000         mov dword ptr [eax], 1
// 006181f1  c7400801000000       mov dword ptr [eax + 8], 1
// 006181f8  8b442464             mov eax, dword ptr [esp + 0x64]
// 006181fc  8938                 mov dword ptr [eax], edi
// 006181fe  5f                   pop edi
// 006181ff  5e                   pop esi
// 00618200  5b                   pop ebx
// 00618201  83c450               add esp, 0x50
// 00618204  c3                   ret 
// 00618205  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00618209  8939                 mov dword ptr [ecx], edi
// 0061820b  5f                   pop edi
// 0061820c  5e                   pop esi
// 0061820d  5b                   pop ebx
// 0061820e  83c450               add esp, 0x50
// 00618211  c3                   ret 
// 00618212  8bff                 mov edi, edi
// 00618214  fd                   std 
// 00618215  7e61                 jle 0x618278
// 00618217  00557f               add byte ptr [ebp + 0x7f], dl
// 0061821a  61                   popal 
// 0061821b  00b57f61002b         add byte ptr [ebp + 0x2b00617f], dh
// 00618221  80610000             and byte ptr [ecx], 0
// 00618225  0303                 add eax, dword ptr [ebx]
// 00618227  0303                 add eax, dword ptr [ebx]
// 00618229  0303                 add eax, dword ptr [ebx]
// 0061822b  0303                 add eax, dword ptr [ebx]
// 0061822d  0303                 add eax, dword ptr [ebx]
// 0061822f  0103                 add dword ptr [ebx], eax
// 00618231  0301                 add eax, dword ptr [ecx]
// 00618233  0303                 add eax, dword ptr [ebx]
// 00618235  0303                 add eax, dword ptr [ebx]
// 00618237  0303                 add eax, dword ptr [ebx]
// 00618239  0303                 add eax, dword ptr [ebx]
// 0061823b  0303                 add eax, dword ptr [ebx]
// 0061823d  0303                 add eax, dword ptr [ebx]
// 0061823f  0303                 add eax, dword ptr [ebx]
// 00618241  0303                 add eax, dword ptr [ebx]
// 00618243  0303                 add eax, dword ptr [ebx]
// 00618245  0303                 add eax, dword ptr [ebx]
// 00618247  0303                 add eax, dword ptr [ebx]
// 00618249  0303                 add eax, dword ptr [ebx]
// 0061824b  0303                 add eax, dword ptr [ebx]
// 0061824d  0303                 add eax, dword ptr [ebx]
// 0061824f  0303                 add eax, dword ptr [ebx]
// 00618251  0303                 add eax, dword ptr [ebx]
// 00618253  0303                 add eax, dword ptr [ebx]
// 00618255  0303                 add eax, dword ptr [ebx]
// 00618257  0303                 add eax, dword ptr [ebx]
// 00618259  0303                 add eax, dword ptr [ebx]
// 0061825b  0303                 add eax, dword ptr [ebx]
// 0061825d  0303                 add eax, dword ptr [ebx]
// 0061825f  0303                 add eax, dword ptr [ebx]
// 00618261  0303                 add eax, dword ptr [ebx]
// 00618263  0303                 add eax, dword ptr [ebx]
// 00618265  0303                 add eax, dword ptr [ebx]
// 00618267  0303                 add eax, dword ptr [ebx]
// 00618269  0303                 add eax, dword ptr [ebx]
// 0061826b  0303                 add eax, dword ptr [ebx]
// 0061826d  0303                 add eax, dword ptr [ebx]
// 0061826f  0303                 add eax, dword ptr [ebx]
// 00618271  0303                 add eax, dword ptr [ebx]
// 00618273  0303                 add eax, dword ptr [ebx]
// 00618275  0303                 add eax, dword ptr [ebx]
// 00618277  0303                 add eax, dword ptr [ebx]
// 00618279  0303                 add eax, dword ptr [ebx]
// 0061827b  0303                 add eax, dword ptr [ebx]
// 0061827d  0303                 add eax, dword ptr [ebx]
// 0061827f  0303                 add eax, dword ptr [ebx]
// 00618281  028bff748161         add cl, byte ptr [ebx + 0x618174ff]
// 00618287  005a80               add byte ptr [edx - 0x80], bl
// 0061828a  61                   popal 
// 0061828b  00fc                 add ah, bh
// 0061828d  7f61                 jg 0x6182f0
// 0061828f  0003                 add byte ptr [ebx], al
// 00618291  8061000a             and byte ptr [ecx], 0xa
// 00618295  80610011             and byte ptr [ecx], 0x11
// 00618299  80610018             and byte ptr [ecx], 0x18
// 0061829d  8061001f             and byte ptr [ecx], 0x1f
// 006182a1  80610026             and byte ptr [ecx], 0x26
// 006182a5  80610070             and byte ptr [ecx], 0x70
// 006182a9  80610000             and byte ptr [ecx], 0
// 006182ad  0909                 or dword ptr [ecx], ecx
// 006182af  0909                 or dword ptr [ecx], ecx
// 006182b1  0909                 or dword ptr [ecx], ecx
// 006182b3  0909                 or dword ptr [ecx], ecx
// 006182b5  0909                 or dword ptr [ecx], ecx
// 006182b7  0109                 add dword ptr [ecx], ecx
// 006182b9  0901                 or dword ptr [ecx], eax
// 006182bb  0909                 or dword ptr [ecx], ecx
// 006182bd  0909                 or dword ptr [ecx], ecx
// 006182bf  0909                 or dword ptr [ecx], ecx
// 006182c1  0909                 or dword ptr [ecx], ecx
// 006182c3  0909                 or dword ptr [ecx], ecx
// 006182c5  0909                 or dword ptr [ecx], ecx
// 006182c7  0909                 or dword ptr [ecx], ecx
// 006182c9  0909                 or dword ptr [ecx], ecx
// 006182cb  0909                 or dword ptr [ecx], ecx
// 006182cd  0909                 or dword ptr [ecx], ecx
// 006182cf  0909                 or dword ptr [ecx], ecx
// 006182d1  0909                 or dword ptr [ecx], ecx
// 006182d3  0909                 or dword ptr [ecx], ecx
// 006182d5  0909                 or dword ptr [ecx], ecx
// 006182d7  0909                 or dword ptr [ecx], ecx
// 006182d9  0909                 or dword ptr [ecx], ecx
// 006182db  0909                 or dword ptr [ecx], ecx
// 006182dd  0909                 or dword ptr [ecx], ecx
// 006182df  0909                 or dword ptr [ecx], ecx
// 006182e1  0909                 or dword ptr [ecx], ecx
// 006182e3  0909                 or dword ptr [ecx], ecx
// 006182e5  0909                 or dword ptr [ecx], ecx
// 006182e7  0909                 or dword ptr [ecx], ecx
// 006182e9  0909                 or dword ptr [ecx], ecx
// 006182eb  0909                 or dword ptr [ecx], ecx
// 006182ed  0909                 or dword ptr [ecx], ecx
// 006182ef  0909                 or dword ptr [ecx], ecx
// 006182f1  0909                 or dword ptr [ecx], ecx
// 006182f3  0909                 or dword ptr [ecx], ecx
// 006182f5  0909                 or dword ptr [ecx], ecx
// 006182f7  0909                 or dword ptr [ecx], ecx
// 006182f9  0909                 or dword ptr [ecx], ecx
// 006182fb  0909                 or dword ptr [ecx], ecx
// 006182fd  0909                 or dword ptr [ecx], ecx
// 006182ff  0909                 or dword ptr [ecx], ecx
// 00618301  0909                 or dword ptr [ecx], ecx
// 00618303  0909                 or dword ptr [ecx], ecx
// 00618305  0909                 or dword ptr [ecx], ecx
// 00618307  0909                 or dword ptr [ecx], ecx
// 00618309  0909                 or dword ptr [ecx], ecx
// 0061830b  0909                 or dword ptr [ecx], ecx
// 0061830d  0902                 or dword ptr [edx], eax
// 0061830f  0309                 add ecx, dword ptr [ecx]
// 00618311  0909                 or dword ptr [ecx], ecx
// 00618313  0409                 add al, 9
// 00618315  0909                 or dword ptr [ecx], ecx
// 00618317  0909                 or dword ptr [ecx], ecx
// 00618319  0909                 or dword ptr [ecx], ecx
// 0061831b  0509090906           add eax, 0x6090909
// 00618320  0907                 or dword ptr [edi], eax
// 00618322  0908                 or dword ptr [eax], ecx
// copied from an identical function in another client (function _read_string)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1-dll llex.c