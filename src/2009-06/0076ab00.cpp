// roc 2009-06 0076ab00  unit: CXTPControls  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076ab00
//
// 0076ab00  83ec14               sub esp, 0x14
// 0076ab03  8b442420             mov eax, dword ptr [esp + 0x20]
// 0076ab07  8b00                 mov eax, dword ptr [eax]
// 0076ab09  53                   push ebx
// 0076ab0a  55                   push ebp
// 0076ab0b  56                   push esi
// 0076ab0c  33f6                 xor esi, esi
// 0076ab0e  83e010               and eax, 0x10
// 0076ab11  ba01000000           mov edx, 1
// 0076ab16  57                   push edi
// 0076ab17  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0076ab1b  894c2420             mov dword ptr [esp + 0x20], ecx
// 0076ab1f  89742414             mov dword ptr [esp + 0x14], esi
// 0076ab23  89742410             mov dword ptr [esp + 0x10], esi
// 0076ab27  89442418             mov dword ptr [esp + 0x18], eax
// 0076ab2b  8954241c             mov dword ptr [esp + 0x1c], edx
// 0076ab2f  7405                 je 0x76ab36
// 0076ab31  8b7f04               mov edi, dword ptr [edi + 4]
// 0076ab34  eb02                 jmp 0x76ab38
// 0076ab36  8b3f                 mov edi, dword ptr [edi]
// 0076ab38  33ed                 xor ebp, ebp
// 0076ab3a  39712c               cmp dword ptr [ecx + 0x2c], esi
// 0076ab3d  897c2434             mov dword ptr [esp + 0x34], edi
// 0076ab41  7f17                 jg 0x76ab5a
// 0076ab43  8b442414             mov eax, dword ptr [esp + 0x14]
// 0076ab47  5f                   pop edi
// 0076ab48  5e                   pop esi
// 0076ab49  5d                   pop ebp
// 0076ab4a  40                   inc eax
// 0076ab4b  5b                   pop ebx
// 0076ab4c  83c414               add esp, 0x14
// 0076ab4f  c21000               ret 0x10
// 0076ab52  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0076ab56  8b442418             mov eax, dword ptr [esp + 0x18]
// 0076ab5a  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0076ab5e  8bcd                 mov ecx, ebp
// 0076ab60  c1e106               shl ecx, 6
// 0076ab63  03f9                 add edi, ecx
// 0076ab65  897730               mov dword ptr [edi + 0x30], esi
// 0076ab68  89772c               mov dword ptr [edi + 0x2c], esi
// 0076ab6b  397728               cmp dword ptr [edi + 0x28], esi
// 0076ab6e  0f845d010000         je 0x76acd1
// 0076ab74  3bc6                 cmp eax, esi
// 0076ab76  7405                 je 0x76ab7d
// 0076ab78  8b4724               mov eax, dword ptr [edi + 0x24]
// 0076ab7b  eb03                 jmp 0x76ab80
// 0076ab7d  8b4720               mov eax, dword ptr [edi + 0x20]
// 0076ab80  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0076ab83  3bce                 cmp ecx, esi
// 0076ab85  7408                 je 0x76ab8f
// 0076ab87  3bd6                 cmp edx, esi
// 0076ab89  7504                 jne 0x76ab8f
// 0076ab8b  03442434             add eax, dword ptr [esp + 0x34]
// 0076ab8f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0076ab93  03d8                 add ebx, eax
// 0076ab95  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 0076ab99  7f14                 jg 0x76abaf
// 0076ab9b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0076ab9f  f70000010000         test dword ptr [eax], 0x100
// 0076aba5  740d                 je 0x76abb4
// 0076aba7  3bce                 cmp ecx, esi
// 0076aba9  7409                 je 0x76abb4
// 0076abab  3bd6                 cmp edx, esi
// 0076abad  7505                 jne 0x76abb4
// 0076abaf  be01000000           mov esi, 1
// 0076abb4  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 0076abb7  e8f4ec0100           call 0x7898b0
// 0076abbc  84c0                 test al, al
// 0076abbe  7937                 jns 0x76abf7
// 0076abc0  837c241800           cmp dword ptr [esp + 0x18], 0
// 0076abc5  7418                 je 0x76abdf
// 0076abc7  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0076abca  b801000000           mov eax, 1
// 0076abcf  01442414             add dword ptr [esp + 0x14], eax
// 0076abd3  894c2410             mov dword ptr [esp + 0x10], ecx
// 0076abd7  89472c               mov dword ptr [edi + 0x2c], eax
// 0076abda  e9e8000000           jmp 0x76acc7
// 0076abdf  8b5720               mov edx, dword ptr [edi + 0x20]
// 0076abe2  b801000000           mov eax, 1
// 0076abe7  01442414             add dword ptr [esp + 0x14], eax
// 0076abeb  89542410             mov dword ptr [esp + 0x10], edx
// 0076abef  89472c               mov dword ptr [edi + 0x2c], eax
// 0076abf2  e9d0000000           jmp 0x76acc7
// 0076abf7  85f6                 test esi, esi
// 0076abf9  0f84c4000000         je 0x76acc3
// 0076abff  8b542430             mov edx, dword ptr [esp + 0x30]
// 0076ac03  f60280               test byte ptr [edx], 0x80
// 0076ac06  745a                 je 0x76ac62
// 0076ac08  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0076ac0d  7553                 jne 0x76ac62
// 0076ac0f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0076ac13  33db                 xor ebx, ebx
// 0076ac15  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 0076ac18  8bf5                 mov esi, ebp
// 0076ac1a  7d31                 jge 0x76ac4d
// 0076ac1c  83c730               add edi, 0x30
// 0076ac1f  90                   nop 
// 0076ac20  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0076ac23  e888ec0100           call 0x7898b0
// 0076ac28  84c0                 test al, al
// 0076ac2a  7815                 js 0x76ac41
// 0076ac2c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0076ac30  c70701000000         mov dword ptr [edi], 1
// 0076ac36  46                   inc esi
// 0076ac37  83c740               add edi, 0x40
// 0076ac3a  3b712c               cmp esi, dword ptr [ecx + 0x2c]
// 0076ac3d  7ce1                 jl 0x76ac20
// 0076ac3f  eb08                 jmp 0x76ac49
// 0076ac41  bb01000000           mov ebx, 1
// 0076ac46  8d6eff               lea ebp, [esi - 1]
// 0076ac49  8b542430             mov edx, dword ptr [esp + 0x30]
// 0076ac4d  830a01               or dword ptr [edx], 1
// 0076ac50  85db                 test ebx, ebx
// 0076ac52  757b                 jne 0x76accf
// 0076ac54  8b442414             mov eax, dword ptr [esp + 0x14]
// 0076ac58  5f                   pop edi
// 0076ac59  5e                   pop esi
// 0076ac5a  5d                   pop ebp
// 0076ac5b  5b                   pop ebx
// 0076ac5c  83c414               add esp, 0x14
// 0076ac5f  c21000               ret 0x10
// 0076ac62  8bcd                 mov ecx, ebp
// 0076ac64  85ed                 test ebp, ebp
// 0076ac66  7c25                 jl 0x76ac8d
// 0076ac68  8d4734               lea eax, [edi + 0x34]
// 0076ac6b  eb03                 jmp 0x76ac70
// 0076ac6d  8d4900               lea ecx, [ecx]
// 0076ac70  8378f800             cmp dword ptr [eax - 8], 0
// 0076ac74  7517                 jne 0x76ac8d
// 0076ac76  833800               cmp dword ptr [eax], 0
// 0076ac79  7406                 je 0x76ac81
// 0076ac7b  8378f400             cmp dword ptr [eax - 0xc], 0
// 0076ac7f  750a                 jne 0x76ac8b
// 0076ac81  49                   dec ecx
// 0076ac82  83e840               sub eax, 0x40
// 0076ac85  85c9                 test ecx, ecx
// 0076ac87  7de7                 jge 0x76ac70
// 0076ac89  eb02                 jmp 0x76ac8d
// 0076ac8b  8be9                 mov ebp, ecx
// 0076ac8d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0076ac91  8bc5                 mov eax, ebp
// 0076ac93  c1e006               shl eax, 6
// 0076ac96  03c1                 add eax, ecx
// 0076ac98  837c241800           cmp dword ptr [esp + 0x18], 0
// 0076ac9d  7405                 je 0x76aca4
// 0076ac9f  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0076aca2  eb03                 jmp 0x76aca7
// 0076aca4  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0076aca7  894c2410             mov dword ptr [esp + 0x10], ecx
// 0076acab  b901000000           mov ecx, 1
// 0076acb0  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076acb3  8b02                 mov eax, dword ptr [edx]
// 0076acb5  84c0                 test al, al
// 0076acb7  7804                 js 0x76acbd
// 0076acb9  0bc1                 or eax, ecx
// 0076acbb  8902                 mov dword ptr [edx], eax
// 0076acbd  014c2414             add dword ptr [esp + 0x14], ecx
// 0076acc1  eb04                 jmp 0x76acc7
// 0076acc3  895c2410             mov dword ptr [esp + 0x10], ebx
// 0076acc7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0076accf  33f6                 xor esi, esi
// 0076acd1  8b542420             mov edx, dword ptr [esp + 0x20]
// 0076acd5  45                   inc ebp
// 0076acd6  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 0076acd9  0f8c73feffff         jl 0x76ab52
// 0076acdf  8b442414             mov eax, dword ptr [esp + 0x14]
// 0076ace3  5f                   pop edi
// 0076ace4  5e                   pop esi
// 0076ace5  5d                   pop ebp
// 0076ace6  40                   inc eax
// 0076ace7  5b                   pop ebx
// 0076ace8  83c414               add esp, 0x14
// 0076aceb  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_WrapToolBar@CXTPControls@@IAEHPAUXTPBUTTONINFO@1@HAAKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
