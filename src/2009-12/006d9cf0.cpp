// from server: 92% by atomic.potato
struct Controller {
    void f();
};

void Controller::f()
{
    *(int *)((char *)this + 0) = 0x9d96b4;
    *(int *)((char *)this + 4) = 0x9d96ac;
    *(int *)((char *)this + 0x18) = 0x9d96a0;
    *(int *)((char *)this + 0x1c) = 0x9d9698;
    *(int *)((char *)this + 0x94) = 0x9d968c;
}
