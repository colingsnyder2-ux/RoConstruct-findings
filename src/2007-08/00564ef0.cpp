// from server: 45% by colin
// roc 2007-08 00564ef0  unit: RBX::Verb  size: 445 bytes

struct streambuf {
    int sbumpc();
    int sgetc();
};

struct std_string {
    char data[28];
    std_string();
    std_string(const char*);
    std_string(const std_string&);
    ~std_string();
    std_string& operator+=(const std_string&);
    std_string& operator+=(char);
};

struct exception {
    exception();
};

extern "C" {
    void __stdcall sub_77e6a4(void*);
    int __stdcall sub_77e4c0(void*);
    void __stdcall sub_77e55c(void*, int);
    int __stdcall sub_77e4bc(void*);
    void __stdcall sub_77e698(void*, const char*);
    void __stdcall sub_77e664(void*, void*);
    void __stdcall sub_77e6f8(void*);
    void __stdcall sub_77e69c(void*, void*);
    void __stdcall sub_77e6ac(void*);
}

void __cdecl sub_630b9e(void*, void*);

struct Verb {
    char pad0[4];
    void* stream;
    void doIt(int);
    void parse(int);
};

void Verb::parse(int arg)
{
    char c;
    std_string s1;
    std_string s2;
    std_string s3;
    int i;

    sub_77e6a4(&s1);
    c = (char)sub_77e4c0(stream);
    if (c != '<') {
        sub_77e55c(&s1, c);
        c = (char)sub_77e4c0(stream);
        sub_77e55c(&s1, c);
        c = (char)sub_77e4c0(stream);
        sub_77e55c(&s1, c);
        c = (char)sub_77e4c0(stream);
        sub_77e55c(&s1, c);
        if (c != '<') {
            for (i = 0x32; i != 0; i--) {
                if (sub_77e4bc(stream) != -1) {
                    int v = sub_77e4c0(stream);
                    sub_77e55c(&s1, v);
                }
            }
            sub_77e698(&s2, "tag expected after Byte-Order-Mark:");
            sub_77e664(&s2, &s1);
            sub_77e6f8(&s3);
            sub_77e69c(&s3, &s2);
            sub_630b9e(&s3, (void*)0x8410c0);
        }
    }
    sub_77e6a4(&s1);
    sub_77e55c(&s1, c);
    do {
        c = (char)sub_77e4c0(stream);
        sub_77e55c(&s1, c);
    } while (c != '>');
    sub_77e6ac(&s1);
}
