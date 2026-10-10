// from server: 45% by colin
// roc 2007-08 004f3ab0  unit: boost::bad_lexical_cast  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f3ab0

extern "C" {
    int __stdcall GetSystemMetrics(int);
}

struct String {
    char buf[16];
    unsigned int len;
    unsigned int cap;
    String();
    String(const String&);
    ~String();
};

String __stdcall operator+(const String&, const String&);
String __stdcall operator+(const String&, const char*);

struct Helper {
    int a;
    int b;
    String s1;
    String s2;
    String s3;
    String s4;
    String s5;
    String s6;
};

String __stdcall makeString(int, int);

String __stdcall func(int x)
{
    Helper h;
    int v0 = GetSystemMetrics(0);
    int v1 = GetSystemMetrics(1);
    h.a = v0;
    h.b = v1;
    h.s1 = makeString(v0, v1);
    h.s2 = makeString(v0, v1);
    h.s3 = h.s1 + "Show";
    h.s4 = h.s3 + h.s2;
    h.s5 = h.s1 + "t$Wh";
    h.s6 = h.s5 + h.s2;
    return h.s4;
}
