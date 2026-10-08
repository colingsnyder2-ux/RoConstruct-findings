// roc 2011-06 005937f0  unit: VAuthoringSettings::?$FactoryProduct  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005937f0
//
// 005937f0  64a100000000         mov eax, dword ptr fs:[0]
// 005937f6  6aff                 push -1
// 005937f8  68688d9d00           push 0x9d8d68
// 005937fd  50                   push eax
// 005937fe  64892500000000       mov dword ptr fs:[0], esp
// 00593805  56                   push esi
// 00593806  57                   push edi
// 00593807  8bf1                 mov esi, ecx
// 00593809  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059380d  6a08                 push 8
// 0059380f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00593817  8906                 mov dword ptr [esi], eax
// 00593819  c7460408000000       mov dword ptr [esi + 4], 8
// 00593820  e839682700           call 0x80a05e
// 00593825  83c404               add esp, 4
// 00593828  85c0                 test eax, eax
// 0059382a  7423                 je 0x59384f
// 0059382c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00593830  8908                 mov dword ptr [eax], ecx
// 00593832  8b542420             mov edx, dword ptr [esp + 0x20]
// 00593836  895004               mov dword ptr [eax + 4], edx
// 00593839  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059383d  85c9                 test ecx, ecx
// 0059383f  7414                 je 0x593855
// 00593841  83c104               add ecx, 4
// 00593844  ba01000000           mov edx, 1
// 00593849  f00fc111             lock xadd dword ptr [ecx], edx
// 0059384d  eb02                 jmp 0x593851
// 0059384f  33c0                 xor eax, eax
// 00593851  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00593855  894608               mov dword ptr [esi + 8], eax
// 00593858  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00593860  85c9                 test ecx, ecx
// 00593862  742c                 je 0x593890
// 00593864  8bf9                 mov edi, ecx
// 00593866  83c104               add ecx, 4
// 00593869  83c8ff               or eax, 0xffffffff
// 0059386c  f00fc101             lock xadd dword ptr [ecx], eax
// 00593870  751e                 jne 0x593890
// 00593872  8b17                 mov edx, dword ptr [edi]
// 00593874  8b4204               mov eax, dword ptr [edx + 4]
// 00593877  8bcf                 mov ecx, edi
// 00593879  ffd0                 call eax
// 0059387b  8d4f08               lea ecx, [edi + 8]
// 0059387e  83caff               or edx, 0xffffffff
// 00593881  f00fc111             lock xadd dword ptr [ecx], edx
// 00593885  7509                 jne 0x593890
// 00593887  8b07                 mov eax, dword ptr [edi]
// 00593889  8b5008               mov edx, dword ptr [eax + 8]
// 0059388c  8bcf                 mov ecx, edi
// 0059388e  ffd2                 call edx
// 00593890  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00593894  5f                   pop edi
// 00593895  8bc6                 mov eax, esi
// 00593897  64890d00000000       mov dword ptr fs:[0], ecx
// 0059389e  5e                   pop esi
// 0059389f  83c40c               add esp, 0xc
// 005938a2  c20c00               ret 0xc
// library rbxgs/v8tree\Instance.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@VInstanceHandle@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
