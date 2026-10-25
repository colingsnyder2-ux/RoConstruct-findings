// from server: 100% by king_originala
// roc 2008-06 0063c430  unit: RBX::DebrisService  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063c430
//
// 0063c430  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 0063c436  c7018c9c8400         mov dword ptr [ecx], 0x849c8c
// 0063c43c  c741107c9c8400       mov dword ptr [ecx + 0x10], 0x849c7c
// 0063c443  c74114749c8400       mov dword ptr [ecx + 0x14], 0x849c74
// 0063c44a  c741206c9c8400       mov dword ptr [ecx + 0x20], 0x849c6c
// 0063c451  c741245c9c8400       mov dword ptr [ecx + 0x24], 0x849c5c
// 0063c458  c741444c9c8400       mov dword ptr [ecx + 0x44], 0x849c4c
// 0063c45f  c741643c9c8400       mov dword ptr [ecx + 0x64], 0x849c3c
// 0063c466  c781840000002c9c8400 mov dword ptr [ecx + 0x84], 0x849c2c
// 0063c470  c781a40000001c9c8400 mov dword ptr [ecx + 0xa4], 0x849c1c
// 0063c47a  c781c40000000c9c8400 mov dword ptr [ecx + 0xc4], 0x849c0c
// 0063c484  c78130010000009c8400 mov dword ptr [ecx + 0x130], 0x849c00
// 0063c48e  c781a0010000f09b8400 mov dword ptr [ecx + 0x1a0], 0x849bf0
// 0063c498  c781c0010000e49b8400 mov dword ptr [ecx + 0x1c0], 0x849be4
// 0063c4a2  c781cc010000cc9b8400 mov dword ptr [ecx + 0x1cc], 0x849bcc
// 0063c4ac  8b5004               mov edx, dword ptr [eax + 4]
// 0063c4af  c7840a34010000c09b8400 mov dword ptr [edx + ecx + 0x134], 0x849bc0
// 0063c4ba  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 0063c4c0  8b5008               mov edx, dword ptr [eax + 8]
// 0063c4c3  c7840a34010000b89b8400 mov dword ptr [edx + ecx + 0x134], 0x849bb8
// 0063c4ce  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 0063c4d4  8b500c               mov edx, dword ptr [eax + 0xc]
// 0063c4d7  c7840a340100009c9b8400 mov dword ptr [edx + ecx + 0x134], 0x849b9c
// 0063c4e2  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 0063c4e8  8b4004               mov eax, dword ptr [eax + 4]
// 0063c4eb  8d9048fdffff         lea edx, [eax - 0x2b8]
// 0063c4f1  89940830010000       mov dword ptr [eax + ecx + 0x130], edx
// 0063c4f8  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 0063c4fe  8b4008               mov eax, dword ptr [eax + 8]
// 0063c501  8d9040fdffff         lea edx, [eax - 0x2c0]
// 0063c507  89940830010000       mov dword ptr [eax + ecx + 0x130], edx
// 0063c50e  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 0063c514  8b400c               mov eax, dword ptr [eax + 0xc]
// 0063c517  8d9038fdffff         lea edx, [eax - 0x2c8]
// 0063c51d  89940830010000       mov dword ptr [eax + ecx + 0x130], edx
// 0063c524  e947f4f5ff           jmp 0x59b970

struct S {
    unsigned int words[77];
    int* offsets;
    unsigned int rest[38];

    void f();
    void finish();
};

void S::f()
{
    int* table = offsets;
    words[0] = 0x849c8c;
    words[4] = 0x849c7c;
    words[5] = 0x849c74;
    words[8] = 0x849c6c;
    words[9] = 0x849c5c;
    words[17] = 0x849c4c;
    words[25] = 0x849c3c;
    words[33] = 0x849c2c;
    words[41] = 0x849c1c;
    words[49] = 0x849c0c;
    words[76] = 0x849c00;
    rest[26] = 0x849bf0;
    rest[34] = 0x849be4;
    rest[37] = 0x849bcc;

    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + 0x134 + table[1]) = 0x849bc0;
    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + 0x134 + offsets[2]) = 0x849bb8;
    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + 0x134 + offsets[3]) = 0x849b9c;

    int displacement = offsets[1];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x130 + displacement) =
        displacement - 0x2b8;

    displacement = offsets[2];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x130 + displacement) =
        displacement - 0x2c0;

    displacement = offsets[3];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x130 + displacement) =
        displacement - 0x2c8;

    finish();
}
