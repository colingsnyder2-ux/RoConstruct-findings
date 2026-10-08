// roc 2009-06 007a30f0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 473 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a30f0
//
// 007a30f0  83ec30               sub esp, 0x30
// 007a30f3  837c244400           cmp dword ptr [esp + 0x44], 0
// 007a30f8  53                   push ebx
// 007a30f9  55                   push ebp
// 007a30fa  56                   push esi
// 007a30fb  57                   push edi
// 007a30fc  8bf1                 mov esi, ecx
// 007a30fe  753f                 jne 0x7a313f
// 007a3100  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007a3104  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 007a310b  8b442444             mov eax, dword ptr [esp + 0x44]
// 007a310f  7517                 jne 0x7a3128
// 007a3111  c70008000000         mov dword ptr [eax], 8
// 007a3117  c7400408000000       mov dword ptr [eax + 4], 8
// 007a311e  5f                   pop edi
// 007a311f  5e                   pop esi
// 007a3120  5d                   pop ebp
// 007a3121  5b                   pop ebx
// 007a3122  83c430               add esp, 0x30
// 007a3125  c21400               ret 0x14
// 007a3128  c70006000000         mov dword ptr [eax], 6
// 007a312e  c7400406000000       mov dword ptr [eax + 4], 6
// 007a3135  5f                   pop edi
// 007a3136  5e                   pop esi
// 007a3137  5d                   pop ebp
// 007a3138  5b                   pop ebx
// 007a3139  83c430               add esp, 0x30
// 007a313c  c21400               ret 0x14
// 007a313f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007a3143  8b4220               mov eax, dword ptr [edx + 0x20]
// 007a3146  8d4c2430             lea ecx, [esp + 0x30]
// 007a314a  51                   push ecx
// 007a314b  50                   push eax
// 007a314c  ff1514ee8900         call dword ptr [0x89ee14]
// 007a3152  8b442450             mov eax, dword ptr [esp + 0x50]
// 007a3156  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 007a315c  8ba8bc000000         mov ebp, dword ptr [eax + 0xbc]
// 007a3162  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 007a3168  8bb8c4000000         mov edi, dword ptr [eax + 0xc4]
// 007a316e  8b98b8000000         mov ebx, dword ptr [eax + 0xb8]
// 007a3174  89542428             mov dword ptr [esp + 0x28], edx
// 007a3178  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 007a317e  8954242c             mov dword ptr [esp + 0x2c], edx
// 007a3182  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 007a3188  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007a318c  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 007a3190  83bdf800000002       cmp dword ptr [ebp + 0xf8], 2
// 007a3197  89542410             mov dword ptr [esp + 0x10], edx
// 007a319b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 007a31a1  7557                 jne 0x7a31fa
// 007a31a3  6a14                 push 0x14
// 007a31a5  6a10                 push 0x10
// 007a31a7  83ec10               sub esp, 0x10
// 007a31aa  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 007a31b1  8bc4                 mov eax, esp
// 007a31b3  7520                 jne 0x7a31d5
// 007a31b5  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 007a31b9  83c10b               add ecx, 0xb
// 007a31bc  8d57fb               lea edx, [edi - 5]
// 007a31bf  8908                 mov dword ptr [eax], ecx
// 007a31c1  83c3f5               add ebx, -0xb
// 007a31c4  895004               mov dword ptr [eax + 4], edx
// 007a31c7  83c7fd               add edi, -3
// 007a31ca  895808               mov dword ptr [eax + 8], ebx
// 007a31cd  89780c               mov dword ptr [eax + 0xc], edi
// 007a31d0  e9cd000000           jmp 0x7a32a2
// 007a31d5  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007a31d9  8d79fb               lea edi, [ecx - 5]
// 007a31dc  83c203               add edx, 3
// 007a31df  83c1fd               add ecx, -3
// 007a31e2  8938                 mov dword ptr [eax], edi
// 007a31e4  895004               mov dword ptr [eax + 4], edx
// 007a31e7  894808               mov dword ptr [eax + 8], ecx
// 007a31ea  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007a31ee  83c3fd               add ebx, -3
// 007a31f1  89580c               mov dword ptr [eax + 0xc], ebx
// 007a31f4  51                   push ecx
// 007a31f5  e9ad000000           jmp 0x7a32a7
// 007a31fa  8bad00010000         mov ebp, dword ptr [ebp + 0x100]
// 007a3200  83fd05               cmp ebp, 5
// 007a3203  7452                 je 0x7a3257
// 007a3205  83fd02               cmp ebp, 2
// 007a3208  7405                 je 0x7a320f
// 007a320a  83fd03               cmp ebp, 3
// 007a320d  7548                 jne 0x7a3257
// 007a320f  6a14                 push 0x14
// 007a3211  6a10                 push 0x10
// 007a3213  83ec10               sub esp, 0x10
// 007a3216  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 007a321d  8bc4                 mov eax, esp
// 007a321f  7517                 jne 0x7a3238
// 007a3221  8b542428             mov edx, dword ptr [esp + 0x28]
// 007a3225  8d4ffc               lea ecx, [edi - 4]
// 007a3228  8910                 mov dword ptr [eax], edx
// 007a322a  894804               mov dword ptr [eax + 4], ecx
// 007a322d  83c7fe               add edi, -2
// 007a3230  895808               mov dword ptr [eax + 8], ebx
// 007a3233  89780c               mov dword ptr [eax + 0xc], edi
// 007a3236  eb6a                 jmp 0x7a32a2
// 007a3238  8d4b02               lea ecx, [ebx + 2]
// 007a323b  83c204               add edx, 4
// 007a323e  8908                 mov dword ptr [eax], ecx
// 007a3240  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007a3244  895004               mov dword ptr [eax + 4], edx
// 007a3247  8b542460             mov edx, dword ptr [esp + 0x60]
// 007a324b  83c304               add ebx, 4
// 007a324e  895808               mov dword ptr [eax + 8], ebx
// 007a3251  89480c               mov dword ptr [eax + 0xc], ecx
// 007a3254  52                   push edx
// 007a3255  eb50                 jmp 0x7a32a7
// 007a3257  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 007a325e  6a14                 push 0x14
// 007a3260  6a10                 push 0x10
// 007a3262  7521                 jne 0x7a3285
// 007a3264  8d79fc               lea edi, [ecx - 4]
// 007a3267  83c1fe               add ecx, -2
// 007a326a  83ec10               sub esp, 0x10
// 007a326d  8bc4                 mov eax, esp
// 007a326f  8938                 mov dword ptr [eax], edi
// 007a3271  895004               mov dword ptr [eax + 4], edx
// 007a3274  8b542460             mov edx, dword ptr [esp + 0x60]
// 007a3278  894808               mov dword ptr [eax + 8], ecx
// 007a327b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007a327f  89480c               mov dword ptr [eax + 0xc], ecx
// 007a3282  52                   push edx
// 007a3283  eb22                 jmp 0x7a32a7
// 007a3285  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a3289  8d7afc               lea edi, [edx - 4]
// 007a328c  83c104               add ecx, 4
// 007a328f  83c2fe               add edx, -2
// 007a3292  83ec10               sub esp, 0x10
// 007a3295  8bc4                 mov eax, esp
// 007a3297  8908                 mov dword ptr [eax], ecx
// 007a3299  897804               mov dword ptr [eax + 4], edi
// 007a329c  895808               mov dword ptr [eax + 8], ebx
// 007a329f  89500c               mov dword ptr [eax + 0xc], edx
// 007a32a2  8b442460             mov eax, dword ptr [esp + 0x60]
// 007a32a6  50                   push eax
// 007a32a7  8bce                 mov ecx, esi
// 007a32a9  e8d2f6f7ff           call 0x722980
// 007a32ae  8b442444             mov eax, dword ptr [esp + 0x44]
// 007a32b2  5f                   pop edi
// 007a32b3  5e                   pop esi
// 007a32b4  5d                   pop ebp
// 007a32b5  c70000000000         mov dword ptr [eax], 0
// 007a32bb  c7400400000000       mov dword ptr [eax + 4], 0
// 007a32c2  5b                   pop ebx
// 007a32c3  83c430               add esp, 0x30
// 007a32c6  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawCommandBarSeparator@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
