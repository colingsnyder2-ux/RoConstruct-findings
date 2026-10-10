// from server: 32% by colin
struct CKeyHelper
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
};

extern "C" int __stdcall GetKeyNameTextA(int, char*, int);
extern "C" void* __stdcall GetKeyboardLayout(unsigned int);
extern "C" int __stdcall MapVirtualKeyExA(unsigned int, unsigned int, void*);
extern "C" int __stdcall IsCharLowerA(unsigned char);

extern "C" void __stdcall sub_00630b8c(void*, int, int);
extern "C" void __stdcall sub_00630a1e();
extern "C" int __stdcall sub_006a4410(int);

extern "C" void* __stdcall sub_0077d578(void*, int);
extern "C" void __stdcall sub_0077dc38(void*);
extern "C" int __stdcall sub_0077dcc8(void*);
extern "C" int __stdcall sub_0077dcd0(void*);
extern "C" void __stdcall sub_0077dd74(void*, void*);
extern "C" void __stdcall sub_0077ddb8(void*, void*);
extern "C" void __stdcall sub_0077ddbc(void*);
extern "C" void __stdcall sub_0077e41c(void*, int, int);
extern "C" void __stdcall sub_0077ec98(int, void*, int);
extern "C" void* __stdcall sub_0077ed64();
extern "C" int __stdcall sub_0077ed68(int, int, int);
extern "C" int __stdcall sub_0077ec9c(int);

extern "C" void* __stdcall sub_00785954();

struct CKeyHelper2
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    void* f();
};

void* CKeyHelper2::f()
{
    char buf[0x40];
    int v;
    void* result;
    int i;
    int n;
    int code;
    int scan;
    int vk;
    void* layout;
    int flag;

    sub_00630b8c(buf, 0, 0x32);
    v = 0;

    if (z0 == 3)
    {
        sub_0077ddb8(this, (void*)0x785954);
        return this;
    }

    layout = sub_0077ed64();
    scan = sub_0077ed68(0, 0, z0);
    code = (scan << 16) | 1;
    vk = z0 - 0x21;
    if (vk <= 0xe)
        code |= 0x1000000;

    sub_0077ec98(code, buf, 0x32);

    sub_0077ddb8(this, buf);

    sub_0077dcd0(&v);
    if (v == 0)
    {
        sub_0077dc38(&v);
        n = sub_0077dcc8(&v);
        if (n > 0)
        {
            for (i = 0; i < n; i++)
            {
                char c;
                c = (char)sub_0077d578(&v, 0);
                flag = sub_0077ec9c(c);
                if (flag != 0)
                {
                    int r = sub_006a4410(c);
                    sub_0077e41c(&v, i, r);
                    break;
                }
            }
        }
    }

    sub_0077dd74(this, &v);
    sub_0077ddbc(&v);

    return this;
}
