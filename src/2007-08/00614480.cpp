// from server: 100% by auto
// roc 2007-08 00614480  unit: seg_00610000  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614480
//
// 00614480  83ec34               sub esp, 0x34
// 00614483  817b101d010000       cmp dword ptr [ebx + 0x10], 0x11d
// 0061448a  55                   push ebp
// 0061448b  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 0061448e  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00614491  56                   push esi
// 00614492  57                   push edi
// 00614493  8944240c             mov dword ptr [esp + 0xc], eax
// 00614497  7527                 jne 0x6144c0
// 00614499  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0061449d  bafdffff7f           mov edx, 0x7ffffffd
// 006144a2  39511c               cmp dword ptr [ecx + 0x1c], edx
// 006144a5  7e0c                 jle 0x6144b3
// 006144a7  b96c347c00           mov ecx, 0x7c346c
// 006144ac  8bf5                 mov esi, ebp
// 006144ae  e81df6ffff           call 0x613ad0
// 006144b3  8d7c2410             lea edi, [esp + 0x10]
// 006144b7  8bf3                 mov esi, ebx
// 006144b9  e8f2f6ffff           call 0x613bb0
// 006144be  eb0b                 jmp 0x6144cb
// 006144c0  8d7c2410             lea edi, [esp + 0x10]
// 006144c4  8bf3                 mov esi, ebx
// 006144c6  e865ffffff           call 0x614430
// 006144cb  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 006144cf  83471c01             add dword ptr [edi + 0x1c], 1
// 006144d3  837b103d             cmp dword ptr [ebx + 0x10], 0x3d
// 006144d7  7421                 je 0x6144fa
// 006144d9  6a3d                 push 0x3d
// 006144db  53                   push ebx
// 006144dc  e8df2f0000           call 0x6174c0
// 006144e1  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006144e4  50                   push eax
// 006144e5  6870337c00           push 0x7c3370
// 006144ea  52                   push edx
// 006144eb  e8a0a9ffff           call 0x60ee90
// 006144f0  50                   push eax
// 006144f1  53                   push ebx
// 006144f2  e8c9300000           call 0x6175c0
// 006144f7  83c41c               add esp, 0x1c
// 006144fa  53                   push ebx
// 006144fb  e8f0440000           call 0x6189f0
// 00614500  8d442414             lea eax, [esp + 0x14]
// 00614504  50                   push eax
// 00614505  55                   push ebp
// 00614506  e8754f0100           call 0x629480
// 0061450b  6a00                 push 0
// 0061450d  8d4c2438             lea ecx, [esp + 0x38]
// 00614511  51                   push ecx
// 00614512  53                   push ebx
// 00614513  8bf0                 mov esi, eax
// 00614515  e8060e0000           call 0x615320
// 0061451a  8d542440             lea edx, [esp + 0x40]
// 0061451e  52                   push edx
// 0061451f  55                   push ebp
// 00614520  e85b4f0100           call 0x629480
// 00614525  50                   push eax
// 00614526  8b4718               mov eax, dword ptr [edi + 0x18]
// 00614529  8b4808               mov ecx, dword ptr [eax + 8]
// 0061452c  56                   push esi
// 0061452d  51                   push ecx
// 0061452e  6a09                 push 9
// 00614530  55                   push ebp
// 00614531  e84a480100           call 0x628d80
// 00614536  8b542440             mov edx, dword ptr [esp + 0x40]
// 0061453a  83c434               add esp, 0x34
// 0061453d  5f                   pop edi
// 0061453e  5e                   pop esi
// 0061453f  895524               mov dword ptr [ebp + 0x24], edx
// 00614542  5d                   pop ebp
// 00614543  83c434               add esp, 0x34
// 00614546  c3                   ret 
// library lua-5.1.4/lparser.c (function _recfield)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
