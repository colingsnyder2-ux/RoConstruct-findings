// roc 2010-06 007bd140  unit: CXTPCommandBar  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bd140
//
// 007bd140  51                   push ecx
// 007bd141  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007bd145  56                   push esi
// 007bd146  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007bd14a  68204ca000           push 0xa04c20
// 007bd14f  50                   push eax
// 007bd150  56                   push esi
// 007bd151  c644241089           mov byte ptr [esp + 0x10], 0x89
// 007bd156  c644241150           mov byte ptr [esp + 0x11], 0x50
// 007bd15b  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 007bd160  c644241347           mov byte ptr [esp + 0x13], 0x47
// 007bd165  ff155ca39e00         call dword ptr [0x9ea35c]
// 007bd16b  85c0                 test eax, eax
// 007bd16d  7503                 jne 0x7bd172
// 007bd16f  5e                   pop esi
// 007bd170  59                   pop ecx
// 007bd171  c3                   ret 
// 007bd172  57                   push edi
// 007bd173  50                   push eax
// 007bd174  56                   push esi
// 007bd175  ff1560a39e00         call dword ptr [0x9ea360]
// 007bd17b  8bf8                 mov edi, eax
// 007bd17d  85ff                 test edi, edi
// 007bd17f  7504                 jne 0x7bd185
// 007bd181  5f                   pop edi
// 007bd182  5e                   pop esi
// 007bd183  59                   pop ecx
// 007bd184  c3                   ret 
// 007bd185  57                   push edi
// 007bd186  ff15eca29e00         call dword ptr [0x9ea2ec]
// 007bd18c  8b08                 mov ecx, dword ptr [eax]
// 007bd18e  3b4c2408             cmp ecx, dword ptr [esp + 8]
// 007bd192  7426                 je 0x7bd1ba
// 007bd194  0fb6f1               movzx esi, cl
// 007bd197  81ee89000000         sub esi, 0x89
// 007bd19d  752f                 jne 0x7bd1ce
// 007bd19f  0fb67001             movzx esi, byte ptr [eax + 1]
// 007bd1a3  83ee50               sub esi, 0x50
// 007bd1a6  7526                 jne 0x7bd1ce
// 007bd1a8  0fb67002             movzx esi, byte ptr [eax + 2]
// 007bd1ac  83ee4e               sub esi, 0x4e
// 007bd1af  751d                 jne 0x7bd1ce
// 007bd1b1  0fb67003             movzx esi, byte ptr [eax + 3]
// 007bd1b5  83ee47               sub esi, 0x47
// 007bd1b8  7514                 jne 0x7bd1ce
// 007bd1ba  57                   push edi
// 007bd1bb  33f6                 xor esi, esi
// 007bd1bd  ff15f0a29e00         call dword ptr [0x9ea2f0]
// 007bd1c3  33c0                 xor eax, eax
// 007bd1c5  85f6                 test esi, esi
// 007bd1c7  5f                   pop edi
// 007bd1c8  0f94c0               sete al
// 007bd1cb  5e                   pop esi
// 007bd1cc  59                   pop ecx
// 007bd1cd  c3                   ret 
// 007bd1ce  c1fe1f               sar esi, 0x1f
// 007bd1d1  57                   push edi
// 007bd1d2  83ce01               or esi, 1
// 007bd1d5  ff15f0a29e00         call dword ptr [0x9ea2f0]
// 007bd1db  33c0                 xor eax, eax
// 007bd1dd  85f6                 test esi, esi
// 007bd1df  5f                   pop edi
// 007bd1e0  0f94c0               sete al
// 007bd1e3  5e                   pop esi
// 007bd1e4  59                   pop ecx
// 007bd1e5  c3                   ret 
// copied from an identical function in another client (function ?IsPngBitmapResource@CXTPImageManagerIcon@@SAHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob0
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPImageManager.cpp