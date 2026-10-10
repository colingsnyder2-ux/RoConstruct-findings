// from server: 50% by colin
struct std_string {
    std_string();
    std_string(const std_string&);
    ~std_string();
};

struct ServiceProvider {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    char field14;
    char field15;
    char pad16[2];
    std_string str18;
    std_string str34;
    int field50;
    int field54;

    ServiceProvider(const std_string& s, int a, int b, int c, int d, int e,
                    int f, int g, int h, int i, int j, int k, int l,
                    int m, int n, int o, int p, int q, int r, int s2, int t);
};

ServiceProvider::ServiceProvider(const std_string& s, int a, int b, int c,
                                 int d, int e, int f, int g, int h, int i,
                                 int j, int k, int l, int m, int n, int o,
                                 int p, int q, int r, int s2, int t) {
    field4 = a;
    field8 = b;
    field0 = c;
    field10 = d;
    fieldC = e;
    field14 = 0;
    field15 = 0;
    str18.std_string::std_string(s);
    str34.std_string::std_string();
    field50 = f;
    field54 = g;
    str34.~std_string();
    str18.~std_string();
}
