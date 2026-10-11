// from server: 76% by atomic.potato
extern "C" void __cdecl func_006e89a0(int, const void *, const void *, const void *, int);
extern "C" void __cdecl func_007f4929(const void *);

extern const char global_009db3f0[];
extern const char global_009db470[];
extern const char global_00986b70[];

void func_00976bd0()
{
    func_006e89a0(0x110, 0, global_009db470, global_009db3f0, 1);
    func_007f4929(global_00986b70);
}
