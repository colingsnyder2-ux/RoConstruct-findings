// from server: 100% by tester
// roc 2008-06 004a64b0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a64b0
//
// 004a64b0  dd442408             fld qword ptr [esp + 8]
// 004a64b4  56                   push esi
// 004a64b5  8b742408             mov esi, dword ptr [esp + 8]
// 004a64b9  dd5c240c             fstp qword ptr [esp + 0xc]
// 004a64bd  6a01                 push 1
// 004a64bf  6a40                 push 0x40
// 004a64c1  8d442414             lea eax, [esp + 0x14]
// 004a64c5  50                   push eax
// 004a64c6  8bce                 mov ecx, esi
// 004a64c8  e833f1ffff           call 0x4a5600
// 004a64cd  8bc6                 mov eax, esi
// 004a64cf  5e                   pop esi
// 004a64d0  c3                   ret 

namespace RakNet {
class BitStream
{
public:
    void WriteBits(const unsigned char* input, int numberOfBitsToWrite, const bool rightAlignedBits = true);

    template<class templateType>
    void Write(templateType var)
    {
        WriteBits((unsigned char*)&var, sizeof(templateType) * 8, true);
    }
};
}

namespace RBX {
namespace Network {
RakNet::BitStream& operator<<(RakNet::BitStream& stream, double value)
{
    stream.Write(value);
    return stream;
}
}
}
