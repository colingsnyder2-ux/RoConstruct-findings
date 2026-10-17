// from server: 12% by colin
struct String {
    char data[0x1c];
    String();
    String(const String&);
    ~String();
    String& operator=(const String&);
};

struct Result {
    int value;
    Result(const Result&);
    ~Result();
};

struct ArgumentBase {
    char data[1];
};

struct Argument {
    char padding[20];
    ArgumentBase base;
};

struct Name {
    char pad[0x10];
    int* begin;
    int* end;
    int* cap;
};

struct Item {
    char pad[0x1c];
    int value;
};

struct EnumDescriptor {
    char pad[0x10];
    int* begin;
    int* end;
    int* cap;
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void* __stdcall Guid_getLocalScope();

extern "C" void __stdcall string_ctor(String*);
extern "C" void __stdcall string_dtor(String*);
extern "C" String* __stdcall string_assign(String*, const String*);

void __fastcall sub_43a320(void* self, void* dummy, int* out, int* out2);
Result* __fastcall sub_43cb00(void* self, void* dummy, Result* out, int* in);

struct S {
    char pad0[0x10];
    int* begin;
    int* end;
    char pad1[0x100];
    int flag;

    void func(int* arg);
};

void S::func(int* arg)
{
    String str;
    string_ctor(&str);

    int* p = (int*)Guid_getLocalScope();

    int* it = begin;
    int* endp = end;
    int* argEnd = (int*)arg[6];
    int* argBegin = (int*)arg[0];

    bool found = false;

    while (it != endp) {
        if (it == 0) {
            _invalid_parameter_noinfo();
        }
        int* item = (int*)*it;
        int* e = (int*)item[4];
        if (it >= e) {
            _invalid_parameter_noinfo();
        }
        int* val = (int*)*it;

        int out1, out2;
        sub_43a320(this, 0, &out1, &out2);

        if (out2 == (int)argEnd) {
            it += 4;
            continue;
        }

        if (out1 == 0) {
            _invalid_parameter_noinfo();
        }
        int* e2 = (int*)((int*)out1)[6];
        if (out2 == (int)e2) {
            _invalid_parameter_noinfo();
        }

        int* sub = (int*)((int*)out2)[7];
        int* subEnd = (int*)((int*)out2)[8];
        if (sub > subEnd) {
            _invalid_parameter_noinfo();
        }
        int* subBegin = (int*)((int*)out2)[4];

        if (out1 == 0) {
            _invalid_parameter_noinfo();
        }
        int* e3 = (int*)((int*)out1)[6];
        if (out2 == (int)e3) {
            _invalid_parameter_noinfo();
        }
        int* subEnd2 = (int*)((int*)out2)[8];
        if ((int*)((int*)out2)[7] > subEnd2) {
            _invalid_parameter_noinfo();
        }
        int* subBegin2 = (int*)((int*)out2)[4];

        if (sub == subEnd2) {
            it += 4;
            continue;
        }

        if (!found) {
            if (subBegin == 0) {
                _invalid_parameter_noinfo();
            }
            int* e4 = (int*)((int*)subBegin)[4];
            if (sub >= e4) {
                _invalid_parameter_noinfo();
            }
            int v = *sub;
            Result r = *(Result*)0;
            sub_43cb00((char*)this - 0x10c, 0, &r, &v);
            string_assign(&str, (String*)&r);
            r.~Result();
            ((void(__thiscall*)(S*, String*))((int*)this)[0x3a])(this, &str);
            found = true;
        } else {
            if (subBegin2 == 0) {
                _invalid_parameter_noinfo();
            }
            int* e5 = (int*)((int*)subBegin2)[4];
            if (sub >= e5) {
                _invalid_parameter_noinfo();
            }
            int v = *sub;
            Result r = *(Result*)0;
            sub_43cb00((char*)this - 0x10c, 0, &r, &v);
            bool b = ((bool(__thiscall*)(S*, Result*, String*))((int*)this)[0x3b])(this, &r, &str);
            r.~Result();
            if (b) {
                String tmp;
                string_ctor(&tmp);
                string_assign(&tmp, (String*)0x80b716);
                ((void(__thiscall*)(S*, String*))0x7119f0)((S*)((char*)this - 0x10c), &tmp);
                ((void(__thiscall*)(S*, int))0x7110d0)((S*)((char*)this - 0x10c), 0);
                string_dtor(&tmp);
            }
        }

        it += 4;
    }

    ((void(__thiscall*)(S*, int))0x7110d0)((S*)((char*)this - 0x10c), found ? 0 : 1);

    string_dtor(&str);
}
