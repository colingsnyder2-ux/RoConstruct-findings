// from server: 100% by auto
// roc 2007-08 004ccc90  unit: CSHA1  size: 890 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ccc90
//
// 004ccc90  83ec30               sub esp, 0x30
// 004ccc93  a188518b00           mov eax, dword ptr [0x8b5188]
// 004ccc98  33c4                 xor eax, esp
// 004ccc9a  8944242c             mov dword ptr [esp + 0x2c], eax
// 004ccc9e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004ccca2  85c9                 test ecx, ecx
// 004ccca4  53                   push ebx
// 004ccca5  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 004ccca9  55                   push ebp
// 004cccaa  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 004cccae  56                   push esi
// 004cccaf  8b742448             mov esi, dword ptr [esp + 0x48]
// 004cccb3  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cccb7  0f8436030000         je 0x4ccff3
// 004cccbd  85db                 test ebx, ebx
// 004cccbf  0f842e030000         je 0x4ccff3
// 004cccc5  803b01               cmp byte ptr [ebx], 1
// 004cccc8  0f8425030000         je 0x4ccff3
// 004cccce  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004cccd2  03c0                 add eax, eax
// 004cccd4  03c0                 add eax, eax
// 004cccd6  03c0                 add eax, eax
// 004cccd8  99                   cdq 
// 004cccd9  83e27f               and edx, 0x7f
// 004cccdc  03c2                 add eax, edx
// 004cccde  0fb611               movzx edx, byte ptr [ecx]
// 004ccce1  c1f807               sar eax, 7
// 004ccce4  83ea01               sub edx, 1
// 004ccce7  57                   push edi
// 004ccce8  89442418             mov dword ptr [esp + 0x18], eax
// 004cccec  0f84c6020000         je 0x4ccfb8
// 004cccf2  83ea01               sub edx, 1
// 004cccf5  0f8433020000         je 0x4ccf2e
// 004cccfb  83ea01               sub edx, 1
// 004cccfe  7418                 je 0x4ccd18
// 004ccd00  5f                   pop edi
// 004ccd01  5e                   pop esi
// 004ccd02  5d                   pop ebp
// 004ccd03  b8fbffffff           mov eax, 0xfffffffb
// 004ccd08  5b                   pop ebx
// 004ccd09  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004ccd0d  33cc                 xor ecx, esp
// 004ccd0f  e80a3d1600           call 0x630a1e
// 004ccd14  83c430               add esp, 0x30
// 004ccd17  c3                   ret 
// 004ccd18  85c0                 test eax, eax
// 004ccd1a  8b5101               mov edx, dword ptr [ecx + 1]
// 004ccd1d  8954241c             mov dword ptr [esp + 0x1c], edx
// 004ccd21  8b5105               mov edx, dword ptr [ecx + 5]
// 004ccd24  89542420             mov dword ptr [esp + 0x20], edx
// 004ccd28  8b5109               mov edx, dword ptr [ecx + 9]
// 004ccd2b  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 004ccd2e  89542424             mov dword ptr [esp + 0x24], edx
// 004ccd32  894c2428             mov dword ptr [esp + 0x28], ecx
// 004ccd36  89442410             mov dword ptr [esp + 0x10], eax
// 004ccd3a  0f8e9d020000         jle 0x4ccfdd
// 004ccd40  83c330               add ebx, 0x30
// 004ccd43  895c2414             mov dword ptr [esp + 0x14], ebx
// 004ccd47  eb07                 jmp 0x4ccd50
// 004ccd49  8da42400000000       lea esp, [esp]
// 004ccd50  33ff                 xor edi, edi
// 004ccd52  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ccd56  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004ccd5a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004ccd5e  8954242c             mov dword ptr [esp + 0x2c], edx
// 004ccd62  8b542428             mov edx, dword ptr [esp + 0x28]
// 004ccd66  89442430             mov dword ptr [esp + 0x30], eax
// 004ccd6a  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ccd6e  894c2434             mov dword ptr [esp + 0x34], ecx
// 004ccd72  50                   push eax
// 004ccd73  8d4c2430             lea ecx, [esp + 0x30]
// 004ccd77  8954243c             mov dword ptr [esp + 0x3c], edx
// 004ccd7b  51                   push ecx
// 004ccd7c  8bd1                 mov edx, ecx
// 004ccd7e  52                   push edx
// 004ccd7f  e8acf5ffff           call 0x4cc330
// 004ccd84  0fb65c2428           movzx ebx, byte ptr [esp + 0x28]
// 004ccd89  02db                 add bl, bl
// 004ccd8b  8bc7                 mov eax, edi
// 004ccd8d  c1e803               shr eax, 3
// 004ccd90  8d3428               lea esi, [eax + ebp]
// 004ccd93  0fb6442438           movzx eax, byte ptr [esp + 0x38]
// 004ccd98  8bd7                 mov edx, edi
// 004ccd9a  83e207               and edx, 7
// 004ccd9d  2480                 and al, 0x80
// 004ccd9f  8aca                 mov cl, dl
// 004ccda1  d2e8                 shr al, cl
// 004ccda3  0fb64c2429           movzx ecx, byte ptr [esp + 0x29]
// 004ccda8  c0e907               shr cl, 7
// 004ccdab  0acb                 or cl, bl
// 004ccdad  0fb65c2429           movzx ebx, byte ptr [esp + 0x29]
// 004ccdb2  884c2428             mov byte ptr [esp + 0x28], cl
// 004ccdb6  0fb64c242a           movzx ecx, byte ptr [esp + 0x2a]
// 004ccdbb  c0e907               shr cl, 7
// 004ccdbe  02db                 add bl, bl
// 004ccdc0  0acb                 or cl, bl
// 004ccdc2  0fb65c242a           movzx ebx, byte ptr [esp + 0x2a]
// 004ccdc7  884c2429             mov byte ptr [esp + 0x29], cl
// 004ccdcb  0fb64c242b           movzx ecx, byte ptr [esp + 0x2b]
// 004ccdd0  c0e907               shr cl, 7
// 004ccdd3  02db                 add bl, bl
// 004ccdd5  0acb                 or cl, bl
// 004ccdd7  0fb65c242b           movzx ebx, byte ptr [esp + 0x2b]
// 004ccddc  884c242a             mov byte ptr [esp + 0x2a], cl
// 004ccde0  0fb64c242c           movzx ecx, byte ptr [esp + 0x2c]
// 004ccde5  c0e907               shr cl, 7
// 004ccde8  02db                 add bl, bl
// 004ccdea  0acb                 or cl, bl
// 004ccdec  0fb65c242c           movzx ebx, byte ptr [esp + 0x2c]
// 004ccdf1  884c242b             mov byte ptr [esp + 0x2b], cl
// 004ccdf5  0fb64c242d           movzx ecx, byte ptr [esp + 0x2d]
// 004ccdfa  c0e907               shr cl, 7
// 004ccdfd  02db                 add bl, bl
// 004ccdff  0acb                 or cl, bl
// 004cce01  0fb65c242d           movzx ebx, byte ptr [esp + 0x2d]
// 004cce06  884c242c             mov byte ptr [esp + 0x2c], cl
// 004cce0a  0fb64c242e           movzx ecx, byte ptr [esp + 0x2e]
// 004cce0f  c0e907               shr cl, 7
// 004cce12  02db                 add bl, bl
// 004cce14  0acb                 or cl, bl
// 004cce16  0fb65c242e           movzx ebx, byte ptr [esp + 0x2e]
// 004cce1b  3006                 xor byte ptr [esi], al
// 004cce1d  884c242d             mov byte ptr [esp + 0x2d], cl
// 004cce21  0fb64c242f           movzx ecx, byte ptr [esp + 0x2f]
// 004cce26  8a06                 mov al, byte ptr [esi]
// 004cce28  c0e907               shr cl, 7
// 004cce2b  02db                 add bl, bl
// 004cce2d  0acb                 or cl, bl
// 004cce2f  0fb65c242f           movzx ebx, byte ptr [esp + 0x2f]
// 004cce34  884c242e             mov byte ptr [esp + 0x2e], cl
// 004cce38  0fb64c2430           movzx ecx, byte ptr [esp + 0x30]
// 004cce3d  c0e907               shr cl, 7
// 004cce40  02db                 add bl, bl
// 004cce42  0acb                 or cl, bl
// 004cce44  0fb65c2430           movzx ebx, byte ptr [esp + 0x30]
// 004cce49  884c242f             mov byte ptr [esp + 0x2f], cl
// 004cce4d  0fb64c2431           movzx ecx, byte ptr [esp + 0x31]
// 004cce52  c0e907               shr cl, 7
// 004cce55  02db                 add bl, bl
// 004cce57  83c40c               add esp, 0xc
// 004cce5a  0acb                 or cl, bl
// 004cce5c  884c2424             mov byte ptr [esp + 0x24], cl
// 004cce60  0fb64c2426           movzx ecx, byte ptr [esp + 0x26]
// 004cce65  0fb65c2425           movzx ebx, byte ptr [esp + 0x25]
// 004cce6a  c0e907               shr cl, 7
// 004cce6d  02db                 add bl, bl
// 004cce6f  0acb                 or cl, bl
// 004cce71  0fb65c2426           movzx ebx, byte ptr [esp + 0x26]
// 004cce76  884c2425             mov byte ptr [esp + 0x25], cl
// 004cce7a  0fb64c2427           movzx ecx, byte ptr [esp + 0x27]
// 004cce7f  c0e907               shr cl, 7
// 004cce82  02db                 add bl, bl
// 004cce84  0acb                 or cl, bl
// 004cce86  0fb65c2427           movzx ebx, byte ptr [esp + 0x27]
// 004cce8b  884c2426             mov byte ptr [esp + 0x26], cl
// 004cce8f  0fb64c2428           movzx ecx, byte ptr [esp + 0x28]
// 004cce94  c0e907               shr cl, 7
// 004cce97  02db                 add bl, bl
// 004cce99  0acb                 or cl, bl
// 004cce9b  0fb65c2428           movzx ebx, byte ptr [esp + 0x28]
// 004ccea0  884c2427             mov byte ptr [esp + 0x27], cl
// 004ccea4  0fb64c2429           movzx ecx, byte ptr [esp + 0x29]
// 004ccea9  c0e907               shr cl, 7
// 004cceac  02db                 add bl, bl
// 004cceae  0acb                 or cl, bl
// 004cceb0  0fb65c2429           movzx ebx, byte ptr [esp + 0x29]
// 004cceb5  884c2428             mov byte ptr [esp + 0x28], cl
// 004cceb9  0fb64c242a           movzx ecx, byte ptr [esp + 0x2a]
// 004ccebe  c0e907               shr cl, 7
// 004ccec1  02db                 add bl, bl
// 004ccec3  0acb                 or cl, bl
// 004ccec5  0fb65c242a           movzx ebx, byte ptr [esp + 0x2a]
// 004cceca  884c2429             mov byte ptr [esp + 0x29], cl
// 004ccece  0fb64c242b           movzx ecx, byte ptr [esp + 0x2b]
// 004cced3  c0e907               shr cl, 7
// 004cced6  02db                 add bl, bl
// 004cced8  0acb                 or cl, bl
// 004cceda  884c242a             mov byte ptr [esp + 0x2a], cl
// 004ccede  b107                 mov cl, 7
// 004ccee0  2aca                 sub cl, dl
// 004ccee2  8a54242b             mov dl, byte ptr [esp + 0x2b]
// 004ccee6  d2e8                 shr al, cl
// 004ccee8  02d2                 add dl, dl
// 004cceea  83c701               add edi, 1
// 004cceed  2401                 and al, 1
// 004cceef  0ac2                 or al, dl
// 004ccef1  81ff80000000         cmp edi, 0x80
// 004ccef7  8844242b             mov byte ptr [esp + 0x2b], al
// 004ccefb  0f8c51feffff         jl 0x4ccd52
// 004ccf01  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ccf05  83e801               sub eax, 1
// 004ccf08  85c0                 test eax, eax
// 004ccf0a  89442410             mov dword ptr [esp + 0x10], eax
// 004ccf0e  0f8f3cfeffff         jg 0x4ccd50
// 004ccf14  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ccf18  5f                   pop edi
// 004ccf19  5e                   pop esi
// 004ccf1a  5d                   pop ebp
// 004ccf1b  c1e007               shl eax, 7
// 004ccf1e  5b                   pop ebx
// 004ccf1f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004ccf23  33cc                 xor ecx, esp
// 004ccf25  e8f43a1600           call 0x630a1e
// 004ccf2a  83c430               add esp, 0x30
// 004ccf2d  c3                   ret 
// 004ccf2e  85c0                 test eax, eax
// 004ccf30  8b7901               mov edi, dword ptr [ecx + 1]
// 004ccf33  8b5905               mov ebx, dword ptr [ecx + 5]
// 004ccf36  8b5109               mov edx, dword ptr [ecx + 9]
// 004ccf39  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 004ccf3c  89442410             mov dword ptr [esp + 0x10], eax
// 004ccf40  0f8e97000000         jle 0x4ccfdd
// 004ccf46  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ccf4a  83c030               add eax, 0x30
// 004ccf4d  89442414             mov dword ptr [esp + 0x14], eax
// 004ccf51  eb08                 jmp 0x4ccf5b
// 004ccf53  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004ccf57  8b542434             mov edx, dword ptr [esp + 0x34]
// 004ccf5b  334e0c               xor ecx, dword ptr [esi + 0xc]
// 004ccf5e  335608               xor edx, dword ptr [esi + 8]
// 004ccf61  333e                 xor edi, dword ptr [esi]
// 004ccf63  335e04               xor ebx, dword ptr [esi + 4]
// 004ccf66  894c2438             mov dword ptr [esp + 0x38], ecx
// 004ccf6a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ccf6e  51                   push ecx
// 004ccf6f  89542438             mov dword ptr [esp + 0x38], edx
// 004ccf73  8d542430             lea edx, [esp + 0x30]
// 004ccf77  55                   push ebp
// 004ccf78  52                   push edx
// 004ccf79  897c2438             mov dword ptr [esp + 0x38], edi
// 004ccf7d  895c243c             mov dword ptr [esp + 0x3c], ebx
// 004ccf81  e8aaf3ffff           call 0x4cc330
// 004ccf86  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004ccf8a  83e801               sub eax, 1
// 004ccf8d  83c40c               add esp, 0xc
// 004ccf90  83c610               add esi, 0x10
// 004ccf93  83c510               add ebp, 0x10
// 004ccf96  85c0                 test eax, eax
// 004ccf98  89442410             mov dword ptr [esp + 0x10], eax
// 004ccf9c  7fb5                 jg 0x4ccf53
// 004ccf9e  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ccfa2  5f                   pop edi
// 004ccfa3  5e                   pop esi
// 004ccfa4  5d                   pop ebp
// 004ccfa5  c1e007               shl eax, 7
// 004ccfa8  5b                   pop ebx
// 004ccfa9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004ccfad  33cc                 xor ecx, esp
// 004ccfaf  e86a3a1600           call 0x630a1e
// 004ccfb4  83c430               add esp, 0x30
// 004ccfb7  c3                   ret 
// 004ccfb8  85c0                 test eax, eax
// 004ccfba  8bf8                 mov edi, eax
// 004ccfbc  7e1f                 jle 0x4ccfdd
// 004ccfbe  83c330               add ebx, 0x30
// 004ccfc1  53                   push ebx
// 004ccfc2  55                   push ebp
// 004ccfc3  56                   push esi
// 004ccfc4  e867f3ffff           call 0x4cc330
// 004ccfc9  83ef01               sub edi, 1
// 004ccfcc  83c40c               add esp, 0xc
// 004ccfcf  83c610               add esi, 0x10
// 004ccfd2  83c510               add ebp, 0x10
// 004ccfd5  85ff                 test edi, edi
// 004ccfd7  7fe8                 jg 0x4ccfc1
// 004ccfd9  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ccfdd  5f                   pop edi
// 004ccfde  5e                   pop esi
// 004ccfdf  5d                   pop ebp
// 004ccfe0  c1e007               shl eax, 7
// 004ccfe3  5b                   pop ebx
// 004ccfe4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004ccfe8  33cc                 xor ecx, esp
// 004ccfea  e82f3a1600           call 0x630a1e
// 004ccfef  83c430               add esp, 0x30
// 004ccff2  c3                   ret 
// 004ccff3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004ccff7  5e                   pop esi
// 004ccff8  5d                   pop ebp
// 004ccff9  5b                   pop ebx
// 004ccffa  33cc                 xor ecx, esp
// 004ccffc  b8fbffffff           mov eax, 0xfffffffb
// 004cd001  e8183a1600           call 0x630a1e
// 004cd006  83c430               add esp, 0x30
// 004cd009  c3                   ret 

// from server: 27% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp