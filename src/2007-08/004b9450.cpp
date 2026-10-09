// from server: 71% by colin
// roc 2007-08 004b9450  unit: RakPeer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9450

struct RakPeer {
    void* field0;
    void* field4;
    void* field8;
    void func();
};

extern "C" void* __cdecl sub_62fef6(unsigned int size);

void RakPeer::func()
{
    void* p = field4;
    void* q = *(void**)((char*)p + 0x124);
    if (q != field8) {
        void* p2 = field4;
        void* q2 = *(void**)((char*)p2 + 0x124);
        if (*(unsigned char*)((char*)q2 + 0x120) != 1) {
            goto skip;
        }
    }
    {
        void* p3 = field4;
        void* old = *(void**)((char*)p3 + 0x124);
        void* n = sub_62fef6(0x128);
        void* p4 = field4;
        *(void**)((char*)p4 + 0x124) = n;
        void* p5 = field4;
        void* q5 = *(void**)((char*)p5 + 0x124);
        *(void**)((char*)q5 + 0x124) = old;
    }
skip:
    {
        void* p6 = field4;
        void* q6 = *(void**)((char*)p6 + 0x124);
        field4 = q6;
    }
}
