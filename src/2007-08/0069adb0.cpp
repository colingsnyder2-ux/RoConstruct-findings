// from server: 100% by auto
// roc 2007-08 0069adb0  unit: CXTPPropertyGridView  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069adb0
//
// 0069adb0  56                   push esi
// 0069adb1  8b742408             mov esi, dword ptr [esp + 8]
// 0069adb5  85f6                 test esi, esi
// 0069adb7  57                   push edi
// 0069adb8  8bf9                 mov edi, ecx
// 0069adba  7d05                 jge 0x69adc1
// 0069adbc  e85f51f9ff           call 0x62ff20
// 0069adc1  3b7708               cmp esi, dword ptr [edi + 8]
// 0069adc4  7c0b                 jl 0x69add1
// 0069adc6  6aff                 push -1
// 0069adc8  8d4601               lea eax, [esi + 1]
// 0069adcb  50                   push eax
// 0069adcc  e87ffeffff           call 0x69ac50
// 0069add1  8b5704               mov edx, dword ptr [edi + 4]
// 0069add4  8d0cb6               lea ecx, [esi + esi*4]
// 0069add7  8d048a               lea eax, [edx + ecx*4]
// 0069adda  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069adde  8b11                 mov edx, dword ptr [ecx]
// 0069ade0  8910                 mov dword ptr [eax], edx
// 0069ade2  8b5104               mov edx, dword ptr [ecx + 4]
// 0069ade5  895004               mov dword ptr [eax + 4], edx
// 0069ade8  8b5108               mov edx, dword ptr [ecx + 8]
// 0069adeb  895008               mov dword ptr [eax + 8], edx
// 0069adee  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0069adf1  89500c               mov dword ptr [eax + 0xc], edx
// 0069adf4  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0069adf7  5f                   pop edi
// 0069adf8  894810               mov dword ptr [eax + 0x10], ecx
// 0069adfb  5e                   pop esi
// 0069adfc  c20800               ret 8
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetAtGrow@?$CArray@UWNDRECT@CXTPPropertyGridView@@AAU12@@@QAEXHAAUWNDRECT@CXTPPropertyGridView@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
