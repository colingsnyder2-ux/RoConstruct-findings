// from server: 27% by colin
typedef void (__cdecl *Manager)(const void *, void *, int);

struct Function {
    Manager *manager;
    union Storage {
        double alignment[3];
        char bytes[24];
    } storage;
    Function(int, int, Function);
    Function(const Function &);
    ~Function();
};

struct Result {
    int dummy;
};

struct ContentProvider {
    void method(int, int, int, int, int, int, int, int, int);
};

extern "C" void __cdecl sub_55f3b0(Function *, int, int);
extern "C" void __cdecl sub_5618e0(void *);
extern "C" void __cdecl sub_562530(ContentProvider *, int);

extern unsigned char byte_9740ec;
extern unsigned char byte_9740ed;

void ContentProvider::method(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    Function f(0, 0, *(Function *)0);
    sub_55f3b0(&f, byte_9740ed, byte_9740ec);
    sub_5618e0(&f);
    sub_562530(this, a1);
}
