// roc 2009-12 008477f0  unit: CXTPControls  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008477f0
//
// 008477f0  83ec10               sub esp, 0x10
// 008477f3  8b442424             mov eax, dword ptr [esp + 0x24]
// 008477f7  8b00                 mov eax, dword ptr [eax]
// 008477f9  53                   push ebx
// 008477fa  55                   push ebp
// 008477fb  56                   push esi
// 008477fc  57                   push edi
// 008477fd  8be9                 mov ebp, ecx
// 008477ff  33db                 xor ebx, ebx
// 00847801  53                   push ebx
// 00847802  8d4c241c             lea ecx, [esp + 0x1c]
// 00847806  83e010               and eax, 0x10
// 00847809  51                   push ecx
// 0084780a  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0084780d  89442418             mov dword ptr [esp + 0x18], eax
// 00847811  e89abafcff           call 0x8132b0
// 00847816  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 00847819  33f6                 xor esi, esi
// 0084781b  3bd3                 cmp edx, ebx
// 0084781d  0f8e32010000         jle 0x847955
// 00847823  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00847827  83c730               add edi, 0x30
// 0084782a  8d9b00000000         lea ebx, [ebx]
// 00847830  395ff8               cmp dword ptr [edi - 8], ebx
// 00847833  0f840d010000         je 0x847946
// 00847839  3bf3                 cmp esi, ebx
// 0084783b  7c15                 jl 0x847852
// 0084783d  3bf2                 cmp esi, edx
// 0084783f  7d11                 jge 0x847852
// 00847841  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 00847844  0f8d31010000         jge 0x84797b
// 0084784a  8b4528               mov eax, dword ptr [ebp + 0x28]
// 0084784d  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00847850  eb02                 jmp 0x847854
// 00847852  33c0                 xor eax, eax
// 00847854  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 0084785a  3bcb                 cmp ecx, ebx
// 0084785c  7404                 je 0x847862
// 0084785e  8bc1                 mov eax, ecx
// 00847860  eb2a                 jmp 0x84788c
// 00847862  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 00847868  3bcb                 cmp ecx, ebx
// 0084786a  7e04                 jle 0x847870
// 0084786c  8bc1                 mov eax, ecx
// 0084786e  eb1c                 jmp 0x84788c
// 00847870  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 00847876  3bcb                 cmp ecx, ebx
// 00847878  740c                 je 0x847886
// 0084787a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0084787d  3bc3                 cmp eax, ebx
// 0084787f  7f13                 jg 0x847894
// 00847881  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00847884  eb06                 jmp 0x84788c
// 00847886  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0084788c  3bc3                 cmp eax, ebx
// 0084788e  0f8e88000000         jle 0x84791c
// 00847894  3bf3                 cmp esi, ebx
// 00847896  7c15                 jl 0x8478ad
// 00847898  3bf2                 cmp esi, edx
// 0084789a  7d11                 jge 0x8478ad
// 0084789c  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 0084789f  0f8dd6000000         jge 0x84797b
// 008478a5  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 008478a8  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 008478ab  eb02                 jmp 0x8478af
// 008478ad  33c0                 xor eax, eax
// 008478af  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 008478b5  3bcb                 cmp ecx, ebx
// 008478b7  7404                 je 0x8478bd
// 008478b9  8bc1                 mov eax, ecx
// 008478bb  eb2a                 jmp 0x8478e7
// 008478bd  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 008478c3  3bcb                 cmp ecx, ebx
// 008478c5  7e04                 jle 0x8478cb
// 008478c7  8bc1                 mov eax, ecx
// 008478c9  eb1c                 jmp 0x8478e7
// 008478cb  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 008478d1  3bcb                 cmp ecx, ebx
// 008478d3  740c                 je 0x8478e1
// 008478d5  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 008478d8  3bc3                 cmp eax, ebx
// 008478da  7f0b                 jg 0x8478e7
// 008478dc  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008478df  eb06                 jmp 0x8478e7
// 008478e1  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 008478e7  3bf3                 cmp esi, ebx
// 008478e9  7c15                 jl 0x847900
// 008478eb  3bf2                 cmp esi, edx
// 008478ed  7d11                 jge 0x847900
// 008478ef  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 008478f2  0f8d83000000         jge 0x84797b
// 008478f8  8b5528               mov edx, dword ptr [ebp + 0x28]
// 008478fb  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 008478fe  eb02                 jmp 0x847902
// 00847900  33c9                 xor ecx, ecx
// 00847902  8b542418             mov edx, dword ptr [esp + 0x18]
// 00847906  52                   push edx
// 00847907  50                   push eax
// 00847908  e803e6faff           call 0x7f5f10
// 0084790d  8bc8                 mov ecx, eax
// 0084790f  e80c5ffcff           call 0x80d820
// 00847914  f7d8                 neg eax
// 00847916  1bc0                 sbb eax, eax
// 00847918  f7d8                 neg eax
// 0084791a  eb02                 jmp 0x84791e
// 0084791c  33c0                 xor eax, eax
// 0084791e  3bf3                 cmp esi, ebx
// 00847920  891f                 mov dword ptr [edi], ebx
// 00847922  895ffc               mov dword ptr [edi - 4], ebx
// 00847925  7c0d                 jl 0x847934
// 00847927  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 0084792a  7d08                 jge 0x847934
// 0084792c  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 0084792f  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00847932  eb02                 jmp 0x847936
// 00847934  33c9                 xor ecx, ecx
// 00847936  33d2                 xor edx, edx
// 00847938  3bc3                 cmp eax, ebx
// 0084793a  0f95c2               setne dl
// 0084793d  83c203               add edx, 3
// 00847940  899148010000         mov dword ptr [ecx + 0x148], edx
// 00847946  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 00847949  46                   inc esi
// 0084794a  83c740               add edi, 0x40
// 0084794d  3bf2                 cmp esi, edx
// 0084794f  0f8cdbfeffff         jl 0x847830
// 00847955  8b442434             mov eax, dword ptr [esp + 0x34]
// 00847959  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0084795d  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00847961  8b742424             mov esi, dword ptr [esp + 0x24]
// 00847965  50                   push eax
// 00847966  51                   push ecx
// 00847967  57                   push edi
// 00847968  56                   push esi
// 00847969  8bcd                 mov ecx, ebp
// 0084796b  e840eaffff           call 0x8463b0
// 00847970  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00847974  740a                 je 0x847980
// 00847976  8b4e04               mov ecx, dword ptr [esi + 4]
// 00847979  eb07                 jmp 0x847982
// 0084797b  e88cc1faff           call 0x7f3b0c
// 00847980  8b0e                 mov ecx, dword ptr [esi]
// 00847982  8b442430             mov eax, dword ptr [esp + 0x30]
// 00847986  3bc8                 cmp ecx, eax
// 00847988  7e25                 jle 0x8479af
// 0084798a  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0084798e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00847992  53                   push ebx
// 00847993  50                   push eax
// 00847994  52                   push edx
// 00847995  57                   push edi
// 00847996  8d442420             lea eax, [esp + 0x20]
// 0084799a  50                   push eax
// 0084799b  8bcd                 mov ecx, ebp
// 0084799d  e87ef9ffff           call 0x847320
// 008479a2  8b08                 mov ecx, dword ptr [eax]
// 008479a4  890e                 mov dword ptr [esi], ecx
// 008479a6  8b5004               mov edx, dword ptr [eax + 4]
// 008479a9  895604               mov dword ptr [esi + 4], edx
// 008479ac  830b01               or dword ptr [ebx], 1
// 008479af  5f                   pop edi
// 008479b0  8bc6                 mov eax, esi
// 008479b2  5e                   pop esi
// 008479b3  5d                   pop ebp
// 008479b4  5b                   pop ebx
// 008479b5  83c410               add esp, 0x10
// 008479b8  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_WrapSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@HAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
