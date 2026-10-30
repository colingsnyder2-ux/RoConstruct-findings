// roc 2009-12 0085dd30  unit: CXTSplitterWnd  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085dd30
//
// 0085dd30  83ec08               sub esp, 8
// 0085dd33  55                   push ebp
// 0085dd34  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0085dd38  56                   push esi
// 0085dd39  8bf1                 mov esi, ecx
// 0085dd3b  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0085dd41  83f8ff               cmp eax, -1
// 0085dd44  7412                 je 0x85dd58
// 0085dd46  3bc5                 cmp eax, ebp
// 0085dd48  0f842e010000         je 0x85de7c
// 0085dd4e  8b06                 mov eax, dword ptr [esi]
// 0085dd50  8b90bc010000         mov edx, dword ptr [eax + 0x1bc]
// 0085dd56  ffd2                 call edx
// 0085dd58  8b06                 mov eax, dword ptr [esi]
// 0085dd5a  8b8074010000         mov eax, dword ptr [eax + 0x174]
// 0085dd60  8d4c240c             lea ecx, [esp + 0xc]
// 0085dd64  51                   push ecx
// 0085dd65  8d54240c             lea edx, [esp + 0xc]
// 0085dd69  52                   push edx
// 0085dd6a  8bce                 mov ecx, esi
// 0085dd6c  89aef8000000         mov dword ptr [esi + 0xf8], ebp
// 0085dd72  ffd0                 call eax
// 0085dd74  85c0                 test eax, eax
// 0085dd76  742f                 je 0x85dda7
// 0085dd78  8b442408             mov eax, dword ptr [esp + 8]
// 0085dd7c  3bc5                 cmp eax, ebp
// 0085dd7e  7527                 jne 0x85dda7
// 0085dd80  40                   inc eax
// 0085dd81  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 0085dd87  89442408             mov dword ptr [esp + 8], eax
// 0085dd8b  7c06                 jl 0x85dd93
// 0085dd8d  33c0                 xor eax, eax
// 0085dd8f  89442408             mov dword ptr [esp + 8], eax
// 0085dd93  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085dd97  8b16                 mov edx, dword ptr [esi]
// 0085dd99  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 0085dd9f  6a00                 push 0
// 0085dda1  51                   push ecx
// 0085dda2  50                   push eax
// 0085dda3  8bce                 mov ecx, esi
// 0085dda5  ffd2                 call edx
// 0085dda7  53                   push ebx
// 0085dda8  33db                 xor ebx, ebx
// 0085ddaa  399e84000000         cmp dword ptr [esi + 0x84], ebx
// 0085ddb0  57                   push edi
// 0085ddb1  0f8e96000000         jle 0x85de4d
// 0085ddb7  53                   push ebx
// 0085ddb8  55                   push ebp
// 0085ddb9  8bce                 mov ecx, esi
// 0085ddbb  e8c865f9ff           call 0x7f4388
// 0085ddc0  8bf8                 mov edi, eax
// 0085ddc2  85ff                 test edi, edi
// 0085ddc4  0f84b0000000         je 0x85de7a
// 0085ddca  6a00                 push 0
// 0085ddcc  8bcf                 mov ecx, edi
// 0085ddce  e8755df9ff           call 0x7f3b48
// 0085ddd3  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 0085ddd9  83f8ff               cmp eax, -1
// 0085dddc  7407                 je 0x85dde5
// 0085ddde  3bc3                 cmp eax, ebx
// 0085dde0  8d4301               lea eax, [ebx + 1]
// 0085dde3  7e02                 jle 0x85dde7
// 0085dde5  8bc3                 mov eax, ebx
// 0085dde7  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 0085dded  81c1900e0000         add ecx, 0xe90
// 0085ddf3  c1e104               shl ecx, 4
// 0085ddf6  03c8                 add ecx, eax
// 0085ddf8  51                   push ecx
// 0085ddf9  8bcf                 mov ecx, edi
// 0085ddfb  e8ce8d0c00           call 0x926bce
// 0085de00  8d7d01               lea edi, [ebp + 1]
// 0085de03  3bbe80000000         cmp edi, dword ptr [esi + 0x80]
// 0085de09  7d35                 jge 0x85de40
// 0085de0b  eb03                 jmp 0x85de10
// 0085de0d  8d4900               lea ecx, [ecx]
// 0085de10  53                   push ebx
// 0085de11  57                   push edi
// 0085de12  8bce                 mov ecx, esi
// 0085de14  e86f65f9ff           call 0x7f4388
// 0085de19  8be8                 mov ebp, eax
// 0085de1b  85ed                 test ebp, ebp
// 0085de1d  745b                 je 0x85de7a
// 0085de1f  53                   push ebx
// 0085de20  8d57ff               lea edx, [edi - 1]
// 0085de23  52                   push edx
// 0085de24  8bce                 mov ecx, esi
// 0085de26  e8c164f9ff           call 0x7f42ec
// 0085de2b  50                   push eax
// 0085de2c  8bcd                 mov ecx, ebp
// 0085de2e  e89b8d0c00           call 0x926bce
// 0085de33  47                   inc edi
// 0085de34  3bbe80000000         cmp edi, dword ptr [esi + 0x80]
// 0085de3a  7cd4                 jl 0x85de10
// 0085de3c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0085de40  43                   inc ebx
// 0085de41  3b9e84000000         cmp ebx, dword ptr [esi + 0x84]
// 0085de47  0f8c6affffff         jl 0x85ddb7
// 0085de4d  ff8e80000000         dec dword ptr [esi + 0x80]
// 0085de53  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0085de59  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0085de5f  8d546d00             lea edx, [ebp + ebp*2]
// 0085de63  8b549108             mov edx, dword ptr [ecx + edx*4 + 8]
// 0085de67  8d0440               lea eax, [eax + eax*2]
// 0085de6a  89548108             mov dword ptr [ecx + eax*4 + 8], edx
// 0085de6e  8b06                 mov eax, dword ptr [esi]
// 0085de70  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0085de76  8bce                 mov ecx, esi
// 0085de78  ffd2                 call edx
// 0085de7a  5f                   pop edi
// 0085de7b  5b                   pop ebx
// 0085de7c  5e                   pop esi
// 0085de7d  5d                   pop ebp
// 0085de7e  83c408               add esp, 8
// 0085de81  c20400               ret 4
// copied from an identical function in another client (function ?HideRow@CXTSplitterWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1