// from server: 78% by atomic.potato
extern "C" void sub_006A1232(void*);
extern "C" void __stdcall sub_006A067A(void*);
extern "C" void sub_00803F14(void*);

struct CRbxPlayDocTemplate
{
    char pad[148];
    int method(int);
};

int CRbxPlayDocTemplate::method(int value)
{
    sub_00803F14((char*)this + 148);
    sub_006A1232(this);
    if (value & 1)
        sub_006A067A(this);
    return (int)this;
}
