// from server: 100% by king_originala
// roc 2008-06 00599020  unit: RBX::PartInstance  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599020
//
// 00599020  837c240800           cmp dword ptr [esp + 8], 0
// 00599025  56                   push esi
// 00599026  8bf1                 mov esi, ecx
// 00599028  740a                 je 0x599034
// 0059902a  c78634010000ac0f8300 mov dword ptr [esi + 0x134], 0x830fac
// 00599034  8b442408             mov eax, dword ptr [esp + 8]
// 00599038  6a00                 push 0
// 0059903a  50                   push eax
// 0059903b  e890080700           call 0x6098d0
// 00599040  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 00599046  c706c42a8300         mov dword ptr [esi], 0x832ac4
// 0059904c  c74610b82a8300       mov dword ptr [esi + 0x10], 0x832ab8
// 00599053  c74614b02a8300       mov dword ptr [esi + 0x14], 0x832ab0
// 0059905a  c74620a82a8300       mov dword ptr [esi + 0x20], 0x832aa8
// 00599061  c74624982a8300       mov dword ptr [esi + 0x24], 0x832a98
// 00599068  c74644882a8300       mov dword ptr [esi + 0x44], 0x832a88
// 0059906f  c74664782a8300       mov dword ptr [esi + 0x64], 0x832a78
// 00599076  c78684000000682a8300 mov dword ptr [esi + 0x84], 0x832a68
// 00599080  c786a4000000582a8300 mov dword ptr [esi + 0xa4], 0x832a58
// 0059908a  c786c4000000482a8300 mov dword ptr [esi + 0xc4], 0x832a48
// 00599094  c786300100003c2a8300 mov dword ptr [esi + 0x130], 0x832a3c
// 0059909e  8b5104               mov edx, dword ptr [ecx + 4]
// 005990a1  c7843234010000302a8300 mov dword ptr [edx + esi + 0x134], 0x832a30
// 005990ac  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005990b2  8b4808               mov ecx, dword ptr [eax + 8]
// 005990b5  c7843134010000282a8300 mov dword ptr [ecx + esi + 0x134], 0x832a28
// 005990c0  8bc6                 mov eax, esi
// 005990c2  5e                   pop esi
// 005990c3  c20800               ret 8

struct S
{
    unsigned int words[78];
    void base_init(int value, int flag);
    S* func_00599020(int value, int flag);
};

S* S::func_00599020(int value, int flag)
{
    if (flag)
        words[77] = 0x00830fac;

    base_init(value, 0);

    int* table = reinterpret_cast<int*>(words[77]);
    words[0] = 0x00832ac4;
    words[4] = 0x00832ab8;
    words[5] = 0x00832ab0;
    words[8] = 0x00832aa8;
    words[9] = 0x00832a98;
    words[17] = 0x00832a88;
    words[25] = 0x00832a78;
    words[33] = 0x00832a68;
    words[41] = 0x00832a58;
    words[49] = 0x00832a48;
    words[76] = 0x00832a3c;

    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + 0x134 + table[1]) = 0x00832a30;

    table = reinterpret_cast<int*>(words[77]);
    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + 0x134 + table[2]) = 0x00832a28;

    return this;
}
