// roc 2009-12 0061aa30  unit: seg_00610000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061aa30
//
// 0061aa30  83ec0c               sub esp, 0xc
// 0061aa33  53                   push ebx
// 0061aa34  55                   push ebp
// 0061aa35  56                   push esi
// 0061aa36  57                   push edi
// 0061aa37  0fb77802             movzx edi, word ptr [eax + 2]
// 0061aa3b  33d2                 xor edx, edx
// 0061aa3d  8bd9                 mov ebx, ecx
// 0061aa3f  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0061aa47  8d4a07               lea ecx, [edx + 7]
// 0061aa4a  8d7204               lea esi, [edx + 4]
// 0061aa4d  85ff                 test edi, edi
// 0061aa4f  7508                 jne 0x61aa59
// 0061aa51  b98a000000           mov ecx, 0x8a
// 0061aa56  8d7203               lea esi, [edx + 3]
// 0061aa59  bdffff0000           mov ebp, 0xffff
// 0061aa5e  66896c9806           mov word ptr [eax + ebx*4 + 6], bp
// 0061aa63  85db                 test ebx, ebx
// 0061aa65  0f8c9b000000         jl 0x61ab06
// 0061aa6b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0061aa6f  83c006               add eax, 6
// 0061aa72  43                   inc ebx
// 0061aa73  895c2414             mov dword ptr [esp + 0x14], ebx
// 0061aa77  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0061aa7b  89442410             mov dword ptr [esp + 0x10], eax
// 0061aa7f  90                   nop 
// 0061aa80  8bc7                 mov eax, edi
// 0061aa82  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0061aa86  0fb73f               movzx edi, word ptr [edi]
// 0061aa89  42                   inc edx
// 0061aa8a  3bd1                 cmp edx, ecx
// 0061aa8c  7d04                 jge 0x61aa92
// 0061aa8e  3bc7                 cmp eax, edi
// 0061aa90  7464                 je 0x61aaf6
// 0061aa92  3bd6                 cmp edx, esi
// 0061aa94  7d0a                 jge 0x61aaa0
// 0061aa96  660194837c0a0000     add word ptr [ebx + eax*4 + 0xa7c], dx
// 0061aa9e  eb2e                 jmp 0x61aace
// 0061aaa0  85c0                 test eax, eax
// 0061aaa2  7415                 je 0x61aab9
// 0061aaa4  3bc5                 cmp eax, ebp
// 0061aaa6  7408                 je 0x61aab0
// 0061aaa8  66ff84837c0a0000     inc word ptr [ebx + eax*4 + 0xa7c]
// 0061aab0  66ff83bc0a0000       inc word ptr [ebx + 0xabc]
// 0061aab7  eb15                 jmp 0x61aace
// 0061aab9  83fa0a               cmp edx, 0xa
// 0061aabc  7f09                 jg 0x61aac7
// 0061aabe  66ff83c00a0000       inc word ptr [ebx + 0xac0]
// 0061aac5  eb07                 jmp 0x61aace
// 0061aac7  66ff83c40a0000       inc word ptr [ebx + 0xac4]
// 0061aace  33d2                 xor edx, edx
// 0061aad0  8be8                 mov ebp, eax
// 0061aad2  85ff                 test edi, edi
// 0061aad4  750a                 jne 0x61aae0
// 0061aad6  b98a000000           mov ecx, 0x8a
// 0061aadb  8d7203               lea esi, [edx + 3]
// 0061aade  eb16                 jmp 0x61aaf6
// 0061aae0  3bc7                 cmp eax, edi
// 0061aae2  750a                 jne 0x61aaee
// 0061aae4  b906000000           mov ecx, 6
// 0061aae9  8d71fd               lea esi, [ecx - 3]
// 0061aaec  eb08                 jmp 0x61aaf6
// 0061aaee  b907000000           mov ecx, 7
// 0061aaf3  8d71fd               lea esi, [ecx - 3]
// 0061aaf6  8344241004           add dword ptr [esp + 0x10], 4
// 0061aafb  836c241401           sub dword ptr [esp + 0x14], 1
// 0061ab00  0f857affffff         jne 0x61aa80
// 0061ab06  5f                   pop edi
// 0061ab07  5e                   pop esi
// 0061ab08  5d                   pop ebp
// 0061ab09  5b                   pop ebx
// 0061ab0a  83c40c               add esp, 0xc
// 0061ab0d  c3                   ret 
// library zlib-1.2.3/trees.c (function _scan_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
