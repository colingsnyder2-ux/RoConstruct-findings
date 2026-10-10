// from server: 55% by colin
// roc 2007-08 004f3110  unit: boost::bad_lexical_cast  size: 555 bytes

extern "C" {
    int __stdcall sub_46dce0(const char*);
}

struct String {
    void* rep;
    String(const char*);
    ~String();
};

extern "C" void* __stdcall sub_77e698();
extern "C" void __stdcall sub_77e6ac();

extern float g_797988;
extern float g_79f5d8;
extern float g_79f5f8;

extern char g_8bcf6c;
extern char g_8bcf6d;
extern char g_8bcf6e;
extern char g_8bcf6f;

float get_value()
{
    if (g_8bcf6e != 0 && g_8bcf6f != 0)
        return g_797988;
    if (g_8bcf6c != 0 && g_8bcf6d != 0)
        return g_797988;

    {
        String s1("GL_NV_register_combiners");
        if (sub_46dce0("GL_NV_register_combiners") != 0)
            return g_797988;
    }
    {
        String s2("GL_NV_texture_shader3");
        if (sub_46dce0("GL_NV_texture_shader3") != 0)
            return g_797988;
    }
    {
        String s3("GL_ATI_fragment_shader");
        if (sub_46dce0("GL_ATI_fragment_shader") != 0)
            return g_79f5f8;
    }
    {
        String s4("GL_ATI_texture_env_combine3");
        if (sub_46dce0("GL_ATI_texture_env_combine3") != 0)
            return g_79f5f8;
    }
    {
        String s5("GL_EXT_texture_filter_anisotropic");
        if (sub_46dce0("GL_EXT_texture_filter_anisotropic") != 0)
            return g_79f5d8;
    }
    return 1.0f;
}
