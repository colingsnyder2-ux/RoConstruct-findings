// roc 2007-08 005919b0  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005919b0
//
// 005919b0  83ec28               sub esp, 0x28
// 005919b3  56                   push esi
// 005919b4  8bf1                 mov esi, ecx
// 005919b6  e835e5f6ff           call 0x4ffef0
// 005919bb  dd542414             fst qword ptr [esp + 0x14]
// 005919bf  dd06                 fld qword ptr [esi]
// 005919c1  dc8610000200         fadd qword ptr [esi + 0x20010]
// 005919c7  ded9                 fcompp 
// 005919c9  dfe0                 fnstsw ax
// 005919cb  f6c441               test ah, 0x41
// 005919ce  0f8ac7000000         jp 0x591a9b
// 005919d4  8d44240c             lea eax, [esp + 0xc]
// 005919d8  50                   push eax
// 005919d9  8d4c2408             lea ecx, [esp + 8]
// 005919dd  51                   push ecx
// 005919de  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005919e2  8d542424             lea edx, [esp + 0x24]
// 005919e6  52                   push edx
// 005919e7  8d442430             lea eax, [esp + 0x30]
// 005919eb  50                   push eax
// 005919ec  51                   push ecx
// 005919ed  ff151cd37700         call dword ptr [0x77d31c]
// 005919f3  85c0                 test eax, eax
// 005919f5  0f84a0000000         je 0x591a9b
// 005919fb  80be3800020000       cmp byte ptr [esi + 0x20038], 0
// 00591a02  8b442408             mov eax, dword ptr [esp + 8]
// 00591a06  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00591a0a  53                   push ebx
// 00591a0b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00591a0f  57                   push edi
// 00591a10  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00591a14  7446                 je 0x591a5c
// 00591a16  8b5608               mov edx, dword ptr [esi + 8]
// 00591a19  dd44241c             fld qword ptr [esp + 0x1c]
// 00591a1d  dca610000200         fsub qword ptr [esi + 0x20010]
// 00591a23  c1e205               shl edx, 5
// 00591a26  dd5c3210             fstp qword ptr [edx + esi + 0x10]
// 00591a2a  8b5608               mov edx, dword ptr [esi + 8]
// 00591a2d  c1e205               shl edx, 5
// 00591a30  017c3218             add dword ptr [edx + esi + 0x18], edi
// 00591a34  8d543218             lea edx, [edx + esi + 0x18]
// 00591a38  114204               adc dword ptr [edx + 4], eax
// 00591a3b  8b5608               mov edx, dword ptr [esi + 8]
// 00591a3e  83c201               add edx, 1
// 00591a41  c1e205               shl edx, 5
// 00591a44  03d6                 add edx, esi
// 00591a46  011a                 add dword ptr [edx], ebx
// 00591a48  114a04               adc dword ptr [edx + 4], ecx
// 00591a4b  8b5608               mov edx, dword ptr [esi + 8]
// 00591a4e  83c201               add edx, 1
// 00591a51  81e2ff0f0000         and edx, 0xfff
// 00591a57  895608               mov dword ptr [esi + 8], edx
// 00591a5a  eb07                 jmp 0x591a63
// 00591a5c  c6863800020001       mov byte ptr [esi + 0x20038], 1
// 00591a63  8b5608               mov edx, dword ptr [esi + 8]
// 00591a66  dd44241c             fld qword ptr [esp + 0x1c]
// 00591a6a  f7df                 neg edi
// 00591a6c  dd9e10000200         fstp qword ptr [esi + 0x20010]
// 00591a72  83d000               adc eax, 0
// 00591a75  f7d8                 neg eax
// 00591a77  c1e205               shl edx, 5
// 00591a7a  897c3218             mov dword ptr [edx + esi + 0x18], edi
// 00591a7e  8944321c             mov dword ptr [edx + esi + 0x1c], eax
// 00591a82  8b4608               mov eax, dword ptr [esi + 8]
// 00591a85  f7db                 neg ebx
// 00591a87  83d100               adc ecx, 0
// 00591a8a  f7d9                 neg ecx
// 00591a8c  83c001               add eax, 1
// 00591a8f  c1e005               shl eax, 5
// 00591a92  891c30               mov dword ptr [eax + esi], ebx
// 00591a95  5f                   pop edi
// 00591a96  894c3004             mov dword ptr [eax + esi + 4], ecx
// 00591a9a  5b                   pop ebx
// 00591a9b  5e                   pop esi
// 00591a9c  83c428               add esp, 0x28
// 00591a9f  c20400               ret 4
// library rbxgs/util\Profiling.cpp (function ?sample@ThreadProfiler@Profiling@RBX@@QAEXPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Profiling.cpp
