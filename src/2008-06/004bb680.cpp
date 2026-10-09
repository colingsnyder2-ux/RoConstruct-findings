// roc 2008-06 004bb680  unit: ProfiledRakPeer  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bb680
//
// 004bb680  668b442404           mov ax, word ptr [esp + 4]
// 004bb685  6689410a             mov word ptr [ecx + 0xa], ax
// 004bb689  c20400               ret 4
// copied from an identical function in another client (function ?setValue@RakPeer@ns_ROCX000002@@QAEXF@Z)

namespace ns_ROCX000002 {
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
