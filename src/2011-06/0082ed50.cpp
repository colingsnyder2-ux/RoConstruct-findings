// roc 2011-06 0082ed50  unit: CRobloxReportView  size: 478 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082ed50
//
// 0082ed50  6aff                 push -1
// 0082ed52  68d93ea000           push 0xa03ed9
// 0082ed57  64a100000000         mov eax, dword ptr fs:[0]
// 0082ed5d  50                   push eax
// 0082ed5e  83ec30               sub esp, 0x30
// 0082ed61  53                   push ebx
// 0082ed62  55                   push ebp
// 0082ed63  56                   push esi
// 0082ed64  57                   push edi
// 0082ed65  a12058c900           mov eax, dword ptr [0xc95820]
// 0082ed6a  33c4                 xor eax, esp
// 0082ed6c  50                   push eax
// 0082ed6d  8d442444             lea eax, [esp + 0x44]
// 0082ed71  64a300000000         mov dword ptr fs:[0], eax
// 0082ed77  8bf1                 mov esi, ecx
// 0082ed79  83be6003000000       cmp dword ptr [esi + 0x360], 0
// 0082ed80  0f848d010000         je 0x82ef13
// 0082ed86  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0082ed8a  85ff                 test edi, edi
// 0082ed8c  0f8481010000         je 0x82ef13
// 0082ed92  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 0082ed96  85ed                 test ebp, ebp
// 0082ed98  0f8475010000         je 0x82ef13
// 0082ed9e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0082eda2  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0082eda6  8b542464             mov edx, dword ptr [esp + 0x64]
// 0082edaa  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0082edae  89442424             mov dword ptr [esp + 0x24], eax
// 0082edb2  89442414             mov dword ptr [esp + 0x14], eax
// 0082edb6  8d442454             lea eax, [esp + 0x54]
// 0082edba  56                   push esi
// 0082edbb  50                   push eax
// 0082edbc  894c2430             mov dword ptr [esp + 0x30], ecx
// 0082edc0  89542434             mov dword ptr [esp + 0x34], edx
// 0082edc4  895c2438             mov dword ptr [esp + 0x38], ebx
// 0082edc8  894c2420             mov dword ptr [esp + 0x20], ecx
// 0082edcc  89542424             mov dword ptr [esp + 0x24], edx
// 0082edd0  895c2428             mov dword ptr [esp + 0x28], ebx
// 0082edd4  e857d90200           call 0x85c730
// 0082edd9  83c408               add esp, 8
// 0082eddc  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 0082ede2  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0082edea  e8d1d00300           call 0x86bec0
// 0082edef  8b18                 mov ebx, dword ptr [eax]
// 0082edf1  8d4c2454             lea ecx, [esp + 0x54]
// 0082edf5  89442458             mov dword ptr [esp + 0x58], eax
// 0082edf9  83c358               add ebx, 0x58
// 0082edfc  ff15c82da400         call dword ptr [0xa42dc8]
// 0082ee02  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0082ee06  8b13                 mov edx, dword ptr [ebx]
// 0082ee08  50                   push eax
// 0082ee09  55                   push ebp
// 0082ee0a  ffd2                 call edx
// 0082ee0c  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 0082ee12  e829de0200           call 0x85cc40
// 0082ee17  8b18                 mov ebx, dword ptr [eax]
// 0082ee19  8d4c2454             lea ecx, [esp + 0x54]
// 0082ee1d  89442458             mov dword ptr [esp + 0x58], eax
// 0082ee21  83c358               add ebx, 0x58
// 0082ee24  ff15c82da400         call dword ptr [0xa42dc8]
// 0082ee2a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0082ee2e  50                   push eax
// 0082ee2f  8b03                 mov eax, dword ptr [ebx]
// 0082ee31  55                   push ebp
// 0082ee32  ffd0                 call eax
// 0082ee34  8b17                 mov edx, dword ptr [edi]
// 0082ee36  8b4234               mov eax, dword ptr [edx + 0x34]
// 0082ee39  68ffffff00           push 0xffffff
// 0082ee3e  8bcf                 mov ecx, edi
// 0082ee40  ffd0                 call eax
// 0082ee42  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 0082ee48  e8f3dd0200           call 0x85cc40
// 0082ee4d  8b10                 mov edx, dword ptr [eax]
// 0082ee4f  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0082ee52  6a01                 push 1
// 0082ee54  8d4c2418             lea ecx, [esp + 0x18]
// 0082ee58  51                   push ecx
// 0082ee59  57                   push edi
// 0082ee5a  8bc8                 mov ecx, eax
// 0082ee5c  ffd2                 call edx
// 0082ee5e  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 0082ee64  e857d00300           call 0x86bec0
// 0082ee69  8b10                 mov edx, dword ptr [eax]
// 0082ee6b  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0082ee6e  6a00                 push 0
// 0082ee70  8d4c2428             lea ecx, [esp + 0x28]
// 0082ee74  51                   push ecx
// 0082ee75  57                   push edi
// 0082ee76  8bc8                 mov ecx, eax
// 0082ee78  ffd2                 call edx
// 0082ee7a  8b442460             mov eax, dword ptr [esp + 0x60]
// 0082ee7e  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0082ee82  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0082ee86  8b542464             mov edx, dword ptr [esp + 0x64]
// 0082ee8a  89442438             mov dword ptr [esp + 0x38], eax
// 0082ee8e  2b442428             sub eax, dword ptr [esp + 0x28]
// 0082ee92  8d441802             lea eax, [eax + ebx + 2]
// 0082ee96  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0082ee9a  2b5c2420             sub ebx, dword ptr [esp + 0x20]
// 0082ee9e  89442438             mov dword ptr [esp + 0x38], eax
// 0082eea2  8b442468             mov eax, dword ptr [esp + 0x68]
// 0082eea6  8d4418fe             lea eax, [eax + ebx - 2]
// 0082eeaa  89442440             mov dword ptr [esp + 0x40], eax
// 0082eeae  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0082eeb2  8b1e                 mov ebx, dword ptr [esi]
// 0082eeb4  50                   push eax
// 0082eeb5  83ec10               sub esp, 0x10
// 0082eeb8  8bc4                 mov eax, esp
// 0082eeba  8908                 mov dword ptr [eax], ecx
// 0082eebc  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0082eec0  894804               mov dword ptr [eax + 4], ecx
// 0082eec3  895008               mov dword ptr [eax + 8], edx
// 0082eec6  8b542454             mov edx, dword ptr [esp + 0x54]
// 0082eeca  55                   push ebp
// 0082eecb  89500c               mov dword ptr [eax + 0xc], edx
// 0082eece  8b839c010000         mov eax, dword ptr [ebx + 0x19c]
// 0082eed4  57                   push edi
// 0082eed5  8bce                 mov ecx, esi
// 0082eed7  ffd0                 call eax
// 0082eed9  8b17                 mov edx, dword ptr [edi]
// 0082eedb  8bd8                 mov ebx, eax
// 0082eedd  8b4234               mov eax, dword ptr [edx + 0x34]
// 0082eee0  68ffffff00           push 0xffffff
// 0082eee5  8bcf                 mov ecx, edi
// 0082eee7  ffd0                 call eax
// 0082eee9  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 0082eeef  e84cdd0200           call 0x85cc40
// 0082eef4  8b10                 mov edx, dword ptr [eax]
// 0082eef6  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0082eef9  6a00                 push 0
// 0082eefb  8d4c2418             lea ecx, [esp + 0x18]
// 0082eeff  51                   push ecx
// 0082ef00  57                   push edi
// 0082ef01  8bc8                 mov ecx, eax
// 0082ef03  ffd2                 call edx
// 0082ef05  8d4c2454             lea ecx, [esp + 0x54]
// 0082ef09  ff15082ea400         call dword ptr [0xa42e08]
// 0082ef0f  8bc3                 mov eax, ebx
// 0082ef11  eb05                 jmp 0x82ef18
// 0082ef13  b8ffffff7f           mov eax, 0x7fffffff
// 0082ef18  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0082ef1c  64890d00000000       mov dword ptr fs:[0], ecx
// 0082ef23  59                   pop ecx
// 0082ef24  5f                   pop edi
// 0082ef25  5e                   pop esi
// 0082ef26  5d                   pop ebp
// 0082ef27  5b                   pop ebx
// 0082ef28  83c43c               add esp, 0x3c
// 0082ef2b  c21c00               ret 0x1c
// copied from an identical function in another client (function ?PrintPage@CXTPReportView@@MAEJPAVCDC@@PAUCPrintInfo@@VCRect@@J@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportView.cpp