// roc 2007-03 00633280  unit: seg_00630000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00633280
//
// 00633280  51                   push ecx
// 00633281  d9ee                 fldz 
// 00633283  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00633287  dd44241c             fld qword ptr [esp + 0x1c]
// 0063328b  d8d1                 fcom st(1)
// 0063328d  dfe0                 fnstsw ax
// 0063328f  ddd9                 fstp st(1)
// 00633291  f6c405               test ah, 5
// 00633294  7a04                 jp 0x63329a
// 00633296  d9e0                 fchs 
// 00633298  eb20                 jmp 0x6332ba
// 0063329a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0063329e  ddd8                 fstp st(0)
// 006332a0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006332a4  8b542408             mov edx, dword ptr [esp + 8]
// 006332a8  50                   push eax
// 006332a9  8b4204               mov eax, dword ptr [edx + 4]
// 006332ac  51                   push ecx
// 006332ad  50                   push eax
// 006332ae  ff1500d17700         call dword ptr [0x77d100]
// 006332b4  dd44241c             fld qword ptr [esp + 0x1c]
// 006332b8  8bc8                 mov ecx, eax
// 006332ba  8b442414             mov eax, dword ptr [esp + 0x14]
// 006332be  8bd0                 mov edx, eax
// 006332c0  53                   push ebx
// 006332c1  56                   push esi
// 006332c2  0fb6f4               movzx esi, ah
// 006332c5  57                   push edi
// 006332c6  0fb6f8               movzx edi, al
// 006332c9  c1ea10               shr edx, 0x10
// 006332cc  8bc1                 mov eax, ecx
// 006332ce  c1e810               shr eax, 0x10
// 006332d1  0fb6c0               movzx eax, al
// 006332d4  0fb6d2               movzx edx, dl
// 006332d7  2bc2                 sub eax, edx
// 006332d9  89442424             mov dword ptr [esp + 0x24], eax
// 006332dd  89542420             mov dword ptr [esp + 0x20], edx
// 006332e1  89742428             mov dword ptr [esp + 0x28], esi
// 006332e5  db442424             fild dword ptr [esp + 0x24]
// 006332e9  33db                 xor ebx, ebx
// 006332eb  d97c2424             fnstcw word ptr [esp + 0x24]
// 006332ef  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 006332f4  d8c9                 fmul st(1)
// 006332f6  0d000c0000           or eax, 0xc00
// 006332fb  897c240c             mov dword ptr [esp + 0xc], edi
// 006332ff  da442420             fiadd dword ptr [esp + 0x20]
// 00633303  89442420             mov dword ptr [esp + 0x20], eax
// 00633307  0fb6c5               movzx eax, ch
// 0063330a  d96c2420             fldcw word ptr [esp + 0x20]
// 0063330e  2bc6                 sub eax, esi
// 00633310  db5c2420             fistp dword ptr [esp + 0x20]
// 00633314  0fb6542420           movzx edx, byte ptr [esp + 0x20]
// 00633319  8afa                 mov bh, dl
// 0063331b  d96c2424             fldcw word ptr [esp + 0x24]
// 0063331f  89442424             mov dword ptr [esp + 0x24], eax
// 00633323  db442424             fild dword ptr [esp + 0x24]
// 00633327  d97c2424             fnstcw word ptr [esp + 0x24]
// 0063332b  d8c9                 fmul st(1)
// 0063332d  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 00633332  0d000c0000           or eax, 0xc00
// 00633337  89442420             mov dword ptr [esp + 0x20], eax
// 0063333b  0fb6c1               movzx eax, cl
// 0063333e  da442428             fiadd dword ptr [esp + 0x28]
// 00633342  d96c2420             fldcw word ptr [esp + 0x20]
// 00633346  2bc7                 sub eax, edi
// 00633348  5f                   pop edi
// 00633349  5e                   pop esi
// 0063334a  db5c2418             fistp dword ptr [esp + 0x18]
// 0063334e  0fb6542418           movzx edx, byte ptr [esp + 0x18]
// 00633353  8ada                 mov bl, dl
// 00633355  d96c241c             fldcw word ptr [esp + 0x1c]
// 00633359  8944241c             mov dword ptr [esp + 0x1c], eax
// 0063335d  db44241c             fild dword ptr [esp + 0x1c]
// 00633361  c1e308               shl ebx, 8
// 00633364  d97c241c             fnstcw word ptr [esp + 0x1c]
// 00633368  dec9                 fmulp st(1)
// 0063336a  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0063336f  0d000c0000           or eax, 0xc00
// 00633374  89442418             mov dword ptr [esp + 0x18], eax
// 00633378  da442404             fiadd dword ptr [esp + 4]
// 0063337c  d96c2418             fldcw word ptr [esp + 0x18]
// 00633380  db5c2418             fistp dword ptr [esp + 0x18]
// 00633384  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 00633388  0fb6d1               movzx edx, cl
// 0063338b  0bda                 or ebx, edx
// 0063338d  d96c241c             fldcw word ptr [esp + 0x1c]
// 00633391  8bc3                 mov eax, ebx
// 00633393  5b                   pop ebx
// 00633394  59                   pop ecx
// 00633395  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?Mix@@YAKPAVCDC@@HHKKN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
