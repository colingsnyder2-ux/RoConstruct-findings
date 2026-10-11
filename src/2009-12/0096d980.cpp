// from server: 80% by atomic.potato
extern "C" int __stdcall func_00550da0(int, int, int, int, int, int, int, int);
extern "C" int __cdecl func_007f4929(int);

extern char g_009be860;
extern char g_009be878;
extern char g_009be888;
extern char g_009809d0;
extern char g_0054ff70;
extern char g_00b80850;

void func_0096d980()
{
    func_00550da0(1, 0, (int)&g_009be888, 0, (int)&g_009be878, (int)&g_009be860, 0, (int)&g_0054ff70);
    func_007f4929((int)&g_009809d0);
}
