// from server: 49% by colin
struct LDrawCommand {
    void execute(const char* a, const char* b, const char* c, const char* d,
                 const char* e, const char* f, const char* g, const char* h);
};

extern "C" const char* __stdcall c_str_helper(void*);
extern "C" void __stdcall string_dtor(void*);
extern "C" void __stdcall append_helper(void*, const char*);

void LDrawCommand::execute(const char* a, const char* b, const char* c, const char* d,
                           const char* e, const char* f, const char* g, const char* h)
{
    char buf[28];
    *(void**)buf = 0;
    const char* s = c_str_helper(buf);
    append_helper(this, s);
    append_helper(this, "part.Parent = ");
    append_helper(this, "m.Parent = w");
    append_helper(this, "part:MakeJoints()");
    append_helper(this, "m.Parent = w");
    string_dtor(buf);
}
