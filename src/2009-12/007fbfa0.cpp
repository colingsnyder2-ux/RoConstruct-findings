// roc 2009-12 007fbfa0  unit: CXTPControlComboBox  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fbfa0
//
// 007fbfa0  6aff                 push -1
// 007fbfa2  68a98e9500           push 0x958ea9
// 007fbfa7  64a100000000         mov eax, dword ptr fs:[0]
// 007fbfad  50                   push eax
// 007fbfae  51                   push ecx
// 007fbfaf  53                   push ebx
// 007fbfb0  56                   push esi
// 007fbfb1  57                   push edi
// 007fbfb2  a10052b600           mov eax, dword ptr [0xb65200]
// 007fbfb7  33c4                 xor eax, esp
// 007fbfb9  50                   push eax
// 007fbfba  8d442414             lea eax, [esp + 0x14]
// 007fbfbe  64a300000000         mov dword ptr fs:[0], eax
// 007fbfc4  8bf9                 mov edi, ecx
// 007fbfc6  8b9f84010000         mov ebx, dword ptr [edi + 0x184]
// 007fbfcc  e82feaffff           call 0x7faa00
// 007fbfd1  83bfdc01000000       cmp dword ptr [edi + 0x1dc], 0
// 007fbfd8  8bf0                 mov esi, eax
// 007fbfda  0f85a8000000         jne 0x7fc088
// 007fbfe0  85db                 test ebx, ebx
// 007fbfe2  0f84a0000000         je 0x7fc088
// 007fbfe8  837b2000             cmp dword ptr [ebx + 0x20], 0
// 007fbfec  0f8496000000         je 0x7fc088
// 007fbff2  85f6                 test esi, esi
// 007fbff4  0f848e000000         je 0x7fc088
// 007fbffa  8d442410             lea eax, [esp + 0x10]
// 007fbffe  50                   push eax
// 007fbfff  8bcf                 mov ecx, edi
// 007fc001  e8fae2ffff           call 0x7fa300
// 007fc006  8b3e                 mov edi, dword ptr [esi]
// 007fc008  8d4c2410             lea ecx, [esp + 0x10]
// 007fc00c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007fc014  ff1580de9800         call dword ptr [0x98de80]
// 007fc01a  8b9718020000         mov edx, dword ptr [edi + 0x218]
// 007fc020  50                   push eax
// 007fc021  6a00                 push 0
// 007fc023  8bce                 mov ecx, esi
// 007fc025  ffd2                 call edx
// 007fc027  83f8ff               cmp eax, -1
// 007fc02a  740f                 je 0x7fc03b
// 007fc02c  8b16                 mov edx, dword ptr [esi]
// 007fc02e  50                   push eax
// 007fc02f  8b8220020000         mov eax, dword ptr [edx + 0x220]
// 007fc035  8bce                 mov ecx, esi
// 007fc037  ffd0                 call eax
// 007fc039  eb43                 jmp 0x7fc07e
// 007fc03b  8b3e                 mov edi, dword ptr [esi]
// 007fc03d  8d4c2410             lea ecx, [esp + 0x10]
// 007fc041  ff1580de9800         call dword ptr [0x98de80]
// 007fc047  8b9714020000         mov edx, dword ptr [edi + 0x214]
// 007fc04d  50                   push eax
// 007fc04e  6a00                 push 0
// 007fc050  8bce                 mov ecx, esi
// 007fc052  ffd2                 call edx
// 007fc054  8bf8                 mov edi, eax
// 007fc056  8b06                 mov eax, dword ptr [esi]
// 007fc058  8b901c020000         mov edx, dword ptr [eax + 0x21c]
// 007fc05e  57                   push edi
// 007fc05f  8bce                 mov ecx, esi
// 007fc061  ffd2                 call edx
// 007fc063  8b06                 mov eax, dword ptr [esi]
// 007fc065  8b9020020000         mov edx, dword ptr [eax + 0x220]
// 007fc06b  57                   push edi
// 007fc06c  8bce                 mov ecx, esi
// 007fc06e  ffd2                 call edx
// 007fc070  8b06                 mov eax, dword ptr [esi]
// 007fc072  8b9020020000         mov edx, dword ptr [eax + 0x220]
// 007fc078  6aff                 push -1
// 007fc07a  8bce                 mov ecx, esi
// 007fc07c  ffd2                 call edx
// 007fc07e  8d4c2410             lea ecx, [esp + 0x10]
// 007fc082  ff15c0de9800         call dword ptr [0x98dec0]
// 007fc088  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fc08c  64890d00000000       mov dword ptr fs:[0], ecx
// 007fc093  59                   pop ecx
// 007fc094  5f                   pop edi
// 007fc095  5e                   pop esi
// 007fc096  5b                   pop ebx
// 007fc097  83c410               add esp, 0x10
// 007fc09a  c3                   ret 
// copied from an identical function in another client (function ?UpdatePopupSelection@CXTPControlComboBox@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp