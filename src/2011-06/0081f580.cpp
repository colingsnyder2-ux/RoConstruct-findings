// roc 2011-06 0081f580  unit: CXTPCommandBar  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081f580
//
// 0081f580  51                   push ecx
// 0081f581  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081f585  56                   push esi
// 0081f586  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0081f58a  688860a600           push 0xa66088
// 0081f58f  50                   push eax
// 0081f590  56                   push esi
// 0081f591  c644241089           mov byte ptr [esp + 0x10], 0x89
// 0081f596  c644241150           mov byte ptr [esp + 0x11], 0x50
// 0081f59b  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 0081f5a0  c644241347           mov byte ptr [esp + 0x13], 0x47
// 0081f5a5  ff153803a400         call dword ptr [0xa40338]
// 0081f5ab  85c0                 test eax, eax
// 0081f5ad  7503                 jne 0x81f5b2
// 0081f5af  5e                   pop esi
// 0081f5b0  59                   pop ecx
// 0081f5b1  c3                   ret 
// 0081f5b2  57                   push edi
// 0081f5b3  50                   push eax
// 0081f5b4  56                   push esi
// 0081f5b5  ff153c03a400         call dword ptr [0xa4033c]
// 0081f5bb  8bf8                 mov edi, eax
// 0081f5bd  85ff                 test edi, edi
// 0081f5bf  7504                 jne 0x81f5c5
// 0081f5c1  5f                   pop edi
// 0081f5c2  5e                   pop esi
// 0081f5c3  59                   pop ecx
// 0081f5c4  c3                   ret 
// 0081f5c5  57                   push edi
// 0081f5c6  ff15d001a400         call dword ptr [0xa401d0]
// 0081f5cc  8b08                 mov ecx, dword ptr [eax]
// 0081f5ce  3b4c2408             cmp ecx, dword ptr [esp + 8]
// 0081f5d2  7426                 je 0x81f5fa
// 0081f5d4  0fb6f1               movzx esi, cl
// 0081f5d7  81ee89000000         sub esi, 0x89
// 0081f5dd  752f                 jne 0x81f60e
// 0081f5df  0fb67001             movzx esi, byte ptr [eax + 1]
// 0081f5e3  83ee50               sub esi, 0x50
// 0081f5e6  7526                 jne 0x81f60e
// 0081f5e8  0fb67002             movzx esi, byte ptr [eax + 2]
// 0081f5ec  83ee4e               sub esi, 0x4e
// 0081f5ef  751d                 jne 0x81f60e
// 0081f5f1  0fb67003             movzx esi, byte ptr [eax + 3]
// 0081f5f5  83ee47               sub esi, 0x47
// 0081f5f8  7514                 jne 0x81f60e
// 0081f5fa  57                   push edi
// 0081f5fb  33f6                 xor esi, esi
// 0081f5fd  ff15cc01a400         call dword ptr [0xa401cc]
// 0081f603  33c0                 xor eax, eax
// 0081f605  85f6                 test esi, esi
// 0081f607  5f                   pop edi
// 0081f608  0f94c0               sete al
// 0081f60b  5e                   pop esi
// 0081f60c  59                   pop ecx
// 0081f60d  c3                   ret 
// 0081f60e  c1fe1f               sar esi, 0x1f
// 0081f611  57                   push edi
// 0081f612  83ce01               or esi, 1
// 0081f615  ff15cc01a400         call dword ptr [0xa401cc]
// 0081f61b  33c0                 xor eax, eax
// 0081f61d  85f6                 test esi, esi
// 0081f61f  5f                   pop edi
// 0081f620  0f94c0               sete al
// 0081f623  5e                   pop esi
// 0081f624  59                   pop ecx
// 0081f625  c3                   ret 
// copied from an identical function in another client (function ?IsPngBitmapResource@CXTPImageManagerIcon@@SAHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob0
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPImageManager.cpp