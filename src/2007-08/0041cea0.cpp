// from server: 74% by colin
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

struct S {
    void* f(void*);
};

extern "C" void* __stdcall sub_77E69C(void*, const void*);

void* S::f(void* arg)
{
    void* p = 0;
    void* v = (*(void***)this)[1];
    void* r = ((void* (__thiscall*)(void*, void**))v)(this, &p);
    void* src = (void*)((char*)r + 4);
    sub_77E69C(arg, src);
    return arg;
}
