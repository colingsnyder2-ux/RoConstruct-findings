// from server: 85% by TrollStein
struct BoundFuncDesc {
};

struct FuncDescBase {
    virtual int getSomething(void*);
};

extern "C" int __cdecl func_0049fd90(int*, int, int);

void __cdecl invoke(void* args)
{
    int* a = (int*)args;
    FuncDescBase* obj = (FuncDescBase*)a[0];
    int val = a[1];
    int r = ((int (__thiscall*)(FuncDescBase*, int))((*(int**)obj)[0x24/4]))(obj, val);
    int* holder = (int*)((char*)obj + 0x18);
    int* inner = (int*)holder[0];
    int n = inner[0x24/4] + 1;
    func_0049fd90(&r, n, 1);
}
