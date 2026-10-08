// from server: 32% by colin
// roc 2007-08 0041cea0  unit: InsertDecal  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041cea0
//
// 0041cea0  51                   push ecx
// 0041cea1  8b01                 mov eax, dword ptr [ecx]
// 0041cea3  8b5004               mov edx, dword ptr [eax + 4]
// 0041cea6  56                   push esi
// 0041cea7  c744240400000000     mov dword ptr [esp + 4], 0
// 0041ceaf  ffd2                 call edx
// 0041ceb1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041ceb5  83c004               add eax, 4
// 0041ceb8  50                   push eax
// 0041ceb9  8bce                 mov ecx, esi
// 0041cebb  ff159ce67700         call dword ptr [0x77e69c]
// 0041cec1  8bc6                 mov eax, esi
// 0041cec3  5e                   pop esi
// 0041cec4  59                   pop ecx
// 0041cec5  c20400               ret 4

struct InsertDecal {
    void* getSomething();
    void construct(void*);
};

void* InsertDecal::getSomething()
{
    return 0;
}

void InsertDecal::construct(void* arg)
{
    void* p = getSomething();
    void* q = (char*)p + 4;
    *(void**)((char*)this + 0) = q;
}
