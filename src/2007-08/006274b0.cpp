// from server: 92% by colin
// roc 2007-08 006274b0  unit: RBX::SeparateStage  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006274b0
//
// 006274b0  56                   push esi
// 006274b1  8b742408             mov esi, dword ptr [esp + 8]
// 006274b5  57                   push edi
// 006274b6  8bf9                 mov edi, ecx
// 006274b8  8b4f08               mov ecx, dword ptr [edi + 8]
// 006274bb  8b01                 mov eax, dword ptr [ecx]
// 006274bd  8b5014               mov edx, dword ptr [eax + 0x14]
// 006274c0  56                   push esi
// 006274c1  ffd2                 call edx
// 006274c3  8b06                 mov eax, dword ptr [esi]
// 006274c5  8b500c               mov edx, dword ptr [eax + 0xc]
// 006274c8  8bce                 mov ecx, esi
// 006274ca  ffd2                 call edx
// 006274cc  83f801               cmp eax, 1
// 006274cf  7511                 jne 0x6274e2
// 006274d1  8d44240c             lea eax, [esp + 0xc]
// 006274d5  50                   push eax
// 006274d6  8d4f1c               lea ecx, [edi + 0x1c]
// 006274d9  89742410             mov dword ptr [esp + 0x10], esi
// 006274dd  e84ee6fdff           call 0x605b30
// 006274e2  57                   push edi
// 006274e3  8bce                 mov ecx, esi
// 006274e5  e8561cfeff           call 0x609140
// 006274ea  5f                   pop edi
// 006274eb  5e                   pop esi
// 006274ec  c20400               ret 4

struct SeparateStage {
    void doStage(void*);
};

struct StageTarget {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int v3();
    virtual void v4();
    virtual void v5();
};

extern "C" void __stdcall sub_605b30(void*, void*);
extern "C" void __stdcall sub_609140(void*, void*);

void SeparateStage::doStage(void* arg) {
    StageTarget* t = (StageTarget*)arg;
    void* p = *(void**)((char*)this + 8);
    void** vt = *(void***)p;
    void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vt[5];
    fn(p, t);
    int r = t->v3();
    if (r == 1) {
        void* tmp = t;
        sub_605b30((char*)this + 0x1c, &tmp);
    }
    sub_609140(t, this);
}
