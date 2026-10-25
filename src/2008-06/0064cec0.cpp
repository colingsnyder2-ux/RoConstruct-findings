// from server: 100% by king_originala
// roc 2008-06 0064cec0  unit: RBX::ClumpStage  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064cec0
//
// 0064cec0  83ec0c               sub esp, 0xc
// 0064cec3  56                   push esi
// 0064cec4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0064cec8  57                   push edi
// 0064cec9  56                   push esi
// 0064ceca  8bf9                 mov edi, ecx
// 0064cecc  e81fce0100           call 0x669cf0
// 0064ced1  8b06                 mov eax, dword ptr [esi]
// 0064ced3  8b500c               mov edx, dword ptr [eax + 0xc]
// 0064ced6  8bce                 mov ecx, esi
// 0064ced8  ffd2                 call edx
// 0064ceda  85c0                 test eax, eax
// 0064cedc  7523                 jne 0x64cf01
// 0064cede  8b06                 mov eax, dword ptr [esi]
// 0064cee0  8b5030               mov edx, dword ptr [eax + 0x30]
// 0064cee3  8bce                 mov ecx, esi
// 0064cee5  89742418             mov dword ptr [esp + 0x18], esi
// 0064cee9  ffd2                 call edx
// 0064ceeb  84c0                 test al, al
// 0064ceed  7412                 je 0x64cf01
// 0064ceef  8d442418             lea eax, [esp + 0x18]
// 0064cef3  50                   push eax
// 0064cef4  8d4c240c             lea ecx, [esp + 0xc]
// 0064cef8  51                   push ecx
// 0064cef9  8d4f10               lea ecx, [edi + 0x10]
// 0064cefc  e83fbdf9ff           call 0x5e8c40
// 0064cf01  5f                   pop edi
// 0064cf02  5e                   pop esi
// 0064cf03  83c40c               add esp, 0xc
// 0064cf06  c20400               ret 4

struct Object {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual Object* parent();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual bool eligible();
};

struct InsertResult {
    char data[12];
};

struct Collection {
    InsertResult insert(Object* const& object);
};

struct TreeStage {
    char padding[16];
    void process(Object* object);
};

struct ClumpStage : TreeStage {
    Collection collection;
    void process(Object* object);
};

void ClumpStage::process(Object* object)
{
    TreeStage::process(object);
    if (!object->parent()) {
        Object* entry = object;
        if (object->eligible())
            collection.insert(entry);
    }
}
