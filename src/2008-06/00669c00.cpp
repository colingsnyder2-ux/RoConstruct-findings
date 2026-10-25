// from server: 100% by king_originala
// roc 2008-06 00669c00  unit: RBX::TreeStage  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669c00
//
// 00669c00  56                   push esi
// 00669c01  8b742408             mov esi, dword ptr [esp + 8]
// 00669c05  8b06                 mov eax, dword ptr [esi]
// 00669c07  8b500c               mov edx, dword ptr [eax + 0xc]
// 00669c0a  57                   push edi
// 00669c0b  8bf9                 mov edi, ecx
// 00669c0d  8bce                 mov ecx, esi
// 00669c0f  ffd2                 call edx
// 00669c11  85c0                 test eax, eax
// 00669c13  7509                 jne 0x669c1e
// 00669c15  8b06                 mov eax, dword ptr [esi]
// 00669c17  8b5014               mov edx, dword ptr [eax + 0x14]
// 00669c1a  8bce                 mov ecx, esi
// 00669c1c  ffd2                 call edx
// 00669c1e  56                   push esi
// 00669c1f  e8ccedf7ff           call 0x5e89f0
// 00669c24  83c404               add esp, 4
// 00669c27  57                   push edi
// 00669c28  8bce                 mov ecx, esi
// 00669c2a  e801bcfdff           call 0x645830
// 00669c2f  8b06                 mov eax, dword ptr [esi]
// 00669c31  8b500c               mov edx, dword ptr [eax + 0xc]
// 00669c34  8bce                 mov ecx, esi
// 00669c36  ffd2                 call edx
// 00669c38  85c0                 test eax, eax
// 00669c3a  751b                 jne 0x669c57
// 00669c3c  8b06                 mov eax, dword ptr [esi]
// 00669c3e  8b5014               mov edx, dword ptr [eax + 0x14]
// 00669c41  8bce                 mov ecx, esi
// 00669c43  ffd2                 call edx
// 00669c45  83f805               cmp eax, 5
// 00669c48  7c0d                 jl 0x669c57
// 00669c4a  56                   push esi
// 00669c4b  8bcf                 mov ecx, edi
// 00669c4d  e80effffff           call 0x669b60
// 00669c52  5f                   pop edi
// 00669c53  5e                   pop esi
// 00669c54  c20400               ret 4
// 00669c57  56                   push esi
// 00669c58  8bcf                 mov ecx, edi
// 00669c5a  e8e1f6ffff           call 0x669340
// 00669c5f  5f                   pop edi
// 00669c60  5e                   pop esi
// 00669c61  c20400               ret 4

struct TreeStage;

struct Object {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int state();
    virtual void slot4();
    virtual int level();

    void setStage(int stage);
};

extern "C" void __cdecl prepare(Object* object);

struct TreeStage {
    void process(Object* object);
    void promote(Object* object);
    void insert(Object* object);
};

void TreeStage::process(Object* object)
{
    if (!object->state())
        object->level();

    prepare(object);
    object->setStage((int)this);

    if (!object->state() && object->level() >= 5)
        promote(object);
    else
        insert(object);
}
