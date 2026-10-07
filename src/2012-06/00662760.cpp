// roc 2012-06 00662760  unit: seg_00660000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00662760
//
// 00662760  83ec18               sub esp, 0x18
// 00662763  56                   push esi
// 00662764  8b742420             mov esi, dword ptr [esp + 0x20]
// 00662768  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0066276e  b801000000           mov eax, 1
// 00662773  d3e0                 shl eax, cl
// 00662775  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0066277c  57                   push edi
// 0066277d  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00662783  89442408             mov dword ptr [esp + 8], eax
// 00662787  7415                 je 0x66279e
// 00662789  837f2800             cmp dword ptr [edi + 0x28], 0
// 0066278d  750f                 jne 0x66279e
// 0066278f  e8ccfaffff           call 0x662260
// 00662794  84c0                 test al, al
// 00662796  7506                 jne 0x66279e
// 00662798  5f                   pop edi
// 00662799  5e                   pop esi
// 0066279a  83c418               add esp, 0x18
// 0066279d  c3                   ret 
// 0066279e  8b4618               mov eax, dword ptr [esi + 0x18]
// 006627a1  8974241c             mov dword ptr [esp + 0x1c], esi
// 006627a5  8b08                 mov ecx, dword ptr [eax]
// 006627a7  894c240c             mov dword ptr [esp + 0xc], ecx
// 006627ab  8b5004               mov edx, dword ptr [eax + 4]
// 006627ae  53                   push ebx
// 006627af  33db                 xor ebx, ebx
// 006627b1  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 006627b7  89542414             mov dword ptr [esp + 0x14], edx
// 006627bb  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 006627be  55                   push ebp
// 006627bf  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 006627c2  7e4c                 jle 0x662810
// 006627c4  83f901               cmp ecx, 1
// 006627c7  8b442430             mov eax, dword ptr [esp + 0x30]
// 006627cb  8b0498               mov eax, dword ptr [eax + ebx*4]
// 006627ce  8944242c             mov dword ptr [esp + 0x2c], eax
// 006627d2  7d21                 jge 0x6627f5
// 006627d4  6a01                 push 1
// 006627d6  51                   push ecx
// 006627d7  8d4c241c             lea ecx, [esp + 0x1c]
// 006627db  55                   push ebp
// 006627dc  51                   push ecx
// 006627dd  e83ef2ffff           call 0x661a20
// 006627e2  83c410               add esp, 0x10
// 006627e5  84c0                 test al, al
// 006627e7  744d                 je 0x662836
// 006627e9  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006627ed  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006627f1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006627f5  49                   dec ecx
// 006627f6  8bd5                 mov edx, ebp
// 006627f8  d3fa                 sar edx, cl
// 006627fa  f6c201               test dl, 1
// 006627fd  7408                 je 0x662807
// 006627ff  668b542410           mov dx, word ptr [esp + 0x10]
// 00662804  660910               or word ptr [eax], dx
// 00662807  43                   inc ebx
// 00662808  3b9e40010000         cmp ebx, dword ptr [esi + 0x140]
// 0066280e  7cb4                 jl 0x6627c4
// 00662810  8b4618               mov eax, dword ptr [esi + 0x18]
// 00662813  8b542414             mov edx, dword ptr [esp + 0x14]
// 00662817  8910                 mov dword ptr [eax], edx
// 00662819  8b4618               mov eax, dword ptr [esi + 0x18]
// 0066281c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00662820  895004               mov dword ptr [eax + 4], edx
// 00662823  ff4f28               dec dword ptr [edi + 0x28]
// 00662826  896f0c               mov dword ptr [edi + 0xc], ebp
// 00662829  5d                   pop ebp
// 0066282a  5b                   pop ebx
// 0066282b  894f10               mov dword ptr [edi + 0x10], ecx
// 0066282e  5f                   pop edi
// 0066282f  b001                 mov al, 1
// 00662831  5e                   pop esi
// 00662832  83c418               add esp, 0x18
// 00662835  c3                   ret 
// 00662836  5d                   pop ebp
// 00662837  5b                   pop ebx
// 00662838  5f                   pop edi
// 00662839  32c0                 xor al, al
// 0066283b  5e                   pop esi
// 0066283c  83c418               add esp, 0x18
// 0066283f  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
