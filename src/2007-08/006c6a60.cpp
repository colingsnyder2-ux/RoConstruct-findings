// from server: 44% by colin
struct CXTPCustomizeSheet_CCustomizeEdit
{
    char pad[0x158];
    void* field_158;
    char pad2[0x24];
    char field_180[0x10];

    void* get();
};

extern "C" int __stdcall sub_77dcd0(void*);
extern "C" void __stdcall sub_77ddb8(void*, const char*);
extern "C" void __stdcall sub_77dd74(void*, void*);
extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void __stdcall sub_635980(void*, void*);

void* CXTPCustomizeSheet_CCustomizeEdit::get()
{
    int state = 0;
    void* result;

    if (sub_77dcd0(field_180))
    {
        if (field_158)
        {
            sub_635980(field_158, &result);
            state = 1;
        }
        else
        {
            sub_77ddb8(&result, "list<T> too long");
            state = 2;
        }
    }
    else
    {
        result = field_180;
    }

    sub_77dd74(this, result);

    if (state & 2)
    {
        sub_77ddbc(&result);
    }
    if (state & 1)
    {
        sub_77ddbc(&result);
    }

    return this;
}
