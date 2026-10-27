// from server: 97% by colin
// from server: 90% by EspClaude
// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espclaude_cb3252ba35937d6e.cpp

// Candidate translation unit (score above; library headers required).
#include <gui/GuiEvent.h>

struct Event;
struct Workspace;

typedef RBX::GuiResponse Result;

struct Boolean {
    bool value;
};

struct Source {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void activate(bool) = 0;
};

struct Event {
    int type;
    Source* source;
    int data[3];
};

struct Controller {
    virtual void slot0() = 0;
    virtual int begin(Event*) = 0;
    virtual void slot2() = 0;
    virtual void move(Event*) = 0;
    virtual int finish(Event*) = 0;
    virtual void process(Event*) = 0;
    virtual void drag(Event*) = 0;
    virtual void release(Event*) = 0;
    virtual int select(Event*) = 0;

    char padding[16];
    bool active;
};

struct Signal {
    char padding[108];
    void fire(Boolean);
};

struct WBase {
    virtual ~WBase();
    char padding[0x2e8 - 4];
    void update(int);
};

struct Workspace : WBase, RBX::GuiTarget {
    char padding0[92 - 4];
    Signal signal;
    Controller* controller;
    int padding1;
    Event saved;
    char padding2[44];
    bool active;

    virtual Result process(const RBX::GuiEvent&);
};

Result Workspace::process(const RBX::GuiEvent& guiEvent)
{
    Event* event = (Event*)&guiEvent;
    if (event->type >= 1 && event->type <= 7) {
        saved = *event;
        saved.type = 7;
    }

    switch (event->type) {
    case 12:
    case 13:
        {
            Boolean value;
            value.value = false;
            signal.fire(value);
        }
    case 2:
        {Source* source=event->source;active=false;source->activate(false);}
        break;

    case 10:
        controller->process(event);
        if (!controller->active)
            return Result::notUsed();
        update(controller->finish(event));
        break;

    case 1:
        {Source* source=event->source;active=true;source->activate(true);}
        break;

    case 3:
        if (!controller->active)
            update(controller->begin(event));
        break;

    case 5:
        if (controller->active)
            controller->drag(event);
        else
            controller->move(event);
        break;

    case 6:
        if (controller->active)
            controller->release(event);
        break;

    case 4:
        update(controller->select(event));
        break;

    default:
        return Result::notUsed();
    }

    if (controller->active) {
        Workspace* w = this;
        if (w)
            return Result::used(w);
    }
    return Result::used();
}
