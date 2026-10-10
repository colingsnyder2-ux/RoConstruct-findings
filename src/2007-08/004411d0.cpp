// from server: 28% by colin
struct VBrickColor {
    int number;
    void construct(int);
};

extern "C" void __stdcall sub_77DD74(void*);
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" void __cdecl sub_698700(void);
extern "C" void __cdecl sub_440050(void);

void VBrickColor::construct(int value)
{
    int local;
    sub_77DD74(&local);
    sub_698700();
    void* p = (void*)((char*)this + 0);
    sub_440050();
    sub_77DDBC(&local);
}
