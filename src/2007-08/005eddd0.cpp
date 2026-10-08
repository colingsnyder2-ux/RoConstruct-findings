// from server: 73% by colin
// roc 2007-08 005eddd0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eddd0
//
// 005eddd0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005eddd3  8b01                 mov eax, dword ptr [ecx]
// 005eddd5  8b542404             mov edx, dword ptr [esp + 4]
// 005eddd9  8b4004               mov eax, dword ptr [eax + 4]
// 005edddc  52                   push edx
// 005edddd  ffd0                 call eax
// 005edddf  83ec08               sub esp, 8
// 005edde2  8bcc                 mov ecx, esp
// 005edde4  8964240c             mov dword ptr [esp + 0xc], esp
// 005edde8  50                   push eax
// 005edde9  e842f9f9ff           call 0x58d730
// 005eddee  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005eddf2  83c10c               add ecx, 0xc
// 005eddf5  e8e6fce9ff           call 0x48dae0
// 005eddfa  c20800               ret 8

struct RefPropDescriptor {
    void* getset;
    void getValue(void* object, void* result);
};

struct DescribedBase {
    void* vtable;
};

extern "C" void __stdcall func_0058d730(void* result, void* value);
extern "C" void __stdcall func_0048dae0(void* self);

void RefPropDescriptor::getValue(void* object, void* result)
{
    void* gs = *(void**)((char*)this + 0x1c);
    void* vtable = *(void**)gs;
    void* (*getter)(void*) = *(void* (**)(void*))((char*)vtable + 4);
    void* value = getter(object);
    void* tmp;
    func_0058d730(&tmp, value);
    func_0048dae0((char*)result + 0xc);
}
