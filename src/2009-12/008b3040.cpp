// roc 2009-12 008b3040  unit: CXTPDockingPaneTabbedContainer  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b3040
//
// 008b3040  56                   push esi
// 008b3041  8bf1                 mov esi, ecx
// 008b3043  8b4660               mov eax, dword ptr [esi + 0x60]
// 008b3046  85c0                 test eax, eax
// 008b3048  0f84a5000000         je 0x8b30f3
// 008b304e  837e2000             cmp dword ptr [esi + 0x20], 0
// 008b3052  7514                 jne 0x8b3068
// 008b3054  83b88000000000       cmp dword ptr [eax + 0x80], 0
// 008b305b  750b                 jne 0x8b3068
// 008b305d  8b4654               mov eax, dword ptr [esi + 0x54]
// 008b3060  8b5058               mov edx, dword ptr [eax + 0x58]
// 008b3063  8d4e54               lea ecx, [esi + 0x54]
// 008b3066  ffd2                 call edx
// 008b3068  53                   push ebx
// 008b3069  55                   push ebp
// 008b306a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008b306e  57                   push edi
// 008b306f  85ed                 test ebp, ebp
// 008b3071  7405                 je 0x8b3078
// 008b3073  8d4520               lea eax, [ebp + 0x20]
// 008b3076  eb02                 jmp 0x8b307a
// 008b3078  33c0                 xor eax, eax
// 008b307a  50                   push eax
// 008b307b  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008b3081  e8fa0a0100           call 0x8c3b80
// 008b3086  8b4520               mov eax, dword ptr [ebp + 0x20]
// 008b3089  8b5030               mov edx, dword ptr [eax + 0x30]
// 008b308c  8d5d20               lea ebx, [ebp + 0x20]
// 008b308f  8d7e54               lea edi, [esi + 0x54]
// 008b3092  57                   push edi
// 008b3093  8bcb                 mov ecx, ebx
// 008b3095  ffd2                 call edx
// 008b3097  8b03                 mov eax, dword ptr [ebx]
// 008b3099  8b17                 mov edx, dword ptr [edi]
// 008b309b  89442414             mov dword ptr [esp + 0x14], eax
// 008b309f  8b4218               mov eax, dword ptr [edx + 0x18]
// 008b30a2  8bcf                 mov ecx, edi
// 008b30a4  ffd0                 call eax
// 008b30a6  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b30aa  50                   push eax
// 008b30ab  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008b30ae  8bcb                 mov ecx, ebx
// 008b30b0  ffd0                 call eax
// 008b30b2  6a01                 push 1
// 008b30b4  57                   push edi
// 008b30b5  8bcf                 mov ecx, edi
// 008b30b7  c786a001000001000000 mov dword ptr [esi + 0x1a0], 1
// 008b30c1  e87ad7ffff           call 0x8b0840
// 008b30c6  8bc8                 mov ecx, eax
// 008b30c8  e80362f8ff           call 0x8392d0
// 008b30cd  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b30d1  8b16                 mov edx, dword ptr [esi]
// 008b30d3  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 008b30d9  6a01                 push 1
// 008b30db  50                   push eax
// 008b30dc  55                   push ebp
// 008b30dd  8bce                 mov ecx, esi
// 008b30df  ffd2                 call edx
// 008b30e1  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008b30e4  85c9                 test ecx, ecx
// 008b30e6  7408                 je 0x8b30f0
// 008b30e8  8b01                 mov eax, dword ptr [ecx]
// 008b30ea  8b5034               mov edx, dword ptr [eax + 0x34]
// 008b30ed  57                   push edi
// 008b30ee  ffd2                 call edx
// 008b30f0  5f                   pop edi
// 008b30f1  5d                   pop ebp
// 008b30f2  5b                   pop ebx
// 008b30f3  5e                   pop esi
// 008b30f4  c20800               ret 8
// copied from an identical function in another client (function ?_InsertPane@CXTPDockingPaneTabbedContainer@@IAEXPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp