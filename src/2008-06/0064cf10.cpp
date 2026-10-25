// from server: 100% by king_originala
// roc 2008-06 0064cf10  unit: RBX::ClumpStage  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064cf10
//
// 0064cf10  56                   push esi
// 0064cf11  8b742408             mov esi, dword ptr [esp + 8]
// 0064cf15  8b06                 mov eax, dword ptr [esi]
// 0064cf17  8b500c               mov edx, dword ptr [eax + 0xc]
// 0064cf1a  57                   push edi
// 0064cf1b  8bf9                 mov edi, ecx
// 0064cf1d  8bce                 mov ecx, esi
// 0064cf1f  ffd2                 call edx
// 0064cf21  85c0                 test eax, eax
// 0064cf23  751e                 jne 0x64cf43
// 0064cf25  8b06                 mov eax, dword ptr [esi]
// 0064cf27  8b5030               mov edx, dword ptr [eax + 0x30]
// 0064cf2a  8bce                 mov ecx, esi
// 0064cf2c  8974240c             mov dword ptr [esp + 0xc], esi
// 0064cf30  ffd2                 call edx
// 0064cf32  84c0                 test al, al
// 0064cf34  740d                 je 0x64cf43
// 0064cf36  8d44240c             lea eax, [esp + 0xc]
// 0064cf3a  50                   push eax
// 0064cf3b  8d4f10               lea ecx, [edi + 0x10]
// 0064cf3e  e81dd0f9ff           call 0x5e9f60
// 0064cf43  56                   push esi
// 0064cf44  8bcf                 mov ecx, edi
// 0064cf46  e8c5cd0100           call 0x669d10
// 0064cf4b  5f                   pop edi
// 0064cf4c  5e                   pop esi
// 0064cf4d  c20400               ret 4

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

struct Collection {
    void insert(Object* const& object);
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
    if (!object->parent()) {
        Object* entry = object;
        if (object->eligible())
            collection.insert(entry);
    }
    TreeStage::process(object);
}
