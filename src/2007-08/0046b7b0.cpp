// from server: 20% by colin
extern "C" {
    int __stdcall atof(const char*);
}

struct String {
    char pad[0x1c];
    String();
    ~String();
    const char* c_str() const;
};

struct Ostream {
    Ostream& operator<<(double);
};

extern Ostream cout;

struct LDrawCommand {
    char pad0[0x10];
    double f10;
    double f18;
    double f20;
    double f28;
    double f30;
    double f38;
    double f40;
    double f48;
    double f50;
    double f58;
    double f60;
    double f68;
    char f();
};

char LDrawCommand::f() {
    String s;
    cout << (f10 / 1.0);
    cout << (f18 / 1.0);
    cout << (f20 / 1.0);
    cout << f28;
    cout << f30;
    cout << f38;
    cout << f40;
    cout << f48;
    cout << f50;
    cout << f58;
    cout << f60;
    cout << f68;
    return 0;
}
