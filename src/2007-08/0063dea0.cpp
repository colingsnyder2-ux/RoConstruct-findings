// roc 2007-08 0063dea0  unit: CXTPPaintManager  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063dea0
//
// 0063dea0  51                   push ecx
// 0063dea1  d9ee                 fldz 
// 0063dea3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0063dea7  dd44241c             fld qword ptr [esp + 0x1c]
// 0063deab  d8d1                 fcom st(1)
// 0063dead  dfe0                 fnstsw ax
// 0063deaf  ddd9                 fstp st(1)
// 0063deb1  f6c405               test ah, 5
// 0063deb4  7a04                 jp 0x63deba
// 0063deb6  d9e0                 fchs 
// 0063deb8  eb20                 jmp 0x63deda
// 0063deba  8b442410             mov eax, dword ptr [esp + 0x10]
// 0063debe  ddd8                 fstp st(0)
// 0063dec0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063dec4  8b542408             mov edx, dword ptr [esp + 8]
// 0063dec8  50                   push eax
// 0063dec9  8b4204               mov eax, dword ptr [edx + 4]
// 0063decc  51                   push ecx
// 0063decd  50                   push eax
// 0063dece  ff1534d17700         call dword ptr [0x77d134]
// 0063ded4  dd44241c             fld qword ptr [esp + 0x1c]
// 0063ded8  8bc8                 mov ecx, eax
// 0063deda  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063dede  8bd0                 mov edx, eax
// 0063dee0  53                   push ebx
// 0063dee1  56                   push esi
// 0063dee2  0fb6f4               movzx esi, ah
// 0063dee5  57                   push edi
// 0063dee6  0fb6f8               movzx edi, al
// 0063dee9  c1ea10               shr edx, 0x10
// 0063deec  8bc1                 mov eax, ecx
// 0063deee  c1e810               shr eax, 0x10
// 0063def1  0fb6c0               movzx eax, al
// 0063def4  0fb6d2               movzx edx, dl
// 0063def7  2bc2                 sub eax, edx
// 0063def9  89442424             mov dword ptr [esp + 0x24], eax
// 0063defd  89542420             mov dword ptr [esp + 0x20], edx
// 0063df01  89742428             mov dword ptr [esp + 0x28], esi
// 0063df05  db442424             fild dword ptr [esp + 0x24]
// 0063df09  33db                 xor ebx, ebx
// 0063df0b  d97c2424             fnstcw word ptr [esp + 0x24]
// 0063df0f  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 0063df14  d8c9                 fmul st(1)
// 0063df16  0d000c0000           or eax, 0xc00
// 0063df1b  897c240c             mov dword ptr [esp + 0xc], edi
// 0063df1f  da442420             fiadd dword ptr [esp + 0x20]
// 0063df23  89442420             mov dword ptr [esp + 0x20], eax
// 0063df27  0fb6c5               movzx eax, ch
// 0063df2a  d96c2420             fldcw word ptr [esp + 0x20]
// 0063df2e  2bc6                 sub eax, esi
// 0063df30  db5c2420             fistp dword ptr [esp + 0x20]
// 0063df34  0fb6542420           movzx edx, byte ptr [esp + 0x20]
// 0063df39  8afa                 mov bh, dl
// 0063df3b  d96c2424             fldcw word ptr [esp + 0x24]
// 0063df3f  89442424             mov dword ptr [esp + 0x24], eax
// 0063df43  db442424             fild dword ptr [esp + 0x24]
// 0063df47  d97c2424             fnstcw word ptr [esp + 0x24]
// 0063df4b  d8c9                 fmul st(1)
// 0063df4d  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 0063df52  0d000c0000           or eax, 0xc00
// 0063df57  89442420             mov dword ptr [esp + 0x20], eax
// 0063df5b  0fb6c1               movzx eax, cl
// 0063df5e  da442428             fiadd dword ptr [esp + 0x28]
// 0063df62  d96c2420             fldcw word ptr [esp + 0x20]
// 0063df66  2bc7                 sub eax, edi
// 0063df68  5f                   pop edi
// 0063df69  5e                   pop esi
// 0063df6a  db5c2418             fistp dword ptr [esp + 0x18]
// 0063df6e  0fb6542418           movzx edx, byte ptr [esp + 0x18]
// 0063df73  8ada                 mov bl, dl
// 0063df75  d96c241c             fldcw word ptr [esp + 0x1c]
// 0063df79  8944241c             mov dword ptr [esp + 0x1c], eax
// 0063df7d  db44241c             fild dword ptr [esp + 0x1c]
// 0063df81  c1e308               shl ebx, 8
// 0063df84  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0063df88  dec9                 fmulp st(1)
// 0063df8a  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0063df8f  0d000c0000           or eax, 0xc00
// 0063df94  89442418             mov dword ptr [esp + 0x18], eax
// 0063df98  da442404             fiadd dword ptr [esp + 4]
// 0063df9c  d96c2418             fldcw word ptr [esp + 0x18]
// 0063dfa0  db5c2418             fistp dword ptr [esp + 0x18]
// 0063dfa4  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 0063dfa8  0fb6d1               movzx edx, cl
// 0063dfab  0bda                 or ebx, edx
// 0063dfad  d96c241c             fldcw word ptr [esp + 0x1c]
// 0063dfb1  8bc3                 mov eax, ebx
// 0063dfb3  5b                   pop ebx
// 0063dfb4  59                   pop ecx
// 0063dfb5  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?Mix@@YAKPAVCDC@@HHKKN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
