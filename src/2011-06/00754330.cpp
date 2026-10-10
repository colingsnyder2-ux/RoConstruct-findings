// from server: 79% by atomic.potato
struct UnifiedImageWidget
{
    void *f(void *);
};

void *UnifiedImageWidget::f(void *value)
{
    ((void (__thiscall *)(void *, void *))((char *)this + 0xa8))(this, value);
    return value;
}
