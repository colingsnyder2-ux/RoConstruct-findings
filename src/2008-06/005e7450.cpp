// roc 2008-06 005e7450  unit: RBX::Ball  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7450
//
// 005e7450  8b442404             mov eax, dword ptr [esp + 4]
// 005e7454  8b10                 mov edx, dword ptr [eax]
// 005e7456  56                   push esi
// 005e7457  8bf1                 mov esi, ecx
// 005e7459  8b4804               mov ecx, dword ptr [eax + 4]
// 005e745c  51                   push ecx
// 005e745d  52                   push edx
// 005e745e  8d4e08               lea ecx, [esi + 8]
// 005e7461  e89a0dfcff           call 0x5a8200
// 005e7466  c6461001             mov byte ptr [esi + 0x10], 1
// 005e746a  5e                   pop esi
// 005e746b  c20400               ret 4
// library openrbx-client/App\v8world\Primitive.cpp (function ?setGuid@Primitive@RBX@@QAEXABVGuid@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Primitive.cpp
