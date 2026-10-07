// roc 2008-06 007a3080  unit: CXTButtonThemeOffice2003  size: 432 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a3080
//
// 007a3080  83ec10               sub esp, 0x10
// 007a3083  53                   push ebx
// 007a3084  55                   push ebp
// 007a3085  56                   push esi
// 007a3086  8b742420             mov esi, dword ptr [esp + 0x20]
// 007a308a  8b4618               mov eax, dword ptr [esi + 0x18]
// 007a308d  57                   push edi
// 007a308e  50                   push eax
// 007a308f  8bd9                 mov ebx, ecx
// 007a3091  e8928f0100           call 0x7bc028
// 007a3096  8d4e1c               lea ecx, [esi + 0x1c]
// 007a3099  51                   push ecx
// 007a309a  8d542414             lea edx, [esp + 0x14]
// 007a309e  52                   push edx
// 007a309f  8bf8                 mov edi, eax
// 007a30a1  ff15702d8000         call dword ptr [0x802d70]
// 007a30a7  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a30ab  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 007a30b2  8b7610               mov esi, dword ptr [esi + 0x10]
// 007a30b5  8b687c               mov ebp, dword ptr [eax + 0x7c]
// 007a30b8  7513                 jne 0x7a30cd
// 007a30ba  ff15ac2d8000         call dword ptr [0x802dac]
// 007a30c0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a30c4  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 007a30c7  7404                 je 0x7a30cd
// 007a30c9  33c0                 xor eax, eax
// 007a30cb  eb05                 jmp 0x7a30d2
// 007a30cd  b801000000           mov eax, 1
// 007a30d2  83e601               and esi, 1
// 007a30d5  85ed                 test ebp, ebp
// 007a30d7  754d                 jne 0x7a3126
// 007a30d9  85c0                 test eax, eax
// 007a30db  7549                 jne 0x7a3126
// 007a30dd  85f6                 test esi, esi
// 007a30df  7549                 jne 0x7a312a
// 007a30e1  8b4328               mov eax, dword ptr [ebx + 0x28]
// 007a30e4  83f8ff               cmp eax, -1
// 007a30e7  7503                 jne 0x7a30ec
// 007a30e9  8b4324               mov eax, dword ptr [ebx + 0x24]
// 007a30ec  50                   push eax
// 007a30ed  8d542414             lea edx, [esp + 0x14]
// 007a30f1  52                   push edx
// 007a30f2  8bcf                 mov ecx, edi
// 007a30f4  e865e2efff           call 0x6a135e
// 007a30f9  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 007a3100  0f841b010000         je 0x7a3221
// 007a3106  8b4358               mov eax, dword ptr [ebx + 0x58]
// 007a3109  83f8ff               cmp eax, -1
// 007a310c  7505                 jne 0x7a3113
// 007a310e  8b4b54               mov ecx, dword ptr [ebx + 0x54]
// 007a3111  eb02                 jmp 0x7a3115
// 007a3113  8bc8                 mov ecx, eax
// 007a3115  83f8ff               cmp eax, -1
// 007a3118  7503                 jne 0x7a311d
// 007a311a  8b4354               mov eax, dword ptr [ebx + 0x54]
// 007a311d  51                   push ecx
// 007a311e  50                   push eax
// 007a311f  8d442418             lea eax, [esp + 0x18]
// 007a3123  50                   push eax
// 007a3124  eb77                 jmp 0x7a319d
// 007a3126  85f6                 test esi, esi
// 007a3128  7416                 je 0x7a3140
// 007a312a  e811ccf3ff           call 0x6dfd40
// 007a312f  6a00                 push 0
// 007a3131  6a00                 push 0
// 007a3133  0520010000           add eax, 0x120
// 007a3138  50                   push eax
// 007a3139  8d4c241c             lea ecx, [esp + 0x1c]
// 007a313d  51                   push ecx
// 007a313e  eb32                 jmp 0x7a3172
// 007a3140  85c0                 test eax, eax
// 007a3142  7416                 je 0x7a315a
// 007a3144  e8f7cbf3ff           call 0x6dfd40
// 007a3149  6a00                 push 0
// 007a314b  6a00                 push 0
// 007a314d  0540010000           add eax, 0x140
// 007a3152  50                   push eax
// 007a3153  8d54241c             lea edx, [esp + 0x1c]
// 007a3157  52                   push edx
// 007a3158  eb18                 jmp 0x7a3172
// 007a315a  85ed                 test ebp, ebp
// 007a315c  7421                 je 0x7a317f
// 007a315e  e8ddcbf3ff           call 0x6dfd40
// 007a3163  6a00                 push 0
// 007a3165  6a00                 push 0
// 007a3167  0500010000           add eax, 0x100
// 007a316c  50                   push eax
// 007a316d  8d44241c             lea eax, [esp + 0x1c]
// 007a3171  50                   push eax
// 007a3172  57                   push edi
// 007a3173  e8586af5ff           call 0x6f9bd0
// 007a3178  8bc8                 mov ecx, eax
// 007a317a  e8716df5ff           call 0x6f9ef0
// 007a317f  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 007a3182  83f8ff               cmp eax, -1
// 007a3185  7505                 jne 0x7a318c
// 007a3187  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 007a318a  eb02                 jmp 0x7a318e
// 007a318c  8bc8                 mov ecx, eax
// 007a318e  83f8ff               cmp eax, -1
// 007a3191  7503                 jne 0x7a3196
// 007a3193  8b4348               mov eax, dword ptr [ebx + 0x48]
// 007a3196  51                   push ecx
// 007a3197  50                   push eax
// 007a3198  8d4c2418             lea ecx, [esp + 0x18]
// 007a319c  51                   push ecx
// 007a319d  8bcf                 mov ecx, edi
// 007a319f  e8b4e1efff           call 0x6a1358
// 007a31a4  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 007a31ab  7474                 je 0x7a3221
// 007a31ad  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a31b1  e88af1feff           call 0x792340
// 007a31b6  3c01                 cmp al, 1
// 007a31b8  7567                 jne 0x7a3221
// 007a31ba  e881cbf3ff           call 0x6dfd40
// 007a31bf  6a0d                 push 0xd
// 007a31c1  8bc8                 mov ecx, eax
// 007a31c3  e858c3f3ff           call 0x6df520
// 007a31c8  8bf0                 mov esi, eax
// 007a31ca  e871cbf3ff           call 0x6dfd40
// 007a31cf  6a0d                 push 0xd
// 007a31d1  8bc8                 mov ecx, eax
// 007a31d3  e848c3f3ff           call 0x6df520
// 007a31d8  56                   push esi
// 007a31d9  50                   push eax
// 007a31da  8d542418             lea edx, [esp + 0x18]
// 007a31de  52                   push edx
// 007a31df  8bcf                 mov ecx, edi
// 007a31e1  e872e1efff           call 0x6a1358
// 007a31e6  6aff                 push -1
// 007a31e8  6aff                 push -1
// 007a31ea  8d442418             lea eax, [esp + 0x18]
// 007a31ee  50                   push eax
// 007a31ef  ff15282d8000         call dword ptr [0x802d28]
// 007a31f5  e846cbf3ff           call 0x6dfd40
// 007a31fa  6a0d                 push 0xd
// 007a31fc  8bc8                 mov ecx, eax
// 007a31fe  e81dc3f3ff           call 0x6df520
// 007a3203  8bf0                 mov esi, eax
// 007a3205  e836cbf3ff           call 0x6dfd40
// 007a320a  6a0d                 push 0xd
// 007a320c  8bc8                 mov ecx, eax
// 007a320e  e80dc3f3ff           call 0x6df520
// 007a3213  56                   push esi
// 007a3214  50                   push eax
// 007a3215  8d4c2418             lea ecx, [esp + 0x18]
// 007a3219  51                   push ecx
// 007a321a  8bcf                 mov ecx, edi
// 007a321c  e837e1efff           call 0x6a1358
// 007a3221  5f                   pop edi
// 007a3222  5e                   pop esi
// 007a3223  5d                   pop ebp
// 007a3224  b801000000           mov eax, 1
// 007a3229  5b                   pop ebx
// 007a322a  83c410               add esp, 0x10
// 007a322d  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonThemeOffice2003@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
