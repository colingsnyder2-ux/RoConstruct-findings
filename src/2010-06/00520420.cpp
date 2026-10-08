// roc 2010-06 00520420  unit: CSHA1  size: 834 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00520420
//
// 00520420  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00520424  83ec24               sub esp, 0x24
// 00520427  53                   push ebx
// 00520428  85c9                 test ecx, ecx
// 0052042a  0f8428030000         je 0x520758
// 00520430  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00520434  85db                 test ebx, ebx
// 00520436  0f841c030000         je 0x520758
// 0052043c  803b01               cmp byte ptr [ebx], 1
// 0052043f  0f8413030000         je 0x520758
// 00520445  8b442438             mov eax, dword ptr [esp + 0x38]
// 00520449  03c0                 add eax, eax
// 0052044b  03c0                 add eax, eax
// 0052044d  03c0                 add eax, eax
// 0052044f  99                   cdq 
// 00520450  83e27f               and edx, 0x7f
// 00520453  55                   push ebp
// 00520454  03c2                 add eax, edx
// 00520456  56                   push esi
// 00520457  8bf0                 mov esi, eax
// 00520459  0fb601               movzx eax, byte ptr [ecx]
// 0052045c  c1fe07               sar esi, 7
// 0052045f  83e801               sub eax, 1
// 00520462  57                   push edi
// 00520463  89742410             mov dword ptr [esp + 0x10], esi
// 00520467  0f84af020000         je 0x52071c
// 0052046d  83e801               sub eax, 1
// 00520470  0f841b020000         je 0x520691
// 00520476  83e801               sub eax, 1
// 00520479  740d                 je 0x520488
// 0052047b  5f                   pop edi
// 0052047c  5e                   pop esi
// 0052047d  5d                   pop ebp
// 0052047e  b8fbffffff           mov eax, 0xfffffffb
// 00520483  5b                   pop ebx
// 00520484  83c424               add esp, 0x24
// 00520487  c3                   ret 
// 00520488  8b4101               mov eax, dword ptr [ecx + 1]
// 0052048b  8b5105               mov edx, dword ptr [ecx + 5]
// 0052048e  89442414             mov dword ptr [esp + 0x14], eax
// 00520492  8b4109               mov eax, dword ptr [ecx + 9]
// 00520495  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 00520498  89542418             mov dword ptr [esp + 0x18], edx
// 0052049c  8944241c             mov dword ptr [esp + 0x1c], eax
// 005204a0  894c2420             mov dword ptr [esp + 0x20], ecx
// 005204a4  89742438             mov dword ptr [esp + 0x38], esi
// 005204a8  85f6                 test esi, esi
// 005204aa  0f8e9b020000         jle 0x52074b
// 005204b0  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 005204b4  83c330               add ebx, 0x30
// 005204b7  895c2444             mov dword ptr [esp + 0x44], ebx
// 005204bb  eb03                 jmp 0x5204c0
// 005204bd  8d4900               lea ecx, [ecx]
// 005204c0  33ff                 xor edi, edi
// 005204c2  8b442418             mov eax, dword ptr [esp + 0x18]
// 005204c6  8b542414             mov edx, dword ptr [esp + 0x14]
// 005204ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005204ce  89542424             mov dword ptr [esp + 0x24], edx
// 005204d2  8b542420             mov edx, dword ptr [esp + 0x20]
// 005204d6  89442428             mov dword ptr [esp + 0x28], eax
// 005204da  8b442444             mov eax, dword ptr [esp + 0x44]
// 005204de  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005204e2  50                   push eax
// 005204e3  8d4c2428             lea ecx, [esp + 0x28]
// 005204e7  89542434             mov dword ptr [esp + 0x34], edx
// 005204eb  51                   push ecx
// 005204ec  8bd1                 mov edx, ecx
// 005204ee  52                   push edx
// 005204ef  e84cf6ffff           call 0x51fb40
// 005204f4  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 005204f9  02db                 add bl, bl
// 005204fb  8bc7                 mov eax, edi
// 005204fd  c1e803               shr eax, 3
// 00520500  8d3428               lea esi, [eax + ebp]
// 00520503  0fb6442430           movzx eax, byte ptr [esp + 0x30]
// 00520508  8bd7                 mov edx, edi
// 0052050a  83e207               and edx, 7
// 0052050d  2480                 and al, 0x80
// 0052050f  8aca                 mov cl, dl
// 00520511  d2e8                 shr al, cl
// 00520513  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 00520518  c0e907               shr cl, 7
// 0052051b  0acb                 or cl, bl
// 0052051d  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 00520522  884c2420             mov byte ptr [esp + 0x20], cl
// 00520526  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 0052052b  c0e907               shr cl, 7
// 0052052e  02db                 add bl, bl
// 00520530  0acb                 or cl, bl
// 00520532  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 00520537  884c2421             mov byte ptr [esp + 0x21], cl
// 0052053b  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 00520540  c0e907               shr cl, 7
// 00520543  02db                 add bl, bl
// 00520545  0acb                 or cl, bl
// 00520547  0fb65c2423           movzx ebx, byte ptr [esp + 0x23]
// 0052054c  884c2422             mov byte ptr [esp + 0x22], cl
// 00520550  0fb64c2424           movzx ecx, byte ptr [esp + 0x24]
// 00520555  c0e907               shr cl, 7
// 00520558  02db                 add bl, bl
// 0052055a  0acb                 or cl, bl
// 0052055c  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 00520561  884c2423             mov byte ptr [esp + 0x23], cl
// 00520565  0fb64c2425           movzx ecx, byte ptr [esp + 0x25]
// 0052056a  c0e907               shr cl, 7
// 0052056d  02db                 add bl, bl
// 0052056f  0acb                 or cl, bl
// 00520571  0fb65c2425           movzx ebx, byte ptr [esp + 0x25]
// 00520576  884c2424             mov byte ptr [esp + 0x24], cl
// 0052057a  0fb64c2426           movzx ecx, byte ptr [esp + 0x26]
// 0052057f  c0e907               shr cl, 7
// 00520582  02db                 add bl, bl
// 00520584  0acb                 or cl, bl
// 00520586  0fb65c2426           movzx ebx, byte ptr [esp + 0x26]
// 0052058b  3006                 xor byte ptr [esi], al
// 0052058d  884c2425             mov byte ptr [esp + 0x25], cl
// 00520591  0fb64c2427           movzx ecx, byte ptr [esp + 0x27]
// 00520596  8a06                 mov al, byte ptr [esi]
// 00520598  c0e907               shr cl, 7
// 0052059b  02db                 add bl, bl
// 0052059d  0acb                 or cl, bl
// 0052059f  0fb65c2427           movzx ebx, byte ptr [esp + 0x27]
// 005205a4  884c2426             mov byte ptr [esp + 0x26], cl
// 005205a8  0fb64c2428           movzx ecx, byte ptr [esp + 0x28]
// 005205ad  c0e907               shr cl, 7
// 005205b0  02db                 add bl, bl
// 005205b2  0acb                 or cl, bl
// 005205b4  0fb65c2428           movzx ebx, byte ptr [esp + 0x28]
// 005205b9  884c2427             mov byte ptr [esp + 0x27], cl
// 005205bd  0fb64c2429           movzx ecx, byte ptr [esp + 0x29]
// 005205c2  c0e907               shr cl, 7
// 005205c5  02db                 add bl, bl
// 005205c7  83c40c               add esp, 0xc
// 005205ca  0acb                 or cl, bl
// 005205cc  884c241c             mov byte ptr [esp + 0x1c], cl
// 005205d0  0fb64c241e           movzx ecx, byte ptr [esp + 0x1e]
// 005205d5  0fb65c241d           movzx ebx, byte ptr [esp + 0x1d]
// 005205da  c0e907               shr cl, 7
// 005205dd  02db                 add bl, bl
// 005205df  0acb                 or cl, bl
// 005205e1  0fb65c241e           movzx ebx, byte ptr [esp + 0x1e]
// 005205e6  884c241d             mov byte ptr [esp + 0x1d], cl
// 005205ea  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 005205ef  c0e907               shr cl, 7
// 005205f2  02db                 add bl, bl
// 005205f4  0acb                 or cl, bl
// 005205f6  0fb65c241f           movzx ebx, byte ptr [esp + 0x1f]
// 005205fb  884c241e             mov byte ptr [esp + 0x1e], cl
// 005205ff  0fb64c2420           movzx ecx, byte ptr [esp + 0x20]
// 00520604  c0e907               shr cl, 7
// 00520607  02db                 add bl, bl
// 00520609  0acb                 or cl, bl
// 0052060b  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 00520610  884c241f             mov byte ptr [esp + 0x1f], cl
// 00520614  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 00520619  c0e907               shr cl, 7
// 0052061c  02db                 add bl, bl
// 0052061e  0acb                 or cl, bl
// 00520620  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 00520625  884c2420             mov byte ptr [esp + 0x20], cl
// 00520629  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 0052062e  c0e907               shr cl, 7
// 00520631  02db                 add bl, bl
// 00520633  0acb                 or cl, bl
// 00520635  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 0052063a  884c2421             mov byte ptr [esp + 0x21], cl
// 0052063e  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 00520643  c0e907               shr cl, 7
// 00520646  02db                 add bl, bl
// 00520648  0acb                 or cl, bl
// 0052064a  884c2422             mov byte ptr [esp + 0x22], cl
// 0052064e  b107                 mov cl, 7
// 00520650  2aca                 sub cl, dl
// 00520652  8a542423             mov dl, byte ptr [esp + 0x23]
// 00520656  d2e8                 shr al, cl
// 00520658  02d2                 add dl, dl
// 0052065a  47                   inc edi
// 0052065b  2401                 and al, 1
// 0052065d  0ac2                 or al, dl
// 0052065f  81ff80000000         cmp edi, 0x80
// 00520665  88442423             mov byte ptr [esp + 0x23], al
// 00520669  0f8c53feffff         jl 0x5204c2
// 0052066f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00520673  48                   dec eax
// 00520674  89442438             mov dword ptr [esp + 0x38], eax
// 00520678  85c0                 test eax, eax
// 0052067a  0f8f40feffff         jg 0x5204c0
// 00520680  8b742410             mov esi, dword ptr [esp + 0x10]
// 00520684  5f                   pop edi
// 00520685  8bc6                 mov eax, esi
// 00520687  5e                   pop esi
// 00520688  5d                   pop ebp
// 00520689  c1e007               shl eax, 7
// 0052068c  5b                   pop ebx
// 0052068d  83c424               add esp, 0x24
// 00520690  c3                   ret 
// 00520691  8b7901               mov edi, dword ptr [ecx + 1]
// 00520694  8b5905               mov ebx, dword ptr [ecx + 5]
// 00520697  8b6909               mov ebp, dword ptr [ecx + 9]
// 0052069a  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 0052069d  89742438             mov dword ptr [esp + 0x38], esi
// 005206a1  85f6                 test esi, esi
// 005206a3  0f8ea2000000         jle 0x52074b
// 005206a9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005206ad  8b742440             mov esi, dword ptr [esp + 0x40]
// 005206b1  83c030               add eax, 0x30
// 005206b4  89442444             mov dword ptr [esp + 0x44], eax
// 005206b8  eb0a                 jmp 0x5206c4
// 005206ba  8d9b00000000         lea ebx, [ebx]
// 005206c0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005206c4  334e0c               xor ecx, dword ptr [esi + 0xc]
// 005206c7  8b542448             mov edx, dword ptr [esp + 0x48]
// 005206cb  333e                 xor edi, dword ptr [esi]
// 005206cd  335e04               xor ebx, dword ptr [esi + 4]
// 005206d0  336e08               xor ebp, dword ptr [esi + 8]
// 005206d3  894c2430             mov dword ptr [esp + 0x30], ecx
// 005206d7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005206db  51                   push ecx
// 005206dc  52                   push edx
// 005206dd  8d44242c             lea eax, [esp + 0x2c]
// 005206e1  50                   push eax
// 005206e2  897c2430             mov dword ptr [esp + 0x30], edi
// 005206e6  895c2434             mov dword ptr [esp + 0x34], ebx
// 005206ea  896c2438             mov dword ptr [esp + 0x38], ebp
// 005206ee  e84df4ffff           call 0x51fb40
// 005206f3  8b442444             mov eax, dword ptr [esp + 0x44]
// 005206f7  8344245410           add dword ptr [esp + 0x54], 0x10
// 005206fc  48                   dec eax
// 005206fd  83c40c               add esp, 0xc
// 00520700  83c610               add esi, 0x10
// 00520703  89442438             mov dword ptr [esp + 0x38], eax
// 00520707  85c0                 test eax, eax
// 00520709  7fb5                 jg 0x5206c0
// 0052070b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052070f  5f                   pop edi
// 00520710  8bc6                 mov eax, esi
// 00520712  5e                   pop esi
// 00520713  5d                   pop ebp
// 00520714  c1e007               shl eax, 7
// 00520717  5b                   pop ebx
// 00520718  83c424               add esp, 0x24
// 0052071b  c3                   ret 
// 0052071c  8bfe                 mov edi, esi
// 0052071e  85f6                 test esi, esi
// 00520720  7e29                 jle 0x52074b
// 00520722  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00520726  83c330               add ebx, 0x30
// 00520729  895c2444             mov dword ptr [esp + 0x44], ebx
// 0052072d  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00520731  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00520735  51                   push ecx
// 00520736  55                   push ebp
// 00520737  53                   push ebx
// 00520738  e803f4ffff           call 0x51fb40
// 0052073d  4f                   dec edi
// 0052073e  83c40c               add esp, 0xc
// 00520741  83c310               add ebx, 0x10
// 00520744  83c510               add ebp, 0x10
// 00520747  85ff                 test edi, edi
// 00520749  7fe6                 jg 0x520731
// 0052074b  5f                   pop edi
// 0052074c  8bc6                 mov eax, esi
// 0052074e  5e                   pop esi
// 0052074f  5d                   pop ebp
// 00520750  c1e007               shl eax, 7
// 00520753  5b                   pop ebx
// 00520754  83c424               add esp, 0x24
// 00520757  c3                   ret 
// 00520758  b8fbffffff           mov eax, 0xfffffffb
// 0052075d  5b                   pop ebx
// 0052075e  83c424               add esp, 0x24
// 00520761  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockEncrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
