// roc 2009-12 00622c50  unit: seg_00620000  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00622c50
//
// 00622c50  83ec24               sub esp, 0x24
// 00622c53  8b442428             mov eax, dword ptr [esp + 0x28]
// 00622c57  8b4864               mov ecx, dword ptr [eax + 0x64]
// 00622c5a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00622c5d  56                   push esi
// 00622c5e  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00622c64  8b442438             mov eax, dword ptr [esp + 0x38]
// 00622c68  8974240c             mov dword ptr [esp + 0xc], esi
// 00622c6c  894c2404             mov dword ptr [esp + 4], ecx
// 00622c70  8954242c             mov dword ptr [esp + 0x2c], edx
// 00622c74  85c0                 test eax, eax
// 00622c76  0f8edf000000         jle 0x622d5b
// 00622c7c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00622c80  53                   push ebx
// 00622c81  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00622c85  55                   push ebp
// 00622c86  2bcb                 sub ecx, ebx
// 00622c88  57                   push edi
// 00622c89  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00622c8d  894c2428             mov dword ptr [esp + 0x28], ecx
// 00622c91  89442420             mov dword ptr [esp + 0x20], eax
// 00622c95  8b442438             mov eax, dword ptr [esp + 0x38]
// 00622c99  8b0b                 mov ecx, dword ptr [ebx]
// 00622c9b  50                   push eax
// 00622c9c  51                   push ecx
// 00622c9d  e85e90feff           call 0x60bd00
// 00622ca2  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 00622ca5  33d2                 xor edx, edx
// 00622ca7  83c408               add esp, 8
// 00622caa  39542410             cmp dword ptr [esp + 0x10], edx
// 00622cae  896c2430             mov dword ptr [esp + 0x30], ebp
// 00622cb2  89542414             mov dword ptr [esp + 0x14], edx
// 00622cb6  0f8e83000000         jle 0x622d3f
// 00622cbc  c1e506               shl ebp, 6
// 00622cbf  8d4634               lea eax, [esi + 0x34]
// 00622cc2  896c2424             mov dword ptr [esp + 0x24], ebp
// 00622cc6  89442444             mov dword ptr [esp + 0x44], eax
// 00622cca  eb08                 jmp 0x622cd4
// 00622ccc  8d642400             lea esp, [esp]
// 00622cd0  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00622cd4  8b7618               mov esi, dword ptr [esi + 0x18]
// 00622cd7  8b3496               mov esi, dword ptr [esi + edx*4]
// 00622cda  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00622cde  8b0419               mov eax, dword ptr [ecx + ebx]
// 00622ce1  8b0b                 mov ecx, dword ptr [ebx]
// 00622ce3  8974242c             mov dword ptr [esp + 0x2c], esi
// 00622ce7  8b742444             mov esi, dword ptr [esp + 0x44]
// 00622ceb  8b3e                 mov edi, dword ptr [esi]
// 00622ced  03fd                 add edi, ebp
// 00622cef  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00622cf3  03c2                 add eax, edx
// 00622cf5  33f6                 xor esi, esi
// 00622cf7  85ed                 test ebp, ebp
// 00622cf9  762c                 jbe 0x622d27
// 00622cfb  eb03                 jmp 0x622d00
// 00622cfd  8d4900               lea ecx, [ecx]
// 00622d00  0fb610               movzx edx, byte ptr [eax]
// 00622d03  8b1cb7               mov ebx, dword ptr [edi + esi*4]
// 00622d06  03442410             add eax, dword ptr [esp + 0x10]
// 00622d0a  03da                 add ebx, edx
// 00622d0c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00622d10  8a1413               mov dl, byte ptr [ebx + edx]
// 00622d13  0011                 add byte ptr [ecx], dl
// 00622d15  46                   inc esi
// 00622d16  41                   inc ecx
// 00622d17  83e60f               and esi, 0xf
// 00622d1a  83ed01               sub ebp, 1
// 00622d1d  75e1                 jne 0x622d00
// 00622d1f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00622d23  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00622d27  8344244404           add dword ptr [esp + 0x44], 4
// 00622d2c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00622d30  42                   inc edx
// 00622d31  3b542410             cmp edx, dword ptr [esp + 0x10]
// 00622d35  89542414             mov dword ptr [esp + 0x14], edx
// 00622d39  7c95                 jl 0x622cd0
// 00622d3b  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00622d3f  45                   inc ebp
// 00622d40  83e50f               and ebp, 0xf
// 00622d43  83c304               add ebx, 4
// 00622d46  836c242001           sub dword ptr [esp + 0x20], 1
// 00622d4b  896e30               mov dword ptr [esi + 0x30], ebp
// 00622d4e  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00622d52  0f853dffffff         jne 0x622c95
// 00622d58  5f                   pop edi
// 00622d59  5d                   pop ebp
// 00622d5a  5b                   pop ebx
// 00622d5b  5e                   pop esi
// 00622d5c  83c424               add esp, 0x24
// 00622d5f  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_ord_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
