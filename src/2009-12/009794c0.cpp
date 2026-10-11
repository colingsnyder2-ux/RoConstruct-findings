// from server: 78% by atomic.potato
extern "C" void __stdcall T_func_00738560(int, int, int, int, int, int, int);
extern "C" void __cdecl T_func_007f4929(const void *);

extern const int G_func_009e1c2c;
extern const int G_func_009e1c14;
extern const int G_func_00735450;
extern const int G_func_00988890;

struct S_009794c0 {
    void f();
};

void S_009794c0::f()
{
    T_func_00738560(0, 0xf, 0, (int)&G_func_00735450, 0x17c, (int)&G_func_009e1c14, (int)&G_func_009e1c2c);
    T_func_007f4929(&G_func_00988890);
}
