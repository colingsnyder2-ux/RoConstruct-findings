// from server: 48% by colin
extern "C" void __cdecl free_0062fc62(void*);

struct S {
    void method_00727b10(int, int, int, int, int);
    void method_00727be0();
};

void S::method_00727be0()
{
    int* p = *(int**)((char*)this + 0x18);
    int v = *p;
    method_00727b10(v, (int)this, v, (int)this, (int)p);
    free_0062fc62(*(void**)((char*)this + 0x18));
    *(int*)((char*)this + 0x18) = 0;
    *(int*)((char*)this + 0x1c) = 0;
    if (*(int*)this == 0) {
        int (*fn)(int, int) = *(int (**)(int, int))this;
        *(int*)((char*)this + 4) = fn(*(int*)((char*)this + 4), 1);
    }
    *(int*)((char*)this + 8) = 0;
    *(int*)this = 0;
}
