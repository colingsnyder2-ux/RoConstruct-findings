// from server: 100% by king_originala
// roc 2008-06 005b23f0  unit: RBX::VAccoutrement::?$FactoryProduct  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b23f0
//
// 005b23f0  51                   push ecx
// 005b23f1  837c240800           cmp dword ptr [esp + 8], 0
// 005b23f6  56                   push esi
// 005b23f7  8bf1                 mov esi, ecx
// 005b23f9  c744240400000000     mov dword ptr [esp + 4], 0
// 005b2401  7414                 je 0x5b2417
// 005b2403  c78650010000b44e8300 mov dword ptr [esi + 0x150], 0x834eb4
// 005b240d  c786d401000044618400 mov dword ptr [esi + 0x1d4], 0x846144
// 005b2417  6a00                 push 0
// 005b2419  e812feffff           call 0x5b2230
// 005b241e  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 005b2424  c706fc4c8300         mov dword ptr [esi], 0x834cfc
// 005b242a  c74610ec4c8300       mov dword ptr [esi + 0x10], 0x834cec
// 005b2431  c74614e44c8300       mov dword ptr [esi + 0x14], 0x834ce4
// 005b2438  c74620dc4c8300       mov dword ptr [esi + 0x20], 0x834cdc
// 005b243f  c74624cc4c8300       mov dword ptr [esi + 0x24], 0x834ccc
// 005b2446  c74644bc4c8300       mov dword ptr [esi + 0x44], 0x834cbc
// 005b244d  c74664ac4c8300       mov dword ptr [esi + 0x64], 0x834cac
// 005b2454  c786840000009c4c8300 mov dword ptr [esi + 0x84], 0x834c9c
// 005b245e  c786a40000008c4c8300 mov dword ptr [esi + 0xa4], 0x834c8c
// 005b2468  c786c40000007c4c8300 mov dword ptr [esi + 0xc4], 0x834c7c
// 005b2472  c78630010000744c8300 mov dword ptr [esi + 0x130], 0x834c74
// 005b247c  c786400100005c4c8300 mov dword ptr [esi + 0x140], 0x834c5c
// 005b2486  8b4804               mov ecx, dword ptr [eax + 4]
// 005b2489  c7843150010000544c8300 mov dword ptr [ecx + esi + 0x150], 0x834c54
// 005b2494  8b9650010000         mov edx, dword ptr [esi + 0x150]
// 005b249a  8b4208               mov eax, dword ptr [edx + 8]
// 005b249d  c7843050010000384c8300 mov dword ptr [eax + esi + 0x150], 0x834c38
// 005b24a8  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 005b24ae  8b4104               mov eax, dword ptr [ecx + 4]
// 005b24b1  8d5088               lea edx, [eax - 0x78]
// 005b24b4  8994304c010000       mov dword ptr [eax + esi + 0x14c], edx
// 005b24bb  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 005b24c1  8b4008               mov eax, dword ptr [eax + 8]
// 005b24c4  8d4880               lea ecx, [eax - 0x80]
// 005b24c7  898c304c010000       mov dword ptr [eax + esi + 0x14c], ecx
// 005b24ce  8bc6                 mov eax, esi
// 005b24d0  5e                   pop esi
// 005b24d1  59                   pop ecx
// 005b24d2  c20400               ret 4

struct S {
    unsigned char data[0x1d8];
    void base(int);
    S* f(int);
};

S* S::f(int initialize)
{
    volatile int state = 0;

    if (initialize) {
        *reinterpret_cast<unsigned long*>(data + 0x150) = 0x834eb4;
        *reinterpret_cast<unsigned long*>(data + 0x1d4) = 0x846144;
    }

    base(0);

    int* table = *reinterpret_cast<int**>(data + 0x150);

    *reinterpret_cast<unsigned long*>(data) = 0x834cfc;
    *reinterpret_cast<unsigned long*>(data + 0x10) = 0x834cec;
    *reinterpret_cast<unsigned long*>(data + 0x14) = 0x834ce4;
    *reinterpret_cast<unsigned long*>(data + 0x20) = 0x834cdc;
    *reinterpret_cast<unsigned long*>(data + 0x24) = 0x834ccc;
    *reinterpret_cast<unsigned long*>(data + 0x44) = 0x834cbc;
    *reinterpret_cast<unsigned long*>(data + 0x64) = 0x834cac;
    *reinterpret_cast<unsigned long*>(data + 0x84) = 0x834c9c;
    *reinterpret_cast<unsigned long*>(data + 0xa4) = 0x834c8c;
    *reinterpret_cast<unsigned long*>(data + 0xc4) = 0x834c7c;
    *reinterpret_cast<unsigned long*>(data + 0x130) = 0x834c74;
    *reinterpret_cast<unsigned long*>(data + 0x140) = 0x834c5c;

    *reinterpret_cast<unsigned long*>(data + 0x150 + table[1]) = 0x834c54;
    table = *reinterpret_cast<int**>(data + 0x150);
    *reinterpret_cast<unsigned long*>(data + 0x150 + table[2]) = 0x834c38;

    table = *reinterpret_cast<int**>(data + 0x150);
    int offset = table[1];
    *reinterpret_cast<int*>(data + 0x14c + offset) = offset - 0x78;

    table = *reinterpret_cast<int**>(data + 0x150);
    offset = table[2];
    *reinterpret_cast<int*>(data + 0x14c + offset) = offset - 0x80;

    return this;
}
