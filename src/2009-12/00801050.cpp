// roc 2009-12 00801050  unit: CXTPPaintManager  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00801050
//
// 00801050  83ec08               sub esp, 8
// 00801053  56                   push esi
// 00801054  57                   push edi
// 00801055  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00801059  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0080105f  8bf1                 mov esi, ecx
// 00801061  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00801067  83f903               cmp ecx, 3
// 0080106a  0f84e5000000         je 0x801155
// 00801070  83f902               cmp ecx, 2
// 00801073  0f84dc000000         je 0x801155
// 00801079  837c244000           cmp dword ptr [esp + 0x40], 0
// 0080107e  747b                 je 0x8010fb
// 00801080  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 00801087  8b442438             mov eax, dword ptr [esp + 0x38]
// 0080108b  7501                 jne 0x80108e
// 0080108d  48                   dec eax
// 0080108e  01442420             add dword ptr [esp + 0x20], eax
// 00801092  8b442434             mov eax, dword ptr [esp + 0x34]
// 00801096  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080109a  50                   push eax
// 0080109b  6a00                 push 0
// 0080109d  6a00                 push 0
// 0080109f  51                   push ecx
// 008010a0  83ec10               sub esp, 0x10
// 008010a3  8bc4                 mov eax, esp
// 008010a5  8d542440             lea edx, [esp + 0x40]
// 008010a9  52                   push edx
// 008010aa  50                   push eax
// 008010ab  ff1564cc9800         call dword ptr [0x98cc64]
// 008010b1  8b442438             mov eax, dword ptr [esp + 0x38]
// 008010b5  57                   push edi
// 008010b6  50                   push eax
// 008010b7  8d4c2430             lea ecx, [esp + 0x30]
// 008010bb  51                   push ecx
// 008010bc  8bce                 mov ecx, esi
// 008010be  e89de6ffff           call 0x7ff760
// 008010c3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008010c7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008010cb  83c006               add eax, 6
// 008010ce  3bc1                 cmp eax, ecx
// 008010d0  7e02                 jle 0x8010d4
// 008010d2  8bc8                 mov ecx, eax
// 008010d4  8b442414             mov eax, dword ptr [esp + 0x14]
// 008010d8  33d2                 xor edx, edx
// 008010da  39968c000000         cmp dword ptr [esi + 0x8c], edx
// 008010e0  894804               mov dword ptr [eax + 4], ecx
// 008010e3  0f95c2               setne dl
// 008010e6  83c203               add edx, 3
// 008010e9  03542408             add edx, dword ptr [esp + 8]
// 008010ed  03542438             add edx, dword ptr [esp + 0x38]
// 008010f1  8910                 mov dword ptr [eax], edx
// 008010f3  5f                   pop edi
// 008010f4  5e                   pop esi
// 008010f5  83c408               add esp, 8
// 008010f8  c23000               ret 0x30
// 008010fb  8b442434             mov eax, dword ptr [esp + 0x34]
// 008010ff  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00801103  50                   push eax
// 00801104  6a01                 push 1
// 00801106  6a00                 push 0
// 00801108  51                   push ecx
// 00801109  83ec10               sub esp, 0x10
// 0080110c  8bc4                 mov eax, esp
// 0080110e  8d542440             lea edx, [esp + 0x40]
// 00801112  52                   push edx
// 00801113  50                   push eax
// 00801114  ff1564cc9800         call dword ptr [0x98cc64]
// 0080111a  8b442438             mov eax, dword ptr [esp + 0x38]
// 0080111e  57                   push edi
// 0080111f  50                   push eax
// 00801120  8d4c2430             lea ecx, [esp + 0x30]
// 00801124  51                   push ecx
// 00801125  8bce                 mov ecx, esi
// 00801127  e834e6ffff           call 0x7ff760
// 0080112c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00801130  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00801134  83c006               add eax, 6
// 00801137  3bc1                 cmp eax, ecx
// 00801139  7e02                 jle 0x80113d
// 0080113b  8bc8                 mov ecx, eax
// 0080113d  8b542408             mov edx, dword ptr [esp + 8]
// 00801141  8b442414             mov eax, dword ptr [esp + 0x14]
// 00801145  83c208               add edx, 8
// 00801148  8910                 mov dword ptr [eax], edx
// 0080114a  894804               mov dword ptr [eax + 4], ecx
// 0080114d  5f                   pop edi
// 0080114e  5e                   pop esi
// 0080114f  83c408               add esp, 8
// 00801152  c23000               ret 0x30
// 00801155  837c244000           cmp dword ptr [esp + 0x40], 0
// 0080115a  7465                 je 0x8011c1
// 0080115c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00801160  8b542430             mov edx, dword ptr [esp + 0x30]
// 00801164  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00801168  01442424             add dword ptr [esp + 0x24], eax
// 0080116c  51                   push ecx
// 0080116d  6a00                 push 0
// 0080116f  6a01                 push 1
// 00801171  52                   push edx
// 00801172  83ec10               sub esp, 0x10
// 00801175  8bc4                 mov eax, esp
// 00801177  8d4c2440             lea ecx, [esp + 0x40]
// 0080117b  51                   push ecx
// 0080117c  50                   push eax
// 0080117d  ff1564cc9800         call dword ptr [0x98cc64]
// 00801183  8b542438             mov edx, dword ptr [esp + 0x38]
// 00801187  57                   push edi
// 00801188  52                   push edx
// 00801189  8d442430             lea eax, [esp + 0x30]
// 0080118d  50                   push eax
// 0080118e  8bce                 mov ecx, esi
// 00801190  e8cbe5ffff           call 0x7ff760
// 00801195  8b442408             mov eax, dword ptr [esp + 8]
// 00801199  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0080119d  83c006               add eax, 6
// 008011a0  3bc1                 cmp eax, ecx
// 008011a2  8bd0                 mov edx, eax
// 008011a4  7f02                 jg 0x8011a8
// 008011a6  8bd1                 mov edx, ecx
// 008011a8  8b442414             mov eax, dword ptr [esp + 0x14]
// 008011ac  8910                 mov dword ptr [eax], edx
// 008011ae  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008011b2  8d4c0a03             lea ecx, [edx + ecx + 3]
// 008011b6  894804               mov dword ptr [eax + 4], ecx
// 008011b9  5f                   pop edi
// 008011ba  5e                   pop esi
// 008011bb  83c408               add esp, 8
// 008011be  c23000               ret 0x30
// 008011c1  8b542434             mov edx, dword ptr [esp + 0x34]
// 008011c5  8b442430             mov eax, dword ptr [esp + 0x30]
// 008011c9  52                   push edx
// 008011ca  6a01                 push 1
// 008011cc  6a01                 push 1
// 008011ce  50                   push eax
// 008011cf  83ec10               sub esp, 0x10
// 008011d2  8bc4                 mov eax, esp
// 008011d4  8d4c2440             lea ecx, [esp + 0x40]
// 008011d8  51                   push ecx
// 008011d9  50                   push eax
// 008011da  ff1564cc9800         call dword ptr [0x98cc64]
// 008011e0  8b542438             mov edx, dword ptr [esp + 0x38]
// 008011e4  57                   push edi
// 008011e5  52                   push edx
// 008011e6  8d442430             lea eax, [esp + 0x30]
// 008011ea  50                   push eax
// 008011eb  8bce                 mov ecx, esi
// 008011ed  e86ee5ffff           call 0x7ff760
// 008011f2  8b442408             mov eax, dword ptr [esp + 8]
// 008011f6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008011fa  83c006               add eax, 6
// 008011fd  3bc1                 cmp eax, ecx
// 008011ff  7e02                 jle 0x801203
// 00801201  8bc8                 mov ecx, eax
// 00801203  8b442414             mov eax, dword ptr [esp + 0x14]
// 00801207  8908                 mov dword ptr [eax], ecx
// 00801209  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080120d  83c108               add ecx, 8
// 00801210  5f                   pop edi
// 00801211  894804               mov dword ptr [eax + 4], ecx
// 00801214  5e                   pop esi
// 00801215  83c408               add esp, 8
// 00801218  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlText@CXTPPaintManager@@IAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
