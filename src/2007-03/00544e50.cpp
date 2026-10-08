// roc 2007-03 00544e50  unit: seg_00540000  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544e50
//
// 00544e50  8b442404             mov eax, dword ptr [esp + 4]
// 00544e54  85c0                 test eax, eax
// 00544e56  53                   push ebx
// 00544e57  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00544e5b  55                   push ebp
// 00544e5c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00544e60  56                   push esi
// 00544e61  8b742420             mov esi, dword ptr [esp + 0x20]
// 00544e65  57                   push edi
// 00544e66  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00544e6a  7c5e                 jl 0x544eca
// 00544e6c  85ed                 test ebp, ebp
// 00544e6e  7c60                 jl 0x544ed0
// 00544e70  85db                 test ebx, ebx
// 00544e72  7c58                 jl 0x544ecc
// 00544e74  85f6                 test esi, esi
// 00544e76  7c54                 jl 0x544ecc
// 00544e78  7f04                 jg 0x544e7e
// 00544e7a  85ff                 test edi, edi
// 00544e7c  724e                 jb 0x544ecc
// 00544e7e  6a00                 push 0
// 00544e80  99                   cdq 
// 00544e81  6a3c                 push 0x3c
// 00544e83  52                   push edx
// 00544e84  50                   push eax
// 00544e85  e856a20d00           call 0x61f0e0
// 00544e8a  8bc8                 mov ecx, eax
// 00544e8c  8bc2                 mov eax, edx
// 00544e8e  89442414             mov dword ptr [esp + 0x14], eax
// 00544e92  8bc5                 mov eax, ebp
// 00544e94  99                   cdq 
// 00544e95  03c8                 add ecx, eax
// 00544e97  8b442414             mov eax, dword ptr [esp + 0x14]
// 00544e9b  6a00                 push 0
// 00544e9d  6a3c                 push 0x3c
// 00544e9f  13c2                 adc eax, edx
// 00544ea1  50                   push eax
// 00544ea2  51                   push ecx
// 00544ea3  e838a20d00           call 0x61f0e0
// 00544ea8  8bc8                 mov ecx, eax
// 00544eaa  8bea                 mov ebp, edx
// 00544eac  8bc3                 mov eax, ebx
// 00544eae  99                   cdq 
// 00544eaf  6a00                 push 0
// 00544eb1  03c8                 add ecx, eax
// 00544eb3  6840420f00           push 0xf4240
// 00544eb8  13ea                 adc ebp, edx
// 00544eba  55                   push ebp
// 00544ebb  51                   push ecx
// 00544ebc  e81fa20d00           call 0x61f0e0
// 00544ec1  03c7                 add eax, edi
// 00544ec3  5f                   pop edi
// 00544ec4  13d6                 adc edx, esi
// 00544ec6  5e                   pop esi
// 00544ec7  5d                   pop ebp
// 00544ec8  5b                   pop ebx
// 00544ec9  c3                   ret 
// 00544eca  f7d8                 neg eax
// 00544ecc  85ed                 test ebp, ebp
// 00544ece  7d02                 jge 0x544ed2
// 00544ed0  f7dd                 neg ebp
// 00544ed2  85db                 test ebx, ebx
// 00544ed4  7d02                 jge 0x544ed8
// 00544ed6  f7db                 neg ebx
// 00544ed8  85f6                 test esi, esi
// 00544eda  7f0d                 jg 0x544ee9
// 00544edc  7c04                 jl 0x544ee2
// 00544ede  85ff                 test edi, edi
// 00544ee0  7307                 jae 0x544ee9
// 00544ee2  f7df                 neg edi
// 00544ee4  83d600               adc esi, 0
// 00544ee7  f7de                 neg esi
// 00544ee9  6a00                 push 0
// 00544eeb  99                   cdq 
// 00544eec  6a3c                 push 0x3c
// 00544eee  52                   push edx
// 00544eef  50                   push eax
// 00544ef0  e8eba10d00           call 0x61f0e0
// 00544ef5  8bc8                 mov ecx, eax
// 00544ef7  8bc2                 mov eax, edx
// 00544ef9  89442414             mov dword ptr [esp + 0x14], eax
// 00544efd  8bc5                 mov eax, ebp
// 00544eff  99                   cdq 
// 00544f00  03c8                 add ecx, eax
// 00544f02  8b442414             mov eax, dword ptr [esp + 0x14]
// 00544f06  6a00                 push 0
// 00544f08  6a3c                 push 0x3c
// 00544f0a  13c2                 adc eax, edx
// 00544f0c  50                   push eax
// 00544f0d  51                   push ecx
// 00544f0e  e8cda10d00           call 0x61f0e0
// 00544f13  8bc8                 mov ecx, eax
// 00544f15  8bea                 mov ebp, edx
// 00544f17  8bc3                 mov eax, ebx
// 00544f19  99                   cdq 
// 00544f1a  6a00                 push 0
// 00544f1c  03c8                 add ecx, eax
// 00544f1e  6840420f00           push 0xf4240
// 00544f23  13ea                 adc ebp, edx
// 00544f25  55                   push ebp
// 00544f26  51                   push ecx
// 00544f27  e8b4a10d00           call 0x61f0e0
// 00544f2c  f7df                 neg edi
// 00544f2e  83d600               adc esi, 0
// 00544f31  f7de                 neg esi
// 00544f33  2bf8                 sub edi, eax
// 00544f35  1bf2                 sbb esi, edx
// 00544f37  8bc7                 mov eax, edi
// 00544f39  5f                   pop edi
// 00544f3a  8bd6                 mov edx, esi
// 00544f3c  5e                   pop esi
// 00544f3d  5d                   pop ebp
// 00544f3e  5b                   pop ebx
// 00544f3f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?to_tick_count@?$time_resolution_traits@Utime_resolution_traits_adapted64_impl@date_time@boost@@$04$0PECEA@$05J@date_time@boost@@SA_JJJJ_J@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
