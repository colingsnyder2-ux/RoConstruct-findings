// from server: 82% by colin
struct CXTPRibbonGroup {
    void sub_716f60();
    void sub_716fc0(int, void*);
    void f(void*);
};

extern "C" void* __fastcall sub_63052c(void*);
extern "C" void __cdecl sub_62ff20();

void CXTPRibbonGroup::f(void* param) {
    sub_716f60();
    int count = *(int*)((char*)param + 0x28);
    int i = 0;
    if (count > 0) {
        do {
            void* item;
            if (i >= 0 && i < count) {
                if (i >= *(int*)((char*)param + 0x28)) {
                    sub_62ff20();
                }
                item = *(void**)(*(int*)((char*)param + 0x24) + i * 4);
            } else {
                item = 0;
            }
            void** vtbl = *(void***)item;
            void* result = ((void* (__thiscall*)(void*))vtbl[0])(item);
            void* obj = sub_63052c(result);
            sub_716fc0(i, obj);
            void** vtbl2 = *(void***)obj;
            ((void (__thiscall*)(void*, void*))vtbl2[0x17])(obj, item);
            *(void**)((char*)obj + 0x30) = this;
            count = *(int*)((char*)param + 0x28);
            i++;
        } while (i < count);
    }
}
