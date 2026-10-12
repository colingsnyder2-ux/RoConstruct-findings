// from server: 82% by king_originala
struct Event {
    int type;
};

struct Result {
    void* value;
    void* auxiliary;
    Result(void* v, void* a) : value(v), auxiliary(a) {}
};

struct Parent;

struct ParentTable {
    void* reserved[16];
    void (__thiscall* release)(Parent*);
    bool (__thiscall* active)(Parent*);
};

struct ParentLink {
    Parent* pointer;
    void* control;
    void reset();
    void clear();
};

struct GuiItem {
    virtual Result process(const Event& event);
    ParentLink parent;
};

struct Parent {
    ParentTable* table;
    char padding[0x12c];
    GuiItem gui;
};

struct Base {
    Result process(const Event& event);
};

__forceinline void ParentLink::clear()
{
    if (pointer)
        pointer->table->release(pointer);
    reset();
}

Result GuiItem::process(const Event& event)
{
    if (event.type >= 1 && event.type == 7)
        return Result(0, 0);

    if (parent.pointer) {
        if (parent.pointer->table->active(parent.pointer)) {
            Result result =
                reinterpret_cast<Base*>(reinterpret_cast<char*>(this) - 0x130)
                    ->process(event);
            if (result.value)
                return result;
        }

        Result result = parent.pointer->gui.process(event);
        if (result.value)
            return result;

        parent.clear();
    }

    return reinterpret_cast<Base*>(reinterpret_cast<char*>(this) - 0x130)
        ->process(event);
}
