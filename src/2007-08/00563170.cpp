// from server: 81% by colin
// roc 2007-08 00563170  unit: RBX::PrimaryControllerCommand  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563170
//
// 00563170  56                   push esi
// 00563171  6a01                 push 1
// 00563173  e838f0ffff           call 0x5621b0
// 00563178  8b742408             mov esi, dword ptr [esp + 8]
// 0056317c  6aff                 push -1
// 0056317e  8bce                 mov ecx, esi
// 00563180  e82bd7eaff           call 0x4108b0
// 00563185  8b06                 mov eax, dword ptr [esi]
// 00563187  8b5004               mov edx, dword ptr [eax + 4]
// 0056318a  6a01                 push 1
// 0056318c  8bce                 mov ecx, esi
// 0056318e  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 00563195  ffd2                 call edx
// 00563197  5e                   pop esi
// 00563198  c20400               ret 4

struct PrimaryControllerCommand {
    int field0;
    int field4;
    void method_5621B0(int);
    void method_4108B0(int);
    virtual void vmethod(int);
    void func(int);
};

void PrimaryControllerCommand::func(int arg)
{
    method_5621B0(1);
    method_4108B0(-1);
    field4 = -1;
    vmethod(1);
}
