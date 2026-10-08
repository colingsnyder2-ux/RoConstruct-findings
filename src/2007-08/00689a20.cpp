// from server: 53% by colin
// roc 2007-08 00689a20  unit: CXTPControlTabWorkspace  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689a20
//
// 00689a20  8b4194               mov eax, dword ptr [ecx - 0x6c]
// 00689a23  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 00689a29  83e801               sub eax, 1
// 00689a2c  7419                 je 0x689a47
// 00689a2e  83e801               sub eax, 1
// 00689a31  740e                 je 0x689a41
// 00689a33  83e801               sub eax, 1
// 00689a36  7403                 je 0x689a3b
// 00689a38  33c0                 xor eax, eax
// 00689a3a  c3                   ret 
// 00689a3b  b803000000           mov eax, 3
// 00689a40  c3                   ret 
// 00689a41  b801000000           mov eax, 1
// 00689a46  c3                   ret 
// 00689a47  b802000000           mov eax, 2
// 00689a4c  c3                   ret 

struct CXTPControlTabWorkspace
{
    int GetState();
};

int CXTPControlTabWorkspace::GetState()
{
    int value = *(int *)((char *)this - 0x6c);
    value = *(int *)(value + 0xfc);
    value -= 1;
    if (value == 0)
        return 2;
    value -= 1;
    if (value == 0)
        return 1;
    value -= 1;
    if (value == 0)
        return 3;
    return 0;
}
