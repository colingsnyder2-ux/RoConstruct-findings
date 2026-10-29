// roc 2009-06 0046bff0  unit: DxUserInput  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046bff0
//
// 0046bff0  8b442404             mov eax, dword ptr [esp + 4]
// 0046bff4  0500feffff           add eax, 0xfffffe00
// 0046bff9  83f805               cmp eax, 5
// 0046bffc  7725                 ja 0x46c023
// 0046bffe  ff248528c04600       jmp dword ptr [eax*4 + 0x46c028]
// 0046c005  b805000000           mov eax, 5
// 0046c00a  c3                   ret 
// 0046c00b  b803000000           mov eax, 3
// 0046c010  c3                   ret 
// 0046c011  b801000000           mov eax, 1
// 0046c016  c3                   ret 
// 0046c017  b804000000           mov eax, 4
// 0046c01c  c3                   ret 
// 0046c01d  b802000000           mov eax, 2
// 0046c022  c3                   ret 
// 0046c023  33c0                 xor eax, eax
// 0046c025  c3                   ret 
// 0046c026  8bff                 mov edi, edi
// 0046c028  05c046000b           add eax, 0xb0046c0
// 0046c02d  c0460017             rol byte ptr [esi], 0x17
// 0046c031  c0460023             rol byte ptr [esi], 0x23
// 0046c035  c0460011             rol byte ptr [esi], 0x11
// 0046c039  c046001d             rol byte ptr [esi], 0x1d
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