// roc 2011-06 00812f70  unit: CXTPPaintManager  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00812f70
//
// 00812f70  83ec08               sub esp, 8
// 00812f73  56                   push esi
// 00812f74  57                   push edi
// 00812f75  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00812f79  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 00812f7f  8bf1                 mov esi, ecx
// 00812f81  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00812f87  83f903               cmp ecx, 3
// 00812f8a  0f84e5000000         je 0x813075
// 00812f90  83f902               cmp ecx, 2
// 00812f93  0f84dc000000         je 0x813075
// 00812f99  837c244000           cmp dword ptr [esp + 0x40], 0
// 00812f9e  747b                 je 0x81301b
// 00812fa0  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 00812fa7  8b442438             mov eax, dword ptr [esp + 0x38]
// 00812fab  7501                 jne 0x812fae
// 00812fad  48                   dec eax
// 00812fae  01442420             add dword ptr [esp + 0x20], eax
// 00812fb2  8b442434             mov eax, dword ptr [esp + 0x34]
// 00812fb6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00812fba  50                   push eax
// 00812fbb  6a00                 push 0
// 00812fbd  6a00                 push 0
// 00812fbf  51                   push ecx
// 00812fc0  83ec10               sub esp, 0x10
// 00812fc3  8bc4                 mov eax, esp
// 00812fc5  8d542440             lea edx, [esp + 0x40]
// 00812fc9  52                   push edx
// 00812fca  50                   push eax
// 00812fcb  ff15681ca400         call dword ptr [0xa41c68]
// 00812fd1  8b442438             mov eax, dword ptr [esp + 0x38]
// 00812fd5  57                   push edi
// 00812fd6  50                   push eax
// 00812fd7  8d4c2430             lea ecx, [esp + 0x30]
// 00812fdb  51                   push ecx
// 00812fdc  8bce                 mov ecx, esi
// 00812fde  e89de6ffff           call 0x811680
// 00812fe3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00812fe7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00812feb  83c006               add eax, 6
// 00812fee  3bc1                 cmp eax, ecx
// 00812ff0  7e02                 jle 0x812ff4
// 00812ff2  8bc8                 mov ecx, eax
// 00812ff4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00812ff8  33d2                 xor edx, edx
// 00812ffa  39968c000000         cmp dword ptr [esi + 0x8c], edx
// 00813000  894804               mov dword ptr [eax + 4], ecx
// 00813003  0f95c2               setne dl
// 00813006  83c203               add edx, 3
// 00813009  03542408             add edx, dword ptr [esp + 8]
// 0081300d  03542438             add edx, dword ptr [esp + 0x38]
// 00813011  8910                 mov dword ptr [eax], edx
// 00813013  5f                   pop edi
// 00813014  5e                   pop esi
// 00813015  83c408               add esp, 8
// 00813018  c23000               ret 0x30
// 0081301b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0081301f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00813023  50                   push eax
// 00813024  6a01                 push 1
// 00813026  6a00                 push 0
// 00813028  51                   push ecx
// 00813029  83ec10               sub esp, 0x10
// 0081302c  8bc4                 mov eax, esp
// 0081302e  8d542440             lea edx, [esp + 0x40]
// 00813032  52                   push edx
// 00813033  50                   push eax
// 00813034  ff15681ca400         call dword ptr [0xa41c68]
// 0081303a  8b442438             mov eax, dword ptr [esp + 0x38]
// 0081303e  57                   push edi
// 0081303f  50                   push eax
// 00813040  8d4c2430             lea ecx, [esp + 0x30]
// 00813044  51                   push ecx
// 00813045  8bce                 mov ecx, esi
// 00813047  e834e6ffff           call 0x811680
// 0081304c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00813050  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00813054  83c006               add eax, 6
// 00813057  3bc1                 cmp eax, ecx
// 00813059  7e02                 jle 0x81305d
// 0081305b  8bc8                 mov ecx, eax
// 0081305d  8b542408             mov edx, dword ptr [esp + 8]
// 00813061  8b442414             mov eax, dword ptr [esp + 0x14]
// 00813065  83c208               add edx, 8
// 00813068  8910                 mov dword ptr [eax], edx
// 0081306a  894804               mov dword ptr [eax + 4], ecx
// 0081306d  5f                   pop edi
// 0081306e  5e                   pop esi
// 0081306f  83c408               add esp, 8
// 00813072  c23000               ret 0x30
// 00813075  837c244000           cmp dword ptr [esp + 0x40], 0
// 0081307a  7465                 je 0x8130e1
// 0081307c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00813080  8b542430             mov edx, dword ptr [esp + 0x30]
// 00813084  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00813088  01442424             add dword ptr [esp + 0x24], eax
// 0081308c  51                   push ecx
// 0081308d  6a00                 push 0
// 0081308f  6a01                 push 1
// 00813091  52                   push edx
// 00813092  83ec10               sub esp, 0x10
// 00813095  8bc4                 mov eax, esp
// 00813097  8d4c2440             lea ecx, [esp + 0x40]
// 0081309b  51                   push ecx
// 0081309c  50                   push eax
// 0081309d  ff15681ca400         call dword ptr [0xa41c68]
// 008130a3  8b542438             mov edx, dword ptr [esp + 0x38]
// 008130a7  57                   push edi
// 008130a8  52                   push edx
// 008130a9  8d442430             lea eax, [esp + 0x30]
// 008130ad  50                   push eax
// 008130ae  8bce                 mov ecx, esi
// 008130b0  e8cbe5ffff           call 0x811680
// 008130b5  8b442408             mov eax, dword ptr [esp + 8]
// 008130b9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008130bd  83c006               add eax, 6
// 008130c0  3bc1                 cmp eax, ecx
// 008130c2  8bd0                 mov edx, eax
// 008130c4  7f02                 jg 0x8130c8
// 008130c6  8bd1                 mov edx, ecx
// 008130c8  8b442414             mov eax, dword ptr [esp + 0x14]
// 008130cc  8910                 mov dword ptr [eax], edx
// 008130ce  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008130d2  8d4c0a03             lea ecx, [edx + ecx + 3]
// 008130d6  894804               mov dword ptr [eax + 4], ecx
// 008130d9  5f                   pop edi
// 008130da  5e                   pop esi
// 008130db  83c408               add esp, 8
// 008130de  c23000               ret 0x30
// 008130e1  8b542434             mov edx, dword ptr [esp + 0x34]
// 008130e5  8b442430             mov eax, dword ptr [esp + 0x30]
// 008130e9  52                   push edx
// 008130ea  6a01                 push 1
// 008130ec  6a01                 push 1
// 008130ee  50                   push eax
// 008130ef  83ec10               sub esp, 0x10
// 008130f2  8bc4                 mov eax, esp
// 008130f4  8d4c2440             lea ecx, [esp + 0x40]
// 008130f8  51                   push ecx
// 008130f9  50                   push eax
// 008130fa  ff15681ca400         call dword ptr [0xa41c68]
// 00813100  8b542438             mov edx, dword ptr [esp + 0x38]
// 00813104  57                   push edi
// 00813105  52                   push edx
// 00813106  8d442430             lea eax, [esp + 0x30]
// 0081310a  50                   push eax
// 0081310b  8bce                 mov ecx, esi
// 0081310d  e86ee5ffff           call 0x811680
// 00813112  8b442408             mov eax, dword ptr [esp + 8]
// 00813116  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0081311a  83c006               add eax, 6
// 0081311d  3bc1                 cmp eax, ecx
// 0081311f  7e02                 jle 0x813123
// 00813121  8bc8                 mov ecx, eax
// 00813123  8b442414             mov eax, dword ptr [esp + 0x14]
// 00813127  8908                 mov dword ptr [eax], ecx
// 00813129  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081312d  83c108               add ecx, 8
// 00813130  5f                   pop edi
// 00813131  894804               mov dword ptr [eax + 4], ecx
// 00813134  5e                   pop esi
// 00813135  83c408               add esp, 8
// 00813138  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlText@CXTPPaintManager@@IAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
