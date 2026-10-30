// roc 2009-12 00884300  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 654 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00884300
//
// 00884300  83ec30               sub esp, 0x30
// 00884303  56                   push esi
// 00884304  8b742440             mov esi, dword ptr [esp + 0x40]
// 00884308  8b06                 mov eax, dword ptr [esi]
// 0088430a  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 00884310  57                   push edi
// 00884311  8bf9                 mov edi, ecx
// 00884313  8bce                 mov ecx, esi
// 00884315  ffd2                 call edx
// 00884317  85c0                 test eax, eax
// 00884319  7426                 je 0x884341
// 0088431b  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0088431f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00884323  8b07                 mov eax, dword ptr [edi]
// 00884325  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 0088432b  51                   push ecx
// 0088432c  56                   push esi
// 0088432d  8b742444             mov esi, dword ptr [esp + 0x44]
// 00884331  52                   push edx
// 00884332  56                   push esi
// 00884333  8bcf                 mov ecx, edi
// 00884335  ffd0                 call eax
// 00884337  5f                   pop edi
// 00884338  8bc6                 mov eax, esi
// 0088433a  5e                   pop esi
// 0088433b  83c430               add esp, 0x30
// 0088433e  c21000               ret 0x10
// 00884341  8b5620               mov edx, dword ptr [esi + 0x20]
// 00884344  8d4c2408             lea ecx, [esp + 8]
// 00884348  51                   push ecx
// 00884349  52                   push edx
// 0088434a  ff1550cc9800         call dword ptr [0x98cc50]
// 00884350  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00884356  83f805               cmp eax, 5
// 00884359  752a                 jne 0x884385
// 0088435b  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 00884362  7521                 jne 0x884385
// 00884364  8b442448             mov eax, dword ptr [esp + 0x48]
// 00884368  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088436c  50                   push eax
// 0088436d  56                   push esi
// 0088436e  8b742444             mov esi, dword ptr [esp + 0x44]
// 00884372  51                   push ecx
// 00884373  56                   push esi
// 00884374  8bcf                 mov ecx, edi
// 00884376  e805560000           call 0x889980
// 0088437b  5f                   pop edi
// 0088437c  8bc6                 mov eax, esi
// 0088437e  5e                   pop esi
// 0088437f  83c430               add esp, 0x30
// 00884382  c21000               ret 0x10
// 00884385  83f804               cmp eax, 4
// 00884388  7521                 jne 0x8843ab
// 0088438a  8b542448             mov edx, dword ptr [esp + 0x48]
// 0088438e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00884392  52                   push edx
// 00884393  56                   push esi
// 00884394  8b742444             mov esi, dword ptr [esp + 0x44]
// 00884398  50                   push eax
// 00884399  56                   push esi
// 0088439a  8bcf                 mov ecx, edi
// 0088439c  e8df550000           call 0x889980
// 008843a1  5f                   pop edi
// 008843a2  8bc6                 mov eax, esi
// 008843a4  5e                   pop esi
// 008843a5  83c430               add esp, 0x30
// 008843a8  c21000               ret 0x10
// 008843ab  53                   push ebx
// 008843ac  83f803               cmp eax, 3
// 008843af  0f84f9000000         je 0x8844ae
// 008843b5  83f802               cmp eax, 2
// 008843b8  0f84f0000000         je 0x8844ae
// 008843be  85c0                 test eax, eax
// 008843c0  7409                 je 0x8843cb
// 008843c2  83f801               cmp eax, 1
// 008843c5  0f858f010000         jne 0x88455a
// 008843cb  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 008843cf  85db                 test ebx, ebx
// 008843d1  0f84bd000000         je 0x884494
// 008843d7  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 008843dc  0f84b2000000         je 0x884494
// 008843e2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008843e6  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008843ea  83e907               sub ecx, 7
// 008843ed  83f905               cmp ecx, 5
// 008843f0  0f8e64010000         jle 0x88455a
// 008843f6  be08000000           mov esi, 8
// 008843fb  eb03                 jmp 0x884400
// 008843fd  8d4900               lea ecx, [ecx]
// 00884400  8d56fe               lea edx, [esi - 2]
// 00884403  6a05                 push 5
// 00884405  8bcf                 mov ecx, edi
// 00884407  c744242007000000     mov dword ptr [esp + 0x20], 7
// 0088440f  89542424             mov dword ptr [esp + 0x24], edx
// 00884413  c744242809000000     mov dword ptr [esp + 0x28], 9
// 0088441b  8974242c             mov dword ptr [esp + 0x2c], esi
// 0088441f  e81c92f7ff           call 0x7fd640
// 00884424  50                   push eax
// 00884425  8d442420             lea eax, [esp + 0x20]
// 00884429  50                   push eax
// 0088442a  8bcb                 mov ecx, ebx
// 0088442c  e8cd01f7ff           call 0x7f45fe
// 00884431  8d4efd               lea ecx, [esi - 3]
// 00884434  894c2430             mov dword ptr [esp + 0x30], ecx
// 00884438  8d56ff               lea edx, [esi - 1]
// 0088443b  6a26                 push 0x26
// 0088443d  8bcf                 mov ecx, edi
// 0088443f  c744243006000000     mov dword ptr [esp + 0x30], 6
// 00884447  c744243808000000     mov dword ptr [esp + 0x38], 8
// 0088444f  8954243c             mov dword ptr [esp + 0x3c], edx
// 00884453  e8e891f7ff           call 0x7fd640
// 00884458  50                   push eax
// 00884459  8d442430             lea eax, [esp + 0x30]
// 0088445d  50                   push eax
// 0088445e  8bcb                 mov ecx, ebx
// 00884460  e89901f7ff           call 0x7f45fe
// 00884465  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00884469  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0088446d  83c604               add esi, 4
// 00884470  83e907               sub ecx, 7
// 00884473  8d56fd               lea edx, [esi - 3]
// 00884476  3bd1                 cmp edx, ecx
// 00884478  7c86                 jl 0x884400
// 0088447a  8b442440             mov eax, dword ptr [esp + 0x40]
// 0088447e  5b                   pop ebx
// 0088447f  5f                   pop edi
// 00884480  c7400400000000       mov dword ptr [eax + 4], 0
// 00884487  c70000000000         mov dword ptr [eax], 0
// 0088448d  5e                   pop esi
// 0088448e  83c430               add esp, 0x30
// 00884491  c21000               ret 0x10
// 00884494  8b442440             mov eax, dword ptr [esp + 0x40]
// 00884498  5b                   pop ebx
// 00884499  5f                   pop edi
// 0088449a  c70006000000         mov dword ptr [eax], 6
// 008844a0  c7400400000000       mov dword ptr [eax + 4], 0
// 008844a7  5e                   pop esi
// 008844a8  83c430               add esp, 0x30
// 008844ab  c21000               ret 0x10
// 008844ae  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 008844b2  85db                 test ebx, ebx
// 008844b4  0f84ba000000         je 0x884574
// 008844ba  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 008844bf  0f84af000000         je 0x884574
// 008844c5  8b442414             mov eax, dword ptr [esp + 0x14]
// 008844c9  2b44240c             sub eax, dword ptr [esp + 0xc]
// 008844cd  83e807               sub eax, 7
// 008844d0  83f805               cmp eax, 5
// 008844d3  0f8e81000000         jle 0x88455a
// 008844d9  be08000000           mov esi, 8
// 008844de  8bff                 mov edi, edi
// 008844e0  8d4efe               lea ecx, [esi - 2]
// 008844e3  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008844e7  6a05                 push 5
// 008844e9  8bcf                 mov ecx, edi
// 008844eb  c744243407000000     mov dword ptr [esp + 0x34], 7
// 008844f3  89742438             mov dword ptr [esp + 0x38], esi
// 008844f7  c744243c09000000     mov dword ptr [esp + 0x3c], 9
// 008844ff  e83c91f7ff           call 0x7fd640
// 00884504  50                   push eax
// 00884505  8d542430             lea edx, [esp + 0x30]
// 00884509  52                   push edx
// 0088450a  8bcb                 mov ecx, ebx
// 0088450c  e8ed00f7ff           call 0x7f45fe
// 00884511  8d4eff               lea ecx, [esi - 1]
// 00884514  8d46fd               lea eax, [esi - 3]
// 00884517  894c2424             mov dword ptr [esp + 0x24], ecx
// 0088451b  6a26                 push 0x26
// 0088451d  8bcf                 mov ecx, edi
// 0088451f  89442420             mov dword ptr [esp + 0x20], eax
// 00884523  c744242406000000     mov dword ptr [esp + 0x24], 6
// 0088452b  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 00884533  e80891f7ff           call 0x7fd640
// 00884538  50                   push eax
// 00884539  8d542420             lea edx, [esp + 0x20]
// 0088453d  52                   push edx
// 0088453e  8bcb                 mov ecx, ebx
// 00884540  e8b900f7ff           call 0x7f45fe
// 00884545  8b442414             mov eax, dword ptr [esp + 0x14]
// 00884549  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0088454d  83c604               add esi, 4
// 00884550  83e807               sub eax, 7
// 00884553  8d4efd               lea ecx, [esi - 3]
// 00884556  3bc8                 cmp ecx, eax
// 00884558  7c86                 jl 0x8844e0
// 0088455a  8b442440             mov eax, dword ptr [esp + 0x40]
// 0088455e  5b                   pop ebx
// 0088455f  5f                   pop edi
// 00884560  c7400400000000       mov dword ptr [eax + 4], 0
// 00884567  c70000000000         mov dword ptr [eax], 0
// 0088456d  5e                   pop esi
// 0088456e  83c430               add esp, 0x30
// 00884571  c21000               ret 0x10
// 00884574  8b442440             mov eax, dword ptr [esp + 0x40]
// 00884578  5b                   pop ebx
// 00884579  5f                   pop edi
// 0088457a  c7400409000000       mov dword ptr [eax + 4], 9
// 00884581  c70000000000         mov dword ptr [eax], 0
// 00884587  5e                   pop esi
// 00884588  83c430               add esp, 0x30
// 0088458b  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawCommandBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@H@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOffice2003Theme.cpp