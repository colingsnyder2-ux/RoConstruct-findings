// from server: 35% by atomic.potato
typedef void (__cdecl *InvalidParam)();
typedef void (__stdcall *OutputDebugStringA_t)(const char*);
typedef void (__thiscall *SetHidden_t)(void*, int);

extern "C" InvalidParam _invalid_parameter_noinfo;
extern "C" OutputDebugStringA_t OutputDebugStringA;

struct Item;
struct ItemBool;

struct Item
{
    void* vtable;
    void* first;
    void* last;
    void* limit;
    void* constraints_first;
    void* constraints_last;
    void* constraints_limit;
};

struct ItemBool
{
    void* vtable;
    void* first;
    void* last;
    void* limit;
    void* constraints_first;
    void* constraints_last;
    void* constraints_limit;
};

int __fastcall initialize(Item* pThis, void*, int value);
void __fastcall insertConstraint(ItemBool* pThis, void*, void* value, void* result);
void __fastcall setHidden(ItemBool* pThis, void*, int hidden);
void __fastcall onConstraintsChanged(ItemBool* pThis, void*);

void __fastcall onConstraintsChanged(ItemBool* pThis, void*)
{
    pThis = pThis;
}

struct S
{
    void* vtable;
    void* first;
    void* last;
    void* limit;
    void* constraints_first;
    void* constraints_last;
    void* constraints_limit;

    void f(void* arg);
};

void S::f(void* arg)
{
    void* edx = *(void**)arg;
    void* ecx = *(void**)((char*)arg + 0x18);
    void* edi = this;
    void* esi = *(void**)((char*)edi + 0x10);
    unsigned char flag = 0;

    if ((unsigned char*)esi > (unsigned char*)*(void**)((char*)edi + 0x14))
        _invalid_parameter_noinfo();

    void* ebp = *(void**)((char*)edi + 4);
    void* ebx = esi;
    esi = *(void**)((char*)edi + 0x14);

    if ((unsigned char*)*(void**)((char*)edi + 0x10) > (unsigned char*)esi)
        _invalid_parameter_noinfo();

    void* eax = *(void**)((char*)edi + 4);

    if (ebp != 0 && ebp != eax)
        _invalid_parameter_noinfo();

    if (ebx == esi)
    {
        unsigned char c = !flag;
        setHidden((ItemBool*)((char*)edi - 0x120), 0, c);
        return;
    }

    if (ebp == 0)
        _invalid_parameter_noinfo();

    while (ebx != esi)
    {
        if (ebp == 0)
            _invalid_parameter_noinfo();

        if ((unsigned char*)ebx >= (unsigned char*)*(void**)0x10)
            _invalid_parameter_noinfo();

        void* value = *(void**)ebx;
        void* result;
        insertConstraint((ItemBool*)edi, 0, value, &result);

        void* saved_edi = *(void**)((char*)edi + 4);
        if (saved_edi != 0 && saved_edi != edx)
            _invalid_parameter_noinfo();

        void* saved_esi = result;
        if (saved_esi == ecx)
        {
            if (ebp != 0)
            {
                while (1)
                {
                    void* ebp_inner = *(void**)((char*)saved_esi + 0x1c);
                    void* edi_inner = *(void**)((char*)saved_esi + 0x20);

                    if ((unsigned char*)ebp_inner > (unsigned char*)edi_inner)
                        _invalid_parameter_noinfo();

                    void* ebx_inner = *(void**)((char*)saved_esi + 0x10);

                    if (ebp_inner == edi_inner)
                        break;

                    if (!flag)
                    {
                        if (ebx_inner == 0)
                            _invalid_parameter_noinfo();

                        if ((unsigned char*)ebp_inner >= (unsigned char*)*(void**)0x10)
                            _invalid_parameter_noinfo();

                        void* item_value = *(void**)ebp_inner;
                        ItemBool* inner = (ItemBool*)((char*)edi - 0x120);
                        unsigned char r = (unsigned char)initialize((Item*)inner, 0, (int)(unsigned __int64)item_value);
                        void* vt = *(void**)inner;
                        void (__fastcall **setter)(ItemBool*, void*, unsigned char*) = (void (__fastcall **)(ItemBool*, void*, unsigned char*))((char*)vt + 0xf4);
                        setter[0](inner, 0, &r);
                    }
                    else
                    {
                        if (ebx_inner == 0)
                            _invalid_parameter_noinfo();

                        if ((unsigned char*)ebp_inner >= (unsigned char*)*(void**)0x10)
                            _invalid_parameter_noinfo();

                        void* item_value = *(void**)ebp_inner;
                        ItemBool* inner = (ItemBool*)((char*)edi - 0x120);
                        unsigned char r = (unsigned char)initialize((Item*)inner, 0, (int)(unsigned __int64)item_value);
                        void* vt = *(void**)inner;
                        void (__fastcall **setter)(ItemBool*, void*, unsigned char*, void*) = (void (__fastcall **)(ItemBool*, void*, unsigned char*, void*))((char*)vt + 0xf8);
                        unsigned char out_val = 0;
                        setter[0](inner, 0, &r, &out_val);
                        if (!out_val)
                        {
                            OutputDebugStringA(">Authoring");
                            onConstraintsChanged((ItemBool*)((char*)edi - 0x120), 0);
                            setHidden((ItemBool*)((char*)edi - 0x120), 0, 0);
                            return;
                        }
                    }

                    flag = 1;

                    if (ebx_inner == 0)
                        _invalid_parameter_noinfo();

                    if ((unsigned char*)ebp_inner >= (unsigned char*)*(void**)0x10)
                        _invalid_parameter_noinfo();

                    ebp_inner = (void*)((char*)ebp_inner + 8);
                    saved_esi = (void*)((char*)saved_esi + 0);
                    ebx_inner = ebx_inner;
                }
            }
            ebx = (void*)((char*)ebx + 4);
            if (ebp == 0)
                _invalid_parameter_noinfo();
            if ((unsigned char*)ebx >= (unsigned char*)*(void**)0x10)
                _invalid_parameter_noinfo();
            continue;
        }
        break;
    }

    unsigned char c = !flag;
    setHidden((ItemBool*)((char*)edi - 0x120), 0, c);
}
