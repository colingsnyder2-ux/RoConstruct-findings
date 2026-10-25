// from server: 100% by king_originala
// roc 2008-06 00502370  unit: G3D::Sphere  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00502370
//
// 00502370  55                   push ebp
// 00502371  8bec                 mov ebp, esp
// 00502373  83e4c0               and esp, 0xffffffc0
// 00502376  83ec34               sub esp, 0x34
// 00502379  53                   push ebx
// 0050237a  8b9978020000         mov ebx, dword ptr [ecx + 0x278]
// 00502380  83eb01               sub ebx, 1
// 00502383  56                   push esi
// 00502384  57                   push edi
// 00502385  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00502389  7847                 js 0x5023d2
// 0050238b  8b7d08               mov edi, dword ptr [ebp + 8]
// 0050238e  eb04                 jmp 0x502394
// 00502390  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00502394  8b8174020000         mov eax, dword ptr [ecx + 0x274]
// 0050239a  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0050239d  56                   push esi
// 0050239e  8bcf                 mov ecx, edi
// 005023a0  e83b54f7ff           call 0x4777e0
// 005023a5  d94638               fld dword ptr [esi + 0x38]
// 005023a8  83ec08               sub esp, 8
// 005023ab  8bcf                 mov ecx, edi
// 005023ad  dd1c24               fstp qword ptr [esp]
// 005023b0  e82b59f7ff           call 0x477ce0
// 005023b5  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005023b8  8b11                 mov edx, dword ptr [ecx]
// 005023ba  8b422c               mov eax, dword ptr [edx + 0x2c]
// 005023bd  57                   push edi
// 005023be  ffd0                 call eax
// 005023c0  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005023c3  57                   push edi
// 005023c4  51                   push ecx
// 005023c5  e8166c0400           call 0x548fe0
// 005023ca  83c408               add esp, 8
// 005023cd  83eb01               sub ebx, 1
// 005023d0  79be                 jns 0x502390
// 005023d2  5f                   pop edi
// 005023d3  5e                   pop esi
// 005023d4  5b                   pop ebx
// 005023d5  8be5                 mov esp, ebp
// 005023d7  5d                   pop ebp
// 005023d8  c20400               ret 4

struct Item;
struct RenderDevice {
    void setTransform(const Item*);
    void setValue(double);
};

struct Drawable {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void draw(RenderDevice*);
};

struct Item {
    char padding[0x34];
    Drawable* drawable;
    float value;
    void* data;
};

extern void finish(void*, RenderDevice*);

struct S {
    char padding[0x274];
    Item** items;
    int count;
    void draw(RenderDevice*);
};

void S::draw(RenderDevice* device)
{
    __declspec(align(64)) char scratch[64];

    for (int i = count - 1; i >= 0; --i) {
        Item* item = items[i];
        device->setTransform(item);
        device->setValue(item->value);
        item->drawable->draw(device);
        finish(item->data, device);
    }
}
