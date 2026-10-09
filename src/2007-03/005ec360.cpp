// roc 2007-03 005ec360  unit: seg_005e0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ec360
//
// 005ec360  8b542404             mov edx, dword ptr [esp + 4]
// 005ec364  8b4208               mov eax, dword ptr [edx + 8]
// 005ec367  8b4020               mov eax, dword ptr [eax + 0x20]
// 005ec36a  3bc1                 cmp eax, ecx
// 005ec36c  7506                 jne 0x5ec374
// 005ec36e  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 005ec371  8b4120               mov eax, dword ptr [ecx + 0x20]
// 005ec374  c20400               ret 4
// copied from an identical function in another client (function ?getJointType@JointInstance@ns_ROCX000005@@QAEHPAUPart@2@@Z)

namespace ns_ROCX000005 {
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
}
