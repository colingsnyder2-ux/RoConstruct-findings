// roc 2009-12 0079da10  unit: seg_00790000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079da10
//
// 0079da10  55                   push ebp
// 0079da11  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0079da15  85ed                 test ebp, ebp
// 0079da17  7506                 jne 0x79da1f
// 0079da19  8b442408             mov eax, dword ptr [esp + 8]
// 0079da1d  5d                   pop ebp
// 0079da1e  c3                   ret 
// 0079da1f  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 0079da23  7604                 jbe 0x79da29
// 0079da25  33c0                 xor eax, eax
// 0079da27  5d                   pop ebp
// 0079da28  c3                   ret 
// 0079da29  4d                   dec ebp
// 0079da2a  296c240c             sub dword ptr [esp + 0xc], ebp
// 0079da2e  56                   push esi
// 0079da2f  57                   push edi
// 0079da30  7476                 je 0x79daa8
// 0079da32  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079da36  0fbe0b               movsx ecx, byte ptr [ebx]
// 0079da39  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079da3d  50                   push eax
// 0079da3e  51                   push ecx
// 0079da3f  52                   push edx
// 0079da40  ff1560b99800         call dword ptr [0x98b960]
// 0079da46  8bf8                 mov edi, eax
// 0079da48  83c40c               add esp, 0xc
// 0079da4b  85ff                 test edi, edi
// 0079da4d  7459                 je 0x79daa8
// 0079da4f  47                   inc edi
// 0079da50  8bcd                 mov ecx, ebp
// 0079da52  8d5301               lea edx, [ebx + 1]
// 0079da55  8bf7                 mov esi, edi
// 0079da57  83fd04               cmp ebp, 4
// 0079da5a  7218                 jb 0x79da74
// 0079da5c  8d642400             lea esp, [esp]
// 0079da60  8b06                 mov eax, dword ptr [esi]
// 0079da62  3b02                 cmp eax, dword ptr [edx]
// 0079da64  7532                 jne 0x79da98
// 0079da66  83e904               sub ecx, 4
// 0079da69  83c204               add edx, 4
// 0079da6c  83c604               add esi, 4
// 0079da6f  83f904               cmp ecx, 4
// 0079da72  73ec                 jae 0x79da60
// 0079da74  85c9                 test ecx, ecx
// 0079da76  7436                 je 0x79daae
// 0079da78  8a02                 mov al, byte ptr [edx]
// 0079da7a  3a06                 cmp al, byte ptr [esi]
// 0079da7c  751a                 jne 0x79da98
// 0079da7e  83f901               cmp ecx, 1
// 0079da81  762b                 jbe 0x79daae
// 0079da83  8a4201               mov al, byte ptr [edx + 1]
// 0079da86  3a4601               cmp al, byte ptr [esi + 1]
// 0079da89  750d                 jne 0x79da98
// 0079da8b  83f902               cmp ecx, 2
// 0079da8e  761e                 jbe 0x79daae
// 0079da90  8a4a02               mov cl, byte ptr [edx + 2]
// 0079da93  3a4e02               cmp cl, byte ptr [esi + 2]
// 0079da96  7416                 je 0x79daae
// 0079da98  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079da9c  2bd7                 sub edx, edi
// 0079da9e  01542414             add dword ptr [esp + 0x14], edx
// 0079daa2  897c2410             mov dword ptr [esp + 0x10], edi
// 0079daa6  758a                 jne 0x79da32
// 0079daa8  5f                   pop edi
// 0079daa9  5e                   pop esi
// 0079daaa  33c0                 xor eax, eax
// 0079daac  5d                   pop ebp
// 0079daad  c3                   ret 
// 0079daae  8d47ff               lea eax, [edi - 1]
// 0079dab1  5f                   pop edi
// 0079dab2  5e                   pop esi
// 0079dab3  5d                   pop ebp
// 0079dab4  c3                   ret 
// copied from an identical function in another client (function _lmemfind)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c