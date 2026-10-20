// from server: 94% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_moveupvectorlayout35675fbf40e5a49d.cpp

// Candidate translation unit (score above; library headers required).
#include <string>
#include <exception>
namespace RBX {
class Instance;
bool checkA(Instance* instance, int role);
bool checkB(Instance* instance, int role);
class runtime_error : public std::exception
{
    std::string message;
public:
    runtime_error(const std::string& m);
};
static __declspec(noinline) void checkPermissions(Instance* instance)
{
    if (checkA(instance, 1) && !checkB(instance, 1))
    {
        std::string msg("Insufficinet permissions");
        throw runtime_error(msg);
    }
}
void verify(Instance* instance)
{
    checkPermissions(instance);
}
}

#pragma float_control(precise,off)
#include "G3D/Vector3.h"
typedef G3D::Vector3 Vector3;
#include <vector>
struct Selection {
    std::vector<void*> items;
};

struct SelectionOwner {
    char padding[0x13c];
    Selection selection;
};

struct History {
    void mark(int);
};

struct Context {
    SelectionOwner* getSelection();
    History* getHistory();
};

struct Flag {
    bool value;
};

struct NotificationList {
    void notify(Flag);
};

struct DataModel {
    char padding[0x344];
    NotificationList notifications;
};

struct Name {
    char padding[8];
    union {
        char text[16];
        char* pointer;
    };
    unsigned size;
    unsigned capacity;
};

struct Operation {
    char storage[44];
    Operation(int, Selection*, DataModel*);
    ~Operation();
    void begin();
    Vector3 translate(const Vector3&);
    void finish();
};

struct Callback {
    virtual void complete(bool);
};

extern void __cdecl handle(const char*, DataModel*);

struct MoveUpSelectionVerb {
    void* vtable;
    Name* name;
    char padding0[4];
    DataModel* model;
    char padding1[16];
    Context* context;
    float distance;

    void prepare();
    void execute(Callback*);
};

void MoveUpSelectionVerb::execute(Callback* callback)
{
    RBX::checkPermissions(reinterpret_cast<RBX::Instance*>(context));

    SelectionOwner* owner = context ? context->getSelection() : 0;
    Selection* selection = &owner->selection;

    if (selection->items.size() > 0) {
        Operation operation(0, selection, model);
        operation.begin();

        Vector3 displacement(0.0f,distance,0.0f);
        operation.translate(displacement);
        operation.finish();

        History* history = context ? context->getHistory() : 0;
        history->mark(4);

        Flag flag;
        flag.value = false;
        model->notifications.notify(flag);

        DataModel* currentModel = model;
        Name* currentName = name;
        const char* text;
        if (currentName->capacity >= 16)
            text = currentName->pointer;
        else
            text = currentName->text;

        handle(text, currentModel);
        callback->complete(true);
    }
}
