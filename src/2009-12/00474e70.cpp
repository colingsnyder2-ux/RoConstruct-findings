// roc 2009-12 00474e70  unit: DxUserInput  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00474e70
//
// 00474e70  8b442404             mov eax, dword ptr [esp + 4]
// 00474e74  0500feffff           add eax, 0xfffffe00
// 00474e79  83f805               cmp eax, 5
// 00474e7c  7725                 ja 0x474ea3
// 00474e7e  ff2485a84e4700       jmp dword ptr [eax*4 + 0x474ea8]
// 00474e85  b805000000           mov eax, 5
// 00474e8a  c3                   ret 
// 00474e8b  b803000000           mov eax, 3
// 00474e90  c3                   ret 
// 00474e91  b801000000           mov eax, 1
// 00474e96  c3                   ret 
// 00474e97  b804000000           mov eax, 4
// 00474e9c  c3                   ret 
// 00474e9d  b802000000           mov eax, 2
// 00474ea2  c3                   ret 
// 00474ea3  33c0                 xor eax, eax
// 00474ea5  c3                   ret 
// 00474ea6  8bff                 mov edi, edi
// 00474ea8  854e47               test dword ptr [esi + 0x47], ecx
// 00474eab  008b4e470097         add byte ptr [ebx - 0x68ffb8b2], cl
// 00474eb1  4e                   dec esi
// 00474eb2  47                   inc edi
// 00474eb3  00a34e470091         add byte ptr [ebx - 0x6effb8b2], ah
// 00474eb9  4e                   dec esi
// 00474eba  47                   inc edi
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