// roc 2009-12 008737b0  unit: CXTPRibbonTheme  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008737b0
//
// 008737b0  53                   push ebx
// 008737b1  55                   push ebp
// 008737b2  56                   push esi
// 008737b3  8b742410             mov esi, dword ptr [esp + 0x10]
// 008737b7  8b9e00010000         mov ebx, dword ptr [esi + 0x100]
// 008737bd  83bbf800000003       cmp dword ptr [ebx + 0xf8], 3
// 008737c4  57                   push edi
// 008737c5  8be9                 mov ebp, ecx
// 008737c7  0f85d3000000         jne 0x8738a0
// 008737cd  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 008737d4  0f85c6000000         jne 0x8738a0
// 008737da  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 008737e0  83f809               cmp eax, 9
// 008737e3  7409                 je 0x8737ee
// 008737e5  83f80b               cmp eax, 0xb
// 008737e8  7404                 je 0x8737ee
// 008737ea  33ff                 xor edi, edi
// 008737ec  eb05                 jmp 0x8737f3
// 008737ee  bf01000000           mov edi, 1
// 008737f3  e8f85c0700           call 0x8e94f0
// 008737f8  50                   push eax
// 008737f9  8bce                 mov ecx, esi
// 008737fb  e8e805f8ff           call 0x7f3de8
// 00873800  85c0                 test eax, eax
// 00873802  7504                 jne 0x873808
// 00873804  85ff                 test edi, edi
// 00873806  7458                 je 0x873860
// 00873808  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0087380e  83f8ff               cmp eax, -1
// 00873811  750f                 jne 0x873822
// 00873813  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00873819  85c9                 test ecx, ecx
// 0087381b  7405                 je 0x873822
// 0087381d  e88e2df8ff           call 0x7f65b0
// 00873822  85c0                 test eax, eax
// 00873824  747a                 je 0x8738a0
// 00873826  56                   push esi
// 00873827  8bcb                 mov ecx, ebx
// 00873829  e812290200           call 0x896140
// 0087382e  85c0                 test eax, eax
// 00873830  747d                 je 0x8738af
// 00873832  8bce                 mov ecx, esi
// 00873834  e887e5ffff           call 0x871dc0
// 00873839  85c0                 test eax, eax
// 0087383b  7472                 je 0x8738af
// 0087383d  8bcb                 mov ecx, ebx
// 0087383f  e84c38f9ff           call 0x807090
// 00873844  8bc8                 mov ecx, eax
// 00873846  e8272c0b00           call 0x926472
// 0087384b  2500000001           and eax, 0x1000000
// 00873850  5f                   pop edi
// 00873851  f7d8                 neg eax
// 00873853  5e                   pop esi
// 00873854  1bc0                 sbb eax, eax
// 00873856  5d                   pop ebp
// 00873857  25ffffff00           and eax, 0xffffff
// 0087385c  5b                   pop ebx
// 0087385d  c20400               ret 4
// 00873860  8b06                 mov eax, dword ptr [esi]
// 00873862  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00873865  8bce                 mov ecx, esi
// 00873867  ffd2                 call edx
// 00873869  85c0                 test eax, eax
// 0087386b  7533                 jne 0x8738a0
// 0087386d  8bce                 mov ecx, esi
// 0087386f  e85ceebdff           call 0x4526d0
// 00873874  85c0                 test eax, eax
// 00873876  7428                 je 0x8738a0
// 00873878  8b06                 mov eax, dword ptr [esi]
// 0087387a  8b5078               mov edx, dword ptr [eax + 0x78]
// 0087387d  8bce                 mov ecx, esi
// 0087387f  ffd2                 call edx
// 00873881  85c0                 test eax, eax
// 00873883  751b                 jne 0x8738a0
// 00873885  8bce                 mov ecx, esi
// 00873887  e80423f8ff           call 0x7f5b90
// 0087388c  85c0                 test eax, eax
// 0087388e  7510                 jne 0x8738a0
// 00873890  8b06                 mov eax, dword ptr [esi]
// 00873892  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00873898  8bce                 mov ecx, esi
// 0087389a  ffd2                 call edx
// 0087389c  85c0                 test eax, eax
// 0087389e  7486                 je 0x873826
// 008738a0  56                   push esi
// 008738a1  8bcd                 mov ecx, ebp
// 008738a3  e8c8a2f8ff           call 0x7fdb70
// 008738a8  5f                   pop edi
// 008738a9  5e                   pop esi
// 008738aa  5d                   pop ebp
// 008738ab  5b                   pop ebx
// 008738ac  c20400               ret 4
// 008738af  8b8570060000         mov eax, dword ptr [ebp + 0x670]
// 008738b5  5f                   pop edi
// 008738b6  5e                   pop esi
// 008738b7  5d                   pop ebp
// 008738b8  5b                   pop ebx
// 008738b9  c20400               ret 4
// copied from an identical function in another client (function ?GetControlTextColor@CXTPRibbonTheme@@MAEKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp