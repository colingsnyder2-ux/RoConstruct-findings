// roc 2011-06 0089ac20  unit: XTPPaintThemes::CXTPOfficeTheme  size: 513 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089ac20
//
// 0089ac20  83ec20               sub esp, 0x20
// 0089ac23  53                   push ebx
// 0089ac24  55                   push ebp
// 0089ac25  56                   push esi
// 0089ac26  57                   push edi
// 0089ac27  6a1e                 push 0x1e
// 0089ac29  8bd9                 mov ebx, ecx
// 0089ac2b  e88049f7ff           call 0x80f5b0
// 0089ac30  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0089ac34  50                   push eax
// 0089ac35  8d44243c             lea eax, [esp + 0x3c]
// 0089ac39  50                   push eax
// 0089ac3a  8bcd                 mov ecx, ebp
// 0089ac3c  e8df01f7ff           call 0x80ae20
// 0089ac41  8b742440             mov esi, dword ptr [esp + 0x40]
// 0089ac45  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089ac49  8d0431               lea eax, [ecx + esi]
// 0089ac4c  99                   cdq 
// 0089ac4d  2bc2                 sub eax, edx
// 0089ac4f  d1f8                 sar eax, 1
// 0089ac51  837c244802           cmp dword ptr [esp + 0x48], 2
// 0089ac56  0f858e000000         jne 0x89acea
// 0089ac5c  8d70f8               lea esi, [eax - 8]
// 0089ac5f  8d7808               lea edi, [eax + 8]
// 0089ac62  3bf7                 cmp esi, edi
// 0089ac64  0f8dad010000         jge 0x89ae17
// 0089ac6a  8d9b00000000         lea ebx, [ebx]
// 0089ac70  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0089ac74  8d4804               lea ecx, [eax + 4]
// 0089ac77  8d5601               lea edx, [esi + 1]
// 0089ac7a  89542410             mov dword ptr [esp + 0x10], edx
// 0089ac7e  894c2414             mov dword ptr [esp + 0x14], ecx
// 0089ac82  8d5603               lea edx, [esi + 3]
// 0089ac85  83c006               add eax, 6
// 0089ac88  6a05                 push 5
// 0089ac8a  8bcb                 mov ecx, ebx
// 0089ac8c  8954241c             mov dword ptr [esp + 0x1c], edx
// 0089ac90  89442420             mov dword ptr [esp + 0x20], eax
// 0089ac94  e81749f7ff           call 0x80f5b0
// 0089ac99  50                   push eax
// 0089ac9a  8d442414             lea eax, [esp + 0x14]
// 0089ac9e  50                   push eax
// 0089ac9f  8bcd                 mov ecx, ebp
// 0089aca1  e87a01f7ff           call 0x80ae20
// 0089aca6  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0089acaa  8d4803               lea ecx, [eax + 3]
// 0089acad  894c2424             mov dword ptr [esp + 0x24], ecx
// 0089acb1  8d5602               lea edx, [esi + 2]
// 0089acb4  83c005               add eax, 5
// 0089acb7  6a26                 push 0x26
// 0089acb9  8bcb                 mov ecx, ebx
// 0089acbb  89742424             mov dword ptr [esp + 0x24], esi
// 0089acbf  8954242c             mov dword ptr [esp + 0x2c], edx
// 0089acc3  89442430             mov dword ptr [esp + 0x30], eax
// 0089acc7  e8e448f7ff           call 0x80f5b0
// 0089accc  50                   push eax
// 0089accd  8d442424             lea eax, [esp + 0x24]
// 0089acd1  50                   push eax
// 0089acd2  8bcd                 mov ecx, ebp
// 0089acd4  e84701f7ff           call 0x80ae20
// 0089acd9  83c604               add esi, 4
// 0089acdc  3bf7                 cmp esi, edi
// 0089acde  7c90                 jl 0x89ac70
// 0089ace0  5f                   pop edi
// 0089ace1  5e                   pop esi
// 0089ace2  5d                   pop ebp
// 0089ace3  5b                   pop ebx
// 0089ace4  83c420               add esp, 0x20
// 0089ace7  c21800               ret 0x18
// 0089acea  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0089acee  83c7fc               add edi, -4
// 0089acf1  83c6fc               add esi, -4
// 0089acf4  8d4701               lea eax, [edi + 1]
// 0089acf7  8d4e01               lea ecx, [esi + 1]
// 0089acfa  89442424             mov dword ptr [esp + 0x24], eax
// 0089acfe  894c2420             mov dword ptr [esp + 0x20], ecx
// 0089ad02  8d5603               lea edx, [esi + 3]
// 0089ad05  8d4703               lea eax, [edi + 3]
// 0089ad08  6a05                 push 5
// 0089ad0a  8bcb                 mov ecx, ebx
// 0089ad0c  8954242c             mov dword ptr [esp + 0x2c], edx
// 0089ad10  89442430             mov dword ptr [esp + 0x30], eax
// 0089ad14  e89748f7ff           call 0x80f5b0
// 0089ad19  50                   push eax
// 0089ad1a  8d442424             lea eax, [esp + 0x24]
// 0089ad1e  50                   push eax
// 0089ad1f  8bcd                 mov ecx, ebp
// 0089ad21  e8fa00f7ff           call 0x80ae20
// 0089ad26  8d4e02               lea ecx, [esi + 2]
// 0089ad29  894c2428             mov dword ptr [esp + 0x28], ecx
// 0089ad2d  8d4702               lea eax, [edi + 2]
// 0089ad30  6a26                 push 0x26
// 0089ad32  8bcb                 mov ecx, ebx
// 0089ad34  89742424             mov dword ptr [esp + 0x24], esi
// 0089ad38  897c2428             mov dword ptr [esp + 0x28], edi
// 0089ad3c  89442430             mov dword ptr [esp + 0x30], eax
// 0089ad40  e86b48f7ff           call 0x80f5b0
// 0089ad45  50                   push eax
// 0089ad46  8d542424             lea edx, [esp + 0x24]
// 0089ad4a  52                   push edx
// 0089ad4b  8bcd                 mov ecx, ebp
// 0089ad4d  e8ce00f7ff           call 0x80ae20
// 0089ad52  83ee04               sub esi, 4
// 0089ad55  8d4601               lea eax, [esi + 1]
// 0089ad58  89442420             mov dword ptr [esp + 0x20], eax
// 0089ad5c  8d4701               lea eax, [edi + 1]
// 0089ad5f  8d4e03               lea ecx, [esi + 3]
// 0089ad62  89442424             mov dword ptr [esp + 0x24], eax
// 0089ad66  894c2428             mov dword ptr [esp + 0x28], ecx
// 0089ad6a  8d4703               lea eax, [edi + 3]
// 0089ad6d  6a05                 push 5
// 0089ad6f  8bcb                 mov ecx, ebx
// 0089ad71  89442430             mov dword ptr [esp + 0x30], eax
// 0089ad75  e83648f7ff           call 0x80f5b0
// 0089ad7a  50                   push eax
// 0089ad7b  8d542424             lea edx, [esp + 0x24]
// 0089ad7f  52                   push edx
// 0089ad80  8bcd                 mov ecx, ebp
// 0089ad82  e89900f7ff           call 0x80ae20
// 0089ad87  8d4602               lea eax, [esi + 2]
// 0089ad8a  89442428             mov dword ptr [esp + 0x28], eax
// 0089ad8e  8d4702               lea eax, [edi + 2]
// 0089ad91  6a26                 push 0x26
// 0089ad93  8bcb                 mov ecx, ebx
// 0089ad95  89742424             mov dword ptr [esp + 0x24], esi
// 0089ad99  897c2428             mov dword ptr [esp + 0x28], edi
// 0089ad9d  89442430             mov dword ptr [esp + 0x30], eax
// 0089ada1  e80a48f7ff           call 0x80f5b0
// 0089ada6  50                   push eax
// 0089ada7  8d4c2424             lea ecx, [esp + 0x24]
// 0089adab  51                   push ecx
// 0089adac  8bcd                 mov ecx, ebp
// 0089adae  e86d00f7ff           call 0x80ae20
// 0089adb3  83c604               add esi, 4
// 0089adb6  83ef04               sub edi, 4
// 0089adb9  8d5601               lea edx, [esi + 1]
// 0089adbc  8d4e03               lea ecx, [esi + 3]
// 0089adbf  89542420             mov dword ptr [esp + 0x20], edx
// 0089adc3  8d4701               lea eax, [edi + 1]
// 0089adc6  894c2428             mov dword ptr [esp + 0x28], ecx
// 0089adca  8d5703               lea edx, [edi + 3]
// 0089adcd  6a05                 push 5
// 0089adcf  8bcb                 mov ecx, ebx
// 0089add1  89442428             mov dword ptr [esp + 0x28], eax
// 0089add5  89542430             mov dword ptr [esp + 0x30], edx
// 0089add9  e8d247f7ff           call 0x80f5b0
// 0089adde  50                   push eax
// 0089addf  8d442424             lea eax, [esp + 0x24]
// 0089ade3  50                   push eax
// 0089ade4  8bcd                 mov ecx, ebp
// 0089ade6  e83500f7ff           call 0x80ae20
// 0089adeb  89742420             mov dword ptr [esp + 0x20], esi
// 0089adef  897c2424             mov dword ptr [esp + 0x24], edi
// 0089adf3  83c602               add esi, 2
// 0089adf6  83c702               add edi, 2
// 0089adf9  6a26                 push 0x26
// 0089adfb  8bcb                 mov ecx, ebx
// 0089adfd  8974242c             mov dword ptr [esp + 0x2c], esi
// 0089ae01  897c2430             mov dword ptr [esp + 0x30], edi
// 0089ae05  e8a647f7ff           call 0x80f5b0
// 0089ae0a  50                   push eax
// 0089ae0b  8d4c2424             lea ecx, [esp + 0x24]
// 0089ae0f  51                   push ecx
// 0089ae10  8bcd                 mov ecx, ebp
// 0089ae12  e80900f7ff           call 0x80ae20
// 0089ae17  5f                   pop edi
// 0089ae18  5e                   pop esi
// 0089ae19  5d                   pop ebp
// 0089ae1a  5b                   pop ebx
// 0089ae1b  83c420               add esp, 0x20
// 0089ae1e  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawPopupResizeGripper@CXTPOfficeTheme@@UAEXPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPOfficeTheme.cpp
