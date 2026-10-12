// from server: 93% by king_originala
struct Event {
    int kind;
};

struct Result {
    int first;
    int second;

    Result() {}
    Result(int a, int b) : first(a), second(b) {}
};

struct Widget;
struct S;

struct VTable {
    void *slots0[16];
    void (__thiscall *release)(Widget *);
    void *slots1[8];
    void (__thiscall *changed)(S *);
};

struct Widget {
    VTable *vtable;
    char padding[0x140];
    int menuState;

    void setMenuState(int);
};

struct Shared {
    Widget *pointer;
    void *control;

    void reset();
};

struct Handler {
    int data;
    Shared child;

    Result *query(Result *, Event *);
};

extern char sourceType;
extern char destinationType;

extern "C" void *__cdecl runtimeCast(
    void *, long, void *, void *, int);

struct S {
    VTable *vtable;
    char padding[0x12c];
    Handler handler;
    char padding2[8];
    int menuState;

    Result f(Event *);
};

Result S::f(Event *event)
{
    Result result;
    Widget *previous = static_cast<Widget *>(
        runtimeCast(handler.child.pointer, 0,
                    &sourceType, &destinationType, 0));

    switch (event->kind) {
    case 3:
    case 4:
        {
            handler.query(&result, event);
            int first = result.first;

            if (first == 0 || first == 2) {
                if (first == 2) {
                    if (handler.child.pointer)
                        handler.child.pointer->vtable->release(
                            handler.child.pointer);
                    handler.child.reset();
                }

                if (menuState != 0) {
                    void (__thiscall *changed)(S *) = vtable->changed;
                    menuState = 0;
                    changed(this);
                }
            }

            return Result(first, result.second);
        }

    case 5:
        {
            int state = previous ? previous->menuState : 0;
            handler.query(&result, event);

            if (previous) {
                Widget *current = static_cast<Widget *>(
                    runtimeCast(handler.child.pointer, 0,
                                &sourceType, &destinationType, 0));

                if (current && current != previous)
                    current->setMenuState(state);
            }

            return Result(1, 0);
        }

    default:
        return Result(0, 0);
    }
}
