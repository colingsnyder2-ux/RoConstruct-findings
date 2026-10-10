// from server: 85% by colin
struct CBrowserView
{
    char pad[0x2b0];
    void* field_2b0;
    int method_40bcd0(void** out, int zero);
    int method_40bd90(void** out);
};

extern "C" int __stdcall func_630d36(CBrowserView* self, int a, int b, int c, int d, int e);

int CBrowserView::method_40bd90(void** out)
{
    if (this->field_2b0 == 0)
    {
        void* local;
        int hr = this->method_40bcd0(&local, 0);
        if (hr != 0)
            return hr;

        int r = func_630d36(this, 0, 0x881a80, 0x881d7c, 0, 0);
        int neg = -r;
        unsigned short s = (unsigned short)((neg >> 31) & 0xffff);
        void* newobj = (char*)local + 0x14;
        *(unsigned short*)((char*)local + 0x1c) = s;

        if (this->field_2b0 != newobj)
        {
            if (newobj != 0)
            {
                void** vt = *(void***)newobj;
                void (__stdcall *addref)(void*) = (void (__stdcall *)(void*))vt[1];
                addref(newobj);
            }
            if (this->field_2b0 != 0)
            {
                void** vt2 = *(void***)this->field_2b0;
                void (__stdcall *release)(void*) = (void (__stdcall *)(void*))vt2[2];
                release(this->field_2b0);
            }
            this->field_2b0 = newobj;
        }
    }

    if (out == 0)
        return (int)0x80004003;

    *out = this->field_2b0;
    if (this->field_2b0 != 0)
    {
        void** vt3 = *(void***)this->field_2b0;
        void (__stdcall *addref2)(void*) = (void (__stdcall *)(void*))vt3[1];
        addref2(this->field_2b0);
    }
    return 0;
}
