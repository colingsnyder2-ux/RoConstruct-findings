// from server: 100% by auto
// roc 2008-06 00780e50  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 568 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00780e50
//
// 00780e50  53                   push ebx
// 00780e51  8bd9                 mov ebx, ecx
// 00780e53  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00780e56  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00780e5a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00780e5e  0f85a9000000         jne 0x780f0d
// 00780e64  83e901               sub ecx, 1
// 00780e67  0f8486000000         je 0x780ef3
// 00780e6d  83e901               sub ecx, 1
// 00780e70  7445                 je 0x780eb7
// 00780e72  83e901               sub ecx, 1
// 00780e75  0f85f9010000         jne 0x781074
// 00780e7b  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00780e81  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00780e84  83c008               add eax, 8
// 00780e87  83f9ff               cmp ecx, -1
// 00780e8a  7516                 jne 0x780ea2
// 00780e8c  8b4004               mov eax, dword ptr [eax + 4]
// 00780e8f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00780e93  50                   push eax
// 00780e94  8b442410             mov eax, dword ptr [esp + 0x10]
// 00780e98  50                   push eax
// 00780e99  e8c004f2ff           call 0x6a135e
// 00780e9e  5b                   pop ebx
// 00780e9f  c20c00               ret 0xc
// 00780ea2  8bc1                 mov eax, ecx
// 00780ea4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00780ea8  50                   push eax
// 00780ea9  8b442410             mov eax, dword ptr [esp + 0x10]
// 00780ead  50                   push eax
// 00780eae  e8ab04f2ff           call 0x6a135e
// 00780eb3  5b                   pop ebx
// 00780eb4  c20c00               ret 0xc
// 00780eb7  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00780ebd  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00780ec0  83c008               add eax, 8
// 00780ec3  83f9ff               cmp ecx, -1
// 00780ec6  7516                 jne 0x780ede
// 00780ec8  8b4004               mov eax, dword ptr [eax + 4]
// 00780ecb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00780ecf  50                   push eax
// 00780ed0  51                   push ecx
// 00780ed1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00780ed5  e88404f2ff           call 0x6a135e
// 00780eda  5b                   pop ebx
// 00780edb  c20c00               ret 0xc
// 00780ede  8bc1                 mov eax, ecx
// 00780ee0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00780ee4  50                   push eax
// 00780ee5  51                   push ecx
// 00780ee6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00780eea  e86f04f2ff           call 0x6a135e
// 00780eef  5b                   pop ebx
// 00780ef0  c20c00               ret 0xc
// 00780ef3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00780ef7  834004fe             add dword ptr [eax + 4], -2
// 00780efb  8300fe               add dword ptr [eax], -2
// 00780efe  b902000000           mov ecx, 2
// 00780f03  014808               add dword ptr [eax + 8], ecx
// 00780f06  01480c               add dword ptr [eax + 0xc], ecx
// 00780f09  5b                   pop ebx
// 00780f0a  c20c00               ret 0xc
// 00780f0d  83f903               cmp ecx, 3
// 00780f10  0f875e010000         ja 0x781074
// 00780f16  56                   push esi
// 00780f17  57                   push edi
// 00780f18  ff248d78107800       jmp dword ptr [ecx*4 + 0x781078]
// 00780f1f  e81ceef5ff           call 0x6dfd40
// 00780f24  6a0f                 push 0xf
// 00780f26  8bc8                 mov ecx, eax
// 00780f28  e8f3e5f5ff           call 0x6df520
// 00780f2d  8bf8                 mov edi, eax
// 00780f2f  e80ceef5ff           call 0x6dfd40
// 00780f34  6a0f                 push 0xf
// 00780f36  8bc8                 mov ecx, eax
// 00780f38  e8e3e5f5ff           call 0x6df520
// 00780f3d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00780f41  8b560c               mov edx, dword ptr [esi + 0xc]
// 00780f44  2b5604               sub edx, dword ptr [esi + 4]
// 00780f47  57                   push edi
// 00780f48  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00780f4c  50                   push eax
// 00780f4d  8b4608               mov eax, dword ptr [esi + 8]
// 00780f50  2b06                 sub eax, dword ptr [esi]
// 00780f52  4a                   dec edx
// 00780f53  52                   push edx
// 00780f54  83e802               sub eax, 2
// 00780f57  50                   push eax
// 00780f58  6a00                 push 0
// 00780f5a  6a01                 push 1
// 00780f5c  8bcf                 mov ecx, edi
// 00780f5e  e8ffb80300           call 0x7bc862
// 00780f63  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00780f66  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00780f6c  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00780f6f  83f9ff               cmp ecx, -1
// 00780f72  7503                 jne 0x780f77
// 00780f74  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00780f77  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00780f7a  83faff               cmp edx, -1
// 00780f7d  7505                 jne 0x780f84
// 00780f7f  8b4048               mov eax, dword ptr [eax + 0x48]
// 00780f82  eb02                 jmp 0x780f86
// 00780f84  8bc2                 mov eax, edx
// 00780f86  8b560c               mov edx, dword ptr [esi + 0xc]
// 00780f89  2b5604               sub edx, dword ptr [esi + 4]
// 00780f8c  51                   push ecx
// 00780f8d  50                   push eax
// 00780f8e  8b4608               mov eax, dword ptr [esi + 8]
// 00780f91  2b06                 sub eax, dword ptr [esi]
// 00780f93  52                   push edx
// 00780f94  50                   push eax
// 00780f95  6a00                 push 0
// 00780f97  6a00                 push 0
// 00780f99  8bcf                 mov ecx, edi
// 00780f9b  e8c2b80300           call 0x7bc862
// 00780fa0  5f                   pop edi
// 00780fa1  5e                   pop esi
// 00780fa2  5b                   pop ebx
// 00780fa3  c20c00               ret 0xc
// 00780fa6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00780faa  ff4804               dec dword ptr [eax + 4]
// 00780fad  5f                   pop edi
// 00780fae  5e                   pop esi
// 00780faf  5b                   pop ebx
// 00780fb0  c20c00               ret 0xc
// 00780fb3  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00780fb9  8b4858               mov ecx, dword ptr [eax + 0x58]
// 00780fbc  83c050               add eax, 0x50
// 00780fbf  83f9ff               cmp ecx, -1
// 00780fc2  7505                 jne 0x780fc9
// 00780fc4  8b4004               mov eax, dword ptr [eax + 4]
// 00780fc7  eb02                 jmp 0x780fcb
// 00780fc9  8bc1                 mov eax, ecx
// 00780fcb  8b742414             mov esi, dword ptr [esp + 0x14]
// 00780fcf  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00780fd3  50                   push eax
// 00780fd4  56                   push esi
// 00780fd5  8bcf                 mov ecx, edi
// 00780fd7  e88203f2ff           call 0x6a135e
// 00780fdc  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00780fdf  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00780fe5  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00780fe8  83c044               add eax, 0x44
// 00780feb  83f9ff               cmp ecx, -1
// 00780fee  7505                 jne 0x780ff5
// 00780ff0  8b4004               mov eax, dword ptr [eax + 4]
// 00780ff3  eb02                 jmp 0x780ff7
// 00780ff5  8bc1                 mov eax, ecx
// 00780ff7  8b5604               mov edx, dword ptr [esi + 4]
// 00780ffa  8b4e08               mov ecx, dword ptr [esi + 8]
// 00780ffd  50                   push eax
// 00780ffe  8b460c               mov eax, dword ptr [esi + 0xc]
// 00781001  2bc2                 sub eax, edx
// 00781003  50                   push eax
// 00781004  6a01                 push 1
// 00781006  49                   dec ecx
// 00781007  52                   push edx
// 00781008  51                   push ecx
// 00781009  8bcf                 mov ecx, edi
// 0078100b  e830b00300           call 0x7bc040
// 00781010  5f                   pop edi
// 00781011  5e                   pop esi
// 00781012  5b                   pop ebx
// 00781013  c20c00               ret 0xc
// 00781016  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 0078101c  8b4858               mov ecx, dword ptr [eax + 0x58]
// 0078101f  83c050               add eax, 0x50
// 00781022  83f9ff               cmp ecx, -1
// 00781025  7505                 jne 0x78102c
// 00781027  8b4004               mov eax, dword ptr [eax + 4]
// 0078102a  eb02                 jmp 0x78102e
// 0078102c  8bc1                 mov eax, ecx
// 0078102e  8b742414             mov esi, dword ptr [esp + 0x14]
// 00781032  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00781036  50                   push eax
// 00781037  56                   push esi
// 00781038  8bcf                 mov ecx, edi
// 0078103a  e81f03f2ff           call 0x6a135e
// 0078103f  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00781042  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00781048  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0078104b  83c044               add eax, 0x44
// 0078104e  83f9ff               cmp ecx, -1
// 00781051  7505                 jne 0x781058
// 00781053  8b4004               mov eax, dword ptr [eax + 4]
// 00781056  eb02                 jmp 0x78105a
// 00781058  8bc1                 mov eax, ecx
// 0078105a  8b16                 mov edx, dword ptr [esi]
// 0078105c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0078105f  50                   push eax
// 00781060  8b4608               mov eax, dword ptr [esi + 8]
// 00781063  6a01                 push 1
// 00781065  2bc2                 sub eax, edx
// 00781067  50                   push eax
// 00781068  49                   dec ecx
// 00781069  51                   push ecx
// 0078106a  52                   push edx
// 0078106b  8bcf                 mov ecx, edi
// 0078106d  e8ceaf0300           call 0x7bc040
// 00781072  5f                   pop edi
// 00781073  5e                   pop esi
// 00781074  5b                   pop ebx
// 00781075  c20c00               ret 0xc
// 00781078  1f                   pop ds
// 00781079  0f7800               vmread dword ptr [eax], eax
// 0078107c  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 0078107d  0f7800               vmread dword ptr [eax], eax
// 00781080  b30f                 mov bl, 0xf
// 00781082  7800                 js 0x781084
// 00781084  16                   push ss
// 00781085  107800               adc byte ptr [eax], bh
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawWorkspacePart@CAppearanceSet@CXTPTabPaintManager@@UAEXPAVCDC@@PAUtagRECT@@W4XTPTabWorkspacePart@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
