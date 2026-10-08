// from server: 100% by colin
// roc 2007-08 004b88e0  unit: RakPeer  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b88e0
//
// 004b88e0  668b442404           mov ax, word ptr [esp + 4]
// 004b88e5  6689410a             mov word ptr [ecx + 0xa], ax
// 004b88e9  c20400               ret 4

struct RakPeer {
    void setValue(short value);
    char m_pad[0xa];
    short m_value;
};

void RakPeer::setValue(short value)
{
    m_value = value;
}
