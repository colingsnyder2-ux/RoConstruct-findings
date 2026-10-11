// roc 2007-03 00484c00  unit: seg_00480000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00484c00
//
// 00484c00  51                   push ecx
// 00484c01  8b01                 mov eax, dword ptr [ecx]
// 00484c03  8b500c               mov edx, dword ptr [eax + 0xc]
// 00484c06  56                   push esi
// 00484c07  c744240400000000     mov dword ptr [esp + 4], 0
// 00484c0f  ffd2                 call edx
// 00484c11  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00484c15  68ac497800           push 0x7849ac
// 00484c1a  8bce                 mov ecx, esi
// 00484c1c  ff1578e77700         call dword ptr [0x77e778]
// 00484c22  8bc6                 mov eax, esi
// 00484c24  5e                   pop esi
// 00484c25  59                   pop ecx
// 00484c26  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?getStringValue@PropertyDescriptor@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
