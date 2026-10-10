// from server: 25% by colin
struct Button {
    void processIconLoaded(void* id, int result, void* stream, void* response);
};

struct Toolbar {
    char pad[4];
    Button** begin;
    Button** end;
    Button** cap;
    void createButton(void* text, void* tooltip, void* iconName);
};

struct PluginManager {
    void addPlugin(void* plugin);
};

struct Plugin {
    char pad[4];
    void* pluginManager;
    void* dataModel;
    char pad2[8];
    bool active;
    bool tool;
};

struct String {
    char pad[0x1c];
    String();
    String(const String&);
    ~String();
};

struct Locale {
    char pad[4];
    Locale();
    ~Locale();
};

extern "C" {
    void* __stdcall sub_55D330(void* a);
    void* __stdcall sub_55D350(void* a);
    void __stdcall sub_55D310(void* a, void* b);
    void __stdcall sub_5CDF80(void* a, void* b, void* c, void* d);
    void __stdcall sub_624110(void* a, void* b);
    void __stdcall sub_6247D0(void* a);
    void __stdcall sub_6246B0(void* a, void* b);
    void __stdcall sub_624880(void* a, void* b);
    void __stdcall sub_62FEF6(int size);
    void __stdcall sub_77E6A4(void* a);
    void __stdcall sub_77E43C();
    void __stdcall sub_77E440();
    void __stdcall sub_77E460(void* a);
    void __stdcall sub_77E4FC(void* a);
    void __stdcall sub_77E69C(void* a, void* b);
    void __stdcall sub_77E6AC(void* a);
    void __stdcall sub_77E6D8();
}

void Button::processIconLoaded(void* id, int result, void* stream, void* response)
{
    Plugin* plugin = (Plugin*)this;
    void* mgr = plugin->pluginManager;
    if (mgr == 0)
        return;

    String str;
    sub_77E6A4(&str);
    sub_55D310((char*)mgr + 0xc, &str);
    sub_77E43C();
    sub_77E440();
    sub_77E460(0);
    sub_624110(0, 0);
    sub_6247D0(0);
    sub_77E4FC(0);
    sub_62FEF6(0x2c);
    sub_77E69C(0, 0);
    sub_6246B0(0, 0);
    sub_77E6D8();
    sub_5CDF80(0, 0, 0, 0);
    sub_624880(0, 0);
    sub_77E6AC(0);
    sub_55D350(0);
}
