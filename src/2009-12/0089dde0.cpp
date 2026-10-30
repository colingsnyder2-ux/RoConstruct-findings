// roc 2009-12 0089dde0  unit: CXTPReportPaintManager  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089dde0
//
// 0089dde0  83ec08               sub esp, 8
// 0089dde3  83b9a802000000       cmp dword ptr [ecx + 0x2a8], 0
// 0089ddea  890c24               mov dword ptr [esp], ecx
// 0089dded  0f85e7000000         jne 0x89deda
// 0089ddf3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089ddf7  85c0                 test eax, eax
// 0089ddf9  0f84db000000         je 0x89deda
// 0089ddff  837c241000           cmp dword ptr [esp + 0x10], 0
// 0089de04  0f84d0000000         je 0x89deda
// 0089de0a  53                   push ebx
// 0089de0b  8b9964020000         mov ebx, dword ptr [ecx + 0x264]
// 0089de11  55                   push ebp
// 0089de12  56                   push esi
// 0089de13  57                   push edi
// 0089de14  8bb8ec000000         mov edi, dword ptr [eax + 0xec]
// 0089de1a  8b4730               mov eax, dword ptr [edi + 0x30]
// 0089de1d  33ed                 xor ebp, ebp
// 0089de1f  897c241c             mov dword ptr [esp + 0x1c], edi
// 0089de23  89442414             mov dword ptr [esp + 0x14], eax
// 0089de27  85c0                 test eax, eax
// 0089de29  0f8e9f000000         jle 0x89dece
// 0089de2f  90                   nop 
// 0089de30  85ed                 test ebp, ebp
// 0089de32  0f8c8b000000         jl 0x89dec3
// 0089de38  3b6f30               cmp ebp, dword ptr [edi + 0x30]
// 0089de3b  0f8d82000000         jge 0x89dec3
// 0089de41  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0089de44  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 0089de47  85f6                 test esi, esi
// 0089de49  7478                 je 0x89dec3
// 0089de4b  8bce                 mov ecx, esi
// 0089de4d  e86e5c0100           call 0x8b3ac0
// 0089de52  85c0                 test eax, eax
// 0089de54  746d                 je 0x89dec3
// 0089de56  8bce                 mov ecx, esi
// 0089de58  e8f39bf8ff           call 0x827a50
// 0089de5d  a810                 test al, 0x10
// 0089de5f  741f                 je 0x89de80
// 0089de61  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089de65  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089de69  8b11                 mov edx, dword ptr [ecx]
// 0089de6b  8b92e4000000         mov edx, dword ptr [edx + 0xe4]
// 0089de71  50                   push eax
// 0089de72  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089de76  56                   push esi
// 0089de77  50                   push eax
// 0089de78  ffd2                 call edx
// 0089de7a  3bd8                 cmp ebx, eax
// 0089de7c  7f02                 jg 0x89de80
// 0089de7e  8bd8                 mov ebx, eax
// 0089de80  8b7e5c               mov edi, dword ptr [esi + 0x5c]
// 0089de83  83ffff               cmp edi, -1
// 0089de86  7437                 je 0x89debf
// 0089de88  8bce                 mov ecx, esi
// 0089de8a  e8019ef8ff           call 0x827c90
// 0089de8f  8b80d0010000         mov eax, dword ptr [eax + 0x1d0]
// 0089de95  6a00                 push 0
// 0089de97  57                   push edi
// 0089de98  8bc8                 mov ecx, eax
// 0089de9a  e8e11cf7ff           call 0x80fb80
// 0089de9f  8bf0                 mov esi, eax
// 0089dea1  85f6                 test esi, esi
// 0089dea3  741a                 je 0x89debf
// 0089dea5  8bce                 mov ecx, esi
// 0089dea7  e8c479c3ff           call 0x4d5870
// 0089deac  83c002               add eax, 2
// 0089deaf  3bd8                 cmp ebx, eax
// 0089deb1  7f0c                 jg 0x89debf
// 0089deb3  8bce                 mov ecx, esi
// 0089deb5  e8b679c3ff           call 0x4d5870
// 0089deba  8bd8                 mov ebx, eax
// 0089debc  83c302               add ebx, 2
// 0089debf  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0089dec3  45                   inc ebp
// 0089dec4  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0089dec8  0f8c62ffffff         jl 0x89de30
// 0089dece  5f                   pop edi
// 0089decf  5e                   pop esi
// 0089ded0  5d                   pop ebp
// 0089ded1  8bc3                 mov eax, ebx
// 0089ded3  5b                   pop ebx
// 0089ded4  83c408               add esp, 8
// 0089ded7  c20c00               ret 0xc
// 0089deda  8b01                 mov eax, dword ptr [ecx]
// 0089dedc  8b5068               mov edx, dword ptr [eax + 0x68]
// 0089dedf  ffd2                 call edx
// 0089dee1  83c408               add esp, 8
// 0089dee4  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetHeaderHeight@CXTPReportPaintManager@@UAEHPAVCXTPReportControl@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp