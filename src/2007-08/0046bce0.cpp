// from server: 18% by colin
struct LDrawParser {
    char pad0[4];
    void parse(const char* filename);
};

struct String {
    char data[28];
};

struct Ifstream {
    char data[0x90];
};

struct IosBase {
    char data[4];
};

struct IStreamIn {
    char data[4];
};

extern "C" {
    void __stdcall string_ctor(String* self, const char* s);
    void __stdcall string_dtor(String* self);
    unsigned int __stdcall string_find_first_not_of(const String* self, const char* s, unsigned int pos);
    void __stdcall ifstream_ctor(Ifstream* self, const char* name, int mode, int prot);
    void __stdcall ifstream_dtor(Ifstream* self);
    bool __stdcall ios_eof(const IosBase* self);
    void __stdcall istream_getline(IStreamIn* self, char* buf, int n);
}

void LDrawParser::parse(const char* filename)
{
    String s1;
    string_ctor(&s1, "Roblox LDraw2Lua Conversion");
    String s2;
    string_ctor(&s2, "LDrawModel");
    String s3;
    string_ctor(&s3, "FileName: ");
    String s4;
    string_ctor(&s4, "m.Parent = w");
    String s5;
    string_ctor(&s5, "close");
    String s6;
    string_ctor(&s6, "hhcy");
    String s7;
    string_ctor(&s7, "t$Wh");
    String s8;
    string_ctor(&s8, "D$ V");
    String s9;
    string_ctor(&s9, "L$$Q");
    String s10;
    string_ctor(&s10, "SUVW");
    String s11;
    string_ctor(&s11, "Y_^[");

    String line;
    string_ctor(&line, "");

    Ifstream file;
    ifstream_ctor(&file, filename, 1, 0x40);

    char buf[0x7d0];
    while (!ios_eof((IosBase*)&file)) {
        istream_getline((IStreamIn*)&file, buf, 0x7d0);
        String tmp;
        string_ctor(&tmp, buf);
        if (string_find_first_not_of(&tmp, " \t\r\n", 0) == (unsigned int)-1) {
            string_dtor(&tmp);
            continue;
        }
        string_dtor(&tmp);
    }

    ifstream_dtor(&file);
    string_dtor(&line);
}
