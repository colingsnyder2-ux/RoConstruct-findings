// from server: 43% by colin
struct S
{
    char pad0[0x158];
    int field158;
    char pad15c[4];
    int field160;
    int field164;

    S* construct(int arg);
};

extern "C" bool __cdecl func_0060a2f0();

S* S::construct(int arg)
{
    char local[8];
    *(int*)(local + 0) = 0x5ec170;
    *(int*)(local + 4) = arg;

    *(int*)((char*)this + 0x00) = 0x81a08c;
    *(int*)((char*)this + 0x10) = 0x81a07c;
    *(int*)((char*)this + 0x14) = 0x81a074;
    *(int*)((char*)this + 0x20) = 0x81a06c;
    *(int*)((char*)this + 0x24) = 0x81a05c;
    *(int*)((char*)this + 0x44) = 0x81a04c;
    *(int*)((char*)this + 0x64) = 0x81a03c;
    *(int*)((char*)this + 0x84) = 0x81a02c;
    *(int*)((char*)this + 0xa4) = 0x81a01c;
    *(int*)((char*)this + 0xc4) = 0x81a00c;
    field158 = 0;

    if (!func_0060a2f0())
    {
        field160 = *(int*)(local + 0);
        field164 = *(int*)(local + 4);
        field158 = 0x819cdc;
    }
    else
    {
        field158 = 0;
    }

    return this;
}
