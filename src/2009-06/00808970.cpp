// roc 2009-06 00808970  unit: CXTShadowWnd  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808970
//
// 00808970  83ec20               sub esp, 0x20
// 00808973  53                   push ebx
// 00808974  56                   push esi
// 00808975  8bf1                 mov esi, ecx
// 00808977  56                   push esi
// 00808978  8d4c240c             lea ecx, [esp + 0xc]
// 0080897c  e8ef7af6ff           call 0x770470
// 00808981  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00808985  8b5804               mov ebx, dword ptr [eax + 4]
// 00808988  85db                 test ebx, ebx
// 0080898a  0f84ba000000         je 0x808a4a
// 00808990  55                   push ebp
// 00808991  57                   push edi
// 00808992  8bc3                 mov eax, ebx
// 00808994  8b4008               mov eax, dword ptr [eax + 8]
// 00808997  8b1b                 mov ebx, dword ptr [ebx]
// 00808999  33c9                 xor ecx, ecx
// 0080899b  39485c               cmp dword ptr [eax + 0x5c], ecx
// 0080899e  0f94c1               sete cl
// 008089a1  394e5c               cmp dword ptr [esi + 0x5c], ecx
// 008089a4  0f8596000000         jne 0x808a40
// 008089aa  50                   push eax
// 008089ab  8d4c2424             lea ecx, [esp + 0x24]
// 008089af  e8bc7af6ff           call 0x770470
// 008089b4  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008089b8  7540                 jne 0x8089fa
// 008089ba  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008089be  8b542414             mov edx, dword ptr [esp + 0x14]
// 008089c2  8d41ff               lea eax, [ecx - 1]
// 008089c5  3bd0                 cmp edx, eax
// 008089c7  7577                 jne 0x808a40
// 008089c9  8b442418             mov eax, dword ptr [esp + 0x18]
// 008089cd  3b442428             cmp eax, dword ptr [esp + 0x28]
// 008089d1  7d6d                 jge 0x808a40
// 008089d3  3b442420             cmp eax, dword ptr [esp + 0x20]
// 008089d7  7e67                 jle 0x808a40
// 008089d9  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008089dd  2bf9                 sub edi, ecx
// 008089df  8d0c7a               lea ecx, [edx + edi*2]
// 008089e2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008089e6  6a01                 push 1
// 008089e8  2bd1                 sub edx, ecx
// 008089ea  52                   push edx
// 008089eb  8b542418             mov edx, dword ptr [esp + 0x18]
// 008089ef  2bc2                 sub eax, edx
// 008089f1  50                   push eax
// 008089f2  51                   push ecx
// 008089f3  894c2424             mov dword ptr [esp + 0x24], ecx
// 008089f7  52                   push edx
// 008089f8  eb3f                 jmp 0x808a39
// 008089fa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008089fe  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00808a02  8d41ff               lea eax, [ecx - 1]
// 00808a05  3bf8                 cmp edi, eax
// 00808a07  7537                 jne 0x808a40
// 00808a09  8b542414             mov edx, dword ptr [esp + 0x14]
// 00808a0d  3b542424             cmp edx, dword ptr [esp + 0x24]
// 00808a11  7e2d                 jle 0x808a40
// 00808a13  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00808a17  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00808a1b  7d23                 jge 0x808a40
// 00808a1d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00808a21  6a01                 push 1
// 00808a23  2bc2                 sub eax, edx
// 00808a25  50                   push eax
// 00808a26  8b442420             mov eax, dword ptr [esp + 0x20]
// 00808a2a  2be9                 sub ebp, ecx
// 00808a2c  8d4c6fff             lea ecx, [edi + ebp*2 - 1]
// 00808a30  2bc1                 sub eax, ecx
// 00808a32  50                   push eax
// 00808a33  52                   push edx
// 00808a34  894c2420             mov dword ptr [esp + 0x20], ecx
// 00808a38  51                   push ecx
// 00808a39  8bce                 mov ecx, esi
// 00808a3b  e8ca03f1ff           call 0x718e0a
// 00808a40  85db                 test ebx, ebx
// 00808a42  0f854affffff         jne 0x808992
// 00808a48  5f                   pop edi
// 00808a49  5d                   pop ebp
// 00808a4a  5e                   pop esi
// 00808a4b  5b                   pop ebx
// 00808a4c  83c420               add esp, 0x20
// 00808a4f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?LongShadow@CXTShadowWnd@@IAEXPAVCShadowList@CXTShadowsManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
