// from server: 69% by colin
extern char G;

extern void func_00630a1e(int);
extern void func_00630a18();

void func_00746c1e(int a, int b)
{
    int* p = (int*)b;
    int v = *(int*)((char*)p - 4);
    func_00630a1e(v ^ (int)p);
    func_00630a18();
}
