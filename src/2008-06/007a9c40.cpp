// from server: 100% by king_originala
// roc 2008-06 007a9c40  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a9c40
//
// 007a9c40  64a100000000         mov eax, dword ptr fs:[0]
// 007a9c46  6aff                 push -1
// 007a9c48  6839d37e00           push 0x7ed339
// 007a9c4d  50                   push eax
// 007a9c4e  64892500000000       mov dword ptr fs:[0], esp
// 007a9c55  8d442410             lea eax, [esp + 0x10]
// 007a9c59  50                   push eax
// 007a9c5a  81c17c020000         add ecx, 0x27c
// 007a9c60  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007a9c68  ff1548438000         call dword ptr [0x804348]
// 007a9c6e  8d4c2410             lea ecx, [esp + 0x10]
// 007a9c72  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 007a9c7a  ff15ec438000         call dword ptr [0x8043ec]
// 007a9c80  8b0c24               mov ecx, dword ptr [esp]
// 007a9c83  64890d00000000       mov dword ptr fs:[0], ecx
// 007a9c8a  83c40c               add esp, 0xc
// 007a9c8d  c22000               ret 0x20

namespace Ogre {
    struct AxisAlignedBox {
        char data[32];
        ~AxisAlignedBox();
        AxisAlignedBox& operator=(const AxisAlignedBox&);
    };
}

extern void (__thiscall *destroyBox)(Ogre::AxisAlignedBox*);
extern Ogre::AxisAlignedBox& (__thiscall *assignBox)(
    Ogre::AxisAlignedBox*, const Ogre::AxisAlignedBox&);

inline Ogre::AxisAlignedBox::~AxisAlignedBox()
{
    destroyBox(this);
}

inline Ogre::AxisAlignedBox& Ogre::AxisAlignedBox::operator=(
    const Ogre::AxisAlignedBox& value)
{
    return assignBox(this, value);
}

struct S {
    char padding[0x27c];
    Ogre::AxisAlignedBox bounds;
    void setBounds(Ogre::AxisAlignedBox value);
};

void S::setBounds(Ogre::AxisAlignedBox value)
{
    bounds = value;
}
