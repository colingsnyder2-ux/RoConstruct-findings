// from server: 47% by colin
struct CXTPDockingPaneManager {
    int sub_66E100(void*);
    int sub_66FA00(void*);
    int func(void*);
};

struct CSomeObj {
    char pad[0x84];
    void ctor();
    int method(void*);
    void dtor();
};

extern "C" void __cdecl sub_6D8230(void*);
extern "C" int __cdecl sub_6D8F00(void*, void*);
extern "C" void __cdecl sub_6D8670(void*);

int CXTPDockingPaneManager::func(void* param)
{
    CSomeObj obj;
    int result;

    if (*(int*)((char*)param + 0x24) == 0) {
        obj.ctor();
        result = 0;
        this->sub_66E100(&result);
        obj.method(param);
        obj.dtor();
        return 1;
    } else {
        obj.ctor();
        if (obj.method(param) == 0) {
            obj.dtor();
            return 0;
        }
        this->sub_66FA00(&obj);
        obj.dtor();
        return 1;
    }
}
