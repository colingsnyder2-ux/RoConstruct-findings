// from server: 100% by king_originala
// roc 2008-06 005a1c20  unit: RBX::Workspace  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1c20
//
// 005a1c20  83ec30               sub esp, 0x30
// 005a1c23  56                   push esi
// 005a1c24  57                   push edi
// 005a1c25  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 005a1c29  57                   push edi
// 005a1c2a  8bf1                 mov esi, ecx
// 005a1c2c  e82fe5feff           call 0x590160
// 005a1c31  c644243c00           mov byte ptr [esp + 0x3c], 0
// 005a1c36  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005a1c3a  50                   push eax
// 005a1c3b  8d8e44030000         lea ecx, [esi + 0x344]
// 005a1c41  e8fa4cfdff           call 0x576940
// 005a1c46  6a00                 push 0
// 005a1c48  68709f9300           push 0x939f70
// 005a1c4d  687c909200           push 0x92907c
// 005a1c52  6a00                 push 0
// 005a1c54  57                   push edi
// 005a1c55  e86cfb0f00           call 0x6a17c6
// 005a1c5a  83c414               add esp, 0x14
// 005a1c5d  85c0                 test eax, eax
// 005a1c5f  740c                 je 0x5a1c6d
// 005a1c61  50                   push eax
// 005a1c62  8d8e88030000         lea ecx, [esi + 0x388]
// 005a1c68  e853b80300           call 0x5dd4c0
// 005a1c6d  6a00                 push 0
// 005a1c6f  681c7f9400           push 0x947f1c
// 005a1c74  687c909200           push 0x92907c
// 005a1c79  6a00                 push 0
// 005a1c7b  57                   push edi
// 005a1c7c  e845fb0f00           call 0x6a17c6
// 005a1c81  8bf8                 mov edi, eax
// 005a1c83  83c414               add esp, 0x14
// 005a1c86  85ff                 test edi, edi
// 005a1c88  744b                 je 0x5a1cd5
// 005a1c8a  83bf9c01000000       cmp dword ptr [edi + 0x19c], 0
// 005a1c91  7442                 je 0x5a1cd5
// 005a1c93  55                   push ebp
// 005a1c94  8b2f                 mov ebp, dword ptr [edi]
// 005a1c96  8d4c240c             lea ecx, [esp + 0xc]
// 005a1c9a  e83166edff           call 0x4782d0
// 005a1c9f  8b5564               mov edx, dword ptr [ebp + 0x64]
// 005a1ca2  50                   push eax
// 005a1ca3  8bcf                 mov ecx, edi
// 005a1ca5  ffd2                 call edx
// 005a1ca7  8bcf                 mov ecx, edi
// 005a1ca9  e8f2720600           call 0x608fa0
// 005a1cae  83be9c01000000       cmp dword ptr [esi + 0x19c], 0
// 005a1cb5  5d                   pop ebp
// 005a1cb6  741d                 je 0x5a1cd5
// 005a1cb8  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 005a1cbe  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 005a1cc8  85c0                 test eax, eax
// 005a1cca  7409                 je 0x5a1cd5
// 005a1ccc  50                   push eax
// 005a1ccd  e8a8e90f00           call 0x6a067a
// 005a1cd2  83c404               add esp, 4
// 005a1cd5  5f                   pop edi
// 005a1cd6  5e                   pop esi
// 005a1cd7  83c430               add esp, 0x30
// 005a1cda  c20400               ret 4

struct Frame {
    float data[12];
    Frame();
};

struct Instance {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void setFrame(const Frame&);

    char padding[0x198];
    void* resource;
    void update();
};

struct Flag {
    bool value;
};

struct Collection {
    char data[0x44];
    void update(Flag);
};

struct Renderable;

struct Bucket {
    void onAdded(Renderable*);
};

struct Workspace {
    char padding0[0x19c];
    void* resource;
    char padding1[0x1a4];
    Collection collection;
    Bucket bucket;

    void setInsertPoint(int);
    void added(int);
};

extern "C" void* __cdecl castObject(
    void*, int, const void*, const void*, int);
extern "C" void __cdecl releaseResource(void*);

void Workspace::added(int value)
{
    setInsertPoint(value);

    Flag flag;
    flag.value = false;
    collection.update(flag);

    Renderable* renderable = static_cast<Renderable*>(
        castObject(reinterpret_cast<void*>(value), 0,
                   reinterpret_cast<const void*>(0x92907c),
                   reinterpret_cast<const void*>(0x939f70), 0));
    if (renderable)
        bucket.onAdded(renderable);

    Instance* instance = static_cast<Instance*>(
        castObject(reinterpret_cast<void*>(value), 0,
                   reinterpret_cast<const void*>(0x92907c),
                   reinterpret_cast<const void*>(0x947f1c), 0));
    if (instance && instance->resource) {
        instance->setFrame(Frame());
        instance->update();

        if (resource) {
            void* old = *reinterpret_cast<void* volatile*>(&resource);
            resource = 0;
            if (old)
                releaseResource(old);
        }
    }
}
