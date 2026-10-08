// from server: 100% by colin
// roc 2007-08 0060b200  unit: RBX::GlueJoint  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060b200
//
// 0060b200  8b542404             mov edx, dword ptr [esp + 4]
// 0060b204  8b4208               mov eax, dword ptr [edx + 8]
// 0060b207  8b4020               mov eax, dword ptr [eax + 0x20]
// 0060b20a  3bc1                 cmp eax, ecx
// 0060b20c  7506                 jne 0x60b214
// 0060b20e  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0060b211  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0060b214  c20400               ret 4

struct Part {
    char pad[0x20];
    int field20;
};

struct JointInstance {
    char pad[8];
    Part* part0;
    Part* part1;
    int getJointType(Part* p);
};

int JointInstance::getJointType(Part* p)
{
    Part* a = *(Part**)((char*)p + 8);
    int r = a->field20;
    if (r == (int)this)
    {
        Part* b = *(Part**)((char*)p + 0xc);
        r = b->field20;
    }
    return r;
}
