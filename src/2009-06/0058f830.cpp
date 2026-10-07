// roc 2009-06 0058f830  unit: seg_00580000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058f830
//
// 0058f830  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0058f833  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0058f836  55                   push ebp
// 0058f837  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0058f83b  8a1429               mov dl, byte ptr [ecx + ebp]
// 0058f83e  03c1                 add eax, ecx
// 0058f840  03cd                 add ecx, ebp
// 0058f842  57                   push edi
// 0058f843  8db802010000         lea edi, [eax + 0x102]
// 0058f849  3a10                 cmp dl, byte ptr [eax]
// 0058f84b  757a                 jne 0x58f8c7
// 0058f84d  8a5101               mov dl, byte ptr [ecx + 1]
// 0058f850  3a5001               cmp dl, byte ptr [eax + 1]
// 0058f853  7572                 jne 0x58f8c7
// 0058f855  83c002               add eax, 2
// 0058f858  83c102               add ecx, 2
// 0058f85b  eb03                 jmp 0x58f860
// 0058f85d  8d4900               lea ecx, [ecx]
// 0058f860  8a5001               mov dl, byte ptr [eax + 1]
// 0058f863  40                   inc eax
// 0058f864  41                   inc ecx
// 0058f865  3a11                 cmp dl, byte ptr [ecx]
// 0058f867  7543                 jne 0x58f8ac
// 0058f869  8a5001               mov dl, byte ptr [eax + 1]
// 0058f86c  40                   inc eax
// 0058f86d  41                   inc ecx
// 0058f86e  3a11                 cmp dl, byte ptr [ecx]
// 0058f870  753a                 jne 0x58f8ac
// 0058f872  8a5001               mov dl, byte ptr [eax + 1]
// 0058f875  40                   inc eax
// 0058f876  41                   inc ecx
// 0058f877  3a11                 cmp dl, byte ptr [ecx]
// 0058f879  7531                 jne 0x58f8ac
// 0058f87b  8a5001               mov dl, byte ptr [eax + 1]
// 0058f87e  40                   inc eax
// 0058f87f  41                   inc ecx
// 0058f880  3a11                 cmp dl, byte ptr [ecx]
// 0058f882  7528                 jne 0x58f8ac
// 0058f884  8a5001               mov dl, byte ptr [eax + 1]
// 0058f887  40                   inc eax
// 0058f888  41                   inc ecx
// 0058f889  3a11                 cmp dl, byte ptr [ecx]
// 0058f88b  751f                 jne 0x58f8ac
// 0058f88d  8a5001               mov dl, byte ptr [eax + 1]
// 0058f890  40                   inc eax
// 0058f891  41                   inc ecx
// 0058f892  3a11                 cmp dl, byte ptr [ecx]
// 0058f894  7516                 jne 0x58f8ac
// 0058f896  8a5001               mov dl, byte ptr [eax + 1]
// 0058f899  40                   inc eax
// 0058f89a  41                   inc ecx
// 0058f89b  3a11                 cmp dl, byte ptr [ecx]
// 0058f89d  750d                 jne 0x58f8ac
// 0058f89f  8a5001               mov dl, byte ptr [eax + 1]
// 0058f8a2  40                   inc eax
// 0058f8a3  41                   inc ecx
// 0058f8a4  3a11                 cmp dl, byte ptr [ecx]
// 0058f8a6  7504                 jne 0x58f8ac
// 0058f8a8  3bc7                 cmp eax, edi
// 0058f8aa  72b4                 jb 0x58f860
// 0058f8ac  2bc7                 sub eax, edi
// 0058f8ae  0502010000           add eax, 0x102
// 0058f8b3  83f803               cmp eax, 3
// 0058f8b6  7c0f                 jl 0x58f8c7
// 0058f8b8  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0058f8bb  896e70               mov dword ptr [esi + 0x70], ebp
// 0058f8be  3bc1                 cmp eax, ecx
// 0058f8c0  760a                 jbe 0x58f8cc
// 0058f8c2  5f                   pop edi
// 0058f8c3  8bc1                 mov eax, ecx
// 0058f8c5  5d                   pop ebp
// 0058f8c6  c3                   ret 
// 0058f8c7  b802000000           mov eax, 2
// 0058f8cc  5f                   pop edi
// 0058f8cd  5d                   pop ebp
// 0058f8ce  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
