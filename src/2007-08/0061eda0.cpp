// from server: 96% by colin
extern "C" int __cdecl func_0061e450(int, int, int, int, int, int);

struct ScoreHud
{
};

int __cdecl func_0061eda0(int a1, int a2, int a3, int a4, int a5)
{
    char local = 0;
    func_0061e450(a1, a2, a3, a4, a5, *(int*)&local);
    int diff = a2 - a1;
    diff = (diff >> 4) * 16;
    return a3 - diff;
}
