// roc 2009-06 00813a10  unit: CXTPRibbonTabPopupToolBar  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00813a10
//
// 00813a10  83ec20               sub esp, 0x20
// 00813a13  53                   push ebx
// 00813a14  55                   push ebp
// 00813a15  56                   push esi
// 00813a16  57                   push edi
// 00813a17  8bf1                 mov esi, ecx
// 00813a19  e8329af1ff           call 0x72d450
// 00813a1e  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00813a22  8bf8                 mov edi, eax
// 00813a24  56                   push esi
// 00813a25  53                   push ebx
// 00813a26  8bcf                 mov ecx, edi
// 00813a28  e86327f8ff           call 0x796190
// 00813a2d  8b8e7c020000         mov ecx, dword ptr [esi + 0x27c]
// 00813a33  8b17                 mov edx, dword ptr [edi]
// 00813a35  8b9238010000         mov edx, dword ptr [edx + 0x138]
// 00813a3b  83ec10               sub esp, 0x10
// 00813a3e  8bc4                 mov eax, esp
// 00813a40  8908                 mov dword ptr [eax], ecx
// 00813a42  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 00813a48  894804               mov dword ptr [eax + 4], ecx
// 00813a4b  8b8e84020000         mov ecx, dword ptr [esi + 0x284]
// 00813a51  894808               mov dword ptr [eax + 8], ecx
// 00813a54  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 00813a5a  89480c               mov dword ptr [eax + 0xc], ecx
// 00813a5d  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 00813a63  50                   push eax
// 00813a64  53                   push ebx
// 00813a65  8bcf                 mov ecx, edi
// 00813a67  ffd2                 call edx
// 00813a69  6a01                 push 1
// 00813a6b  8bcb                 mov ecx, ebx
// 00813a6d  e894840300           call 0x84bf06
// 00813a72  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 00813a78  8ba884000000         mov ebp, dword ptr [eax + 0x84]
// 00813a7e  8b4528               mov eax, dword ptr [ebp + 0x28]
// 00813a81  33db                 xor ebx, ebx
// 00813a83  85c0                 test eax, eax
// 00813a85  0f8e9a000000         jle 0x813b25
// 00813a8b  eb03                 jmp 0x813a90
// 00813a8d  8d4900               lea ecx, [ecx]
// 00813a90  85db                 test ebx, ebx
// 00813a92  7c15                 jl 0x813aa9
// 00813a94  3bd8                 cmp ebx, eax
// 00813a96  7d11                 jge 0x813aa9
// 00813a98  3b5d28               cmp ebx, dword ptr [ebp + 0x28]
// 00813a9b  0f8de6000000         jge 0x813b87
// 00813aa1  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 00813aa4  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 00813aa7  eb02                 jmp 0x813aab
// 00813aa9  33ff                 xor edi, edi
// 00813aab  8bcf                 mov ecx, edi
// 00813aad  e8beafffff           call 0x80ea70
// 00813ab2  85c0                 test eax, eax
// 00813ab4  7463                 je 0x813b19
// 00813ab6  8b4738               mov eax, dword ptr [edi + 0x38]
// 00813ab9  8b5734               mov edx, dword ptr [edi + 0x34]
// 00813abc  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00813abf  89542410             mov dword ptr [esp + 0x10], edx
// 00813ac3  8b5740               mov edx, dword ptr [edi + 0x40]
// 00813ac6  89442414             mov dword ptr [esp + 0x14], eax
// 00813aca  8d442410             lea eax, [esp + 0x10]
// 00813ace  894c2418             mov dword ptr [esp + 0x18], ecx
// 00813ad2  50                   push eax
// 00813ad3  8d4c243c             lea ecx, [esp + 0x3c]
// 00813ad7  89542420             mov dword ptr [esp + 0x20], edx
// 00813adb  51                   push ecx
// 00813adc  8d542428             lea edx, [esp + 0x28]
// 00813ae0  52                   push edx
// 00813ae1  ff15f0ee8900         call dword ptr [0x89eef0]
// 00813ae7  85c0                 test eax, eax
// 00813ae9  742e                 je 0x813b19
// 00813aeb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00813aef  8b17                 mov edx, dword ptr [edi]
// 00813af1  8b5260               mov edx, dword ptr [edx + 0x60]
// 00813af4  83ec10               sub esp, 0x10
// 00813af7  8bc4                 mov eax, esp
// 00813af9  8908                 mov dword ptr [eax], ecx
// 00813afb  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00813aff  894804               mov dword ptr [eax + 4], ecx
// 00813b02  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00813b06  894808               mov dword ptr [eax + 8], ecx
// 00813b09  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00813b0d  89480c               mov dword ptr [eax + 0xc], ecx
// 00813b10  8b442444             mov eax, dword ptr [esp + 0x44]
// 00813b14  50                   push eax
// 00813b15  8bcf                 mov ecx, edi
// 00813b17  ffd2                 call edx
// 00813b19  8b4528               mov eax, dword ptr [ebp + 0x28]
// 00813b1c  43                   inc ebx
// 00813b1d  3bd8                 cmp ebx, eax
// 00813b1f  0f8c6bffffff         jl 0x813a90
// 00813b25  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 00813b2b  8b01                 mov eax, dword ptr [ecx]
// 00813b2d  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00813b33  6a00                 push 0
// 00813b35  ffd2                 call edx
// 00813b37  85c0                 test eax, eax
// 00813b39  7415                 je 0x813b50
// 00813b3b  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 00813b41  8b01                 mov eax, dword ptr [ecx]
// 00813b43  8b542434             mov edx, dword ptr [esp + 0x34]
// 00813b47  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 00813b4d  52                   push edx
// 00813b4e  ffd0                 call eax
// 00813b50  8b8e6c020000         mov ecx, dword ptr [esi + 0x26c]
// 00813b56  8b11                 mov edx, dword ptr [ecx]
// 00813b58  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00813b5e  6a00                 push 0
// 00813b60  ffd0                 call eax
// 00813b62  85c0                 test eax, eax
// 00813b64  7417                 je 0x813b7d
// 00813b66  8bb66c020000         mov esi, dword ptr [esi + 0x26c]
// 00813b6c  8b16                 mov edx, dword ptr [esi]
// 00813b6e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00813b72  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 00813b78  50                   push eax
// 00813b79  8bce                 mov ecx, esi
// 00813b7b  ffd2                 call edx
// 00813b7d  5f                   pop edi
// 00813b7e  5e                   pop esi
// 00813b7f  5d                   pop ebp
// 00813b80  5b                   pop ebx
// 00813b81  83c420               add esp, 0x20
// 00813b84  c21400               ret 0x14
// 00813b87  e85851f0ff           call 0x718ce4
// copied from an identical function in another client (function ?DrawCommandBar@CXTPRibbonTabPopupToolBar@@UAEXPAVCDC@@VCRect@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp