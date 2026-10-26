// from server: 91% by king_originala_sol_resume_root
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_resume_medium_selection_foreach_f7a8726852eb563e.cpp

// Candidate translation unit (score above; library headers required).
#include <algorithm>
#include <vector>
#include <boost/shared_ptr.hpp>
#include <boost/bind.hpp>


extern "C" __declspec(dllimport) int __stdcall ReleaseCapture();
extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct Object;
typedef boost::shared_ptr<Object> Shared;

struct Event {
    virtual void invoke(int);
};

struct Object {
    char padding[0x1f0];
    Event event;
};

struct DragSelection {
    virtual void reserved();
    virtual void destroy(int);
};

struct Map {
    void remove(void*);
    void clean();
};

struct State {
    char padding[0x94];
    Map** map;
};

State* __cdecl state();

struct Item {
    char padding[12];
    Shared value;
};

struct Selection {
 typedef std::vector<Shared>::const_iterator const_iterator;
 const_iterator begin() const;
 const_iterator end() const;
};
typedef char iterator_size_check[sizeof(Selection::const_iterator)==8?1:-1];
typedef char shared_size_check[sizeof(Shared)==8?1:-1];

struct Guard {
    unsigned int storage[3];
    Guard(Shared);
    ~Guard();
};

void __cdecl callback(Object*, Shared);

void __cdecl notify(const char*, Object*);
extern const char drop[];

#define V(N) virtual void slot##N();
#define V10(N) V(N##0) V(N##1) V(N##2) V(N##3) V(N##4) \
               V(N##5) V(N##6) V(N##7) V(N##8) V(N##9)

struct S {
    V10(0)
    V10(1)
    V10(2)
    V10(3)
    V10(4)
    V10(5)
    V10(6)
    V10(7)
    V(80) V(81) V(82) V(83)
    virtual Selection* range();

    char padding0[0x1c];
    void* window;
    char padding1[0x100];
    Shared owner;
    DragSelection* selection;

    void prepare();
    Item* item(long);
    void finish(unsigned int, unsigned int, long);
};

#undef V10
#undef V

void S::finish(unsigned int, unsigned int, long) {
    prepare();
    DragSelection* dragging = selection;
    if (dragging) {
        (*state()->map)->remove(window);
        (*state()->map)->clean();
        ReleaseCapture();

        DragSelection* current = selection;
        if (current)
            current->destroy(1);
        selection = 0;

        long handle = SendMessageA(window, 0x110a, 8, 0);
        if (handle) {
            Item* selected = item(handle);
            if (selected) {
                Object* object = selected->value.get();
                Shared value(selected->value);
                Guard guard(owner);

                if (object) {
                    std::for_each(range()->begin(), range()->end(), boost::bind(callback, object, _1));
                }

                notify(drop, owner.get());
                owner.get()->event.invoke(1);
            }
        }

        SendMessageA(window, 0x110b, 8, 0);
    }
}