// roc 2009-06 005a5780  unit: seg_005a0000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a5780
//
// 005a5780  836c241401           sub dword ptr [esp + 0x14], 1
// 005a5785  8b442404             mov eax, dword ptr [esp + 4]
// 005a5789  8b503c               mov edx, dword ptr [eax + 0x3c]
// 005a578c  57                   push edi
// 005a578d  8b781c               mov edi, dword ptr [eax + 0x1c]
// 005a5790  7868                 js 0x5a57fa
// 005a5792  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a5796  53                   push ebx
// 005a5797  8d0c8500000000       lea ecx, [eax*4]
// 005a579e  55                   push ebp
// 005a579f  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a57a3  b804000000           mov eax, 4
// 005a57a8  56                   push esi
// 005a57a9  8da42400000000       lea esp, [esp]
// 005a57b0  33ed                 xor ebp, ebp
// 005a57b2  85d2                 test edx, edx
// 005a57b4  7e32                 jle 0x5a57e8
// 005a57b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a57ba  8b08                 mov ecx, dword ptr [eax]
// 005a57bc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a57c0  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 005a57c3  8b742414             mov esi, dword ptr [esp + 0x14]
// 005a57c7  8b3406               mov esi, dword ptr [esi + eax]
// 005a57ca  33c0                 xor eax, eax
// 005a57cc  85ff                 test edi, edi
// 005a57ce  760e                 jbe 0x5a57de
// 005a57d0  03cd                 add ecx, ebp
// 005a57d2  8a19                 mov bl, byte ptr [ecx]
// 005a57d4  881c30               mov byte ptr [eax + esi], bl
// 005a57d7  40                   inc eax
// 005a57d8  03ca                 add ecx, edx
// 005a57da  3bc7                 cmp eax, edi
// 005a57dc  72f4                 jb 0x5a57d2
// 005a57de  45                   inc ebp
// 005a57df  3bea                 cmp ebp, edx
// 005a57e1  7cd3                 jl 0x5a57b6
// 005a57e3  b804000000           mov eax, 4
// 005a57e8  01442418             add dword ptr [esp + 0x18], eax
// 005a57ec  01442414             add dword ptr [esp + 0x14], eax
// 005a57f0  836c242401           sub dword ptr [esp + 0x24], 1
// 005a57f5  79b9                 jns 0x5a57b0
// 005a57f7  5e                   pop esi
// 005a57f8  5d                   pop ebp
// 005a57f9  5b                   pop ebx
// 005a57fa  5f                   pop edi
// 005a57fb  c3                   ret 
// library jpeg-6b/jccolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
