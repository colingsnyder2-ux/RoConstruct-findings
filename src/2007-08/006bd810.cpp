// from server: 100% by auto
// roc 2007-08 006bd810  unit: CXTPOffice2007Theme  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006bd810
//
// 006bd810  83ec0c               sub esp, 0xc
// 006bd813  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006bd817  53                   push ebx
// 006bd818  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006bd81c  55                   push ebp
// 006bd81d  bd03000000           mov ebp, 3
// 006bd822  56                   push esi
// 006bd823  83c0fd               add eax, -3
// 006bd826  83c3fd               add ebx, -3
// 006bd829  85ed                 test ebp, ebp
// 006bd82b  57                   push edi
// 006bd82c  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006bd830  894c2410             mov dword ptr [esp + 0x10], ecx
// 006bd834  89442414             mov dword ptr [esp + 0x14], eax
// 006bd838  896c2424             mov dword ptr [esp + 0x24], ebp
// 006bd83c  7e41                 jle 0x6bd87f
// 006bd83e  8b742414             mov esi, dword ptr [esp + 0x14]
// 006bd842  68ffffff00           push 0xffffff
// 006bd847  6a02                 push 2
// 006bd849  6a02                 push 2
// 006bd84b  8d4301               lea eax, [ebx + 1]
// 006bd84e  50                   push eax
// 006bd84f  8d4e01               lea ecx, [esi + 1]
// 006bd852  51                   push ecx
// 006bd853  8bcf                 mov ecx, edi
// 006bd855  e870ab0700           call 0x7383ca
// 006bd85a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006bd85e  6a27                 push 0x27
// 006bd860  e80bf5f7ff           call 0x63cd70
// 006bd865  50                   push eax
// 006bd866  6a02                 push 2
// 006bd868  6a02                 push 2
// 006bd86a  53                   push ebx
// 006bd86b  56                   push esi
// 006bd86c  8bcf                 mov ecx, edi
// 006bd86e  e857ab0700           call 0x7383ca
// 006bd873  83ee04               sub esi, 4
// 006bd876  83ed01               sub ebp, 1
// 006bd879  75c7                 jne 0x6bd842
// 006bd87b  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 006bd87f  83ed01               sub ebp, 1
// 006bd882  83eb04               sub ebx, 4
// 006bd885  85ed                 test ebp, ebp
// 006bd887  896c2424             mov dword ptr [esp + 0x24], ebp
// 006bd88b  7fb1                 jg 0x6bd83e
// 006bd88d  5f                   pop edi
// 006bd88e  5e                   pop esi
// 006bd88f  5d                   pop ebp
// 006bd890  5b                   pop ebx
// 006bd891  83c40c               add esp, 0xc
// 006bd894  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOffice2007Theme.cpp (function ?DrawStatusBarGripper@CXTPOffice2007Theme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOffice2007Theme.cpp
