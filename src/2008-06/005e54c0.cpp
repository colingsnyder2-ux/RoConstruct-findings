// from server: 73% by colin
struct JointsService {
    char pad[0x138];
    void onAdded(void*);
    void addJoint(void*);
};

extern "C" void __stdcall sub_55ae20(void*);
extern "C" void* __stdcall sub_6a17c6(void*, void*, void*, void*, void*);

void JointsService::addJoint(void* arg)
{
    sub_55ae20(arg);
    void* r = sub_6a17c6(arg, 0, (void*)0x92907c, (void*)0x939f70, 0);
    if (r) {
        onAdded(r);
    }
}
