// roc 2009-12 00621fa0  unit: seg_00620000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00621fa0
//
// 00621fa0  83ec14               sub esp, 0x14
// 00621fa3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00621fa7  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00621fad  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00621fb0  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00621fb3  56                   push esi
// 00621fb4  8b742428             mov esi, dword ptr [esp + 0x28]
// 00621fb8  8954240c             mov dword ptr [esp + 0xc], edx
// 00621fbc  894c2410             mov dword ptr [esp + 0x10], ecx
// 00621fc0  85f6                 test esi, esi
// 00621fc2  0f8e92000000         jle 0x62205a
// 00621fc8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00621fcc  8b542420             mov edx, dword ptr [esp + 0x20]
// 00621fd0  53                   push ebx
// 00621fd1  2bd0                 sub edx, eax
// 00621fd3  55                   push ebp
// 00621fd4  8944240c             mov dword ptr [esp + 0xc], eax
// 00621fd8  8954241c             mov dword ptr [esp + 0x1c], edx
// 00621fdc  89742410             mov dword ptr [esp + 0x10], esi
// 00621fe0  57                   push edi
// 00621fe1  8b3402               mov esi, dword ptr [edx + eax]
// 00621fe4  8b18                 mov ebx, dword ptr [eax]
// 00621fe6  894c2434             mov dword ptr [esp + 0x34], ecx
// 00621fea  85c9                 test ecx, ecx
// 00621fec  765b                 jbe 0x622049
// 00621fee  8bff                 mov edi, edi
// 00621ff0  0fb60e               movzx ecx, byte ptr [esi]
// 00621ff3  0fb64601             movzx eax, byte ptr [esi + 1]
// 00621ff7  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00621ffb  46                   inc esi
// 00621ffc  0fb65601             movzx edx, byte ptr [esi + 1]
// 00622000  46                   inc esi
// 00622001  c1e802               shr eax, 2
// 00622004  8bf8                 mov edi, eax
// 00622006  c1e705               shl edi, 5
// 00622009  c1e903               shr ecx, 3
// 0062200c  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 00622010  c1ea03               shr edx, 3
// 00622013  03fa                 add edi, edx
// 00622015  8d7c7d00             lea edi, [ebp + edi*2]
// 00622019  46                   inc esi
// 0062201a  66833f00             cmp word ptr [edi], 0
// 0062201e  750f                 jne 0x62202f
// 00622020  52                   push edx
// 00622021  51                   push ecx
// 00622022  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00622026  51                   push ecx
// 00622027  e854feffff           call 0x621e80
// 0062202c  83c40c               add esp, 0xc
// 0062202f  8a17                 mov dl, byte ptr [edi]
// 00622031  feca                 dec dl
// 00622033  8813                 mov byte ptr [ebx], dl
// 00622035  43                   inc ebx
// 00622036  836c243401           sub dword ptr [esp + 0x34], 1
// 0062203b  75b3                 jne 0x621ff0
// 0062203d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00622041  8b442410             mov eax, dword ptr [esp + 0x10]
// 00622045  8b542420             mov edx, dword ptr [esp + 0x20]
// 00622049  83c004               add eax, 4
// 0062204c  836c241401           sub dword ptr [esp + 0x14], 1
// 00622051  89442410             mov dword ptr [esp + 0x10], eax
// 00622055  758a                 jne 0x621fe1
// 00622057  5f                   pop edi
// 00622058  5d                   pop ebp
// 00622059  5b                   pop ebx
// 0062205a  5e                   pop esi
// 0062205b  83c414               add esp, 0x14
// 0062205e  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_no_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
