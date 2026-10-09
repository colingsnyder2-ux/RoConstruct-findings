// roc 2010-06 0054bb70  unit: RBX::AggregateChunk  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054bb70
//
// 0054bb70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0054bb74  57                   push edi
// 0054bb75  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0054bb79  8bd7                 mov edx, edi
// 0054bb7b  2bd1                 sub edx, ecx
// 0054bb7d  b867666666           mov eax, 0x66666667
// 0054bb82  f7ea                 imul edx
// 0054bb84  c1fa05               sar edx, 5
// 0054bb87  8bc2                 mov eax, edx
// 0054bb89  c1e81f               shr eax, 0x1f
// 0054bb8c  03c2                 add eax, edx
// 0054bb8e  83f828               cmp eax, 0x28
// 0054bb91  7e72                 jle 0x54bc05
// 0054bb93  40                   inc eax
// 0054bb94  99                   cdq 
// 0054bb95  53                   push ebx
// 0054bb96  83e207               and edx, 7
// 0054bb99  03c2                 add eax, edx
// 0054bb9b  55                   push ebp
// 0054bb9c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0054bba0  c1f803               sar eax, 3
// 0054bba3  56                   push esi
// 0054bba4  8d1c80               lea ebx, [eax + eax*4]
// 0054bba7  8d3480               lea esi, [eax + eax*4]
// 0054bbaa  c1e305               shl ebx, 5
// 0054bbad  55                   push ebp
// 0054bbae  8d140b               lea edx, [ebx + ecx]
// 0054bbb1  c1e604               shl esi, 4
// 0054bbb4  8d040e               lea eax, [esi + ecx]
// 0054bbb7  52                   push edx
// 0054bbb8  50                   push eax
// 0054bbb9  51                   push ecx
// 0054bbba  89442424             mov dword ptr [esp + 0x24], eax
// 0054bbbe  e8edfdffff           call 0x54b9b0
// 0054bbc3  8b442428             mov eax, dword ptr [esp + 0x28]
// 0054bbc7  55                   push ebp
// 0054bbc8  8d0c06               lea ecx, [esi + eax]
// 0054bbcb  51                   push ecx
// 0054bbcc  50                   push eax
// 0054bbcd  2bc6                 sub eax, esi
// 0054bbcf  50                   push eax
// 0054bbd0  e8dbfdffff           call 0x54b9b0
// 0054bbd5  55                   push ebp
// 0054bbd6  8bc7                 mov eax, edi
// 0054bbd8  2bc6                 sub eax, esi
// 0054bbda  57                   push edi
// 0054bbdb  50                   push eax
// 0054bbdc  2bfb                 sub edi, ebx
// 0054bbde  57                   push edi
// 0054bbdf  8944244c             mov dword ptr [esp + 0x4c], eax
// 0054bbe3  e8c8fdffff           call 0x54b9b0
// 0054bbe8  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0054bbec  8b442448             mov eax, dword ptr [esp + 0x48]
// 0054bbf0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0054bbf4  55                   push ebp
// 0054bbf5  52                   push edx
// 0054bbf6  50                   push eax
// 0054bbf7  51                   push ecx
// 0054bbf8  e8b3fdffff           call 0x54b9b0
// 0054bbfd  83c440               add esp, 0x40
// 0054bc00  5e                   pop esi
// 0054bc01  5d                   pop ebp
// 0054bc02  5b                   pop ebx
// 0054bc03  5f                   pop edi
// 0054bc04  c3                   ret 
// 0054bc05  8b542414             mov edx, dword ptr [esp + 0x14]
// 0054bc09  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054bc0d  52                   push edx
// 0054bc0e  57                   push edi
// 0054bc0f  50                   push eax
// 0054bc10  51                   push ecx
// 0054bc11  e89afdffff           call 0x54b9b0
// 0054bc16  83c410               add esp, 0x10
// 0054bc19  5f                   pop edi
// 0054bc1a  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Median@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
