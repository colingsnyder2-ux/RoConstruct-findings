// from server: 100% by king_originala
// roc 2008-06 0062b970  unit: RBX::VExplosion::?$SignalDesc  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062b970
//
// 0062b970  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 0062b976  c7011c608400         mov dword ptr [ecx], 0x84601c
// 0062b97c  c7411010608400       mov dword ptr [ecx + 0x10], 0x846010
// 0062b983  c7411408608400       mov dword ptr [ecx + 0x14], 0x846008
// 0062b98a  c7412000608400       mov dword ptr [ecx + 0x20], 0x846000
// 0062b991  c74124f05f8400       mov dword ptr [ecx + 0x24], 0x845ff0
// 0062b998  c74144e05f8400       mov dword ptr [ecx + 0x44], 0x845fe0
// 0062b99f  c74164d05f8400       mov dword ptr [ecx + 0x64], 0x845fd0
// 0062b9a6  c78184000000c05f8400 mov dword ptr [ecx + 0x84], 0x845fc0
// 0062b9b0  c781a4000000b05f8400 mov dword ptr [ecx + 0xa4], 0x845fb0
// 0062b9ba  c781c4000000a05f8400 mov dword ptr [ecx + 0xc4], 0x845fa0
// 0062b9c4  c78130010000945f8400 mov dword ptr [ecx + 0x130], 0x845f94
// 0062b9ce  c781a0010000845f8400 mov dword ptr [ecx + 0x1a0], 0x845f84
// 0062b9d8  c781c0010000785f8400 mov dword ptr [ecx + 0x1c0], 0x845f78
// 0062b9e2  c781cc010000605f8400 mov dword ptr [ecx + 0x1cc], 0x845f60
// 0062b9ec  8b5004               mov edx, dword ptr [eax + 4]
// 0062b9ef  c7840a34010000545f8400 mov dword ptr [edx + ecx + 0x134], 0x845f54
// 0062b9fa  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 0062ba00  8b5008               mov edx, dword ptr [eax + 8]
// 0062ba03  c7840a340100004c5f8400 mov dword ptr [edx + ecx + 0x134], 0x845f4c
// 0062ba0e  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 0062ba14  8b500c               mov edx, dword ptr [eax + 0xc]
// 0062ba17  c7840a34010000305f8400 mov dword ptr [edx + ecx + 0x134], 0x845f30
// 0062ba22  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 0062ba28  8b4004               mov eax, dword ptr [eax + 4]
// 0062ba2b  8d9048fdffff         lea edx, [eax - 0x2b8]
// 0062ba31  89940830010000       mov dword ptr [eax + ecx + 0x130], edx
// 0062ba38  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 0062ba3e  8b4008               mov eax, dword ptr [eax + 8]
// 0062ba41  8d9040fdffff         lea edx, [eax - 0x2c0]
// 0062ba47  89940830010000       mov dword ptr [eax + ecx + 0x130], edx
// 0062ba4e  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 0062ba54  8b400c               mov eax, dword ptr [eax + 0xc]
// 0062ba57  8d9038fdffff         lea edx, [eax - 0x2c8]
// 0062ba5d  89940830010000       mov dword ptr [eax + ecx + 0x130], edx
// 0062ba64  e907fff6ff           jmp 0x59b970

struct S {
    int words[116];
    void reset();
    void finish();
};

void S::reset()
{
    int* table = *(int**)&words[77];

    words[0]   = 0x84601c;
    words[4]   = 0x846010;
    words[5]   = 0x846008;
    words[8]   = 0x846000;
    words[9]   = 0x845ff0;
    words[17]  = 0x845fe0;
    words[25]  = 0x845fd0;
    words[33]  = 0x845fc0;
    words[41]  = 0x845fb0;
    words[49]  = 0x845fa0;
    words[76]  = 0x845f94;
    words[104] = 0x845f84;
    words[112] = 0x845f78;
    words[115] = 0x845f60;

    *(int*)((char*)this + 0x134 + table[1]) = 0x845f54;
    table = *(int**)&words[77];
    *(int*)((char*)this + 0x134 + table[2]) = 0x845f4c;
    table = *(int**)&words[77];
    *(int*)((char*)this + 0x134 + table[3]) = 0x845f30;

    table = *(int**)&words[77];
    int offset = table[1];
    *(int*)((char*)this + 0x130 + offset) = offset - 0x2b8;

    table = *(int**)&words[77];
    offset = table[2];
    *(int*)((char*)this + 0x130 + offset) = offset - 0x2c0;

    table = *(int**)&words[77];
    offset = table[3];
    *(int*)((char*)this + 0x130 + offset) = offset - 0x2c8;

    finish();
}
