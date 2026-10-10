// roc 2008-06 0073ad70  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 654 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073ad70
//
// 0073ad70  83ec30               sub esp, 0x30
// 0073ad73  56                   push esi
// 0073ad74  8b742440             mov esi, dword ptr [esp + 0x40]
// 0073ad78  8b06                 mov eax, dword ptr [esi]
// 0073ad7a  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 0073ad80  57                   push edi
// 0073ad81  8bf9                 mov edi, ecx
// 0073ad83  8bce                 mov ecx, esi
// 0073ad85  ffd2                 call edx
// 0073ad87  85c0                 test eax, eax
// 0073ad89  7426                 je 0x73adb1
// 0073ad8b  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0073ad8f  8b542440             mov edx, dword ptr [esp + 0x40]
// 0073ad93  8b07                 mov eax, dword ptr [edi]
// 0073ad95  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 0073ad9b  51                   push ecx
// 0073ad9c  56                   push esi
// 0073ad9d  8b742444             mov esi, dword ptr [esp + 0x44]
// 0073ada1  52                   push edx
// 0073ada2  56                   push esi
// 0073ada3  8bcf                 mov ecx, edi
// 0073ada5  ffd0                 call eax
// 0073ada7  5f                   pop edi
// 0073ada8  8bc6                 mov eax, esi
// 0073adaa  5e                   pop esi
// 0073adab  83c430               add esp, 0x30
// 0073adae  c21000               ret 0x10
// 0073adb1  8b5620               mov edx, dword ptr [esi + 0x20]
// 0073adb4  8d4c2408             lea ecx, [esp + 8]
// 0073adb8  51                   push ecx
// 0073adb9  52                   push edx
// 0073adba  ff15842d8000         call dword ptr [0x802d84]
// 0073adc0  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0073adc6  83f805               cmp eax, 5
// 0073adc9  752a                 jne 0x73adf5
// 0073adcb  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 0073add2  7521                 jne 0x73adf5
// 0073add4  8b442448             mov eax, dword ptr [esp + 0x48]
// 0073add8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0073addc  50                   push eax
// 0073addd  56                   push esi
// 0073adde  8b742444             mov esi, dword ptr [esp + 0x44]
// 0073ade2  51                   push ecx
// 0073ade3  56                   push esi
// 0073ade4  8bcf                 mov ecx, edi
// 0073ade6  e805560000           call 0x7403f0
// 0073adeb  5f                   pop edi
// 0073adec  8bc6                 mov eax, esi
// 0073adee  5e                   pop esi
// 0073adef  83c430               add esp, 0x30
// 0073adf2  c21000               ret 0x10
// 0073adf5  83f804               cmp eax, 4
// 0073adf8  7521                 jne 0x73ae1b
// 0073adfa  8b542448             mov edx, dword ptr [esp + 0x48]
// 0073adfe  8b442440             mov eax, dword ptr [esp + 0x40]
// 0073ae02  52                   push edx
// 0073ae03  56                   push esi
// 0073ae04  8b742444             mov esi, dword ptr [esp + 0x44]
// 0073ae08  50                   push eax
// 0073ae09  56                   push esi
// 0073ae0a  8bcf                 mov ecx, edi
// 0073ae0c  e8df550000           call 0x7403f0
// 0073ae11  5f                   pop edi
// 0073ae12  8bc6                 mov eax, esi
// 0073ae14  5e                   pop esi
// 0073ae15  83c430               add esp, 0x30
// 0073ae18  c21000               ret 0x10
// 0073ae1b  53                   push ebx
// 0073ae1c  83f803               cmp eax, 3
// 0073ae1f  0f84f9000000         je 0x73af1e
// 0073ae25  83f802               cmp eax, 2
// 0073ae28  0f84f0000000         je 0x73af1e
// 0073ae2e  85c0                 test eax, eax
// 0073ae30  7409                 je 0x73ae3b
// 0073ae32  83f801               cmp eax, 1
// 0073ae35  0f858f010000         jne 0x73afca
// 0073ae3b  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0073ae3f  85db                 test ebx, ebx
// 0073ae41  0f84bd000000         je 0x73af04
// 0073ae47  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0073ae4c  0f84b2000000         je 0x73af04
// 0073ae52  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073ae56  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0073ae5a  83e907               sub ecx, 7
// 0073ae5d  83f905               cmp ecx, 5
// 0073ae60  0f8e64010000         jle 0x73afca
// 0073ae66  be08000000           mov esi, 8
// 0073ae6b  eb03                 jmp 0x73ae70
// 0073ae6d  8d4900               lea ecx, [ecx]
// 0073ae70  8d56fe               lea edx, [esi - 2]
// 0073ae73  6a05                 push 5
// 0073ae75  8bcf                 mov ecx, edi
// 0073ae77  c744242007000000     mov dword ptr [esp + 0x20], 7
// 0073ae7f  89542424             mov dword ptr [esp + 0x24], edx
// 0073ae83  c744242809000000     mov dword ptr [esp + 0x28], 9
// 0073ae8b  8974242c             mov dword ptr [esp + 0x2c], esi
// 0073ae8f  e8dc31f7ff           call 0x6ae070
// 0073ae94  50                   push eax
// 0073ae95  8d442420             lea eax, [esp + 0x20]
// 0073ae99  50                   push eax
// 0073ae9a  8bcb                 mov ecx, ebx
// 0073ae9c  e8bd64f6ff           call 0x6a135e
// 0073aea1  8d4efd               lea ecx, [esi - 3]
// 0073aea4  894c2430             mov dword ptr [esp + 0x30], ecx
// 0073aea8  8d56ff               lea edx, [esi - 1]
// 0073aeab  6a26                 push 0x26
// 0073aead  8bcf                 mov ecx, edi
// 0073aeaf  c744243006000000     mov dword ptr [esp + 0x30], 6
// 0073aeb7  c744243808000000     mov dword ptr [esp + 0x38], 8
// 0073aebf  8954243c             mov dword ptr [esp + 0x3c], edx
// 0073aec3  e8a831f7ff           call 0x6ae070
// 0073aec8  50                   push eax
// 0073aec9  8d442430             lea eax, [esp + 0x30]
// 0073aecd  50                   push eax
// 0073aece  8bcb                 mov ecx, ebx
// 0073aed0  e88964f6ff           call 0x6a135e
// 0073aed5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073aed9  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0073aedd  83c604               add esi, 4
// 0073aee0  83e907               sub ecx, 7
// 0073aee3  8d56fd               lea edx, [esi - 3]
// 0073aee6  3bd1                 cmp edx, ecx
// 0073aee8  7c86                 jl 0x73ae70
// 0073aeea  8b442440             mov eax, dword ptr [esp + 0x40]
// 0073aeee  5b                   pop ebx
// 0073aeef  5f                   pop edi
// 0073aef0  c7400400000000       mov dword ptr [eax + 4], 0
// 0073aef7  c70000000000         mov dword ptr [eax], 0
// 0073aefd  5e                   pop esi
// 0073aefe  83c430               add esp, 0x30
// 0073af01  c21000               ret 0x10
// 0073af04  8b442440             mov eax, dword ptr [esp + 0x40]
// 0073af08  5b                   pop ebx
// 0073af09  5f                   pop edi
// 0073af0a  c70006000000         mov dword ptr [eax], 6
// 0073af10  c7400400000000       mov dword ptr [eax + 4], 0
// 0073af17  5e                   pop esi
// 0073af18  83c430               add esp, 0x30
// 0073af1b  c21000               ret 0x10
// 0073af1e  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0073af22  85db                 test ebx, ebx
// 0073af24  0f84ba000000         je 0x73afe4
// 0073af2a  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0073af2f  0f84af000000         je 0x73afe4
// 0073af35  8b442414             mov eax, dword ptr [esp + 0x14]
// 0073af39  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0073af3d  83e807               sub eax, 7
// 0073af40  83f805               cmp eax, 5
// 0073af43  0f8e81000000         jle 0x73afca
// 0073af49  be08000000           mov esi, 8
// 0073af4e  8bff                 mov edi, edi
// 0073af50  8d4efe               lea ecx, [esi - 2]
// 0073af53  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0073af57  6a05                 push 5
// 0073af59  8bcf                 mov ecx, edi
// 0073af5b  c744243407000000     mov dword ptr [esp + 0x34], 7
// 0073af63  89742438             mov dword ptr [esp + 0x38], esi
// 0073af67  c744243c09000000     mov dword ptr [esp + 0x3c], 9
// 0073af6f  e8fc30f7ff           call 0x6ae070
// 0073af74  50                   push eax
// 0073af75  8d542430             lea edx, [esp + 0x30]
// 0073af79  52                   push edx
// 0073af7a  8bcb                 mov ecx, ebx
// 0073af7c  e8dd63f6ff           call 0x6a135e
// 0073af81  8d4eff               lea ecx, [esi - 1]
// 0073af84  8d46fd               lea eax, [esi - 3]
// 0073af87  894c2424             mov dword ptr [esp + 0x24], ecx
// 0073af8b  6a26                 push 0x26
// 0073af8d  8bcf                 mov ecx, edi
// 0073af8f  89442420             mov dword ptr [esp + 0x20], eax
// 0073af93  c744242406000000     mov dword ptr [esp + 0x24], 6
// 0073af9b  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 0073afa3  e8c830f7ff           call 0x6ae070
// 0073afa8  50                   push eax
// 0073afa9  8d542420             lea edx, [esp + 0x20]
// 0073afad  52                   push edx
// 0073afae  8bcb                 mov ecx, ebx
// 0073afb0  e8a963f6ff           call 0x6a135e
// 0073afb5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0073afb9  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0073afbd  83c604               add esi, 4
// 0073afc0  83e807               sub eax, 7
// 0073afc3  8d4efd               lea ecx, [esi - 3]
// 0073afc6  3bc8                 cmp ecx, eax
// 0073afc8  7c86                 jl 0x73af50
// 0073afca  8b442440             mov eax, dword ptr [esp + 0x40]
// 0073afce  5b                   pop ebx
// 0073afcf  5f                   pop edi
// 0073afd0  c7400400000000       mov dword ptr [eax + 4], 0
// 0073afd7  c70000000000         mov dword ptr [eax], 0
// 0073afdd  5e                   pop esi
// 0073afde  83c430               add esp, 0x30
// 0073afe1  c21000               ret 0x10
// 0073afe4  8b442440             mov eax, dword ptr [esp + 0x40]
// 0073afe8  5b                   pop ebx
// 0073afe9  5f                   pop edi
// 0073afea  c7400409000000       mov dword ptr [eax + 4], 9
// 0073aff1  c70000000000         mov dword ptr [eax], 0
// 0073aff7  5e                   pop esi
// 0073aff8  83c430               add esp, 0x30
// 0073affb  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawCommandBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOffice2003Theme.cpp
