// roc 2012-06 004ad930  unit: DxUserInput  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004ad930
//
// 004ad930  8b442404             mov eax, dword ptr [esp + 4]
// 004ad934  0500feffff           add eax, 0xfffffe00
// 004ad939  83f805               cmp eax, 5
// 004ad93c  7725                 ja 0x4ad963
// 004ad93e  ff248568d94a00       jmp dword ptr [eax*4 + 0x4ad968]
// 004ad945  b805000000           mov eax, 5
// 004ad94a  c3                   ret 
// 004ad94b  b803000000           mov eax, 3
// 004ad950  c3                   ret 
// 004ad951  b801000000           mov eax, 1
// 004ad956  c3                   ret 
// 004ad957  b804000000           mov eax, 4
// 004ad95c  c3                   ret 
// 004ad95d  b802000000           mov eax, 2
// 004ad962  c3                   ret 
// 004ad963  33c0                 xor eax, eax
// 004ad965  c3                   ret 
// 004ad966  8bff                 mov edi, edi
// 004ad968  45                   inc ebp
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