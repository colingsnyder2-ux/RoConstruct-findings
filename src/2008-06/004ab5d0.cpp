// from server: 100% by king_originala
// roc 2008-06 004ab5d0  unit: RBX::Network::Replicator::MarkerItem  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab5d0
//
// 004ab5d0  8b442408             mov eax, dword ptr [esp + 8]
// 004ab5d4  48                   dec eax
// 004ab5d5  83ec08               sub esp, 8
// 004ab5d8  83f802               cmp eax, 2
// 004ab5db  7716                 ja 0x4ab5f3
// 004ab5dd  6a01                 push 1
// 004ab5df  6a02                 push 2
// 004ab5e1  8d4c2418             lea ecx, [esp + 0x18]
// 004ab5e5  51                   push ecx
// 004ab5e6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004ab5ea  e811a0ffff           call 0x4a5600
// 004ab5ef  83c408               add esp, 8
// 004ab5f2  c3                   ret 
// 004ab5f3  56                   push esi
// 004ab5f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 004ab5f8  6a01                 push 1
// 004ab5fa  6a02                 push 2
// 004ab5fc  8d54240f             lea edx, [esp + 0xf]
// 004ab600  52                   push edx
// 004ab601  8bce                 mov ecx, esi
// 004ab603  c644241300           mov byte ptr [esp + 0x13], 0
// 004ab608  e8f39fffff           call 0x4a5600
// 004ab60d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ab611  6a01                 push 1
// 004ab613  6a20                 push 0x20
// 004ab615  8d4c2410             lea ecx, [esp + 0x10]
// 004ab619  51                   push ecx
// 004ab61a  8bce                 mov ecx, esi
// 004ab61c  89442414             mov dword ptr [esp + 0x14], eax
// 004ab620  e8db9fffff           call 0x4a5600
// 004ab625  5e                   pop esi
// 004ab626  83c408               add esp, 8
// 004ab629  c3                   ret 

struct Stream
{
    void write(const void* data, int bits, bool rightAligned);
};

void encode(Stream* stream, unsigned int value)
{
    if (value - 1u <= 2u)
    {
        stream->write(&value, 2, true);
    }
    else
    {
        unsigned char zero = 0;
        stream->write(&zero, 2, true);
        unsigned int fullValue = value;
        stream->write(&fullValue, 32, true);
    }
}
