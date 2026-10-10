// from server: 73% by colin
struct Workspace {
    char pad0[0x318];
    void* field_318;
    void func(int arg);
};

extern "C" void* __stdcall sub_57D4D0(void* p);
extern "C" void __stdcall sub_77E6AC(void* p);

void Workspace::func(int arg)
{
    void* p = sub_57D4D0(this);
    void* esi = *(void**)((char*)p + 0xe8);
    if (esi) {
        void* ecx = field_318;
        void* eax = *(void**)ecx;
        void* fn = *(void**)((char*)eax + 0x34);
        char local[0x1c];
        void* r = ((void* (__thiscall*)(void*, void*))fn)(ecx, local);
        void* edx = *(void**)esi;
        void* fn2 = *(void**)((char*)edx + 0x18);
        ((void (__thiscall*)(void*, int, void*))fn2)(esi, arg, r);
        *(int*)(local + 0x1c) = 0;
        *(int*)(local + 0x14) = -1;
        sub_77E6AC(local);
    }
}
