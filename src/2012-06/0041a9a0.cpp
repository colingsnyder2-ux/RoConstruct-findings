// from server: 75% by atomic.potato
struct PasteVerb {
    void* field0;
    void release();
};

extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);

void* __cdecl sub_401970();

void PasteVerb::release()
{
    void* p = field0;
    if (p) {
        ((PasteVerb*)p)->release();
        void* q = sub_401970();
        EnterCriticalSection(q);
        field0 = *(void**)((char*)q + 0x18);
        *(void**)((char*)q + 0x18) = p;
        LeaveCriticalSection(q);
    }
}
