// from server: 44% by atomic.potato
struct T4_0062b7a0 {
    char pad0[0x1d8];
    void* m_1d8;
    void* m_1dc;
    void set(void*);
};

extern "C" void* func_004caf90(void*);
extern "C" void* alloc_00718a38(unsigned int);
extern "C" void ctor_006b5db0(void*, void*);
extern "C" void* func_0062aec0(void*);

void T4_0062b7a0::set(void* p)
{
    void* esi = p;
    if (esi == 0) {
        void* ecx = m_1dc;
        if (ecx != 0) {
            esi = (*(void*(**)(void*))((char*)*(void**)ecx + 0x34))(ecx);
            if (esi != 0)
                goto done;
        }
        void* r = func_004caf90(this);
        if (r != 0) {
            esi = func_0062aec0(this);
            goto done;
        }
        esi = (void*)alloc_00718a38(0x20);
        if (esi != 0) {
            ctor_006b5db0(esi, this);
            *((char*)esi + 0x1c) = 0;
            *(void**)esi = (void*)0x8daaac;
            *(void**)((char*)esi + 4) = (void*)0x8daa94;
        } else {
            esi = 0;
        }
    }
done:
    if (esi != m_1d8) {
        void* ecx = m_1d8;
        if (esi != ecx && ecx != 0) {
            (*(void(**)(void*, int))((char*)*(void**)ecx + 0x30))(ecx, 1);
        }
        m_1d8 = esi;
        void* eax = *(void**)esi;
        void* r = (*(void*(**)(void*))((char*)eax + 0x34))(esi);
        esi = r;
        if (esi != 0) {
            void* ecx2 = m_1dc;
            if (esi != ecx2 && ecx2 != 0) {
                (*(void(**)(void*, int))((char*)*(void**)ecx2 + 0x30))(ecx2, 1);
            }
            m_1dc = esi;
        }
    }
}
