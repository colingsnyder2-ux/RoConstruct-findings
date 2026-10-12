// from server: 97% by king_originala
struct S;
extern void __cdecl removeChild(void*, S**);

struct S {
    char pad00[0x14];
    bool dirty14;
    char pad15[0x0B];
    S* parent;
    char pad24[4];
    char children[0x2C];
    bool dirty54;
    char pad55[0x14];
    bool dirty69;

    void setParent(S*);
    void changed();
    void addChild(S*);
    S* root();
    void setRoot(S*);
};

void S::setParent(S* p)
{
    S* newParent = p;
    if (newParent != parent) {
        if (parent) {
            p = this;
            removeChild(parent->children, &p);
            parent->changed();
        }
        parent = newParent;
        if (newParent)
            newParent->addChild(this);

        S* r;
        if (parent)
            r = parent->root();
        else
            r = this;
        setRoot(r);

        dirty14 = true;
        dirty54 = true;
        dirty69 = true;

        if (parent)
            parent->changed();
    }
}
