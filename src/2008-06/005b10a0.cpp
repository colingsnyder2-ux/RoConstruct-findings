// from server: 75% by king_originala
struct S;

struct Controller {
    int check();
};

extern bool __cdecl validate(S*);
extern Controller* __cdecl resolve(void*);
extern void* __cdecl context(S*);

struct S {
    char padding[0x104];
    void* parent;

    void* find();
    void update(int, void*);
    void f();
};

void S::f()
{
    int result;
    if (!find()) {
        result = 0;
    } else if (!validate(this)) {
        result = 1;
    } else {
        Controller* controller = resolve(parent);
        if (!controller)
            result = 2;
        else
            result = controller->check() ? 4 : 0;
    }
    update(result, context(this));
}
