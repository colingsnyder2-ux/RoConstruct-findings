// roc 2010-06 00585680  unit: seg_00580000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00585680
//
// 00585680  53                   push ebx
// 00585681  57                   push edi
// 00585682  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00585686  8b4704               mov eax, dword ptr [edi + 4]
// 00585689  8b08                 mov ecx, dword ptr [eax]
// 0058568b  6a68                 push 0x68
// 0058568d  6a01                 push 1
// 0058568f  57                   push edi
// 00585690  ffd1                 call ecx
// 00585692  8bd8                 mov ebx, eax
// 00585694  83c40c               add esp, 0xc
// 00585697  807c241000           cmp byte ptr [esp + 0x10], 0
// 0058569c  899f48010000         mov dword ptr [edi + 0x148], ebx
// 005856a2  c70390555800         mov dword ptr [ebx], 0x585590
// 005856a8  7466                 je 0x585710
// 005856aa  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 005856ae  56                   push esi
// 005856af  8b7744               mov esi, dword ptr [edi + 0x44]
// 005856b2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005856ba  7e50                 jle 0x58570c
// 005856bc  83c60c               add esi, 0xc
// 005856bf  83c340               add ebx, 0x40
// 005856c2  55                   push ebp
// 005856c3  8b06                 mov eax, dword ptr [esi]
// 005856c5  8b5614               mov edx, dword ptr [esi + 0x14]
// 005856c8  8b6f04               mov ebp, dword ptr [edi + 4]
// 005856cb  50                   push eax
// 005856cc  50                   push eax
// 005856cd  52                   push edx
// 005856ce  e87d7cfeff           call 0x56d350
// 005856d3  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005856d6  83c408               add esp, 8
// 005856d9  50                   push eax
// 005856da  8b46fc               mov eax, dword ptr [esi - 4]
// 005856dd  50                   push eax
// 005856de  51                   push ecx
// 005856df  e86c7cfeff           call 0x56d350
// 005856e4  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005856e7  83c408               add esp, 8
// 005856ea  50                   push eax
// 005856eb  6a00                 push 0
// 005856ed  6a01                 push 1
// 005856ef  57                   push edi
// 005856f0  ffd2                 call edx
// 005856f2  8903                 mov dword ptr [ebx], eax
// 005856f4  8b442430             mov eax, dword ptr [esp + 0x30]
// 005856f8  40                   inc eax
// 005856f9  83c418               add esp, 0x18
// 005856fc  83c304               add ebx, 4
// 005856ff  83c654               add esi, 0x54
// 00585702  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 00585705  89442418             mov dword ptr [esp + 0x18], eax
// 00585709  7cb8                 jl 0x5856c3
// 0058570b  5d                   pop ebp
// 0058570c  5e                   pop esi
// 0058570d  5f                   pop edi
// 0058570e  5b                   pop ebx
// 0058570f  c3                   ret 
// 00585710  8b4704               mov eax, dword ptr [edi + 4]
// 00585713  8b4804               mov ecx, dword ptr [eax + 4]
// 00585716  6800050000           push 0x500
// 0058571b  6a01                 push 1
// 0058571d  57                   push edi
// 0058571e  ffd1                 call ecx
// 00585720  8d9080000000         lea edx, [eax + 0x80]
// 00585726  89531c               mov dword ptr [ebx + 0x1c], edx
// 00585729  8d8800010000         lea ecx, [eax + 0x100]
// 0058572f  894b20               mov dword ptr [ebx + 0x20], ecx
// 00585732  8d9080010000         lea edx, [eax + 0x180]
// 00585738  8d8800020000         lea ecx, [eax + 0x200]
// 0058573e  895324               mov dword ptr [ebx + 0x24], edx
// 00585741  894b28               mov dword ptr [ebx + 0x28], ecx
// 00585744  8d9080020000         lea edx, [eax + 0x280]
// 0058574a  8d8800030000         lea ecx, [eax + 0x300]
// 00585750  89532c               mov dword ptr [ebx + 0x2c], edx
// 00585753  894b30               mov dword ptr [ebx + 0x30], ecx
// 00585756  894318               mov dword ptr [ebx + 0x18], eax
// 00585759  8d9080030000         lea edx, [eax + 0x380]
// 0058575f  8d8800040000         lea ecx, [eax + 0x400]
// 00585765  83c40c               add esp, 0xc
// 00585768  0580040000           add eax, 0x480
// 0058576d  895334               mov dword ptr [ebx + 0x34], edx
// 00585770  894b38               mov dword ptr [ebx + 0x38], ecx
// 00585773  89433c               mov dword ptr [ebx + 0x3c], eax
// 00585776  5f                   pop edi
// 00585777  c7434000000000       mov dword ptr [ebx + 0x40], 0
// 0058577e  5b                   pop ebx
// 0058577f  c3                   ret 
// library jpeg-6b/jccoefct.c (function _jinit_c_coef_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
