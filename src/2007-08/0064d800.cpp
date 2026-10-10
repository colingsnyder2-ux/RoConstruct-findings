// from server: 65% by tester
struct CXTPImageManager {
    int method(int, int, int, int, int, int);
};

struct B_func_0041f680 {
    virtual ~B_func_0041f680();
};

struct S_func_0041f680 : B_func_0041f680 {
    ~S_func_0041f680();
};

extern "C" int __stdcall sub_64afa0(int, void*);
extern "C" int __stdcall sub_630238(int);
extern "C" int __stdcall sub_64d4f0(int, int, int, int, int, int, void*);

int CXTPImageManager::method(int a1, int a2, int a3, int a4, int a5, int a6)
{
    S_func_0041f680 local;
    int result;
    int v8 = 0;
    int v9 = 0;
    int v10 = 0x788300;
    int v11 = 0;

    if (sub_64afa0(a1, &v8) == 0)
    {
        v10 = 0x788300;
        return 0;
    }

    sub_630238(v8);
    result = sub_64d4f0(a2, a3, a4, a5, a6, v8, &v11);
    v10 = 0x788300;
    return result;
}
