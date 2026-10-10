// from server: 40% by atomic.potato
struct GuiButton
{
    GuiButton* parent;
    unsigned char padding[113];
    unsigned char enabled;

    GuiButton* f();
};

GuiButton* GuiButton::f()
{
    GuiButton* p = parent;
    while (!p->enabled)
        p = p->parent;
    return p;
}
