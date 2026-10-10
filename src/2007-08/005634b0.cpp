// from server: 84% by colin
struct CameraModelViewCommand {
    char pad[0xc];
    void* field_c;
    void execute(int);
};

extern "C" void __stdcall sub_57D880(void*);
extern "C" void* __cdecl sub_561B10(void*, int);
extern "C" void __fastcall sub_58C810(void*);
extern "C" void __fastcall sub_4108B0(void*, int);

void CameraModelViewCommand::execute(int arg)
{
    void* p = this->field_c;
    sub_57D880((char*)p + 0x26c);
    void* q = sub_561B10(this->field_c, 0xb);
    sub_58C810(q);
    void* r = *(void**)((char*)&arg + 4);
    sub_4108B0(r, -1);
    void** vt = *(void***)r;
    void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
    *(int*)((char*)r + 4) = -1;
    fn(r, 1);
}
