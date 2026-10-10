// from server: 29% by colin
struct std_string {
    char data[28];
    std_string(const std_string&);
    std_string();
    ~std_string();
};

extern "C" {
    std_string* __stdcall string_concat_assign(std_string* result, const std_string* lhs, const char* rhs);
    std_string* __stdcall string_concat(std_string* result, const std_string* lhs, const std_string* rhs);
    void* __stdcall sub_630D36(void* a, const char* b, const char* c, int d, void* e);
    void* __stdcall sub_42A4E0(void* p);
    void* __stdcall sub_77E644(void* a, void* b, void* c);
    void* __stdcall sub_77E568(void* a, void* b, void* c);
    void* __stdcall sub_77E69C(void* a, void* b);
    void* __stdcall sub_77E6AC(void* a);
}

struct RBX_Instance {
    char pad[0xBC];
    RBX_Instance* member_bc;
};

struct RBX_EquationDisplay {
    char pad0[0xBC];
    RBX_Instance* member_bc;
    char pad1[0xFC - 0xC0];
    std_string equation;
    char pad2[0x144 - 0xFC - 28];
    std_string label;

    std_string getLabel(int);
};

std_string RBX_EquationDisplay::getLabel(int)
{
    RBX_Instance* inst = this->member_bc;
    void* obj;
    if (inst == 0) {
        obj = this;
    } else {
        RBX_Instance* inner = inst->member_bc;
        if (inner == 0) {
            obj = inst;
        } else {
            obj = sub_42A4E0(inner);
        }
    }

    void* result = sub_630D36(obj, (const char*)0x881f4c, (const char*)0x89dfa8, 0, 0);
    if (result == 0) {
        std_string tmp;
        string_concat_assign(&tmp, &this->equation, (const char*)0x787034);
        return tmp;
    }

    void** vtbl = *(void***)result;
    void (*fn)(void*, std_string*, std_string*) = (void (*)(void*, std_string*, std_string*))vtbl[0];
    std_string a;
    std_string b;
    fn(result, &a, &b);

    std_string tmp;
    string_concat(&tmp, &this->equation, &a);

    std_string tmp2;
    string_concat_assign(&tmp2, &tmp, (const char*)0x787034);

    return tmp2;
}
