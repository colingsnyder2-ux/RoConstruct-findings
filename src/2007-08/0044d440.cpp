// from server: 68% by colin
extern "C" int __stdcall PostMessageA(int, unsigned int, unsigned int, int);
extern "C" int __cdecl sub_0062FF02();

struct ExitCommand {
    char pad[0xc];
    void* field_c;
    void execute(int);
};

void ExitCommand::execute(int)
{
    int v = sub_0062FF02();
    int* p = *(int**)(v + 4);
    int* q = *(int**)((char*)p + 0x20);
    if (*(char*)((char*)q + 0xec) != 0) {
        int* r = *(int**)((char*)q + 0x20);
        PostMessageA((int)r, 0x10, 0, 0);
        return;
    }
    void* obj = field_c;
    int* vt = *(int**)obj;
    int (*fn)(void*) = *(int (**)(void*))((char*)vt + 0x68);
    int res = fn(obj);
    if (res != 0) {
        void* obj2 = field_c;
        int* vt2 = *(int**)obj2;
        int (*fn2)(void*, int*) = *(int (**)(void*, int*))((char*)vt2 + 0x6c);
        int out;
        fn2(obj2, &out);
        int* r2 = *(int**)((char*)&out + 0x20);
        PostMessageA((int)r2, 0x111, 0xe102, 0);
    }
}
