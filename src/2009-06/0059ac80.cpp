// roc 2009-06 0059ac80  unit: seg_00590000  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059ac80
//
// 0059ac80  83ec20               sub esp, 0x20
// 0059ac83  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059ac87  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 0059ac8d  55                   push ebp
// 0059ac8e  33ed                 xor ebp, ebp
// 0059ac90  396924               cmp dword ptr [ecx + 0x24], ebp
// 0059ac93  56                   push esi
// 0059ac94  8bb184010000         mov esi, dword ptr [ecx + 0x184]
// 0059ac9a  89442418             mov dword ptr [esp + 0x18], eax
// 0059ac9e  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 0059aca4  89742420             mov dword ptr [esp + 0x20], esi
// 0059aca8  896c2408             mov dword ptr [esp + 8], ebp
// 0059acac  0f8e08010000         jle 0x59adba
// 0059acb2  8d500c               lea edx, [eax + 0xc]
// 0059acb5  53                   push ebx
// 0059acb6  8d4608               lea eax, [esi + 8]
// 0059acb9  57                   push edi
// 0059acba  89542418             mov dword ptr [esp + 0x18], edx
// 0059acbe  89442414             mov dword ptr [esp + 0x14], eax
// 0059acc2  eb08                 jmp 0x59accc
// 0059acc4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059acc8  8b742428             mov esi, dword ptr [esp + 0x28]
// 0059accc  8b4218               mov eax, dword ptr [edx + 0x18]
// 0059accf  0faf02               imul eax, dword ptr [edx]
// 0059acd2  99                   cdq 
// 0059acd3  f7b918010000         idiv dword ptr [ecx + 0x118]
// 0059acd9  8b5638               mov edx, dword ptr [esi + 0x38]
// 0059acdc  8b3caa               mov edi, dword ptr [edx + ebp*4]
// 0059acdf  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0059ace2  8b742414             mov esi, dword ptr [esp + 0x14]
// 0059ace6  8b1e                 mov ebx, dword ptr [esi]
// 0059ace8  8b742420             mov esi, dword ptr [esp + 0x20]
// 0059acec  8b14aa               mov edx, dword ptr [edx + ebp*4]
// 0059acef  83c602               add esi, 2
// 0059acf2  897c2424             mov dword ptr [esp + 0x24], edi
// 0059acf6  0faff0               imul esi, eax
// 0059acf9  85f6                 test esi, esi
// 0059acfb  7e35                 jle 0x59ad32
// 0059acfd  8beb                 mov ebp, ebx
// 0059acff  2bea                 sub ebp, edx
// 0059ad01  2bfa                 sub edi, edx
// 0059ad03  8bca                 mov ecx, edx
// 0059ad05  897c242c             mov dword ptr [esp + 0x2c], edi
// 0059ad09  8974241c             mov dword ptr [esp + 0x1c], esi
// 0059ad0d  8d4900               lea ecx, [ecx]
// 0059ad10  8b3c29               mov edi, dword ptr [ecx + ebp]
// 0059ad13  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0059ad17  8939                 mov dword ptr [ecx], edi
// 0059ad19  893c0e               mov dword ptr [esi + ecx], edi
// 0059ad1c  83c104               add ecx, 4
// 0059ad1f  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0059ad24  75ea                 jne 0x59ad10
// 0059ad26  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0059ad2a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0059ad2e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059ad32  8d3400               lea esi, [eax + eax]
// 0059ad35  85f6                 test esi, esi
// 0059ad37  7e3f                 jle 0x59ad78
// 0059ad39  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059ad3d  8bf0                 mov esi, eax
// 0059ad3f  0faff1               imul esi, ecx
// 0059ad42  83c1fe               add ecx, -2
// 0059ad45  0fafc8               imul ecx, eax
// 0059ad48  8bfb                 mov edi, ebx
// 0059ad4a  8d34b2               lea esi, [edx + esi*4]
// 0059ad4d  2bfa                 sub edi, edx
// 0059ad4f  8d0c8b               lea ecx, [ebx + ecx*4]
// 0059ad52  2bd3                 sub edx, ebx
// 0059ad54  8d1c00               lea ebx, [eax + eax]
// 0059ad57  8b2c3e               mov ebp, dword ptr [esi + edi]
// 0059ad5a  892c0a               mov dword ptr [edx + ecx], ebp
// 0059ad5d  8b29                 mov ebp, dword ptr [ecx]
// 0059ad5f  892e                 mov dword ptr [esi], ebp
// 0059ad61  83c104               add ecx, 4
// 0059ad64  83c604               add esi, 4
// 0059ad67  83eb01               sub ebx, 1
// 0059ad6a  75eb                 jne 0x59ad57
// 0059ad6c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0059ad70  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0059ad74  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059ad78  85c0                 test eax, eax
// 0059ad7a  7e24                 jle 0x59ada0
// 0059ad7c  8d0c8500000000       lea ecx, [eax*4]
// 0059ad83  8bd1                 mov edx, ecx
// 0059ad85  8bcf                 mov ecx, edi
// 0059ad87  2bca                 sub ecx, edx
// 0059ad89  8da42400000000       lea esp, [esp]
// 0059ad90  8b17                 mov edx, dword ptr [edi]
// 0059ad92  8911                 mov dword ptr [ecx], edx
// 0059ad94  83c104               add ecx, 4
// 0059ad97  83e801               sub eax, 1
// 0059ad9a  75f4                 jne 0x59ad90
// 0059ad9c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059ada0  8344241404           add dword ptr [esp + 0x14], 4
// 0059ada5  8344241854           add dword ptr [esp + 0x18], 0x54
// 0059adaa  45                   inc ebp
// 0059adab  3b6924               cmp ebp, dword ptr [ecx + 0x24]
// 0059adae  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059adb2  0f8c0cffffff         jl 0x59acc4
// 0059adb8  5f                   pop edi
// 0059adb9  5b                   pop ebx
// 0059adba  5e                   pop esi
// 0059adbb  5d                   pop ebp
// 0059adbc  83c420               add esp, 0x20
// 0059adbf  c3                   ret 
// library jpeg-6b/jdmainct.c (function _make_funny_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
