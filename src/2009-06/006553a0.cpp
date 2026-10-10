// from server: 69% by colin
struct Verb {
    virtual bool isEnabled();
    virtual bool isChecked();
    virtual bool isSelected();
    virtual void getText();
    virtual void doIt(int);
    virtual bool isToggled();
};

struct TToolVerb : Verb {
    char pad[0x18];
    bool toggle;
    int field_0xc;
    bool isEnabled();
    void doIt(int);
};

bool TToolVerb::isEnabled() {
    if (!Verb::isEnabled())
        return false;
    if (!toggle)
        return false;
    return true;
}

void TToolVerb::doIt(int param) {
    if (Verb::isEnabled() && toggle) {
        extern void __stdcall func_62b750(int);
        func_62b750(*(int*)(field_0xc + 0x20c));
    } else {
        extern void __stdcall func_62b7a0(int, int);
        int v = *(int*)(field_0xc + 0x20c);
        int r = ((int (__thiscall*)(TToolVerb*))*(void**)(*(int*)this + 0x14))(this);
        func_62b7a0(v, r);
    }
}
