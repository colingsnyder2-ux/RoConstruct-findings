// from server: 65% by colin
struct CameraZoomInCommand {
    char pad[0xc];
    void* workspace;
    void doIt(void* dataState);
};

extern "C" void* __stdcall sub_561B10(void*, int);
extern "C" void __stdcall sub_58C810(void*);
extern "C" void __stdcall sub_4108B0(void*, int);
extern "C" bool __stdcall sub_59A360(void*, float);

void CameraZoomInCommand::doIt(void* dataState)
{
    void* p = *(void**)((char*)this->workspace + 0x228);
    void* (*fn)(void*) = *(void* (**)(void*))((char*)p + 4);
    void* result = fn(p);
    if (sub_59A360(result, 1.0f))
    {
        void* v = sub_561B10(this->workspace, 0xb);
        sub_58C810(v);
        void* ds = dataState;
        sub_4108B0(ds, -1);
        void* (*fn2)(void*) = *(void* (**)(void*))((char*)ds + 4);
        *(int*)((char*)ds + 4) = -1;
        fn2(ds);
    }
}
