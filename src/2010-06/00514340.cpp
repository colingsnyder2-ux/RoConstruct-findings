// roc 2010-06 00514340  unit: RakPeer  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00514340
//
// 00514340  668b442404           mov ax, word ptr [esp + 4]
// 00514345  6689410a             mov word ptr [ecx + 0xa], ax
// 00514349  c20400               ret 4
// copied from an identical function in another client (function ?setValue@RakPeer@ns_ROCX000000@@QAEXF@Z)

namespace ns_ROCX000000 {
struct RakPeer {
    void setValue(short value);
    char m_pad[0xa];
    short m_value;
};

void RakPeer::setValue(short value)
{
    m_value = value;
}
}
