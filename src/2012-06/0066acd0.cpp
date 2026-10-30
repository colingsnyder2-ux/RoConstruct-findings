// roc 2012-06 0066acd0  unit: seg_00660000  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066acd0
//
// 0066acd0  53                   push ebx
// 0066acd1  56                   push esi
// 0066acd2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066acd6  8b4604               mov eax, dword ptr [esi + 4]
// 0066acd9  8b08                 mov ecx, dword ptr [eax]
// 0066acdb  57                   push edi
// 0066acdc  6a0c                 push 0xc
// 0066acde  6a01                 push 1
// 0066ace0  56                   push esi
// 0066ace1  ffd1                 call ecx
// 0066ace3  8bf8                 mov edi, eax
// 0066ace5  89be50010000         mov dword ptr [esi + 0x150], edi
// 0066aceb  c70790a75900         mov dword ptr [edi], 0x59a790
// 0066acf1  8b4628               mov eax, dword ptr [esi + 0x28]
// 0066acf4  48                   dec eax
// 0066acf5  bb04000000           mov ebx, 4
// 0066acfa  83c40c               add esp, 0xc
// 0066acfd  3bc3                 cmp eax, ebx
// 0066acff  771e                 ja 0x66ad1f
// 0066ad01  ff2485d0ae6600       jmp dword ptr [eax*4 + 0x66aed0]
// 0066ad08  837e2401             cmp dword ptr [esi + 0x24], 1
// 0066ad0c  742a                 je 0x66ad38
// 0066ad0e  eb15                 jmp 0x66ad25
// 0066ad10  837e2403             cmp dword ptr [esi + 0x24], 3
// 0066ad14  7422                 je 0x66ad38
// 0066ad16  eb0d                 jmp 0x66ad25
// 0066ad18  395e24               cmp dword ptr [esi + 0x24], ebx
// 0066ad1b  741b                 je 0x66ad38
// 0066ad1d  eb06                 jmp 0x66ad25
// 0066ad1f  837e2401             cmp dword ptr [esi + 0x24], 1
// 0066ad23  7d13                 jge 0x66ad38
// 0066ad25  8b16                 mov edx, dword ptr [esi]
// 0066ad27  c7421409000000       mov dword ptr [edx + 0x14], 9
// 0066ad2e  8b06                 mov eax, dword ptr [esi]
// 0066ad30  8b08                 mov ecx, dword ptr [eax]
// 0066ad32  56                   push esi
// 0066ad33  ffd1                 call ecx
// 0066ad35  83c404               add esp, 4
// 0066ad38  8b4640               mov eax, dword ptr [esi + 0x40]
// 0066ad3b  8d48ff               lea ecx, [eax - 1]
// 0066ad3e  3bcb                 cmp ecx, ebx
// 0066ad40  0f875e010000         ja 0x66aea4
// 0066ad46  ff248de4ae6600       jmp dword ptr [ecx*4 + 0x66aee4]
// 0066ad4d  837e3c01             cmp dword ptr [esi + 0x3c], 1
// 0066ad51  7413                 je 0x66ad66
// 0066ad53  8b16                 mov edx, dword ptr [esi]
// 0066ad55  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0066ad5c  8b06                 mov eax, dword ptr [esi]
// 0066ad5e  8b08                 mov ecx, dword ptr [eax]
// 0066ad60  56                   push esi
// 0066ad61  ffd1                 call ecx
// 0066ad63  83c404               add esp, 4
// 0066ad66  8b4628               mov eax, dword ptr [esi + 0x28]
// 0066ad69  83f801               cmp eax, 1
// 0066ad6c  741b                 je 0x66ad89
// 0066ad6e  83f802               cmp eax, 2
// 0066ad71  7511                 jne 0x66ad84
// 0066ad73  c70700a86600         mov dword ptr [edi], 0x66a800
// 0066ad79  c74704f0a96600       mov dword ptr [edi + 4], 0x66a9f0
// 0066ad80  5f                   pop edi
// 0066ad81  5e                   pop esi
// 0066ad82  5b                   pop ebx
// 0066ad83  c3                   ret 
// 0066ad84  83f803               cmp eax, 3
// 0066ad87  752e                 jne 0x66adb7
// 0066ad89  c74704f0ab6600       mov dword ptr [edi + 4], 0x66abf0
// 0066ad90  5f                   pop edi
// 0066ad91  5e                   pop esi
// 0066ad92  5b                   pop ebx
// 0066ad93  c3                   ret 
// 0066ad94  837e3c03             cmp dword ptr [esi + 0x3c], 3
// 0066ad98  7413                 je 0x66adad
// 0066ad9a  8b16                 mov edx, dword ptr [esi]
// 0066ad9c  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0066ada3  8b06                 mov eax, dword ptr [esi]
// 0066ada5  8b08                 mov ecx, dword ptr [eax]
// 0066ada7  56                   push esi
// 0066ada8  ffd1                 call ecx
// 0066adaa  83c404               add esp, 4
// 0066adad  837e2802             cmp dword ptr [esi + 0x28], 2
// 0066adb1  0f840d010000         je 0x66aec4
// 0066adb7  8b16                 mov edx, dword ptr [esi]
// 0066adb9  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0066adc0  8b06                 mov eax, dword ptr [esi]
// 0066adc2  8b08                 mov ecx, dword ptr [eax]
// 0066adc4  56                   push esi
// 0066adc5  ffd1                 call ecx
// 0066adc7  83c404               add esp, 4
// 0066adca  5f                   pop edi
// 0066adcb  5e                   pop esi
// 0066adcc  5b                   pop ebx
// 0066adcd  c3                   ret 
// 0066adce  837e3c03             cmp dword ptr [esi + 0x3c], 3
// 0066add2  7413                 je 0x66ade7
// 0066add4  8b16                 mov edx, dword ptr [esi]
// 0066add6  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0066addd  8b06                 mov eax, dword ptr [esi]
// 0066addf  8b08                 mov ecx, dword ptr [eax]
// 0066ade1  56                   push esi
// 0066ade2  ffd1                 call ecx
// 0066ade4  83c404               add esp, 4
// 0066ade7  8b4628               mov eax, dword ptr [esi + 0x28]
// 0066adea  83f802               cmp eax, 2
// 0066aded  7511                 jne 0x66ae00
// 0066adef  c70700a86600         mov dword ptr [edi], 0x66a800
// 0066adf5  c74704e0a86600       mov dword ptr [edi + 4], 0x66a8e0
// 0066adfc  5f                   pop edi
// 0066adfd  5e                   pop esi
// 0066adfe  5b                   pop ebx
// 0066adff  c3                   ret 
// 0066ae00  83f803               cmp eax, 3
// 0066ae03  0f84bb000000         je 0x66aec4
// 0066ae09  8b16                 mov edx, dword ptr [esi]
// 0066ae0b  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0066ae12  8b06                 mov eax, dword ptr [esi]
// 0066ae14  8b08                 mov ecx, dword ptr [eax]
// 0066ae16  56                   push esi
// 0066ae17  ffd1                 call ecx
// 0066ae19  83c404               add esp, 4
// 0066ae1c  5f                   pop edi
// 0066ae1d  5e                   pop esi
// 0066ae1e  5b                   pop ebx
// 0066ae1f  c3                   ret 
// 0066ae20  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0066ae23  7413                 je 0x66ae38
// 0066ae25  8b16                 mov edx, dword ptr [esi]
// 0066ae27  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0066ae2e  8b06                 mov eax, dword ptr [esi]
// 0066ae30  8b08                 mov ecx, dword ptr [eax]
// 0066ae32  56                   push esi
// 0066ae33  ffd1                 call ecx
// 0066ae35  83c404               add esp, 4
// 0066ae38  395e28               cmp dword ptr [esi + 0x28], ebx
// 0066ae3b  0f8483000000         je 0x66aec4
// 0066ae41  8b16                 mov edx, dword ptr [esi]
// 0066ae43  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0066ae4a  8b06                 mov eax, dword ptr [esi]
// 0066ae4c  8b08                 mov ecx, dword ptr [eax]
// 0066ae4e  56                   push esi
// 0066ae4f  ffd1                 call ecx
// 0066ae51  83c404               add esp, 4
// 0066ae54  5f                   pop edi
// 0066ae55  5e                   pop esi
// 0066ae56  5b                   pop ebx
// 0066ae57  c3                   ret 
// 0066ae58  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0066ae5b  7413                 je 0x66ae70
// 0066ae5d  8b16                 mov edx, dword ptr [esi]
// 0066ae5f  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0066ae66  8b06                 mov eax, dword ptr [esi]
// 0066ae68  8b08                 mov ecx, dword ptr [eax]
// 0066ae6a  56                   push esi
// 0066ae6b  ffd1                 call ecx
// 0066ae6d  83c404               add esp, 4
// 0066ae70  8b4628               mov eax, dword ptr [esi + 0x28]
// 0066ae73  3bc3                 cmp eax, ebx
// 0066ae75  7511                 jne 0x66ae88
// 0066ae77  c70700a86600         mov dword ptr [edi], 0x66a800
// 0066ae7d  c74704a0aa6600       mov dword ptr [edi + 4], 0x66aaa0
// 0066ae84  5f                   pop edi
// 0066ae85  5e                   pop esi
// 0066ae86  5b                   pop ebx
// 0066ae87  c3                   ret 
// 0066ae88  83f805               cmp eax, 5
// 0066ae8b  7437                 je 0x66aec4
// 0066ae8d  8b16                 mov edx, dword ptr [esi]
// 0066ae8f  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0066ae96  8b06                 mov eax, dword ptr [esi]
// 0066ae98  8b08                 mov ecx, dword ptr [eax]
// 0066ae9a  56                   push esi
// 0066ae9b  ffd1                 call ecx
// 0066ae9d  83c404               add esp, 4
// 0066aea0  5f                   pop edi
// 0066aea1  5e                   pop esi
// 0066aea2  5b                   pop ebx
// 0066aea3  c3                   ret 
// 0066aea4  3b4628               cmp eax, dword ptr [esi + 0x28]
// 0066aea7  7508                 jne 0x66aeb1
// 0066aea9  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0066aeac  3b5624               cmp edx, dword ptr [esi + 0x24]
// 0066aeaf  7413                 je 0x66aec4
// 0066aeb1  8b06                 mov eax, dword ptr [esi]
// 0066aeb3  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 0066aeba  8b0e                 mov ecx, dword ptr [esi]
// 0066aebc  8b11                 mov edx, dword ptr [ecx]
// 0066aebe  56                   push esi
// 0066aebf  ffd2                 call edx
// 0066aec1  83c404               add esp, 4
// 0066aec4  c7470450ac6600       mov dword ptr [edi + 4], 0x66ac50
// 0066aecb  5f                   pop edi
// 0066aecc  5e                   pop esi
// 0066aecd  5b                   pop ebx
// 0066aece  c3                   ret 
// 0066aecf  90                   nop 
// 0066aed0  08ad660010ad         or byte ptr [ebp - 0x52efff9a], ch
// 0066aed6  660010               add byte ptr [eax], dl
// 0066aed9  ad                   lodsd eax, dword ptr [esi]
// 0066aeda  660018               add byte ptr [eax], bl
// 0066aedd  ad                   lodsd eax, dword ptr [esi]
// 0066aede  660018               add byte ptr [eax], bl
// 0066aee1  ad                   lodsd eax, dword ptr [esi]
// 0066aee2  66004dad             add byte ptr [ebp - 0x53], cl
// 0066aee6  660094ad6600cead     add byte ptr [ebp + ebp*4 - 0x5231ff9a], dl
// 0066aeee  660020               add byte ptr [eax], ah
// 0066aef1  ae                   scasb al, byte ptr es:[edi]
// 0066aef2  660058ae             add byte ptr [eax - 0x52], bl
// library jpeg-6b/jccolor.c (function _jinit_color_converter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
