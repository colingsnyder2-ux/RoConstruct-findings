// from server: 100% by king_originala
// roc 2008-06 005b1230  unit: RBX::Accoutrement  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1230
//
// 005b1230  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 005b1236  c701fc4c8300         mov dword ptr [ecx], 0x834cfc
// 005b123c  c74110ec4c8300       mov dword ptr [ecx + 0x10], 0x834cec
// 005b1243  c74114e44c8300       mov dword ptr [ecx + 0x14], 0x834ce4
// 005b124a  c74120dc4c8300       mov dword ptr [ecx + 0x20], 0x834cdc
// 005b1251  c74124cc4c8300       mov dword ptr [ecx + 0x24], 0x834ccc
// 005b1258  c74144bc4c8300       mov dword ptr [ecx + 0x44], 0x834cbc
// 005b125f  c74164ac4c8300       mov dword ptr [ecx + 0x64], 0x834cac
// 005b1266  c781840000009c4c8300 mov dword ptr [ecx + 0x84], 0x834c9c
// 005b1270  c781a40000008c4c8300 mov dword ptr [ecx + 0xa4], 0x834c8c
// 005b127a  c781c40000007c4c8300 mov dword ptr [ecx + 0xc4], 0x834c7c
// 005b1284  c78130010000744c8300 mov dword ptr [ecx + 0x130], 0x834c74
// 005b128e  c781400100005c4c8300 mov dword ptr [ecx + 0x140], 0x834c5c
// 005b1298  8b5004               mov edx, dword ptr [eax + 4]
// 005b129b  c7840a50010000544c8300 mov dword ptr [edx + ecx + 0x150], 0x834c54
// 005b12a6  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 005b12ac  8b5008               mov edx, dword ptr [eax + 8]
// 005b12af  c7840a50010000384c8300 mov dword ptr [edx + ecx + 0x150], 0x834c38
// 005b12ba  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 005b12c0  8b4004               mov eax, dword ptr [eax + 4]
// 005b12c3  8d5088               lea edx, [eax - 0x78]
// 005b12c6  8994084c010000       mov dword ptr [eax + ecx + 0x14c], edx
// 005b12cd  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 005b12d3  8b4008               mov eax, dword ptr [eax + 8]
// 005b12d6  8d5080               lea edx, [eax - 0x80]
// 005b12d9  8994084c010000       mov dword ptr [eax + ecx + 0x14c], edx
// 005b12e0  e9bbfaffff           jmp 0x5b0da0

struct S {
    unsigned int words[84];
    int* table;

    void f();
    void finish();
};

void S::f()
{
    int* initialTable = table;
    words[0]  = 0x834cfc;
    words[4]  = 0x834cec;
    words[5]  = 0x834ce4;
    words[8]  = 0x834cdc;
    words[9]  = 0x834ccc;
    words[17] = 0x834cbc;
    words[25] = 0x834cac;
    words[33] = 0x834c9c;
    words[41] = 0x834c8c;
    words[49] = 0x834c7c;
    words[76] = 0x834c74;
    words[80] = 0x834c5c;

    *(unsigned int*)((char*)this + 0x150 + initialTable[1]) = 0x834c54;
    *(unsigned int*)((char*)this + 0x150 + table[2]) = 0x834c38;

    int offset = table[1];
    *(int*)((char*)this + 0x14c + offset) = offset - 0x78;

    offset = table[2];
    *(int*)((char*)this + 0x14c + offset) = offset - 0x80;

    finish();
}
