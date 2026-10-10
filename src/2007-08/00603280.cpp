// from server: 75% by colin
struct IStage {
    virtual int getStageType();
    virtual int getUpstream();
};

struct JointStage {
    IStage* upstream;
    void* field8;
    char pad[4];
    void* field10;

    void onPrimitiveAdded(void* p);
};

extern "C" void __cdecl sub_5B4710(void*);
extern "C" void __cdecl sub_609120(void*);
extern "C" void __cdecl sub_605B30(void*, void*);
extern "C" void __cdecl sub_602E40(void*, void*, void*);

void JointStage::onPrimitiveAdded(void* p)
{
    int a = ((int (__thiscall*)(void*))((*(void***)((char*)p + 4))[1]))((void*)((char*)p + 4));
    int b = ((int (__thiscall*)(void*))((*(void***)this)[1]))(this);
    if (a > b) {
        ((void (__thiscall*)(void*, void*))((*(void***)field8)[5]))(field8, p);
        sub_5B4710(p);
        sub_609120(p);
    } else {
        void* tmp = p;
        sub_605B30((char*)this + 0x10, &tmp);
        sub_602E40(this, p, *(void**)((char*)p + 8));
        sub_602E40(this, p, *(void**)((char*)p + 0xc));
        sub_609120(p);
    }
}
