// from server: 100% by colin
// roc 2007-08 005e9820  unit: RBX::VExplosion::?$SignalDesc  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e9820
//
// 005e9820  8b8994020000         mov ecx, dword ptr [ecx + 0x294]
// 005e9826  8b442404             mov eax, dword ptr [esp + 4]
// 005e982a  8908                 mov dword ptr [eax], ecx
// 005e982c  c20400               ret 4

struct VExplosionSignalDesc {
    int get(int* out);
};

int VExplosionSignalDesc::get(int* out)
{
    *out = *(int*)((char*)this + 0x294);
    return (int)out;
}
