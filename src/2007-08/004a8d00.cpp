// from server: 66% by Viper
struct S {
};

extern void __cdecl func_004a0c60(int*, int);
extern void __cdecl func_004a8160(int*);

void __cdecl f(int a, int b, int c)
{
    int tmp[3];
    func_004a0c60(tmp, b);
    func_004a8160(tmp);
}
