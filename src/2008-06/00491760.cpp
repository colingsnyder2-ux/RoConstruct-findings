// from server: 100% by king_originala
// roc 2008-06 00491760  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491760
//
// 00491760  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00491763  8b01                 mov eax, dword ptr [ecx]
// 00491765  8b542404             mov edx, dword ptr [esp + 4]
// 00491769  8b4008               mov eax, dword ptr [eax + 8]
// 0049176c  52                   push edx
// 0049176d  ffd0                 call eax
// 0049176f  83ec08               sub esp, 8
// 00491772  8bcc                 mov ecx, esp
// 00491774  8964240c             mov dword ptr [esp + 0xc], esp
// 00491778  50                   push eax
// 00491779  e882361000           call 0x594e00
// 0049177e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00491782  83c110               add ecx, 0x10
// 00491785  e856feffff           call 0x4915e0
// 0049178a  c20800               ret 8

struct Shared {
    void* pointer;
    void* control;
    Shared(void*);
    Shared(const Shared&);
    ~Shared();
};

struct Holder {
    void set(Shared);
};

struct Output {
    char padding[16];
    Holder holder;
};

struct Getter {
    virtual void slot0();
    virtual void slot1();
    virtual void* get(void*);
};

struct Descriptor {
    char padding[28];
    Getter* getter;
    void read(void*, Output*);
};

void Descriptor::read(void* object, Output* output)
{
    output->holder.set(Shared(getter->get(object)));
}
