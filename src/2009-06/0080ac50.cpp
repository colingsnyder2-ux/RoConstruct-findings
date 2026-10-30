// roc 2009-06 0080ac50  unit: CXTCaptionButton  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ac50
//
// 0080ac50  56                   push esi
// 0080ac51  8bf1                 mov esi, ecx
// 0080ac53  8b06                 mov eax, dword ptr [esi]
// 0080ac55  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0080ac5b  ffd2                 call edx
// 0080ac5d  85c0                 test eax, eax
// 0080ac5f  7411                 je 0x80ac72
// 0080ac61  8bce                 mov ecx, esi
// 0080ac63  e80865f8ff           call 0x791170
// 0080ac68  8b10                 mov edx, dword ptr [eax]
// 0080ac6a  8bc8                 mov ecx, eax
// 0080ac6c  8b4230               mov eax, dword ptr [edx + 0x30]
// 0080ac6f  5e                   pop esi
// 0080ac70  ffe0                 jmp eax
// 0080ac72  e8a99ef4ff           call 0x754b20
// 0080ac77  6a0f                 push 0xf
// 0080ac79  8bc8                 mov ecx, eax
// 0080ac7b  e82096f4ff           call 0x7542a0
// 0080ac80  5e                   pop esi
// 0080ac81  c3                   ret 
// copied from an identical function in another client (function ?GetColorFace@CXTButton@@UAEKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp