// from server: 88% by king_originala
struct Instance;

struct ServiceProvider {
    void action(int);
};

extern bool __cdecl check(Instance*);
extern int __cdecl state(Instance*);
extern void __cdecl update(Instance*, const bool*);
extern ServiceProvider* __cdecl func_005807b0(Instance*);

struct AnchorTool {
    char padding[24];
    Instance* provider;
    Instance* object;

    AnchorTool* apply(int);
};

AnchorTool* AnchorTool::apply(int)
{
    if (object && !check(object)) {
        bool enabled = state(object) != 0;
        update(object, &enabled);
        func_005807b0(provider)->action(8);
    }
    return this;
}
