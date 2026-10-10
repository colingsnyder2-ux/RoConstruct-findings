// from server: 76% by tester
struct CameraZoomExtentsCommand {
    char pad[0xc];
    void* workspace;
    void doIt(void* dataState);
};

struct Sub228 {
    virtual void v0();
    virtual void* v1(void*);
};

struct SubDataState {
    virtual void v0();
    virtual void v1(int);
    char pad[4];
    int field4;
};

extern "C" void __stdcall sub_59BFF0(void*);
extern "C" void* __stdcall sub_561B10(void*, int);
extern "C" void __stdcall sub_58C810(void*);
extern "C" void __stdcall sub_4108B0(void*, int);

void CameraZoomExtentsCommand::doIt(void* dataState)
{
    void* ws = workspace;
    Sub228* p1 = (Sub228*)((char*)ws + 0x228);
    void* p2 = (void*)((char*)ws + 0x26c);
    void* r = p1->v1(p2);
    sub_59BFF0(r);
    void* r2 = sub_561B10(workspace, 0xb);
    sub_58C810(r2);
    SubDataState* ds = (SubDataState*)dataState;
    sub_4108B0(ds, -1);
    ds->field4 = -1;
    ds->v1(1);
}
