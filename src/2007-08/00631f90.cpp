// from server: 78% by colin
struct MyXTPCommandBars {
    int GetCount();
    void* GetAt(int index);
    void SomeMethod(void* param);
};

extern "C" void* __stdcall sub_67C5B0(void* a, void* b, int c, int d);

void MyXTPCommandBars::SomeMethod(void* param) {
    int count = GetCount();
    int i = 0;
    if (count > 0) {
        void* p = param;
        do {
            void* item = GetAt(i);
            if (*(int*)((char*)item + 0xd0) == 2) {
                void* obj = sub_67C5B0(*(void**)((char*)p + 0xf8), item, -1, 0);
                (*(void (__thiscall**)(void*, int))((*(int**)obj)[0x94/4]))(obj, 0);
                (*(void (__thiscall**)(void*, int))((*(int**)obj)[0x64/4]))(obj, 0);
            }
            i++;
        } while (i < GetCount());
    }
}
