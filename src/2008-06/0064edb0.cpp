// from server: 41% by colin
struct S {
    char pad0[0x144];
    int field144;
    char pad148[0x4];
    void* field148;
    char pad14c[0x14];
    unsigned int field160;
    void method(int*);
};

extern "C" void __cdecl func_00573310(void*);
extern "C" void __cdecl func_004f35d0(void*, void*, void*);
extern "C" void* __cdecl func_00573250();
extern "C" void* __cdecl func_005731d0();
extern "C" void* __cdecl func_00573210();
extern "C" void __cdecl func_00573360(void*, int, void*, void*, void*);
extern "C" void* __cdecl func_007baf10(int);
extern "C" void __cdecl func_00802368(void*, void*, void*);
extern "C" void __cdecl func_00802468(void*);

void S::method(int* param)
{
    int local_28;
    int local_38;
    int local_54;
    int local_70;
    void* vtable;
    void* edx;
    void* eax;
    void* edi;
    int ebx;
    int* ebp;
    int local_14;
    int local_1c;
    int local_94;

    ebp = param;
    ebx = 0;
    local_1c = 0;

    if (field144 == 1 || field144 == 2)
    {
        func_00573310(&local_28);
        func_004f35d0(&local_1c, &local_28, &local_28 + 2);
        edi = *(void**)ebp;
        func_00573250();
        edx = *(void**)((char*)edi + 0x2c);
        ((void (__thiscall*)(void*, void*, void*))edx)(ebp, &local_1c, eax);
    }

    vtable = *(void**)this;
    edx = *(void**)((char*)vtable + 0x78);
    ((void (__thiscall*)(void*))edx)(this);

    vtable = *(void**)this;
    edx = *(void**)((char*)vtable + 0x78);
    ((void (__thiscall*)(void*))edx)(this);

    if ((unsigned char)eax != 0)
    {
        func_005731d0();
    }
    else
    {
        func_00573210();
    }

    local_14 = (int)eax;

    if (field148 != 0)
    {
        vtable = *(void**)field148;
        edx = *(void**)((char*)vtable + 0xc);
        ((void (__thiscall*)(void*))edx)(field148);
        if ((unsigned char)eax != 0)
        {
            vtable = *(void**)this;
            edx = *(void**)((char*)vtable + 0x58);
            ((void (__thiscall*)(void*, void*))edx)(this, &local_70);
            func_00802368(&local_38, (void*)0x84b670, eax);
            local_94 = 0;
            local_1c = 1;
            edi = eax;
            local_94 = 1;
            ebx = 3;
        }
        else
        {
            vtable = *(void**)this;
            edx = *(void**)((char*)vtable + 0x58);
            ((void (__thiscall*)(void*, void*))edx)(this, &local_38);
            edi = eax;
            local_94 = 2;
            ebx = 4;
        }
    }
    else
    {
        vtable = *(void**)this;
        edx = *(void**)((char*)vtable + 0x58);
        ((void (__thiscall*)(void*, void*))edx)(this, &local_38);
        edi = eax;
        local_94 = 2;
        ebx = 4;
    }

    func_007baf10(1);
    func_00573360(this, local_14, edi, eax, ebp);

    local_94 = 1;
    if (ebx & 4)
    {
        ebx &= ~4;
        local_1c = ebx;
        func_00802468(&local_38);
    }

    local_94 = 0;
    if (ebx & 2)
    {
        ebx &= ~2;
        local_1c = ebx;
        func_00802468(&local_54);
    }

    local_94 = -1;
    if (ebx & 1)
    {
        func_00802468(&local_70);
    }

    if (field160 > 0)
    {
        vtable = *(void**)this;
        edx = *(void**)((char*)vtable + 0x78);
        ((void (__thiscall*)(void*))edx)(this);
        if ((unsigned char)eax != 0)
        {
            func_005731d0();
        }
        else
        {
            func_00573210();
        }
        edi = eax;
        func_007baf10(0);
        func_00573360(this, (int)((char*)this + 0x14c), edi, eax, ebp);
    }
}
