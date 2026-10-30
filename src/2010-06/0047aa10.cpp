// roc 2010-06 0047aa10  unit: DxUserInput  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047aa10
//
// 0047aa10  8b442404             mov eax, dword ptr [esp + 4]
// 0047aa14  0500feffff           add eax, 0xfffffe00
// 0047aa19  83f805               cmp eax, 5
// 0047aa1c  7725                 ja 0x47aa43
// 0047aa1e  ff248548aa4700       jmp dword ptr [eax*4 + 0x47aa48]
// 0047aa25  b805000000           mov eax, 5
// 0047aa2a  c3                   ret 
// 0047aa2b  b803000000           mov eax, 3
// 0047aa30  c3                   ret 
// 0047aa31  b801000000           mov eax, 1
// 0047aa36  c3                   ret 
// 0047aa37  b804000000           mov eax, 4
// 0047aa3c  c3                   ret 
// 0047aa3d  b802000000           mov eax, 2
// 0047aa42  c3                   ret 
// 0047aa43  33c0                 xor eax, eax
// 0047aa45  c3                   ret 
// 0047aa46  8bff                 mov edi, edi
// 0047aa48  25aa47002b           and eax, 0x2b0047aa
// 0047aa4d  aa                   stosb byte ptr es:[edi], al
// 0047aa4e  47                   inc edi
// 0047aa4f  0037                 add byte ptr [edi], dh
// 0047aa51  aa                   stosb byte ptr es:[edi], al
// 0047aa52  47                   inc edi
// 0047aa53  0043aa               add byte ptr [ebx - 0x56], al
// 0047aa56  47                   inc edi
// 0047aa57  0031                 add byte ptr [ecx], dh
// 0047aa59  aa                   stosb byte ptr es:[edi], al
// 0047aa5a  47                   inc edi
// copied from an identical function in another client (function ?getButton@@YAHH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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