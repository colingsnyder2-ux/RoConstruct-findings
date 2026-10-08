// from server: 85% by colin
// roc 2007-08 005ec490  unit: RBX::BodyForce  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ec490
//
// 005ec490  56                   push esi
// 005ec491  57                   push edi
// 005ec492  8bf9                 mov edi, ecx
// 005ec494  8b4710               mov eax, dword ptr [edi + 0x10]
// 005ec497  8b88d8010000         mov ecx, dword ptr [eax + 0x1d8]
// 005ec49d  8b5164               mov edx, dword ptr [ecx + 0x64]
// 005ec4a0  8b7204               mov esi, dword ptr [edx + 4]
// 005ec4a3  8bce                 mov ecx, esi
// 005ec4a5  e8563cf4ff           call 0x530100
// 005ec4aa  8b4604               mov eax, dword ptr [esi + 4]
// 005ec4ad  8b4820               mov ecx, dword ptr [eax + 0x20]
// 005ec4b0  85c9                 test ecx, ecx
// 005ec4b2  7410                 je 0x5ec4c4
// 005ec4b4  81c6a8000000         add esi, 0xa8
// 005ec4ba  56                   push esi
// 005ec4bb  83c714               add edi, 0x14
// 005ec4be  57                   push edi
// 005ec4bf  e86c2bfeff           call 0x5cf030
// 005ec4c4  5f                   pop edi
// 005ec4c5  5e                   pop esi
// 005ec4c6  c20800               ret 8

struct BodyMover {
    char pad[0x10];
    void* world;
};

struct KernelJoint {
    char pad[0x64];
    void* joint;
};

struct BodyForce : BodyMover {
    char pad2[0x4];
    void computeForce(int a, int b);
};

void __stdcall sub_530100(void* p);
void __stdcall sub_5CF030(void* a, void* b);

void BodyForce::computeForce(int a, int b) {
    void* w = this->world;
    void* k = *(void**)((char*)w + 0x1d8);
    void* j = *(void**)((char*)k + 0x64);
    void* s = *(void**)((char*)j + 4);
    sub_530100(s);
    void* v = *(void**)((char*)s + 4);
    void* c = *(void**)((char*)v + 0x20);
    if (c != 0) {
        sub_5CF030((char*)this + 0x14, (char*)s + 0xa8);
    }
}
