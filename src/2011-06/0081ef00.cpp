// from server: 100% by auto
// roc 2011-06 0081ef00  unit: CXTPCommandBar  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081ef00
//
// 0081ef00  83ec58               sub esp, 0x58
// 0081ef03  56                   push esi
// 0081ef04  8b357c01a400         mov esi, dword ptr [0xa4017c]
// 0081ef0a  57                   push edi
// 0081ef0b  8d442430             lea eax, [esp + 0x30]
// 0081ef0f  50                   push eax
// 0081ef10  8bf9                 mov edi, ecx
// 0081ef12  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0081ef16  6a18                 push 0x18
// 0081ef18  51                   push ecx
// 0081ef19  ffd6                 call esi
// 0081ef1b  85c0                 test eax, eax
// 0081ef1d  0f84ea010000         je 0x81f10d
// 0081ef23  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0081ef27  8d542448             lea edx, [esp + 0x48]
// 0081ef2b  52                   push edx
// 0081ef2c  6a18                 push 0x18
// 0081ef2e  50                   push eax
// 0081ef2f  ffd6                 call esi
// 0081ef31  85c0                 test eax, eax
// 0081ef33  0f84d4010000         je 0x81f10d
// 0081ef39  8b542474             mov edx, dword ptr [esp + 0x74]
// 0081ef3d  8d4c2418             lea ecx, [esp + 0x18]
// 0081ef41  51                   push ecx
// 0081ef42  6a18                 push 0x18
// 0081ef44  52                   push edx
// 0081ef45  ffd6                 call esi
// 0081ef47  85c0                 test eax, eax
// 0081ef49  0f84be010000         je 0x81f10d
// 0081ef4f  8d442448             lea eax, [esp + 0x48]
// 0081ef53  50                   push eax
// 0081ef54  8d4c2434             lea ecx, [esp + 0x34]
// 0081ef58  51                   push ecx
// 0081ef59  8bcf                 mov ecx, edi
// 0081ef5b  e8b0fcffff           call 0x81ec10
// 0081ef60  85c0                 test eax, eax
// 0081ef62  0f84a5010000         je 0x81f10d
// 0081ef68  8d542418             lea edx, [esp + 0x18]
// 0081ef6c  52                   push edx
// 0081ef6d  8d442434             lea eax, [esp + 0x34]
// 0081ef71  50                   push eax
// 0081ef72  8bcf                 mov ecx, edi
// 0081ef74  e897fcffff           call 0x81ec10
// 0081ef79  85c0                 test eax, eax
// 0081ef7b  0f848c010000         je 0x81f10d
// 0081ef81  66837c244220         cmp word ptr [esp + 0x42], 0x20
// 0081ef87  0f8580010000         jne 0x81f10d
// 0081ef8d  66837c244001         cmp word ptr [esp + 0x40], 1
// 0081ef93  0f8574010000         jne 0x81f10d
// 0081ef99  8b442444             mov eax, dword ptr [esp + 0x44]
// 0081ef9d  85c0                 test eax, eax
// 0081ef9f  0f8468010000         je 0x81f10d
// 0081efa5  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0081efa9  85d2                 test edx, edx
// 0081efab  0f845c010000         je 0x81f10d
// 0081efb1  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0081efb5  85f6                 test esi, esi
// 0081efb7  0f8450010000         je 0x81f10d
// 0081efbd  837c242000           cmp dword ptr [esp + 0x20], 0
// 0081efc2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081efc6  894c2414             mov dword ptr [esp + 0x14], ecx
// 0081efca  89442464             mov dword ptr [esp + 0x64], eax
// 0081efce  89542474             mov dword ptr [esp + 0x74], edx
// 0081efd2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0081efda  0f8e20010000         jle 0x81f100
// 0081efe0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0081efe4  53                   push ebx
// 0081efe5  8d7e01               lea edi, [esi + 1]
// 0081efe8  55                   push ebp
// 0081efe9  897c2410             mov dword ptr [esp + 0x10], edi
// 0081efed  8d4900               lea ecx, [ecx]
// 0081eff0  33ed                 xor ebp, ebp
// 0081eff2  85c0                 test eax, eax
// 0081eff4  0f8edd000000         jle 0x81f0d7
// 0081effa  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0081effe  8bda                 mov ebx, edx
// 0081f000  2bca                 sub ecx, edx
// 0081f002  895c2474             mov dword ptr [esp + 0x74], ebx
// 0081f006  894c2418             mov dword ptr [esp + 0x18], ecx
// 0081f00a  eb0c                 jmp 0x81f018
// 0081f00c  8d642400             lea esp, [esp]
// 0081f010  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0081f014  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081f018  837c247000           cmp dword ptr [esp + 0x70], 0
// 0081f01d  740e                 je 0x81f02d
// 0081f01f  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0081f023  8bc8                 mov ecx, eax
// 0081f025  2bcd                 sub ecx, ebp
// 0081f027  8d4c8efc             lea ecx, [esi + ecx*4 - 4]
// 0081f02b  eb02                 jmp 0x81f02f
// 0081f02d  03cb                 add ecx, ebx
// 0081f02f  837c247800           cmp dword ptr [esp + 0x78], 0
// 0081f034  7406                 je 0x81f03c
// 0081f036  2bc5                 sub eax, ebp
// 0081f038  8d5c82fc             lea ebx, [edx + eax*4 - 4]
// 0081f03c  0fb65103             movzx edx, byte ptr [ecx + 3]
// 0081f040  0fb67302             movzx esi, byte ptr [ebx + 2]
// 0081f044  b8ff000000           mov eax, 0xff
// 0081f049  2bc2                 sub eax, edx
// 0081f04b  0faff0               imul esi, eax
// 0081f04e  b881808080           mov eax, 0x80808081
// 0081f053  f7ee                 imul esi
// 0081f055  03d6                 add edx, esi
// 0081f057  c1fa07               sar edx, 7
// 0081f05a  8bc2                 mov eax, edx
// 0081f05c  c1e81f               shr eax, 0x1f
// 0081f05f  03c2                 add eax, edx
// 0081f061  024102               add al, byte ptr [ecx + 2]
// 0081f064  8344247404           add dword ptr [esp + 0x74], 4
// 0081f069  884701               mov byte ptr [edi + 1], al
// 0081f06c  0fb65103             movzx edx, byte ptr [ecx + 3]
// 0081f070  0fb67301             movzx esi, byte ptr [ebx + 1]
// 0081f074  b8ff000000           mov eax, 0xff
// 0081f079  2bc2                 sub eax, edx
// 0081f07b  0faff0               imul esi, eax
// 0081f07e  b881808080           mov eax, 0x80808081
// 0081f083  f7ee                 imul esi
// 0081f085  03d6                 add edx, esi
// 0081f087  c1fa07               sar edx, 7
// 0081f08a  8bc2                 mov eax, edx
// 0081f08c  c1e81f               shr eax, 0x1f
// 0081f08f  03c2                 add eax, edx
// 0081f091  024101               add al, byte ptr [ecx + 1]
// 0081f094  beff000000           mov esi, 0xff
// 0081f099  8807                 mov byte ptr [edi], al
// 0081f09b  0fb65103             movzx edx, byte ptr [ecx + 3]
// 0081f09f  0fb603               movzx eax, byte ptr [ebx]
// 0081f0a2  2bf2                 sub esi, edx
// 0081f0a4  0faff0               imul esi, eax
// 0081f0a7  b881808080           mov eax, 0x80808081
// 0081f0ac  f7ee                 imul esi
// 0081f0ae  03d6                 add edx, esi
// 0081f0b0  c1fa07               sar edx, 7
// 0081f0b3  8bc2                 mov eax, edx
// 0081f0b5  c1e81f               shr eax, 0x1f
// 0081f0b8  03c2                 add eax, edx
// 0081f0ba  0201                 add al, byte ptr [ecx]
// 0081f0bc  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0081f0c0  8847ff               mov byte ptr [edi - 1], al
// 0081f0c3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0081f0c7  45                   inc ebp
// 0081f0c8  83c704               add edi, 4
// 0081f0cb  3be8                 cmp ebp, eax
// 0081f0cd  0f8c3dffffff         jl 0x81f010
// 0081f0d3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0081f0d7  8b742414             mov esi, dword ptr [esp + 0x14]
// 0081f0db  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0081f0df  014c246c             add dword ptr [esp + 0x6c], ecx
// 0081f0e3  46                   inc esi
// 0081f0e4  03d1                 add edx, ecx
// 0081f0e6  03f9                 add edi, ecx
// 0081f0e8  3b742428             cmp esi, dword ptr [esp + 0x28]
// 0081f0ec  8954247c             mov dword ptr [esp + 0x7c], edx
// 0081f0f0  897c2410             mov dword ptr [esp + 0x10], edi
// 0081f0f4  89742414             mov dword ptr [esp + 0x14], esi
// 0081f0f8  0f8cf2feffff         jl 0x81eff0
// 0081f0fe  5d                   pop ebp
// 0081f0ff  5b                   pop ebx
// 0081f100  5f                   pop edi
// 0081f101  b801000000           mov eax, 1
// 0081f106  5e                   pop esi
// 0081f107  83c458               add esp, 0x58
// 0081f10a  c21400               ret 0x14
// 0081f10d  5f                   pop edi
// 0081f10e  33c0                 xor eax, eax
// 0081f110  5e                   pop esi
// 0081f111  83c458               add esp, 0x58
// 0081f114  c21400               ret 0x14
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?BlendImages@CXTPImageManager@@ABEHPAUHBITMAP__@@H0H0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
