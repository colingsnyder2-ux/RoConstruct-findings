// roc 2011-06 00810840  unit: CXTPPaintManager  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00810840
//
// 00810840  51                   push ecx
// 00810841  d9ee                 fldz 
// 00810843  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00810847  dd44241c             fld qword ptr [esp + 0x1c]
// 0081084b  d8d1                 fcom st(1)
// 0081084d  dfe0                 fnstsw ax
// 0081084f  ddd9                 fstp st(1)
// 00810851  f6c405               test ah, 5
// 00810854  7a04                 jp 0x81085a
// 00810856  d9e0                 fchs 
// 00810858  eb20                 jmp 0x81087a
// 0081085a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0081085e  ddd8                 fstp st(0)
// 00810860  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00810864  8b542408             mov edx, dword ptr [esp + 8]
// 00810868  50                   push eax
// 00810869  8b4204               mov eax, dword ptr [edx + 4]
// 0081086c  51                   push ecx
// 0081086d  50                   push eax
// 0081086e  ff151001a400         call dword ptr [0xa40110]
// 00810874  dd44241c             fld qword ptr [esp + 0x1c]
// 00810878  8bc8                 mov ecx, eax
// 0081087a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081087e  8bd0                 mov edx, eax
// 00810880  56                   push esi
// 00810881  c1ea10               shr edx, 0x10
// 00810884  0fb6f2               movzx esi, dl
// 00810887  8bd0                 mov edx, eax
// 00810889  57                   push edi
// 0081088a  0fb6f8               movzx edi, al
// 0081088d  8bc1                 mov eax, ecx
// 0081088f  c1e810               shr eax, 0x10
// 00810892  0fb6c0               movzx eax, al
// 00810895  2bc6                 sub eax, esi
// 00810897  89442420             mov dword ptr [esp + 0x20], eax
// 0081089b  8974241c             mov dword ptr [esp + 0x1c], esi
// 0081089f  c1ea08               shr edx, 8
// 008108a2  db442420             fild dword ptr [esp + 0x20]
// 008108a6  0fb6d2               movzx edx, dl
// 008108a9  d97c2420             fnstcw word ptr [esp + 0x20]
// 008108ad  d8c9                 fmul st(1)
// 008108af  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 008108b4  da44241c             fiadd dword ptr [esp + 0x1c]
// 008108b8  0d000c0000           or eax, 0xc00
// 008108bd  8944241c             mov dword ptr [esp + 0x1c], eax
// 008108c1  d96c241c             fldcw word ptr [esp + 0x1c]
// 008108c5  89542424             mov dword ptr [esp + 0x24], edx
// 008108c9  897c2408             mov dword ptr [esp + 8], edi
// 008108cd  db5c241c             fistp dword ptr [esp + 0x1c]
// 008108d1  8a44241c             mov al, byte ptr [esp + 0x1c]
// 008108d5  0fb6f0               movzx esi, al
// 008108d8  8bc1                 mov eax, ecx
// 008108da  d96c2420             fldcw word ptr [esp + 0x20]
// 008108de  c1e808               shr eax, 8
// 008108e1  0fb6c0               movzx eax, al
// 008108e4  2bc2                 sub eax, edx
// 008108e6  89442420             mov dword ptr [esp + 0x20], eax
// 008108ea  0fb6c9               movzx ecx, cl
// 008108ed  db442420             fild dword ptr [esp + 0x20]
// 008108f1  d97c2420             fnstcw word ptr [esp + 0x20]
// 008108f5  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 008108fa  d8c9                 fmul st(1)
// 008108fc  0d000c0000           or eax, 0xc00
// 00810901  8944241c             mov dword ptr [esp + 0x1c], eax
// 00810905  2bcf                 sub ecx, edi
// 00810907  da442424             fiadd dword ptr [esp + 0x24]
// 0081090b  c1e608               shl esi, 8
// 0081090e  5f                   pop edi
// 0081090f  d96c2418             fldcw word ptr [esp + 0x18]
// 00810913  db5c2418             fistp dword ptr [esp + 0x18]
// 00810917  0fb6542418           movzx edx, byte ptr [esp + 0x18]
// 0081091c  0fb6c2               movzx eax, dl
// 0081091f  d96c241c             fldcw word ptr [esp + 0x1c]
// 00810923  0bf0                 or esi, eax
// 00810925  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00810929  c1e608               shl esi, 8
// 0081092c  db44241c             fild dword ptr [esp + 0x1c]
// 00810930  d97c241c             fnstcw word ptr [esp + 0x1c]
// 00810934  dec9                 fmulp st(1)
// 00810936  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0081093b  0d000c0000           or eax, 0xc00
// 00810940  89442418             mov dword ptr [esp + 0x18], eax
// 00810944  da442404             fiadd dword ptr [esp + 4]
// 00810948  d96c2418             fldcw word ptr [esp + 0x18]
// 0081094c  db5c2418             fistp dword ptr [esp + 0x18]
// 00810950  0fb6542418           movzx edx, byte ptr [esp + 0x18]
// 00810955  0fb6c2               movzx eax, dl
// 00810958  d96c241c             fldcw word ptr [esp + 0x1c]
// 0081095c  0bc6                 or eax, esi
// 0081095e  5e                   pop esi
// 0081095f  59                   pop ecx
// 00810960  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?Mix@@YAKPAVCDC@@HHKKN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
