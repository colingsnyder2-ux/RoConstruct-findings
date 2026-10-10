// from server: 72% by atomic.potato
extern "C" void sub_005cbf90(void *, int);

struct CameraZoomOutCommand
{
    void f();
};

void CameraZoomOutCommand::f()
{
    struct Base
    {
        void **vtable;
    };

    Base *object = *(Base **)((char *)this + 0x0c);
    void **member = (void **)((char *)object + 0x288);
    typedef void *(__fastcall *Call)(void *, void *);
    void *result = ((Call)member[1])(member, 0);
    sub_005cbf90(result, -1);
}
