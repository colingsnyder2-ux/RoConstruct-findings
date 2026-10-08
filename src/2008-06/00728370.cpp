// from server: 100% by auto
// roc 2008-06 00728370  unit: CXTPRibbonTheme  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00728370
//
// 00728370  83ec30               sub esp, 0x30
// 00728373  53                   push ebx
// 00728374  55                   push ebp
// 00728375  56                   push esi
// 00728376  57                   push edi
// 00728377  6884188600           push 0x861884
// 0072837c  8bf9                 mov edi, ecx
// 0072837e  e86dd30000           call 0x7356f0
// 00728383  8be8                 mov ebp, eax
// 00728385  33db                 xor ebx, ebx
// 00728387  3beb                 cmp ebp, ebx
// 00728389  753b                 jne 0x7283c6
// 0072838b  8b442458             mov eax, dword ptr [esp + 0x58]
// 0072838f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00728393  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00728397  50                   push eax
// 00728398  83ec10               sub esp, 0x10
// 0072839b  8bc4                 mov eax, esp
// 0072839d  8908                 mov dword ptr [eax], ecx
// 0072839f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007283a3  895004               mov dword ptr [eax + 4], edx
// 007283a6  8b542468             mov edx, dword ptr [esp + 0x68]
// 007283aa  894808               mov dword ptr [eax + 8], ecx
// 007283ad  89500c               mov dword ptr [eax + 0xc], edx
// 007283b0  8b442458             mov eax, dword ptr [esp + 0x58]
// 007283b4  50                   push eax
// 007283b5  8bcf                 mov ecx, edi
// 007283b7  e8448d0100           call 0x741100
// 007283bc  5f                   pop edi
// 007283bd  5e                   pop esi
// 007283be  5d                   pop ebp
// 007283bf  5b                   pop ebx
// 007283c0  83c430               add esp, 0x30
// 007283c3  c21800               ret 0x18
// 007283c6  be01000000           mov esi, 1
// 007283cb  56                   push esi
// 007283cc  53                   push ebx
// 007283cd  8d4c2438             lea ecx, [esp + 0x38]
// 007283d1  51                   push ecx
// 007283d2  8bcd                 mov ecx, ebp
// 007283d4  8974241c             mov dword ptr [esp + 0x1c], esi
// 007283d8  89742420             mov dword ptr [esp + 0x20], esi
// 007283dc  89742424             mov dword ptr [esp + 0x24], esi
// 007283e0  89742428             mov dword ptr [esp + 0x28], esi
// 007283e4  e847530600           call 0x78d730
// 007283e9  68ff00ff00           push 0xff00ff
// 007283ee  8d542414             lea edx, [esp + 0x14]
// 007283f2  52                   push edx
// 007283f3  8b10                 mov edx, dword ptr [eax]
// 007283f5  83ec10               sub esp, 0x10
// 007283f8  8bcc                 mov ecx, esp
// 007283fa  8911                 mov dword ptr [ecx], edx
// 007283fc  8b5004               mov edx, dword ptr [eax + 4]
// 007283ff  895104               mov dword ptr [ecx + 4], edx
// 00728402  8b5008               mov edx, dword ptr [eax + 8]
// 00728405  8b400c               mov eax, dword ptr [eax + 0xc]
// 00728408  895108               mov dword ptr [ecx + 8], edx
// 0072840b  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0072840f  89410c               mov dword ptr [ecx + 0xc], eax
// 00728412  8d4c2460             lea ecx, [esp + 0x60]
// 00728416  51                   push ecx
// 00728417  52                   push edx
// 00728418  8bcd                 mov ecx, ebp
// 0072841a  e851580600           call 0x78dc70
// 0072841f  837c245802           cmp dword ptr [esp + 0x58], 2
// 00728424  8bcf                 mov ecx, edi
// 00728426  0f85b8000000         jne 0x7284e4
// 0072842c  6868188600           push 0x861868
// 00728431  e8bad20000           call 0x7356f0
// 00728436  56                   push esi
// 00728437  8be8                 mov ebp, eax
// 00728439  53                   push ebx
// 0072843a  8d442418             lea eax, [esp + 0x18]
// 0072843e  50                   push eax
// 0072843f  8bcd                 mov ecx, ebp
// 00728441  e8ea520600           call 0x78d730
// 00728446  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0072844a  8b542448             mov edx, dword ptr [esp + 0x48]
// 0072844e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00728452  2b742410             sub esi, dword ptr [esp + 0x10]
// 00728456  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0072845a  8d040a               lea eax, [edx + ecx]
// 0072845d  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 00728461  99                   cdq 
// 00728462  2bc2                 sub eax, edx
// 00728464  8bc8                 mov ecx, eax
// 00728466  8bc6                 mov eax, esi
// 00728468  99                   cdq 
// 00728469  2bc2                 sub eax, edx
// 0072846b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0072846f  d1f8                 sar eax, 1
// 00728471  d1f9                 sar ecx, 1
// 00728473  2bc8                 sub ecx, eax
// 00728475  8b442414             mov eax, dword ptr [esp + 0x14]
// 00728479  2bc2                 sub eax, edx
// 0072847b  03442454             add eax, dword ptr [esp + 0x54]
// 0072847f  68ff00ff00           push 0xff00ff
// 00728484  89442438             mov dword ptr [esp + 0x38], eax
// 00728488  03c7                 add eax, edi
// 0072848a  89442440             mov dword ptr [esp + 0x40], eax
// 0072848e  894c2434             mov dword ptr [esp + 0x34], ecx
// 00728492  03ce                 add ecx, esi
// 00728494  8d442424             lea eax, [esp + 0x24]
// 00728498  50                   push eax
// 00728499  894c2440             mov dword ptr [esp + 0x40], ecx
// 0072849d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007284a1  83ec10               sub esp, 0x10
// 007284a4  8bc4                 mov eax, esp
// 007284a6  8908                 mov dword ptr [eax], ecx
// 007284a8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007284ac  894804               mov dword ptr [eax + 4], ecx
// 007284af  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007284b3  894808               mov dword ptr [eax + 8], ecx
// 007284b6  89500c               mov dword ptr [eax + 0xc], edx
// 007284b9  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007284bd  8d542448             lea edx, [esp + 0x48]
// 007284c1  52                   push edx
// 007284c2  8bcd                 mov ecx, ebp
// 007284c4  50                   push eax
// 007284c5  895c2440             mov dword ptr [esp + 0x40], ebx
// 007284c9  895c2444             mov dword ptr [esp + 0x44], ebx
// 007284cd  895c2448             mov dword ptr [esp + 0x48], ebx
// 007284d1  895c244c             mov dword ptr [esp + 0x4c], ebx
// 007284d5  e896570600           call 0x78dc70
// 007284da  5f                   pop edi
// 007284db  5e                   pop esi
// 007284dc  5d                   pop ebp
// 007284dd  5b                   pop ebx
// 007284de  83c430               add esp, 0x30
// 007284e1  c21800               ret 0x18
// 007284e4  684c188600           push 0x86184c
// 007284e9  e802d20000           call 0x7356f0
// 007284ee  56                   push esi
// 007284ef  53                   push ebx
// 007284f0  8d4c2418             lea ecx, [esp + 0x18]
// 007284f4  8bf8                 mov edi, eax
// 007284f6  51                   push ecx
// 007284f7  8bcf                 mov ecx, edi
// 007284f9  e832520600           call 0x78d730
// 007284fe  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00728502  8b442410             mov eax, dword ptr [esp + 0x10]
// 00728506  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072850a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0072850e  2bf1                 sub esi, ecx
// 00728510  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00728514  8bd5                 mov edx, ebp
// 00728516  034c2454             add ecx, dword ptr [esp + 0x54]
// 0072851a  2bd0                 sub edx, eax
// 0072851c  2bc5                 sub eax, ebp
// 0072851e  03442450             add eax, dword ptr [esp + 0x50]
// 00728522  68ff00ff00           push 0xff00ff
// 00728527  89442424             mov dword ptr [esp + 0x24], eax
// 0072852b  03c2                 add eax, edx
// 0072852d  894c2428             mov dword ptr [esp + 0x28], ecx
// 00728531  03ce                 add ecx, esi
// 00728533  8d542434             lea edx, [esp + 0x34]
// 00728537  52                   push edx
// 00728538  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0072853c  83ec10               sub esp, 0x10
// 0072853f  894c2444             mov dword ptr [esp + 0x44], ecx
// 00728543  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00728547  89442440             mov dword ptr [esp + 0x40], eax
// 0072854b  8bc4                 mov eax, esp
// 0072854d  8908                 mov dword ptr [eax], ecx
// 0072854f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00728553  895004               mov dword ptr [eax + 4], edx
// 00728556  896808               mov dword ptr [eax + 8], ebp
// 00728559  89480c               mov dword ptr [eax + 0xc], ecx
// 0072855c  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00728560  8d542438             lea edx, [esp + 0x38]
// 00728564  52                   push edx
// 00728565  8bcf                 mov ecx, edi
// 00728567  50                   push eax
// 00728568  895c2450             mov dword ptr [esp + 0x50], ebx
// 0072856c  895c2454             mov dword ptr [esp + 0x54], ebx
// 00728570  895c2458             mov dword ptr [esp + 0x58], ebx
// 00728574  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00728578  e8f3560600           call 0x78dc70
// 0072857d  5f                   pop edi
// 0072857e  5e                   pop esi
// 0072857f  5d                   pop ebp
// 00728580  5b                   pop ebx
// 00728581  83c430               add esp, 0x30
// 00728584  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawPopupResizeGripper@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
