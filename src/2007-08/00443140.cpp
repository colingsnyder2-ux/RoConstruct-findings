// from server: 68% by colin
struct PropDesc {
    char pad[0xc0];
    void* getset;
    int find();
};

extern "C" void __stdcall invalid_parameter_noinfo();
extern "C" int __cdecl sub_630d36(int, int, int, int, int);

int PropDesc::find()
{
    void* ebx = this->getset;
    if (ebx != 0)
        return 0;
    int ebp = *(int*)((char*)ebx + 8);
    if (*(unsigned int*)((char*)ebx + 4) > (unsigned int)ebp)
        invalid_parameter_noinfo();
    void* edi = this->getset;
    int esi = *(int*)((char*)edi + 4);
    if ((unsigned int)esi > *(unsigned int*)((char*)edi + 8))
        invalid_parameter_noinfo();
    if (edi != ebx)
        invalid_parameter_noinfo();
    while (esi != ebp) {
        if ((unsigned int)esi >= *(unsigned int*)((char*)edi + 8))
            invalid_parameter_noinfo();
        int eax = *(int*)esi;
        int r = sub_630d36(eax, 0, 0x881f4c, 0x88602c, 0);
        if (r != 0)
            return r;
        if ((unsigned int)esi >= *(unsigned int*)((char*)edi + 8))
            invalid_parameter_noinfo();
        esi += 8;
    }
    return 0;
}
