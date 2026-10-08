// from server: 94% by colin
// roc 2007-08 00563bb0  unit: RBX::StopCommand  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563bb0
//
// 00563bb0  6a01                 push 1
// 00563bb2  83c110               add ecx, 0x10
// 00563bb5  e886e6ffff           call 0x562240
// 00563bba  33c9                 xor ecx, ecx
// 00563bbc  83b84c01000001       cmp dword ptr [eax + 0x14c], 1
// 00563bc3  0f94c1               sete cl
// 00563bc6  8ac1                 mov al, cl
// 00563bc8  c3                   ret 

struct StopCommand {
    bool isEnabled() const;
};

struct RunStateOwner {
    char pad[0x14c];
    int state;
};

extern "C" RunStateOwner* __stdcall getRunStateOwner(void*, int);

bool StopCommand::isEnabled() const
{
    RunStateOwner* owner = getRunStateOwner((char*)this + 0x10, 1);
    return owner->state == 1;
}
