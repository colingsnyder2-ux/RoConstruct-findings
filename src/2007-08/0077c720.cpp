// from server: 82% by colin
struct seg_00770000 {
    void init();
};

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_5f05b0();
extern "C" void* __cdecl sub_407410(void**);

struct sub_407220_t {
    void method();
};

void seg_00770000::init()
{
    *(void**)0x8b3ac0 = (void*)0x7c085c;
    sub_725520((void*)0x8c77ec, (void*)0x5f0c30);
    void* p = sub_5f05b0();
    sub_407220_t* q = (sub_407220_t*)sub_407410(&p);
    q->method();
}
