// from server: 100% by auto
// roc 2008-06 00537000  unit: seg_00530000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00537000
//
// 00537000  56                   push esi
// 00537001  8b742408             mov esi, dword ptr [esp + 8]
// 00537005  8b4604               mov eax, dword ptr [esi + 4]
// 00537008  8b08                 mov ecx, dword ptr [eax]
// 0053700a  6a40                 push 0x40
// 0053700c  6a01                 push 1
// 0053700e  56                   push esi
// 0053700f  ffd1                 call ecx
// 00537011  898640010000         mov dword ptr [esi + 0x140], eax
// 00537017  83c40c               add esp, 0xc
// 0053701a  c700b06f5300         mov dword ptr [eax], 0x536fb0
// 00537020  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 00537027  7561                 jne 0x53708a
// 00537029  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0053702e  7415                 je 0x537045
// 00537030  8b16                 mov edx, dword ptr [esi]
// 00537032  c7421404000000       mov dword ptr [edx + 0x14], 4
// 00537039  8b06                 mov eax, dword ptr [esi]
// 0053703b  8b08                 mov ecx, dword ptr [eax]
// 0053703d  56                   push esi
// 0053703e  ffd1                 call ecx
// 00537040  83c404               add esp, 4
// 00537043  5e                   pop esi
// 00537044  c3                   ret 
// 00537045  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00537048  55                   push ebp
// 00537049  33ed                 xor ebp, ebp
// 0053704b  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0053704e  7e39                 jle 0x537089
// 00537050  53                   push ebx
// 00537051  57                   push edi
// 00537052  8d791c               lea edi, [ecx + 0x1c]
// 00537055  8d5818               lea ebx, [eax + 0x18]
// 00537058  8b47f0               mov eax, dword ptr [edi - 0x10]
// 0053705b  8b0f                 mov ecx, dword ptr [edi]
// 0053705d  8b5604               mov edx, dword ptr [esi + 4]
// 00537060  8b5208               mov edx, dword ptr [edx + 8]
// 00537063  03c0                 add eax, eax
// 00537065  03c9                 add ecx, ecx
// 00537067  03c0                 add eax, eax
// 00537069  03c0                 add eax, eax
// 0053706b  50                   push eax
// 0053706c  03c9                 add ecx, ecx
// 0053706e  03c9                 add ecx, ecx
// 00537070  51                   push ecx
// 00537071  6a01                 push 1
// 00537073  56                   push esi
// 00537074  ffd2                 call edx
// 00537076  8903                 mov dword ptr [ebx], eax
// 00537078  45                   inc ebp
// 00537079  83c410               add esp, 0x10
// 0053707c  83c304               add ebx, 4
// 0053707f  83c754               add edi, 0x54
// 00537082  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 00537085  7cd1                 jl 0x537058
// 00537087  5f                   pop edi
// 00537088  5b                   pop ebx
// 00537089  5d                   pop ebp
// 0053708a  5e                   pop esi
// 0053708b  c3                   ret 
// library jpeg-6b/jcmainct.c (function _jinit_c_main_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
