// roc 2007-03 00545dc0  unit: seg_00540000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00545dc0
//
// 00545dc0  8b442404             mov eax, dword ptr [esp + 4]
// 00545dc4  53                   push ebx
// 00545dc5  56                   push esi
// 00545dc6  57                   push edi
// 00545dc7  8bf1                 mov esi, ecx
// 00545dc9  8b7e04               mov edi, dword ptr [esi + 4]
// 00545dcc  8b4f04               mov ecx, dword ptr [edi + 4]
// 00545dcf  50                   push eax
// 00545dd0  51                   push ecx
// 00545dd1  57                   push edi
// 00545dd2  8bce                 mov ecx, esi
// 00545dd4  e887f8ffff           call 0x545660
// 00545dd9  6a01                 push 1
// 00545ddb  8bce                 mov ecx, esi
// 00545ddd  8bd8                 mov ebx, eax
// 00545ddf  e80cf9ffff           call 0x5456f0
// 00545de4  895f04               mov dword ptr [edi + 4], ebx
// 00545de7  8b5304               mov edx, dword ptr [ebx + 4]
// 00545dea  5f                   pop edi
// 00545deb  5e                   pop esi
// 00545dec  891a                 mov dword ptr [edx], ebx
// 00545dee  5b                   pop ebx
// 00545def  c20400               ret 4
// library rbxgs/reflection\type.cpp (function ?push_back@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@QAEXABUItem@SignatureDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
