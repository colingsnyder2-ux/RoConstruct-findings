// from server: 88% by atomic.potato
extern "C" void __stdcall assign_string(void *, const char *);

struct UnifiedWidget
{
    void f();
};

void UnifiedWidget::f()
{
    assign_string((char *)this + 0x234, ">Authoring");
}
