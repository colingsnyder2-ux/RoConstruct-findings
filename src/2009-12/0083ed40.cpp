// roc 2009-12 0083ed40  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 607 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ed40
//
// 0083ed40  6aff                 push -1
// 0083ed42  68a0ca9500           push 0x95caa0
// 0083ed47  64a100000000         mov eax, dword ptr fs:[0]
// 0083ed4d  50                   push eax
// 0083ed4e  83ec64               sub esp, 0x64
// 0083ed51  53                   push ebx
// 0083ed52  55                   push ebp
// 0083ed53  56                   push esi
// 0083ed54  57                   push edi
// 0083ed55  a10052b600           mov eax, dword ptr [0xb65200]
// 0083ed5a  33c4                 xor eax, esp
// 0083ed5c  50                   push eax
// 0083ed5d  8d442478             lea eax, [esp + 0x78]
// 0083ed61  64a300000000         mov dword ptr fs:[0], eax
// 0083ed67  8be9                 mov ebp, ecx
// 0083ed69  8b85b8000000         mov eax, dword ptr [ebp + 0xb8]
// 0083ed6f  8b7058               mov esi, dword ptr [eax + 0x58]
// 0083ed72  85f6                 test esi, esi
// 0083ed74  0f8411020000         je 0x83ef8b
// 0083ed7a  8d4c242c             lea ecx, [esp + 0x2c]
// 0083ed7e  e835790e00           call 0x9266b8
// 0083ed83  8d4c242c             lea ecx, [esp + 0x2c]
// 0083ed87  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 0083ed92  e81b790e00           call 0x9266b2
// 0083ed97  85c0                 test eax, eax
// 0083ed99  0f84d8010000         je 0x83ef77
// 0083ed9f  8b8db8000000         mov ecx, dword ptr [ebp + 0xb8]
// 0083eda5  e85659fdff           call 0x814700
// 0083edaa  0fb70db0adb900       movzx ecx, word ptr [0xb9adb0]
// 0083edb1  6a00                 push 0
// 0083edb3  51                   push ecx
// 0083edb4  8d4c2434             lea ecx, [esp + 0x34]
// 0083edb8  e83759fbff           call 0x7f46f4
// 0083edbd  85c0                 test eax, eax
// 0083edbf  743a                 je 0x83edfb
// 0083edc1  8b8db8000000         mov ecx, dword ptr [ebp + 0xb8]
// 0083edc7  8d54242c             lea edx, [esp + 0x2c]
// 0083edcb  52                   push edx
// 0083edcc  e82f59fdff           call 0x814700
// 0083edd1  8bc8                 mov ecx, eax
// 0083edd3  e88815fdff           call 0x810360
// 0083edd8  85c0                 test eax, eax
// 0083edda  0f8497010000         je 0x83ef77
// 0083ede0  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083ede6  898690000000         mov dword ptr [esi + 0x90], eax
// 0083edec  8b01                 mov eax, dword ptr [ecx]
// 0083edee  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0083edf4  ffd2                 call edx
// 0083edf6  e97c010000           jmp 0x83ef77
// 0083edfb  6a00                 push 0
// 0083edfd  6a02                 push 2
// 0083edff  8d4c2434             lea ecx, [esp + 0x34]
// 0083ee03  e8ec58fbff           call 0x7f46f4
// 0083ee08  8d4c242c             lea ecx, [esp + 0x2c]
// 0083ee0c  85c0                 test eax, eax
// 0083ee0e  0f8467010000         je 0x83ef7b
// 0083ee14  6a00                 push 0
// 0083ee16  8d442424             lea eax, [esp + 0x24]
// 0083ee1a  50                   push eax
// 0083ee1b  6a02                 push 2
// 0083ee1d  e8f8790e00           call 0x92681a
// 0083ee22  85c0                 test eax, eax
// 0083ee24  0f844d010000         je 0x83ef77
// 0083ee2a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0083ee2e  51                   push ecx
// 0083ee2f  e83055fbff           call 0x7f4364
// 0083ee34  8bf8                 mov edi, eax
// 0083ee36  85ff                 test edi, edi
// 0083ee38  0f8439010000         je 0x83ef77
// 0083ee3e  8d4c2454             lea ecx, [esp + 0x54]
// 0083ee42  e8e9b9fcff           call 0x80a830
// 0083ee47  bb01000000           mov ebx, 1
// 0083ee4c  889c2480000000       mov byte ptr [esp + 0x80], bl
// 0083ee53  e85816fdff           call 0x8104b0
// 0083ee58  0fb715b4adb900       movzx edx, word ptr [0xb9adb4]
// 0083ee5f  6a00                 push 0
// 0083ee61  52                   push edx
// 0083ee62  8d4c2434             lea ecx, [esp + 0x34]
// 0083ee66  e88958fbff           call 0x7f46f4
// 0083ee6b  85c0                 test eax, eax
// 0083ee6d  7413                 je 0x83ee82
// 0083ee6f  8b442424             mov eax, dword ptr [esp + 0x24]
// 0083ee73  50                   push eax
// 0083ee74  8d4c2458             lea ecx, [esp + 0x58]
// 0083ee78  e893defcff           call 0x80cd10
// 0083ee7d  e98d000000           jmp 0x83ef0f
// 0083ee82  8b5704               mov edx, dword ptr [edi + 4]
// 0083ee85  8d4c243c             lea ecx, [esp + 0x3c]
// 0083ee89  51                   push ecx
// 0083ee8a  6a18                 push 0x18
// 0083ee8c  52                   push edx
// 0083ee8d  ff155cb19800         call dword ptr [0x98b15c]
// 0083ee93  8d4c2418             lea ecx, [esp + 0x18]
// 0083ee97  e87451fbff           call 0x7f4010
// 0083ee9c  8b442444             mov eax, dword ptr [esp + 0x44]
// 0083eea0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0083eea4  53                   push ebx
// 0083eea5  6a00                 push 0
// 0083eea7  6a19                 push 0x19
// 0083eea9  50                   push eax
// 0083eeaa  51                   push ecx
// 0083eeab  8d4c242c             lea ecx, [esp + 0x2c]
// 0083eeaf  c684249400000002     mov byte ptr [esp + 0x94], 2
// 0083eeb7  e84e51fbff           call 0x7f400a
// 0083eebc  6a0f                 push 0xf
// 0083eebe  ff15d8ca9800         call dword ptr [0x98cad8]
// 0083eec4  50                   push eax
// 0083eec5  57                   push edi
// 0083eec6  8d4c2420             lea ecx, [esp + 0x20]
// 0083eeca  e87143bdff           call 0x413240
// 0083eecf  8d4c2418             lea ecx, [esp + 0x18]
// 0083eed3  e8b843c1ff           call 0x453290
// 0083eed8  8d4c2418             lea ecx, [esp + 0x18]
// 0083eedc  3bc3                 cmp eax, ebx
// 0083eede  740e                 je 0x83eeee
// 0083eee0  889c2480000000       mov byte ptr [esp + 0x80], bl
// 0083eee7  e80651fbff           call 0x7f3ff2
// 0083eeec  eb78                 jmp 0x83ef66
// 0083eeee  6a00                 push 0
// 0083eef0  e84baffcff           call 0x809e40
// 0083eef5  50                   push eax
// 0083eef6  8d4c2458             lea ecx, [esp + 0x58]
// 0083eefa  e861defcff           call 0x80cd60
// 0083eeff  8d4c2418             lea ecx, [esp + 0x18]
// 0083ef03  889c2480000000       mov byte ptr [esp + 0x80], bl
// 0083ef0a  e8e350fbff           call 0x7f3ff2
// 0083ef0f  8d4c2454             lea ecx, [esp + 0x54]
// 0083ef13  e888b9fcff           call 0x80a8a0
// 0083ef18  85c0                 test eax, eax
// 0083ef1a  754a                 jne 0x83ef66
// 0083ef1c  83ec24               sub esp, 0x24
// 0083ef1f  8d542478             lea edx, [esp + 0x78]
// 0083ef23  8bcc                 mov ecx, esp
// 0083ef25  89642438             mov dword ptr [esp + 0x38], esp
// 0083ef29  52                   push edx
// 0083ef2a  e811b9fcff           call 0x80a840
// 0083ef2f  8b8db8000000         mov ecx, dword ptr [ebp + 0xb8]
// 0083ef35  c68424a400000003     mov byte ptr [esp + 0xa4], 3
// 0083ef3d  e8be57fdff           call 0x814700
// 0083ef42  8bc8                 mov ecx, eax
// 0083ef44  889c24a4000000       mov byte ptr [esp + 0xa4], bl
// 0083ef4b  e8700bfdff           call 0x80fac0
// 0083ef50  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083ef56  898690000000         mov dword ptr [esi + 0x90], eax
// 0083ef5c  8b01                 mov eax, dword ptr [ecx]
// 0083ef5e  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0083ef64  ffd2                 call edx
// 0083ef66  8d4c2454             lea ecx, [esp + 0x54]
// 0083ef6a  c684248000000000     mov byte ptr [esp + 0x80], 0
// 0083ef72  e869defcff           call 0x80cde0
// 0083ef77  8d4c242c             lea ecx, [esp + 0x2c]
// 0083ef7b  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 0083ef86  e80f770e00           call 0x92669a
// 0083ef8b  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0083ef8f  64890d00000000       mov dword ptr fs:[0], ecx
// 0083ef96  59                   pop ecx
// 0083ef97  5f                   pop edi
// 0083ef98  5e                   pop esi
// 0083ef99  5d                   pop ebp
// 0083ef9a  5b                   pop ebx
// 0083ef9b  83c470               add esp, 0x70
// 0083ef9e  c3                   ret 
// copied from an identical function in another client (function ?OnCustomizePasteImage@CXTPCustomizeSheet@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp