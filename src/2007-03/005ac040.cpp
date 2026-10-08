// roc 2007-03 005ac040  unit: seg_005a0000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ac040
//
// 005ac040  51                   push ecx
// 005ac041  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ac045  56                   push esi
// 005ac046  8b742414             mov esi, dword ptr [esp + 0x14]
// 005ac04a  8bc6                 mov eax, esi
// 005ac04c  2bc1                 sub eax, ecx
// 005ac04e  c1f802               sar eax, 2
// 005ac051  83f828               cmp eax, 0x28
// 005ac054  7e7a                 jle 0x5ac0d0
// 005ac056  83c001               add eax, 1
// 005ac059  99                   cdq 
// 005ac05a  53                   push ebx
// 005ac05b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005ac05f  83e207               and edx, 7
// 005ac062  03c2                 add eax, edx
// 005ac064  55                   push ebp
// 005ac065  c1f803               sar eax, 3
// 005ac068  57                   push edi
// 005ac069  8d14c500000000       lea edx, [eax*8]
// 005ac070  89542420             mov dword ptr [esp + 0x20], edx
// 005ac074  53                   push ebx
// 005ac075  8d3c8500000000       lea edi, [eax*4]
// 005ac07c  03d1                 add edx, ecx
// 005ac07e  8d040f               lea eax, [edi + ecx]
// 005ac081  52                   push edx
// 005ac082  50                   push eax
// 005ac083  51                   push ecx
// 005ac084  89442420             mov dword ptr [esp + 0x20], eax
// 005ac088  e8d3feffff           call 0x5abf60
// 005ac08d  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005ac091  53                   push ebx
// 005ac092  8d042f               lea eax, [edi + ebp]
// 005ac095  50                   push eax
// 005ac096  8bcd                 mov ecx, ebp
// 005ac098  2bcf                 sub ecx, edi
// 005ac09a  55                   push ebp
// 005ac09b  51                   push ecx
// 005ac09c  e8bffeffff           call 0x5abf60
// 005ac0a1  53                   push ebx
// 005ac0a2  8bc6                 mov eax, esi
// 005ac0a4  2bc7                 sub eax, edi
// 005ac0a6  56                   push esi
// 005ac0a7  2b742448             sub esi, dword ptr [esp + 0x48]
// 005ac0ab  50                   push eax
// 005ac0ac  56                   push esi
// 005ac0ad  89442448             mov dword ptr [esp + 0x48], eax
// 005ac0b1  e8aafeffff           call 0x5abf60
// 005ac0b6  8b542448             mov edx, dword ptr [esp + 0x48]
// 005ac0ba  8b442440             mov eax, dword ptr [esp + 0x40]
// 005ac0be  53                   push ebx
// 005ac0bf  52                   push edx
// 005ac0c0  55                   push ebp
// 005ac0c1  50                   push eax
// 005ac0c2  e899feffff           call 0x5abf60
// 005ac0c7  83c440               add esp, 0x40
// 005ac0ca  5f                   pop edi
// 005ac0cb  5d                   pop ebp
// 005ac0cc  5b                   pop ebx
// 005ac0cd  5e                   pop esi
// 005ac0ce  59                   pop ecx
// 005ac0cf  c3                   ret 
// 005ac0d0  8b542418             mov edx, dword ptr [esp + 0x18]
// 005ac0d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ac0d8  52                   push edx
// 005ac0d9  56                   push esi
// 005ac0da  50                   push eax
// 005ac0db  51                   push ecx
// 005ac0dc  e87ffeffff           call 0x5abf60
// 005ac0e1  83c410               add esp, 0x10
// 005ac0e4  5e                   pop esi
// 005ac0e5  59                   pop ecx
// 005ac0e6  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Median@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@00P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
