// from server: 32% by colin
// roc 2007-08 004f35c0  unit: boost::bad_lexical_cast  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f35c0

extern "C" {
    int __stdcall RegOpenKeyExA(void*, const char*, int, int, void**);
    int __stdcall RegQueryValueExA(void*, const char*, int*, int*, unsigned char*, int*);
    int __stdcall RegCloseKey(void*);
    unsigned int __stdcall GetTickCount();
    __int64 __stdcall GetSomething();
}

struct MyString {
    void* data[8];
    MyString(const char*);
    ~MyString();
};

int __stdcall sub_4f3340(int, int);
int __stdcall sub_50a630(void*, void*);
__int64 __stdcall sub_6311b0(__int64, int, int);

int __stdcall sub_4f35c0()
{
    void* hKey = 0;
    int result = 0;
    int value = 0;
    int size = 4;
    int type = 0;
    MyString keyName("HKEY_LOCAL_MACHINE\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0\\~MHz");
    int opened = RegOpenKeyExA((void*)0x80000002, (const char*)&keyName, 0, 0x20019, &hKey);
    if (opened == 0) {
        int q = RegQueryValueExA(hKey, "~MHz", 0, (int*)&type, (unsigned char*)&value, &size);
        RegCloseKey(hKey);
        if (q == 0) {
            if (value > 300) {
                result = value;
            }
        }
    }
    if (result == 0) {
        unsigned int t1 = GetTickCount();
        unsigned int t2 = GetTickCount();
        unsigned int t3 = GetTickCount();
        unsigned int t4 = GetTickCount();
        unsigned int t5 = GetTickCount();
        unsigned int t6 = GetTickCount();
        unsigned int t7 = GetTickCount();
        unsigned int t8 = GetTickCount();
        unsigned int t9 = GetTickCount();
        unsigned int t10 = GetTickCount();
        unsigned int t11 = GetTickCount();
        unsigned int t12 = GetTickCount();
        unsigned int t13 = GetTickCount();
        unsigned int t14 = GetTickCount();
        unsigned int t15 = GetTickCount();
        unsigned int t16 = GetTickCount();
        unsigned int t17 = GetTickCount();
        unsigned int t18 = GetTickCount();
        unsigned int t19 = GetTickCount();
        unsigned int t20 = GetTickCount();
        unsigned int t21 = GetTickCount();
        unsigned int t22 = GetTickCount();
        unsigned int t23 = GetTickCount();
        unsigned int t24 = GetTickCount();
        unsigned int t25 = GetTickCount();
        unsigned int t26 = GetTickCount();
        unsigned int t27 = GetTickCount();
        unsigned int t28 = GetTickCount();
        unsigned int t29 = GetTickCount();
        unsigned int t30 = GetTickCount();
        unsigned int t31 = GetTickCount();
        unsigned int t32 = GetTickCount();
        unsigned int t33 = GetTickCount();
        unsigned int t34 = GetTickCount();
        unsigned int t35 = GetTickCount();
        unsigned int t36 = GetTickCount();
        unsigned int t37 = GetTickCount();
        unsigned int t38 = GetTickCount();
        unsigned int t39 = GetTickCount();
        unsigned int t40 = GetTickCount();
        unsigned int t41 = GetTickCount();
        unsigned int t42 = GetTickCount();
        unsigned int t43 = GetTickCount();
        unsigned int t44 = GetTickCount();
        unsigned int t45 = GetTickCount();
        unsigned int t46 = GetTickCount();
        unsigned int t47 = GetTickCount();
        unsigned int t48 = GetTickCount();
        unsigned int t49 = GetTickCount();
        unsigned int t50 = GetTickCount();
        unsigned int t51 = GetTickCount();
        unsigned int t52 = GetTickCount();
        unsigned int t53 = GetTickCount();
        unsigned int t54 = GetTickCount();
        unsigned int t55 = GetTickCount();
        unsigned int t56 = GetTickCount();
        unsigned int t57 = GetTickCount();
        unsigned int t58 = GetTickCount();
        unsigned int t59 = GetTickCount();
        unsigned int t60 = GetTickCount();
        unsigned int t61 = GetTickCount();
        unsigned int t62 = GetTickCount();
        unsigned int t63 = GetTickCount();
        unsigned int t64 = GetTickCount();
        unsigned int t65 = GetTickCount();
        unsigned int t66 = GetTickCount();
        unsigned int t67 = GetTickCount();
        unsigned int t68 = GetTickCount();
        unsigned int t69 = GetTickCount();
        unsigned int t70 = GetTickCount();
        unsigned int t71 = GetTickCount();
        unsigned int t72 = GetTickCount();
        unsigned int t73 = GetTickCount();
        unsigned int t74 = GetTickCount();
        unsigned int t75 = GetTickCount();
        unsigned int t76 = GetTickCount();
        unsigned int t77 = GetTickCount();
        unsigned int t78 = GetTickCount();
        unsigned int t79 = GetTickCount();
        unsigned int t80 = GetTickCount();
        unsigned int t81 = GetTickCount();
        unsigned int t82 = GetTickCount();
        unsigned int t83 = GetTickCount();
        unsigned int t84 = GetTickCount();
        unsigned int t85 = GetTickCount();
        unsigned int t86 = GetTickCount();
        unsigned int t87 = GetTickCount();
        unsigned int t88 = GetTickCount();
        unsigned int t89 = GetTickCount();
        unsigned int t90 = GetTickCount();
        unsigned int t91 = GetTickCount();
        unsigned int t92 = GetTickCount();
        unsigned int t93 = GetTickCount();
        unsigned int t94 = GetTickCount();
        unsigned int t95 = GetTickCount();
        unsigned int t96 = GetTickCount();
        unsigned int t97 = GetTickCount();
        unsigned int t98 = GetTickCount();
        unsigned int t99 = GetTickCount();
        unsigned int t100 = GetTickCount();
        result = (int)(t100 - t1);
    }
    return result;
}
