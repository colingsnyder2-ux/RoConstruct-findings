// from server: 31% by colin
struct NullController {
    void construct();
    void assign(void*, void*);
};

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __stdcall sub_4553B0(void*);
extern "C" void __stdcall sub_453EA0(void*, void*, void*);

void NullController::construct()
{
    void* p = malloc(0xe8);
    if (p) {
        sub_4553B0(p);
    } else {
        p = 0;
    }
    assign(p, 0);
}
