// from server: 100% by king_originala
// roc 2008-06 006683b0  unit: RBX::JointStage  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006683b0
//
// 006683b0  56                   push esi
// 006683b1  57                   push edi
// 006683b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006683b6  8bf1                 mov esi, ecx
// 006683b8  56                   push esi
// 006683b9  8bcf                 mov ecx, edi
// 006683bb  e870d4fdff           call 0x645830
// 006683c0  57                   push edi
// 006683c1  8bce                 mov ecx, esi
// 006683c3  e8a8fbffff           call 0x667f70
// 006683c8  57                   push edi
// 006683c9  84c0                 test al, al
// 006683cb  740f                 je 0x6683dc
// 006683cd  8b4e08               mov ecx, dword ptr [esi + 8]
// 006683d0  8b01                 mov eax, dword ptr [ecx]
// 006683d2  8b5010               mov edx, dword ptr [eax + 0x10]
// 006683d5  ffd2                 call edx
// 006683d7  5f                   pop edi
// 006683d8  5e                   pop esi
// 006683d9  c20400               ret 4
// 006683dc  8bce                 mov ecx, esi
// 006683de  e85dffffff           call 0x668340
// 006683e3  5f                   pop edi
// 006683e4  5e                   pop esi
// 006683e5  c20400               ret 4

struct JointStage;

struct Joint {
    char padding[4];
    int owner;
    void setOwner(int value);
};

struct NextStage {
    virtual void entry0();
    virtual void entry1();
    virtual void entry2();
    virtual void entry3();
    virtual void addJoint(Joint* joint);
};

struct JointStage {
    char padding[8];
    NextStage* next;

    bool acceptsJoint(Joint* joint);
    void addLocally(Joint* joint);
    void addJoint(Joint* joint);
};

void JointStage::addJoint(Joint* joint)
{
    joint->setOwner((int)this);
    if (acceptsJoint(joint))
        next->addJoint(joint);
    else
        addLocally(joint);
}
