// roc 2012-06 00997880  unit: CXTPCommandBar  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00997880
//
// 00997880  51                   push ecx
// 00997881  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00997885  56                   push esi
// 00997886  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0099788a  683800b500           push 0xb50038
// 0099788f  50                   push eax
// 00997890  56                   push esi
// 00997891  c644241089           mov byte ptr [esp + 0x10], 0x89
// 00997896  c644241150           mov byte ptr [esp + 0x11], 0x50
// 0099789b  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 009978a0  c644241347           mov byte ptr [esp + 0x13], 0x47
// 009978a5  ff154022b200         call dword ptr [0xb22240]
// 009978ab  85c0                 test eax, eax
// 009978ad  7503                 jne 0x9978b2
// 009978af  5e                   pop esi
// 009978b0  59                   pop ecx
// 009978b1  c3                   ret 
// 009978b2  57                   push edi
// 009978b3  50                   push eax
// 009978b4  56                   push esi
// 009978b5  ff158421b200         call dword ptr [0xb22184]
// 009978bb  8bf8                 mov edi, eax
// 009978bd  85ff                 test edi, edi
// 009978bf  7504                 jne 0x9978c5
// 009978c1  5f                   pop edi
// 009978c2  5e                   pop esi
// 009978c3  59                   pop ecx
// 009978c4  c3                   ret 
// 009978c5  57                   push edi
// 009978c6  ff15d422b200         call dword ptr [0xb222d4]
// 009978cc  8b08                 mov ecx, dword ptr [eax]
// 009978ce  3b4c2408             cmp ecx, dword ptr [esp + 8]
// 009978d2  7426                 je 0x9978fa
// 009978d4  0fb6f1               movzx esi, cl
// 009978d7  81ee89000000         sub esi, 0x89
// 009978dd  752f                 jne 0x99790e
// 009978df  0fb67001             movzx esi, byte ptr [eax + 1]
// 009978e3  83ee50               sub esi, 0x50
// 009978e6  7526                 jne 0x99790e
// 009978e8  0fb67002             movzx esi, byte ptr [eax + 2]
// 009978ec  83ee4e               sub esi, 0x4e
// 009978ef  751d                 jne 0x99790e
// 009978f1  0fb67003             movzx esi, byte ptr [eax + 3]
// 009978f5  83ee47               sub esi, 0x47
// 009978f8  7514                 jne 0x99790e
// 009978fa  57                   push edi
// 009978fb  33f6                 xor esi, esi
// 009978fd  ff15d022b200         call dword ptr [0xb222d0]
// 00997903  33c0                 xor eax, eax
// 00997905  85f6                 test esi, esi
// 00997907  5f                   pop edi
// 00997908  0f94c0               sete al
// 0099790b  5e                   pop esi
// 0099790c  59                   pop ecx
// 0099790d  c3                   ret 
// 0099790e  c1fe1f               sar esi, 0x1f
// 00997911  57                   push edi
// 00997912  83ce01               or esi, 1
// 00997915  ff15d022b200         call dword ptr [0xb222d0]
// 0099791b  33c0                 xor eax, eax
// 0099791d  85f6                 test esi, esi
// 0099791f  5f                   pop edi
// 00997920  0f94c0               sete al
// 00997923  5e                   pop esi
// 00997924  59                   pop ecx
// 00997925  c3                   ret 
// copied from an identical function in another client (function ?IsPngBitmapResource@CXTPImageManagerIcon@@SAHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob0
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPImageManager.cpp