// from server: 100% by tester
// roc 2010-06 00667540  unit: RBX::VBasicPartInstance::?$ActionStation  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00667540
//
// 00667540  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 00667546  83e800               sub eax, 0
// 00667549  7416                 je 0x667561
// 0066754b  83e801               sub eax, 1
// 0066754e  740b                 je 0x66755b
// 00667550  83e801               sub eax, 1
// 00667553  7506                 jne 0x66755b
// 00667555  b802000000           mov eax, 2
// 0066755a  c3                   ret 
// 0066755b  b801000000           mov eax, 1
// 00667560  c3                   ret 
// 00667561  33c0                 xor eax, eax
// 00667563  c3                   ret 

struct ActionStation
{
    int getValue();
    char _padding[0x288];
    int value;
};

int ActionStation::getValue()
{
    switch (value)
    {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    default:
        return 1;
    }
}
