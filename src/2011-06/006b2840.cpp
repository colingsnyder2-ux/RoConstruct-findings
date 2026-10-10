// from server: 40% by atomic.potato
struct GuiButton
{
    GuiButton* parent;
    unsigned char padding[113];
    unsigned char flag;
    GuiButton* get();
};

GuiButton* GuiButton::get()
{
    GuiButton* p = parent;
    while (!p->flag)
        p = p->parent;
    return p;
}
