// from server: 100% by king_originala
// roc 2008-06 005529b0  unit: RBX::RenderBase::AggregateChunk  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005529b0
//
// 005529b0  55                   push ebp
// 005529b1  8bec                 mov ebp, esp
// 005529b3  83ec28               sub esp, 0x28
// 005529b6  894dd8               mov dword ptr [ebp - 0x28], ecx
// 005529b9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005529c0  e85b3bf2ff           call 0x476520
// 005529c5  dd00                 fld qword ptr [eax]
// 005529c7  d95df0               fstp dword ptr [ebp - 0x10]
// 005529ca  8d45dc               lea eax, [ebp - 0x24]
// 005529cd  50                   push eax
// 005529ce  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 005529d1  83c108               add ecx, 8
// 005529d4  e887dcfeff           call 0x540660
// 005529d9  8b08                 mov ecx, dword ptr [eax]
// 005529db  8b5004               mov edx, dword ptr [eax + 4]
// 005529de  894df4               mov dword ptr [ebp - 0xc], ecx
// 005529e1  8955f8               mov dword ptr [ebp - 8], edx
// 005529e4  8d45e8               lea eax, [ebp - 0x18]
// 005529e7  50                   push eax
// 005529e8  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 005529eb  83c108               add ecx, 8
// 005529ee  e83ddcfeff           call 0x540630
// 005529f3  eb08                 jmp 0x5529fd
// 005529f5  8d4de8               lea ecx, [ebp - 0x18]
// 005529f8  e863e7feff           call 0x541160
// 005529fd  8d4df4               lea ecx, [ebp - 0xc]
// 00552a00  51                   push ecx
// 00552a01  8d4de8               lea ecx, [ebp - 0x18]
// 00552a04  e817e5feff           call 0x540f20
// 00552a09  0fb6d0               movzx edx, al
// 00552a0c  85d2                 test edx, edx
// 00552a0e  7438                 je 0x552a48
// 00552a10  8b4508               mov eax, dword ptr [ebp + 8]
// 00552a13  50                   push eax
// 00552a14  8d4de8               lea ecx, [ebp - 0x18]
// 00552a17  e864e7feff           call 0x541180
// 00552a1c  8bc8                 mov ecx, eax
// 00552a1e  e8dd030000           call 0x552e00
// 00552a23  d95de4               fstp dword ptr [ebp - 0x1c]
// 00552a26  d945e4               fld dword ptr [ebp - 0x1c]
// 00552a29  d945f0               fld dword ptr [ebp - 0x10]
// 00552a2c  ded9                 fcompp 
// 00552a2e  dfe0                 fnstsw ax
// 00552a30  f6c441               test ah, 0x41
// 00552a33  7511                 jne 0x552a46
// 00552a35  8d4de8               lea ecx, [ebp - 0x18]
// 00552a38  e843e7feff           call 0x541180
// 00552a3d  8945fc               mov dword ptr [ebp - 4], eax
// 00552a40  d945e4               fld dword ptr [ebp - 0x1c]
// 00552a43  d95df0               fstp dword ptr [ebp - 0x10]
// 00552a46  ebad                 jmp 0x5529f5
// 00552a48  8b45fc               mov eax, dword ptr [ebp - 4]
// 00552a4b  8be5                 mov esp, ebp
// 00552a4d  5d                   pop ebp
// 00552a4e  c20400               ret 4

struct Chunk;
struct Bucket;

struct Result {
    void* value;
    Bucket* owner;

    bool operator!=(const Result& other) const;
    void operator++();
    Chunk* operator*() const;
};

struct Bucket {
    Result begin();
    Result end();
};

struct Chunk {
    unsigned char padding[8];
    Bucket bucket;

    float score(void* argument);
    Chunk* f(void* argument);
};

extern "C" const double* __cdecl initialLimit();

#pragma optimize("", off)
Chunk* Chunk::f(void* argument)
{
    struct Locals {
        float best;
        Result finish;
        Chunk* result;
    } locals;

    locals.result = 0;
    locals.best = (float)*initialLimit();
    locals.finish = bucket.end();

    for (Result current = bucket.begin(); current != locals.finish; ++current) {
        float value = (*current)->score(argument);
        if (value < locals.best) {
            locals.result = *current;
            locals.best = value;
        }
    }

    return locals.result;
}
