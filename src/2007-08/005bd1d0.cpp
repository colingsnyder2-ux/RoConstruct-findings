// from server: 86% by colin
struct EnumPropDescriptor {
    void* getset;
    char flag;
    char pad[3];
    void** items;
    int count;
    void destroy(void* arg);
};

void EnumPropDescriptor::destroy(void* arg)
{
    if (flag) {
        void* p = getset;
        (*(void (__thiscall**)(void*))p)(p);
        flag = 0;
    }
    int i = 0;
    if (count > 0) {
        do {
            void* item = items[i];
            (*(void (__thiscall**)(void*, void*))(*(void**)((char*)item + 8)))(item, arg);
            i++;
        } while (i < count);
    }
}
