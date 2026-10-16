// from server: 40% by colin




namespace std {
    class string {
    public:
        string();
        string(const char*);
        const char* c_str() const;
    };
}

struct LDrawParser {
    char pad0[0x0c];
    void* vec1_begin;
    void* vec1_end;
    char pad14[0x0c];
    void* vec2_begin;
    void* vec2_end;
    char pad28[0x04];
    void* vec3_begin;
    void* vec3_end;

    void parse(const std::string& name);
    void* getElement(int index);
};

extern "C" std::string* __stdcall string_assign_concat(std::string* dst, const char* src);
extern "C" std::string* __stdcall string_assign_concat2(std::string* dst, const std::string& src);

void LDrawParser::parse(const std::string& name)
{
    int count = (int)(((char*)vec3_end - (char*)vec3_begin) >> 2);
    if (count > 0) {
        std::string s1("Get the current workspace");
        std::string s2("local w = game:service(\"Workspace\")");
        std::string s3("Create a new model");
        std::string s4("m = Instance.new(\"Model\")");
        std::string s5("m.Name = \"");
        std::string s6("m.Parent = w");

        std::string tmp;
        string_assign_concat(&tmp, s1.c_str());
        string_assign_concat(&tmp, s2.c_str());
        string_assign_concat(&tmp, s3.c_str());
        string_assign_concat(&tmp, s4.c_str());
        string_assign_concat(&tmp, s5.c_str());
        string_assign_concat2(&tmp, name);
        string_assign_concat(&tmp, "\"");
        string_assign_concat(&tmp, s6.c_str());

        int n = (int)(((char*)vec2_end - (char*)vec2_begin) >> 2);
        for (int i = 0; i < n; ++i) {
            void* elem = getElement(i);
            std::string tmp2;
            string_assign_concat(&tmp2, "\"");
            void** vtbl = *(void***)elem;
            typedef void (__thiscall *Fn)(void*, const std::string&);
            Fn fn = (Fn)vtbl[1];
            fn(elem, tmp);
        }
    }
}
