// from server: 89% by king_originala
struct S;
struct Model;

struct State {
    char pad[0x1d4];
    int kind;
    int method();
    void setOwner(S*);
};

struct StateRef {
    virtual void unused();
    virtual State* get();
};

struct ServiceProvider {
    char pad[0x288];
    StateRef state;
};

struct Model {
    S* owner();
};

struct S {
    void update();
};

ServiceProvider* __cdecl func_00491e50(S*);
Model* __cdecl func_0049aca0(S*);

extern char g92907c[], g932a40[];
extern "C" int __cdecl sub_6A17C6(int, int, void*, void*, int);

void S::update()
{
    ServiceProvider* service = func_00491e50(this);
    Model* character = func_0049aca0(this);
    S* owner;

    if (character &&
        (character = reinterpret_cast<Model*>(
            sub_6A17C6(reinterpret_cast<int>(character), 0,
                       g92907c, g932a40, 0))))
        owner = character->owner();
    else
        owner = 0;

    if (this == owner) {
        StateRef* state = &service->state;
        if (state->get()->kind == 5) {
            int identity = this
                ? reinterpret_cast<int>(reinterpret_cast<char*>(this) + 0x14c)
                : 0;
            if (state->get()->method() != identity)
                state->get()->setOwner(this);
        }
    }
}
