// roc 2011-06 0053abf0  unit: seg_00530000  size: 834 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053abf0
//
// 0053abf0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0053abf4  83ec24               sub esp, 0x24
// 0053abf7  53                   push ebx
// 0053abf8  85c9                 test ecx, ecx
// 0053abfa  0f8428030000         je 0x53af28
// 0053ac00  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0053ac04  85db                 test ebx, ebx
// 0053ac06  0f841c030000         je 0x53af28
// 0053ac0c  803b01               cmp byte ptr [ebx], 1
// 0053ac0f  0f8413030000         je 0x53af28
// 0053ac15  8b442438             mov eax, dword ptr [esp + 0x38]
// 0053ac19  03c0                 add eax, eax
// 0053ac1b  03c0                 add eax, eax
// 0053ac1d  03c0                 add eax, eax
// 0053ac1f  99                   cdq 
// 0053ac20  83e27f               and edx, 0x7f
// 0053ac23  55                   push ebp
// 0053ac24  03c2                 add eax, edx
// 0053ac26  56                   push esi
// 0053ac27  8bf0                 mov esi, eax
// 0053ac29  0fb601               movzx eax, byte ptr [ecx]
// 0053ac2c  c1fe07               sar esi, 7
// 0053ac2f  83e801               sub eax, 1
// 0053ac32  57                   push edi
// 0053ac33  89742410             mov dword ptr [esp + 0x10], esi
// 0053ac37  0f84af020000         je 0x53aeec
// 0053ac3d  83e801               sub eax, 1
// 0053ac40  0f841b020000         je 0x53ae61
// 0053ac46  83e801               sub eax, 1
// 0053ac49  740d                 je 0x53ac58
// 0053ac4b  5f                   pop edi
// 0053ac4c  5e                   pop esi
// 0053ac4d  5d                   pop ebp
// 0053ac4e  b8fbffffff           mov eax, 0xfffffffb
// 0053ac53  5b                   pop ebx
// 0053ac54  83c424               add esp, 0x24
// 0053ac57  c3                   ret 
// 0053ac58  8b4101               mov eax, dword ptr [ecx + 1]
// 0053ac5b  8b5105               mov edx, dword ptr [ecx + 5]
// 0053ac5e  89442414             mov dword ptr [esp + 0x14], eax
// 0053ac62  8b4109               mov eax, dword ptr [ecx + 9]
// 0053ac65  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 0053ac68  89542418             mov dword ptr [esp + 0x18], edx
// 0053ac6c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0053ac70  894c2420             mov dword ptr [esp + 0x20], ecx
// 0053ac74  89742438             mov dword ptr [esp + 0x38], esi
// 0053ac78  85f6                 test esi, esi
// 0053ac7a  0f8e9b020000         jle 0x53af1b
// 0053ac80  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0053ac84  83c330               add ebx, 0x30
// 0053ac87  895c2444             mov dword ptr [esp + 0x44], ebx
// 0053ac8b  eb03                 jmp 0x53ac90
// 0053ac8d  8d4900               lea ecx, [ecx]
// 0053ac90  33ff                 xor edi, edi
// 0053ac92  8b442418             mov eax, dword ptr [esp + 0x18]
// 0053ac96  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053ac9a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053ac9e  89542424             mov dword ptr [esp + 0x24], edx
// 0053aca2  8b542420             mov edx, dword ptr [esp + 0x20]
// 0053aca6  89442428             mov dword ptr [esp + 0x28], eax
// 0053acaa  8b442444             mov eax, dword ptr [esp + 0x44]
// 0053acae  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0053acb2  50                   push eax
// 0053acb3  8d4c2428             lea ecx, [esp + 0x28]
// 0053acb7  89542434             mov dword ptr [esp + 0x34], edx
// 0053acbb  51                   push ecx
// 0053acbc  8bd1                 mov edx, ecx
// 0053acbe  52                   push edx
// 0053acbf  e84cf6ffff           call 0x53a310
// 0053acc4  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 0053acc9  02db                 add bl, bl
// 0053accb  8bc7                 mov eax, edi
// 0053accd  c1e803               shr eax, 3
// 0053acd0  8d3428               lea esi, [eax + ebp]
// 0053acd3  0fb6442430           movzx eax, byte ptr [esp + 0x30]
// 0053acd8  8bd7                 mov edx, edi
// 0053acda  83e207               and edx, 7
// 0053acdd  2480                 and al, 0x80
// 0053acdf  8aca                 mov cl, dl
// 0053ace1  d2e8                 shr al, cl
// 0053ace3  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 0053ace8  c0e907               shr cl, 7
// 0053aceb  0acb                 or cl, bl
// 0053aced  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 0053acf2  884c2420             mov byte ptr [esp + 0x20], cl
// 0053acf6  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 0053acfb  c0e907               shr cl, 7
// 0053acfe  02db                 add bl, bl
// 0053ad00  0acb                 or cl, bl
// 0053ad02  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 0053ad07  884c2421             mov byte ptr [esp + 0x21], cl
// 0053ad0b  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 0053ad10  c0e907               shr cl, 7
// 0053ad13  02db                 add bl, bl
// 0053ad15  0acb                 or cl, bl
// 0053ad17  0fb65c2423           movzx ebx, byte ptr [esp + 0x23]
// 0053ad1c  884c2422             mov byte ptr [esp + 0x22], cl
// 0053ad20  0fb64c2424           movzx ecx, byte ptr [esp + 0x24]
// 0053ad25  c0e907               shr cl, 7
// 0053ad28  02db                 add bl, bl
// 0053ad2a  0acb                 or cl, bl
// 0053ad2c  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 0053ad31  884c2423             mov byte ptr [esp + 0x23], cl
// 0053ad35  0fb64c2425           movzx ecx, byte ptr [esp + 0x25]
// 0053ad3a  c0e907               shr cl, 7
// 0053ad3d  02db                 add bl, bl
// 0053ad3f  0acb                 or cl, bl
// 0053ad41  0fb65c2425           movzx ebx, byte ptr [esp + 0x25]
// 0053ad46  884c2424             mov byte ptr [esp + 0x24], cl
// 0053ad4a  0fb64c2426           movzx ecx, byte ptr [esp + 0x26]
// 0053ad4f  c0e907               shr cl, 7
// 0053ad52  02db                 add bl, bl
// 0053ad54  0acb                 or cl, bl
// 0053ad56  0fb65c2426           movzx ebx, byte ptr [esp + 0x26]
// 0053ad5b  3006                 xor byte ptr [esi], al
// 0053ad5d  884c2425             mov byte ptr [esp + 0x25], cl
// 0053ad61  0fb64c2427           movzx ecx, byte ptr [esp + 0x27]
// 0053ad66  8a06                 mov al, byte ptr [esi]
// 0053ad68  c0e907               shr cl, 7
// 0053ad6b  02db                 add bl, bl
// 0053ad6d  0acb                 or cl, bl
// 0053ad6f  0fb65c2427           movzx ebx, byte ptr [esp + 0x27]
// 0053ad74  884c2426             mov byte ptr [esp + 0x26], cl
// 0053ad78  0fb64c2428           movzx ecx, byte ptr [esp + 0x28]
// 0053ad7d  c0e907               shr cl, 7
// 0053ad80  02db                 add bl, bl
// 0053ad82  0acb                 or cl, bl
// 0053ad84  0fb65c2428           movzx ebx, byte ptr [esp + 0x28]
// 0053ad89  884c2427             mov byte ptr [esp + 0x27], cl
// 0053ad8d  0fb64c2429           movzx ecx, byte ptr [esp + 0x29]
// 0053ad92  c0e907               shr cl, 7
// 0053ad95  02db                 add bl, bl
// 0053ad97  83c40c               add esp, 0xc
// 0053ad9a  0acb                 or cl, bl
// 0053ad9c  884c241c             mov byte ptr [esp + 0x1c], cl
// 0053ada0  0fb64c241e           movzx ecx, byte ptr [esp + 0x1e]
// 0053ada5  0fb65c241d           movzx ebx, byte ptr [esp + 0x1d]
// 0053adaa  c0e907               shr cl, 7
// 0053adad  02db                 add bl, bl
// 0053adaf  0acb                 or cl, bl
// 0053adb1  0fb65c241e           movzx ebx, byte ptr [esp + 0x1e]
// 0053adb6  884c241d             mov byte ptr [esp + 0x1d], cl
// 0053adba  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 0053adbf  c0e907               shr cl, 7
// 0053adc2  02db                 add bl, bl
// 0053adc4  0acb                 or cl, bl
// 0053adc6  0fb65c241f           movzx ebx, byte ptr [esp + 0x1f]
// 0053adcb  884c241e             mov byte ptr [esp + 0x1e], cl
// 0053adcf  0fb64c2420           movzx ecx, byte ptr [esp + 0x20]
// 0053add4  c0e907               shr cl, 7
// 0053add7  02db                 add bl, bl
// 0053add9  0acb                 or cl, bl
// 0053addb  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 0053ade0  884c241f             mov byte ptr [esp + 0x1f], cl
// 0053ade4  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 0053ade9  c0e907               shr cl, 7
// 0053adec  02db                 add bl, bl
// 0053adee  0acb                 or cl, bl
// 0053adf0  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 0053adf5  884c2420             mov byte ptr [esp + 0x20], cl
// 0053adf9  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 0053adfe  c0e907               shr cl, 7
// 0053ae01  02db                 add bl, bl
// 0053ae03  0acb                 or cl, bl
// 0053ae05  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 0053ae0a  884c2421             mov byte ptr [esp + 0x21], cl
// 0053ae0e  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 0053ae13  c0e907               shr cl, 7
// 0053ae16  02db                 add bl, bl
// 0053ae18  0acb                 or cl, bl
// 0053ae1a  884c2422             mov byte ptr [esp + 0x22], cl
// 0053ae1e  b107                 mov cl, 7
// 0053ae20  2aca                 sub cl, dl
// 0053ae22  8a542423             mov dl, byte ptr [esp + 0x23]
// 0053ae26  d2e8                 shr al, cl
// 0053ae28  02d2                 add dl, dl
// 0053ae2a  47                   inc edi
// 0053ae2b  2401                 and al, 1
// 0053ae2d  0ac2                 or al, dl
// 0053ae2f  81ff80000000         cmp edi, 0x80
// 0053ae35  88442423             mov byte ptr [esp + 0x23], al
// 0053ae39  0f8c53feffff         jl 0x53ac92
// 0053ae3f  8b442438             mov eax, dword ptr [esp + 0x38]
// 0053ae43  48                   dec eax
// 0053ae44  89442438             mov dword ptr [esp + 0x38], eax
// 0053ae48  85c0                 test eax, eax
// 0053ae4a  0f8f40feffff         jg 0x53ac90
// 0053ae50  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053ae54  5f                   pop edi
// 0053ae55  8bc6                 mov eax, esi
// 0053ae57  5e                   pop esi
// 0053ae58  5d                   pop ebp
// 0053ae59  c1e007               shl eax, 7
// 0053ae5c  5b                   pop ebx
// 0053ae5d  83c424               add esp, 0x24
// 0053ae60  c3                   ret 
// 0053ae61  8b7901               mov edi, dword ptr [ecx + 1]
// 0053ae64  8b5905               mov ebx, dword ptr [ecx + 5]
// 0053ae67  8b6909               mov ebp, dword ptr [ecx + 9]
// 0053ae6a  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 0053ae6d  89742438             mov dword ptr [esp + 0x38], esi
// 0053ae71  85f6                 test esi, esi
// 0053ae73  0f8ea2000000         jle 0x53af1b
// 0053ae79  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0053ae7d  8b742440             mov esi, dword ptr [esp + 0x40]
// 0053ae81  83c030               add eax, 0x30
// 0053ae84  89442444             mov dword ptr [esp + 0x44], eax
// 0053ae88  eb0a                 jmp 0x53ae94
// 0053ae8a  8d9b00000000         lea ebx, [ebx]
// 0053ae90  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0053ae94  334e0c               xor ecx, dword ptr [esi + 0xc]
// 0053ae97  8b542448             mov edx, dword ptr [esp + 0x48]
// 0053ae9b  333e                 xor edi, dword ptr [esi]
// 0053ae9d  335e04               xor ebx, dword ptr [esi + 4]
// 0053aea0  336e08               xor ebp, dword ptr [esi + 8]
// 0053aea3  894c2430             mov dword ptr [esp + 0x30], ecx
// 0053aea7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0053aeab  51                   push ecx
// 0053aeac  52                   push edx
// 0053aead  8d44242c             lea eax, [esp + 0x2c]
// 0053aeb1  50                   push eax
// 0053aeb2  897c2430             mov dword ptr [esp + 0x30], edi
// 0053aeb6  895c2434             mov dword ptr [esp + 0x34], ebx
// 0053aeba  896c2438             mov dword ptr [esp + 0x38], ebp
// 0053aebe  e84df4ffff           call 0x53a310
// 0053aec3  8b442444             mov eax, dword ptr [esp + 0x44]
// 0053aec7  8344245410           add dword ptr [esp + 0x54], 0x10
// 0053aecc  48                   dec eax
// 0053aecd  83c40c               add esp, 0xc
// 0053aed0  83c610               add esi, 0x10
// 0053aed3  89442438             mov dword ptr [esp + 0x38], eax
// 0053aed7  85c0                 test eax, eax
// 0053aed9  7fb5                 jg 0x53ae90
// 0053aedb  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053aedf  5f                   pop edi
// 0053aee0  8bc6                 mov eax, esi
// 0053aee2  5e                   pop esi
// 0053aee3  5d                   pop ebp
// 0053aee4  c1e007               shl eax, 7
// 0053aee7  5b                   pop ebx
// 0053aee8  83c424               add esp, 0x24
// 0053aeeb  c3                   ret 
// 0053aeec  8bfe                 mov edi, esi
// 0053aeee  85f6                 test esi, esi
// 0053aef0  7e29                 jle 0x53af1b
// 0053aef2  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0053aef6  83c330               add ebx, 0x30
// 0053aef9  895c2444             mov dword ptr [esp + 0x44], ebx
// 0053aefd  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0053af01  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0053af05  51                   push ecx
// 0053af06  55                   push ebp
// 0053af07  53                   push ebx
// 0053af08  e803f4ffff           call 0x53a310
// 0053af0d  4f                   dec edi
// 0053af0e  83c40c               add esp, 0xc
// 0053af11  83c310               add ebx, 0x10
// 0053af14  83c510               add ebp, 0x10
// 0053af17  85ff                 test edi, edi
// 0053af19  7fe6                 jg 0x53af01
// 0053af1b  5f                   pop edi
// 0053af1c  8bc6                 mov eax, esi
// 0053af1e  5e                   pop esi
// 0053af1f  5d                   pop ebp
// 0053af20  c1e007               shl eax, 7
// 0053af23  5b                   pop ebx
// 0053af24  83c424               add esp, 0x24
// 0053af27  c3                   ret 
// 0053af28  b8fbffffff           mov eax, 0xfffffffb
// 0053af2d  5b                   pop ebx
// 0053af2e  83c424               add esp, 0x24
// 0053af31  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockEncrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
