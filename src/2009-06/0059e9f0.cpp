// from server: 100% by auto
// roc 2009-06 0059e9f0  unit: seg_00590000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e9f0
//
// 0059e9f0  836c241401           sub dword ptr [esp + 0x14], 1
// 0059e9f5  8b442404             mov eax, dword ptr [esp + 4]
// 0059e9f9  57                   push edi
// 0059e9fa  8b785c               mov edi, dword ptr [eax + 0x5c]
// 0059e9fd  7845                 js 0x59ea44
// 0059e9ff  53                   push ebx
// 0059ea00  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0059ea04  55                   push ebp
// 0059ea05  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0059ea09  03ed                 add ebp, ebp
// 0059ea0b  56                   push esi
// 0059ea0c  03ed                 add ebp, ebp
// 0059ea0e  8bff                 mov edi, edi
// 0059ea10  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059ea14  8b11                 mov edx, dword ptr [ecx]
// 0059ea16  8b342a               mov esi, dword ptr [edx + ebp]
// 0059ea19  8b03                 mov eax, dword ptr [ebx]
// 0059ea1b  83c504               add ebp, 4
// 0059ea1e  83c304               add ebx, 4
// 0059ea21  33d2                 xor edx, edx
// 0059ea23  85ff                 test edi, edi
// 0059ea25  7613                 jbe 0x59ea3a
// 0059ea27  8a0c32               mov cl, byte ptr [edx + esi]
// 0059ea2a  884802               mov byte ptr [eax + 2], cl
// 0059ea2d  884801               mov byte ptr [eax + 1], cl
// 0059ea30  8808                 mov byte ptr [eax], cl
// 0059ea32  42                   inc edx
// 0059ea33  83c003               add eax, 3
// 0059ea36  3bd7                 cmp edx, edi
// 0059ea38  72ed                 jb 0x59ea27
// 0059ea3a  836c242401           sub dword ptr [esp + 0x24], 1
// 0059ea3f  79cf                 jns 0x59ea10
// 0059ea41  5e                   pop esi
// 0059ea42  5d                   pop ebp
// 0059ea43  5b                   pop ebx
// 0059ea44  5f                   pop edi
// 0059ea45  c3                   ret 
// library jpeg-6b/jdcolor.c (function _gray_rgb_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
