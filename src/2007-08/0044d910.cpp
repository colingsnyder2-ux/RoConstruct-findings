// from server: 36% by colin
struct ExitCommand {
    int execute(void* p);
};

extern "C" void* __cdecl func_0062fef6(unsigned int size);
extern "C" int __cdecl func_00401990(void* self, int zero);
extern "C" int __cdecl func_00467d50(void* self);

int ExitCommand::execute(void* p)
{
    if (p == 0)
        return (int)0x80004003;

    *(int*)p = 0;

    void* mem = func_0062fef6(0x44);
    void* obj;
    if (mem != 0)
        obj = (void*)func_00401990(mem, 0);
    else
        obj = 0;

    if (obj != 0) {
        (*(int*)((char*)obj + 0x30))++;
        int r = func_00467d50(obj);
        if (r < 0)
            r = 0;
        (*(int*)((char*)obj + 0x30))--;
        if (r != 0) {
            void* vtable = *(void**)((char*)obj + 0x20);
            void* fn = *(void**)((char*)vtable + 0x14);
            ((void (__stdcall*)(void*, int))fn)((char*)obj + 0x20, 1);
        }
    }
    return 0;
}
