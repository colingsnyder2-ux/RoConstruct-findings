// roc 2007-03 0056ce90  unit: seg_00560000  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056ce90
//
// 0056ce90  6aff                 push -1
// 0056ce92  68985d7500           push 0x755d98
// 0056ce97  64a100000000         mov eax, dword ptr fs:[0]
// 0056ce9d  50                   push eax
// 0056ce9e  64892500000000       mov dword ptr fs:[0], esp
// 0056cea5  83ec10               sub esp, 0x10
// 0056cea8  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056ceac  53                   push ebx
// 0056cead  56                   push esi
// 0056ceae  8bf1                 mov esi, ecx
// 0056ceb0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0056ceb4  89442408             mov dword ptr [esp + 8], eax
// 0056ceb8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0056cebc  8b10                 mov edx, dword ptr [eax]
// 0056cebe  894c240c             mov dword ptr [esp + 0xc], ecx
// 0056cec2  8b4804               mov ecx, dword ptr [eax + 4]
// 0056cec5  85c9                 test ecx, ecx
// 0056cec7  57                   push edi
// 0056cec8  89542414             mov dword ptr [esp + 0x14], edx
// 0056cecc  7409                 je 0x56ced7
// 0056cece  8b01                 mov eax, dword ptr [ecx]
// 0056ced0  8b5008               mov edx, dword ptr [eax + 8]
// 0056ced3  ffd2                 call edx
// 0056ced5  eb02                 jmp 0x56ced9
// 0056ced7  33c0                 xor eax, eax
// 0056ced9  89442418             mov dword ptr [esp + 0x18], eax
// 0056cedd  8b7e08               mov edi, dword ptr [esi + 8]
// 0056cee0  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056cee3  83c604               add esi, 4
// 0056cee6  8d44240c             lea eax, [esp + 0xc]
// 0056ceea  50                   push eax
// 0056ceeb  51                   push ecx
// 0056ceec  57                   push edi
// 0056ceed  8bce                 mov ecx, esi
// 0056ceef  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0056cef7  e8a493eaff           call 0x4162a0
// 0056cefc  6a01                 push 1
// 0056cefe  8bce                 mov ecx, esi
// 0056cf00  8bd8                 mov ebx, eax
// 0056cf02  e87987eaff           call 0x415680
// 0056cf07  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056cf0b  85c9                 test ecx, ecx
// 0056cf0d  895f04               mov dword ptr [edi + 4], ebx
// 0056cf10  8b4304               mov eax, dword ptr [ebx + 4]
// 0056cf13  5f                   pop edi
// 0056cf14  5e                   pop esi
// 0056cf15  8918                 mov dword ptr [eax], ebx
// 0056cf17  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0056cf1f  5b                   pop ebx
// 0056cf20  7408                 je 0x56cf2a
// 0056cf22  8b11                 mov edx, dword ptr [ecx]
// 0056cf24  8b02                 mov eax, dword ptr [edx]
// 0056cf26  6a01                 push 1
// 0056cf28  ffd0                 call eax
// 0056cf2a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056cf2e  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cf35  83c41c               add esp, 0x1c
// 0056cf38  c20c00               ret 0xc
// library rbxgs/reflection\type.cpp (function ?addArgument@SignatureDescriptor@Reflection@RBX@@QAEXABVName@3@ABVType@23@ABVValue@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
