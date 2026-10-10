// from server: 77% by atomic.potato
struct Selection
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    void init();
};

extern "C" void __cdecl Selection_init(Selection *);

void Selection::init()
{
    a = 0x9cc22c;
    b = 0x9cc224;
    g = 0x9cc218;
    h = 0x9cc210;
    Selection_init(this);
}
