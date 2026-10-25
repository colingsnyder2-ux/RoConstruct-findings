// from server: 100% by king_originala
// roc 2008-06 005e6040  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6040
//
// 005e6040  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e6044  83ec30               sub esp, 0x30
// 005e6047  56                   push esi
// 005e6048  8bb0a0000000         mov esi, dword ptr [eax + 0xa0]
// 005e604e  50                   push eax
// 005e604f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005e6053  50                   push eax
// 005e6054  8d4c240c             lea ecx, [esp + 0xc]
// 005e6058  51                   push ecx
// 005e6059  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005e605d  e8cef80500           call 0x645930
// 005e6062  50                   push eax
// 005e6063  8bce                 mov ecx, esi
// 005e6065  e866e20200           call 0x6142d0
// 005e606a  5e                   pop esi
// 005e606b  83c430               add esp, 0x30
// 005e606e  c3                   ret 

struct Transform {
    float data[12];
};

struct Receiver {
    void apply(const Transform& value);
};

struct Body {
    unsigned char padding[0xA0];
    Receiver* receiver;
};

struct Joint {
    Transform calculate(Body* first, Body* second);
};

void __cdecl update(Body* first, Joint* joint, Body* second)
{
    Receiver* receiver = second->receiver;
    receiver->apply(joint->calculate(first, second));
}
