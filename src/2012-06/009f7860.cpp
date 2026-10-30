// roc 2012-06 009f7860  unit: CXTCaption  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f7860
//
// 009f7860  83ec10               sub esp, 0x10
// 009f7863  56                   push esi
// 009f7864  8bf1                 mov esi, ecx
// 009f7866  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 009f786c  50                   push eax
// 009f786d  ff15143bb200         call dword ptr [0xb23b14]
// 009f7873  85c0                 test eax, eax
// 009f7875  744b                 je 0x9f78c2
// 009f7877  53                   push ebx
// 009f7878  57                   push edi
// 009f7879  8d8ed0000000         lea ecx, [esi + 0xd0]
// 009f787f  8dbedc000000         lea edi, [esi + 0xdc]
// 009f7885  ff159847b200         call dword ptr [0xb24798]
// 009f788b  50                   push eax
// 009f788c  8bcf                 mov ecx, edi
// 009f788e  e829acf8ff           call 0x9824bc
// 009f7893  8b16                 mov edx, dword ptr [esi]
// 009f7895  8b927c010000         mov edx, dword ptr [edx + 0x17c]
// 009f789b  8d44240c             lea eax, [esp + 0xc]
// 009f789f  50                   push eax
// 009f78a0  8bce                 mov ecx, esi
// 009f78a2  ffd2                 call edx
// 009f78a4  8b4804               mov ecx, dword ptr [eax + 4]
// 009f78a7  8b580c               mov ebx, dword ptr [eax + 0xc]
// 009f78aa  8b10                 mov edx, dword ptr [eax]
// 009f78ac  8b4008               mov eax, dword ptr [eax + 8]
// 009f78af  6a01                 push 1
// 009f78b1  2bd9                 sub ebx, ecx
// 009f78b3  53                   push ebx
// 009f78b4  2bc2                 sub eax, edx
// 009f78b6  50                   push eax
// 009f78b7  51                   push ecx
// 009f78b8  52                   push edx
// 009f78b9  8bcf                 mov ecx, edi
// 009f78bb  e81aacf8ff           call 0x9824da
// 009f78c0  5f                   pop edi
// 009f78c1  5b                   pop ebx
// 009f78c2  8b16                 mov edx, dword ptr [esi]
// 009f78c4  8b442418             mov eax, dword ptr [esp + 0x18]
// 009f78c8  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 009f78ce  50                   push eax
// 009f78cf  8bce                 mov ecx, esi
// 009f78d1  ffd2                 call edx
// 009f78d3  5e                   pop esi
// 009f78d4  83c410               add esp, 0x10
// 009f78d7  c20400               ret 4
// copied from an identical function in another client (function ?UpdateCaptionText@CXTCaption@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp