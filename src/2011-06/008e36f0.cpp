// roc 2011-06 008e36f0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e36f0
//
// 008e36f0  83ec10               sub esp, 0x10
// 008e36f3  56                   push esi
// 008e36f4  8bf1                 mov esi, ecx
// 008e36f6  8b4674               mov eax, dword ptr [esi + 0x74]
// 008e36f9  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008e36fc  83c04c               add eax, 0x4c
// 008e36ff  57                   push edi
// 008e3700  83f9ff               cmp ecx, -1
// 008e3703  7505                 jne 0x8e370a
// 008e3705  8b4004               mov eax, dword ptr [eax + 4]
// 008e3708  eb02                 jmp 0x8e370c
// 008e370a  8bc1                 mov eax, ecx
// 008e370c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008e3710  50                   push eax
// 008e3711  8d442424             lea eax, [esp + 0x24]
// 008e3715  50                   push eax
// 008e3716  8bcf                 mov ecx, edi
// 008e3718  e80377f2ff           call 0x80ae20
// 008e371d  e8be1cf6ff           call 0x8453e0
// 008e3722  6a14                 push 0x14
// 008e3724  8bc8                 mov ecx, eax
// 008e3726  e88514f6ff           call 0x844bb0
// 008e372b  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008e372e  8b5154               mov edx, dword ptr [ecx + 0x54]
// 008e3731  83c14c               add ecx, 0x4c
// 008e3734  83faff               cmp edx, -1
// 008e3737  7505                 jne 0x8e373e
// 008e3739  8b4904               mov ecx, dword ptr [ecx + 4]
// 008e373c  eb02                 jmp 0x8e3740
// 008e373e  8bca                 mov ecx, edx
// 008e3740  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e3744  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008e3748  6a01                 push 1
// 008e374a  50                   push eax
// 008e374b  89542410             mov dword ptr [esp + 0x10], edx
// 008e374f  8d56fe               lea edx, [esi - 2]
// 008e3752  51                   push ecx
// 008e3753  8d442414             lea eax, [esp + 0x14]
// 008e3757  89542418             mov dword ptr [esp + 0x18], edx
// 008e375b  8b542434             mov edx, dword ptr [esp + 0x34]
// 008e375f  50                   push eax
// 008e3760  4e                   dec esi
// 008e3761  57                   push edi
// 008e3762  89542424             mov dword ptr [esp + 0x24], edx
// 008e3766  89742428             mov dword ptr [esp + 0x28], esi
// 008e376a  e811b6f7ff           call 0x85ed80
// 008e376f  8bc8                 mov ecx, eax
// 008e3771  e83ab6f7ff           call 0x85edb0
// 008e3776  5f                   pop edi
// 008e3777  5e                   pop esi
// 008e3778  83c410               add esp, 0x10
// 008e377b  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawCategoryCaptionBackground@CXTPPropertyGridWhidbeyTheme@XTPPropertyGridPaintThemes@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
