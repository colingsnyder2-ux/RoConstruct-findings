// from server: 100% by auto
// roc 2008-06 0053b4a0  unit: seg_00530000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053b4a0
//
// 0053b4a0  836c241401           sub dword ptr [esp + 0x14], 1
// 0053b4a5  8b442404             mov eax, dword ptr [esp + 4]
// 0053b4a9  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0053b4ac  57                   push edi
// 0053b4ad  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0053b4b0  7868                 js 0x53b51a
// 0053b4b2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053b4b6  53                   push ebx
// 0053b4b7  8d0c8500000000       lea ecx, [eax*4]
// 0053b4be  55                   push ebp
// 0053b4bf  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053b4c3  b804000000           mov eax, 4
// 0053b4c8  56                   push esi
// 0053b4c9  8da42400000000       lea esp, [esp]
// 0053b4d0  33ed                 xor ebp, ebp
// 0053b4d2  85d2                 test edx, edx
// 0053b4d4  7e32                 jle 0x53b508
// 0053b4d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0053b4da  8b08                 mov ecx, dword ptr [eax]
// 0053b4dc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053b4e0  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 0053b4e3  8b742414             mov esi, dword ptr [esp + 0x14]
// 0053b4e7  8b3406               mov esi, dword ptr [esi + eax]
// 0053b4ea  33c0                 xor eax, eax
// 0053b4ec  85ff                 test edi, edi
// 0053b4ee  760e                 jbe 0x53b4fe
// 0053b4f0  03cd                 add ecx, ebp
// 0053b4f2  8a19                 mov bl, byte ptr [ecx]
// 0053b4f4  881c30               mov byte ptr [eax + esi], bl
// 0053b4f7  40                   inc eax
// 0053b4f8  03ca                 add ecx, edx
// 0053b4fa  3bc7                 cmp eax, edi
// 0053b4fc  72f4                 jb 0x53b4f2
// 0053b4fe  45                   inc ebp
// 0053b4ff  3bea                 cmp ebp, edx
// 0053b501  7cd3                 jl 0x53b4d6
// 0053b503  b804000000           mov eax, 4
// 0053b508  01442418             add dword ptr [esp + 0x18], eax
// 0053b50c  01442414             add dword ptr [esp + 0x14], eax
// 0053b510  836c242401           sub dword ptr [esp + 0x24], 1
// 0053b515  79b9                 jns 0x53b4d0
// 0053b517  5e                   pop esi
// 0053b518  5d                   pop ebp
// 0053b519  5b                   pop ebx
// 0053b51a  5f                   pop edi
// 0053b51b  c3                   ret 
// library jpeg-6b/jccolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
