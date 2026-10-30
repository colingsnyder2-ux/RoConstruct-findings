// roc 2009-12 00808fa0  unit: CXTPCommandBar  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00808fa0
//
// 00808fa0  51                   push ecx
// 00808fa1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00808fa5  56                   push esi
// 00808fa6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00808faa  68d83e9a00           push 0x9a3ed8
// 00808faf  50                   push eax
// 00808fb0  56                   push esi
// 00808fb1  c644241089           mov byte ptr [esp + 0x10], 0x89
// 00808fb6  c644241150           mov byte ptr [esp + 0x11], 0x50
// 00808fbb  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 00808fc0  c644241347           mov byte ptr [esp + 0x13], 0x47
// 00808fc5  ff15ecb19800         call dword ptr [0x98b1ec]
// 00808fcb  85c0                 test eax, eax
// 00808fcd  7503                 jne 0x808fd2
// 00808fcf  5e                   pop esi
// 00808fd0  59                   pop ecx
// 00808fd1  c3                   ret 
// 00808fd2  57                   push edi
// 00808fd3  50                   push eax
// 00808fd4  56                   push esi
// 00808fd5  ff15f0b19800         call dword ptr [0x98b1f0]
// 00808fdb  8bf8                 mov edi, eax
// 00808fdd  85ff                 test edi, edi
// 00808fdf  7504                 jne 0x808fe5
// 00808fe1  5f                   pop edi
// 00808fe2  5e                   pop esi
// 00808fe3  59                   pop ecx
// 00808fe4  c3                   ret 
// 00808fe5  57                   push edi
// 00808fe6  ff157cb29800         call dword ptr [0x98b27c]
// 00808fec  8b08                 mov ecx, dword ptr [eax]
// 00808fee  3b4c2408             cmp ecx, dword ptr [esp + 8]
// 00808ff2  7426                 je 0x80901a
// 00808ff4  0fb6f1               movzx esi, cl
// 00808ff7  81ee89000000         sub esi, 0x89
// 00808ffd  752f                 jne 0x80902e
// 00808fff  0fb67001             movzx esi, byte ptr [eax + 1]
// 00809003  83ee50               sub esi, 0x50
// 00809006  7526                 jne 0x80902e
// 00809008  0fb67002             movzx esi, byte ptr [eax + 2]
// 0080900c  83ee4e               sub esi, 0x4e
// 0080900f  751d                 jne 0x80902e
// 00809011  0fb67003             movzx esi, byte ptr [eax + 3]
// 00809015  83ee47               sub esi, 0x47
// 00809018  7514                 jne 0x80902e
// 0080901a  57                   push edi
// 0080901b  33f6                 xor esi, esi
// 0080901d  ff1578b29800         call dword ptr [0x98b278]
// 00809023  33c0                 xor eax, eax
// 00809025  85f6                 test esi, esi
// 00809027  5f                   pop edi
// 00809028  0f94c0               sete al
// 0080902b  5e                   pop esi
// 0080902c  59                   pop ecx
// 0080902d  c3                   ret 
// 0080902e  c1fe1f               sar esi, 0x1f
// 00809031  57                   push edi
// 00809032  83ce01               or esi, 1
// 00809035  ff1578b29800         call dword ptr [0x98b278]
// 0080903b  33c0                 xor eax, eax
// 0080903d  85f6                 test esi, esi
// 0080903f  5f                   pop edi
// 00809040  0f94c0               sete al
// 00809043  5e                   pop esi
// 00809044  59                   pop ecx
// 00809045  c3                   ret 
// copied from an identical function in another client (function ?IsPngBitmapResource@CXTPImageManagerIcon@@SAHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob0
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPImageManager.cpp