// roc 2011-06 008ddd60  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ddd60
//
// 008ddd60  83ec20               sub esp, 0x20
// 008ddd63  53                   push ebx
// 008ddd64  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008ddd68  8b03                 mov eax, dword ptr [ebx]
// 008ddd6a  8b5048               mov edx, dword ptr [eax + 0x48]
// 008ddd6d  55                   push ebp
// 008ddd6e  56                   push esi
// 008ddd6f  8bf1                 mov esi, ecx
// 008ddd71  57                   push edi
// 008ddd72  8bcb                 mov ecx, ebx
// 008ddd74  ffd2                 call edx
// 008ddd76  50                   push eax
// 008ddd77  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008ddd7a  8b5050               mov edx, dword ptr [eax + 0x50]
// 008ddd7d  83c050               add eax, 0x50
// 008ddd80  83ec10               sub esp, 0x10
// 008ddd83  8bcc                 mov ecx, esp
// 008ddd85  8911                 mov dword ptr [ecx], edx
// 008ddd87  8b5004               mov edx, dword ptr [eax + 4]
// 008ddd8a  895104               mov dword ptr [ecx + 4], edx
// 008ddd8d  8b5008               mov edx, dword ptr [eax + 8]
// 008ddd90  8b400c               mov eax, dword ptr [eax + 0xc]
// 008ddd93  895108               mov dword ptr [ecx + 8], edx
// 008ddd96  89410c               mov dword ptr [ecx + 0xc], eax
// 008ddd99  8d4c2450             lea ecx, [esp + 0x50]
// 008ddd9d  51                   push ecx
// 008ddd9e  e80dbbffff           call 0x8d98b0
// 008ddda3  83c418               add esp, 0x18
// 008ddda6  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 008dddaa  0f84df000000         je 0x8dde8f
// 008dddb0  8b16                 mov edx, dword ptr [esi]
// 008dddb2  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008dddb5  53                   push ebx
// 008dddb6  8bce                 mov ecx, esi
// 008dddb8  ffd0                 call eax
// 008dddba  8b542444             mov edx, dword ptr [esp + 0x44]
// 008dddbe  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008dddc2  89542418             mov dword ptr [esp + 0x18], edx
// 008dddc6  8b542448             mov edx, dword ptr [esp + 0x48]
// 008dddca  8954241c             mov dword ptr [esp + 0x1c], edx
// 008dddce  8b561c               mov edx, dword ptr [esi + 0x1c]
// 008dddd1  837a3802             cmp dword ptr [edx + 0x38], 2
// 008dddd5  89442434             mov dword ptr [esp + 0x34], eax
// 008dddd9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008ddddd  89442410             mov dword ptr [esp + 0x10], eax
// 008ddde1  7405                 je 0x8ddde8
// 008ddde3  40                   inc eax
// 008ddde4  89442410             mov dword ptr [esp + 0x10], eax
// 008ddde8  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 008dddeb  41                   inc ecx
// 008dddec  33ed                 xor ebp, ebp
// 008dddee  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008dddf2  85c0                 test eax, eax
// 008dddf4  0f8e95000000         jle 0x8dde8f
// 008dddfa  8d9b00000000         lea ebx, [ebx]
// 008dde00  85ed                 test ebp, ebp
// 008dde02  7c15                 jl 0x8dde19
// 008dde04  3be8                 cmp ebp, eax
// 008dde06  7d11                 jge 0x8dde19
// 008dde08  3b6b5c               cmp ebp, dword ptr [ebx + 0x5c]
// 008dde0b  0f8d88000000         jge 0x8dde99
// 008dde11  8b4358               mov eax, dword ptr [ebx + 0x58]
// 008dde14  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 008dde17  eb02                 jmp 0x8dde1b
// 008dde19  33f6                 xor esi, esi
// 008dde1b  8b542434             mov edx, dword ptr [esp + 0x34]
// 008dde1f  8d3c11               lea edi, [ecx + edx]
// 008dde22  8b542410             mov edx, dword ptr [esp + 0x10]
// 008dde26  83ec10               sub esp, 0x10
// 008dde29  8bc4                 mov eax, esp
// 008dde2b  8910                 mov dword ptr [eax], edx
// 008dde2d  894804               mov dword ptr [eax + 4], ecx
// 008dde30  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dde34  894808               mov dword ptr [eax + 8], ecx
// 008dde37  8bce                 mov ecx, esi
// 008dde39  89780c               mov dword ptr [eax + 0xc], edi
// 008dde3c  e8af5affff           call 0x8d38f0
// 008dde41  8b5660               mov edx, dword ptr [esi + 0x60]
// 008dde44  8bcf                 mov ecx, edi
// 008dde46  397204               cmp dword ptr [edx + 4], esi
// 008dde49  7538                 jne 0x8dde83
// 008dde4b  8b7b5c               mov edi, dword ptr [ebx + 0x5c]
// 008dde4e  8b542434             mov edx, dword ptr [esp + 0x34]
// 008dde52  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008dde56  2bfd                 sub edi, ebp
// 008dde58  4f                   dec edi
// 008dde59  0faffa               imul edi, edx
// 008dde5c  8bc6                 mov eax, esi
// 008dde5e  2bc7                 sub eax, edi
// 008dde60  03d1                 add edx, ecx
// 008dde62  3bd0                 cmp edx, eax
// 008dde64  7e02                 jle 0x8dde68
// 008dde66  8bc2                 mov eax, edx
// 008dde68  8d56ff               lea edx, [esi - 1]
// 008dde6b  3bc2                 cmp eax, edx
// 008dde6d  8bf0                 mov esi, eax
// 008dde6f  7c02                 jl 0x8dde73
// 008dde71  8bf2                 mov esi, edx
// 008dde73  3bce                 cmp ecx, esi
// 008dde75  7e04                 jle 0x8dde7b
// 008dde77  8bc1                 mov eax, ecx
// 008dde79  eb06                 jmp 0x8dde81
// 008dde7b  3bc2                 cmp eax, edx
// 008dde7d  7c02                 jl 0x8dde81
// 008dde7f  8bc2                 mov eax, edx
// 008dde81  8bc8                 mov ecx, eax
// 008dde83  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 008dde86  45                   inc ebp
// 008dde87  3be8                 cmp ebp, eax
// 008dde89  0f8c71ffffff         jl 0x8dde00
// 008dde8f  5f                   pop edi
// 008dde90  5e                   pop esi
// 008dde91  5d                   pop ebp
// 008dde92  5b                   pop ebx
// 008dde93  83c420               add esp, 0x20
// 008dde96  c21800               ret 0x18
// 008dde99  e86cc4f2ff           call 0x80a30a
// copied from an identical function in another client (function ?RepositionTabControl@CAppearanceSetVisio@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabPaintManagerAppearance.cpp