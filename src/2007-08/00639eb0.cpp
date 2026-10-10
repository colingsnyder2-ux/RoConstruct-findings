// from server: 58% by colin
struct CRobloxControlColorSelector {
    char pad[0x84];
    int field_84;
    void sub_639E20(int);
    void setValue(int);
};

extern "C" void __stdcall sub_77DDAC(void*);
extern "C" void* __stdcall sub_77DD98(void*);
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" void* __cdecl sub_6B3010();

void CRobloxControlColorSelector::setValue(int value) {
    if (field_84 != value) {
        int local = 0;
        sub_77DDAC(&local);
        void* obj = sub_6B3010();
        void* vtbl = *(void**)obj;
        int result = ((int (__thiscall*)(void*, int*, int))*(void**)((char*)vtbl + 4))(obj, &local, value);
        if (result != 0) {
            void* p = sub_77DD98(&local);
            sub_639E20((int)p);
        }
        field_84 = value;
        sub_77DDBC(&local);
    }
}
