// from server: 69% by colin
extern char G_0084d04c;

extern "C" int __cdecl func_00630a1e(int);
extern "C" void __cdecl func_00630a18();

void __cdecl func_00746bbe(int* a1, int a2)
{
    int* p = (int*)a2;
    int v = p[-1] ^ (int)p;
    func_00630a1e(v);
    func_00630a18();
}
