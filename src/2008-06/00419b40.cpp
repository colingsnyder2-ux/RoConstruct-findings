// from server: 77% by colin
// roc 2008-06 00419b40  unit: VCLuaFunction::?$CComObject  size: 149 bytes
// library xtp-11.2.2/Source\Calendar\XTPCalendarCustomProperties.cpp

extern "C" void __cdecl sub_6a067a(void*);

struct VCLuaFunction
{
    void* field_0;
    void* field_4;
    void* field_8;
    void* field_c;
    void** field_10;
    unsigned int field_14;
    unsigned int field_18;
    unsigned int field_1c;

    void Clear();
};

void VCLuaFunction::Clear()
{
    while (this->field_1c != 0)
    {
        unsigned int count = this->field_1c;
        if (count != 0)
        {
            unsigned int idx = count + this->field_18 - 1;
            if (this->field_14 <= idx)
                idx -= this->field_14;
            void** slot = &this->field_10[idx];
            void* obj = *slot;
            if (obj != 0)
            {
                void** vtbl = *(void***)obj;
                void* fn = *vtbl;
                if (fn != 0)
                {
                    typedef void (__stdcall *Fn)(void*, int);
                    ((Fn)fn)((char*)obj + 8, 1);
                }
                *slot = 0;
            }
            if (--this->field_1c == 0)
                this->field_18 = 0;
        }
    }

    unsigned int i = this->field_14;
    while (i > 0)
    {
        i--;
        void** slot = &this->field_10[i];
        if (*slot != 0)
        {
            sub_6a067a(*slot);
        }
    }

    if (this->field_10 != 0)
    {
        sub_6a067a(this->field_10);
    }

    this->field_10 = 0;
    this->field_14 = 0;
}
