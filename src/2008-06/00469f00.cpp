// from server: 100% by colin
// roc 2008-06 00469f00  unit: DxUserInput  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00469f00
//
// 00469f00  8b442404             mov eax, dword ptr [esp + 4]
// 00469f04  0500feffff           add eax, 0xfffffe00
// 00469f09  83f805               cmp eax, 5
// 00469f0c  7725                 ja 0x469f33
// 00469f0e  ff2485389f4600       jmp dword ptr [eax*4 + 0x469f38]
// 00469f15  b805000000           mov eax, 5
// 00469f1a  c3                   ret 
// 00469f1b  b803000000           mov eax, 3
// 00469f20  c3                   ret 
// 00469f21  b801000000           mov eax, 1
// 00469f26  c3                   ret 
// 00469f27  b804000000           mov eax, 4
// 00469f2c  c3                   ret 
// 00469f2d  b802000000           mov eax, 2
// 00469f32  c3                   ret 
// 00469f33  33c0                 xor eax, eax
// 00469f35  c3                   ret 
// 00469f36  8bff                 mov edi, edi
// 00469f38  159f46001b           adc eax, 0x1b00469f
// 00469f3d  9f                   lahf 
// 00469f3e  46                   inc esi
// 00469f3f  0027                 add byte ptr [edi], ah
// 00469f41  9f                   lahf 
// 00469f42  46                   inc esi
// 00469f43  0033                 add byte ptr [ebx], dh
// 00469f45  9f                   lahf 
// 00469f46  46                   inc esi
// 00469f47  0021                 add byte ptr [ecx], ah
// 00469f49  9f                   lahf 
// 00469f4a  46                   inc esi

struct DxUserInput
{
};

int __cdecl getButton(int code)
{
    switch (code)
    {
    case 512:
        return 5;
    case 513:
        return 3;
    case 514:
        return 1;
    case 515:
        return 4;
    case 516:
        return 2;
    case 517:
        return 0;
    default:
        return 0;
    }
}
