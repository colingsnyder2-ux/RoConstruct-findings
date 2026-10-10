// from server: 64% by colin
struct LaserTool {
    void func_00596a30(int);
};

extern "C" void __stdcall sub_77e69c(void*, const void*);

void LaserTool::func_00596a30(int arg)
{
    int zero = 0;
    void* p = *(void**)this;
    void (__thiscall *fn)(void*, int) = *(void (__thiscall **)(void*, int))((char*)p + 0x44);
    fn(this, zero);
    sub_77e69c((char*)this + 0xf0, (const void*)arg);
}
