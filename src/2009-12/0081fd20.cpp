// roc 2009-12 0081fd20  unit: CXTPReportControl  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081fd20
//
// 0081fd20  83ec24               sub esp, 0x24
// 0081fd23  53                   push ebx
// 0081fd24  56                   push esi
// 0081fd25  8b742430             mov esi, dword ptr [esp + 0x30]
// 0081fd29  57                   push edi
// 0081fd2a  33ff                 xor edi, edi
// 0081fd2c  8bd9                 mov ebx, ecx
// 0081fd2e  3bf7                 cmp esi, edi
// 0081fd30  0f841e010000         je 0x81fe54
// 0081fd36  8bce                 mov ecx, esi
// 0081fd38  e8437f0000           call 0x827c80
// 0081fd3d  83f8ff               cmp eax, -1
// 0081fd40  0f840e010000         je 0x81fe54
// 0081fd46  397e60               cmp dword ptr [esi + 0x60], edi
// 0081fd49  0f8405010000         je 0x81fe54
// 0081fd4f  8b8bec000000         mov ecx, dword ptr [ebx + 0xec]
// 0081fd55  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 0081fd58  0f8df6000000         jge 0x81fe54
// 0081fd5e  8d542410             lea edx, [esp + 0x10]
// 0081fd62  52                   push edx
// 0081fd63  8bce                 mov ecx, esi
// 0081fd65  e8667d0000           call 0x827ad0
// 0081fd6a  8b8398000000         mov eax, dword ptr [ebx + 0x98]
// 0081fd70  2b8390000000         sub eax, dword ptr [ebx + 0x90]
// 0081fd76  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081fd7a  3bc8                 cmp ecx, eax
// 0081fd7c  7c3d                 jl 0x81fdbb
// 0081fd7e  8b9390000000         mov edx, dword ptr [ebx + 0x90]
// 0081fd84  2b9398000000         sub edx, dword ptr [ebx + 0x98]
// 0081fd8a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0081fd8e  03d1                 add edx, ecx
// 0081fd90  3bc2                 cmp eax, edx
// 0081fd92  7c0e                 jl 0x81fda2
// 0081fd94  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 0081fd9a  2b8398000000         sub eax, dword ptr [ebx + 0x98]
// 0081fda0  03c1                 add eax, ecx
// 0081fda2  8b8b0c010000         mov ecx, dword ptr [ebx + 0x10c]
// 0081fda8  03c8                 add ecx, eax
// 0081fdaa  51                   push ecx
// 0081fdab  8bcb                 mov ecx, ebx
// 0081fdad  e8aed7ffff           call 0x81d560
// 0081fdb2  5f                   pop edi
// 0081fdb3  5e                   pop esi
// 0081fdb4  5b                   pop ebx
// 0081fdb5  83c424               add esp, 0x24
// 0081fdb8  c20400               ret 4
// 0081fdbb  8b8310010000         mov eax, dword ptr [ebx + 0x110]
// 0081fdc1  3bc7                 cmp eax, edi
// 0081fdc3  55                   push ebp
// 0081fdc4  897c2410             mov dword ptr [esp + 0x10], edi
// 0081fdc8  7e63                 jle 0x81fe2d
// 0081fdca  8be8                 mov ebp, eax
// 0081fdcc  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 0081fdd2  397830               cmp dword ptr [eax + 0x30], edi
// 0081fdd5  7e56                 jle 0x81fe2d
// 0081fdd7  85ed                 test ebp, ebp
// 0081fdd9  7e52                 jle 0x81fe2d
// 0081fddb  85ff                 test edi, edi
// 0081fddd  7c0d                 jl 0x81fdec
// 0081fddf  3b7830               cmp edi, dword ptr [eax + 0x30]
// 0081fde2  7d08                 jge 0x81fdec
// 0081fde4  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0081fde7  8b34ba               mov esi, dword ptr [edx + edi*4]
// 0081fdea  eb02                 jmp 0x81fdee
// 0081fdec  33f6                 xor esi, esi
// 0081fdee  3b742438             cmp esi, dword ptr [esp + 0x38]
// 0081fdf2  7431                 je 0x81fe25
// 0081fdf4  85f6                 test esi, esi
// 0081fdf6  741f                 je 0x81fe17
// 0081fdf8  8bce                 mov ecx, esi
// 0081fdfa  e8c13c0900           call 0x8b3ac0
// 0081fdff  85c0                 test eax, eax
// 0081fe01  7414                 je 0x81fe17
// 0081fe03  8d442424             lea eax, [esp + 0x24]
// 0081fe07  50                   push eax
// 0081fe08  8bce                 mov ecx, esi
// 0081fe0a  4d                   dec ebp
// 0081fe0b  e8c07c0000           call 0x827ad0
// 0081fe10  8b4808               mov ecx, dword ptr [eax + 8]
// 0081fe13  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081fe17  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 0081fe1d  47                   inc edi
// 0081fe1e  3b7830               cmp edi, dword ptr [eax + 0x30]
// 0081fe21  7cb4                 jl 0x81fdd7
// 0081fe23  eb08                 jmp 0x81fe2d
// 0081fe25  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0081fe2d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081fe31  8b542410             mov edx, dword ptr [esp + 0x10]
// 0081fe35  8bc1                 mov eax, ecx
// 0081fe37  2bc2                 sub eax, edx
// 0081fe39  85c0                 test eax, eax
// 0081fe3b  7f16                 jg 0x81fe53
// 0081fe3d  8b830c010000         mov eax, dword ptr [ebx + 0x10c]
// 0081fe43  85c0                 test eax, eax
// 0081fe45  740c                 je 0x81fe53
// 0081fe47  2bc2                 sub eax, edx
// 0081fe49  03c1                 add eax, ecx
// 0081fe4b  50                   push eax
// 0081fe4c  8bcb                 mov ecx, ebx
// 0081fe4e  e80dd7ffff           call 0x81d560
// 0081fe53  5d                   pop ebp
// 0081fe54  5f                   pop edi
// 0081fe55  5e                   pop esi
// 0081fe56  5b                   pop ebx
// 0081fe57  83c424               add esp, 0x24
// 0081fe5a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureVisible@CXTPReportControl@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
