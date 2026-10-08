// from server: 100% by colin
// roc 2007-08 0066e1e0  unit: CXTPControls  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e1e0
//
// 0066e1e0  e8dbffffff           call 0x66e1c0
// 0066e1e5  85c0                 test eax, eax
// 0066e1e7  8b442404             mov eax, dword ptr [esp + 4]
// 0066e1eb  7413                 je 0x66e200
// 0066e1ed  85c0                 test eax, eax
// 0066e1ef  7508                 jne 0x66e1f9
// 0066e1f1  b801000000           mov eax, 1
// 0066e1f6  c20400               ret 4
// 0066e1f9  83f801               cmp eax, 1
// 0066e1fc  7502                 jne 0x66e200
// 0066e1fe  33c0                 xor eax, eax
// 0066e200  c20400               ret 4

extern int __cdecl sub_0066e1c0();

int __stdcall sub_0066e1e0(int a)
{
    if (sub_0066e1c0())
    {
        if (a == 0)
            return 1;
        if (a == 1)
            return 0;
    }
    return a;
}
