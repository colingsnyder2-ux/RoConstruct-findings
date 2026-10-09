// roc 2007-03 004adb50  unit: seg_004a0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004adb50
//
// 004adb50  668b442404           mov ax, word ptr [esp + 4]
// 004adb55  6689410a             mov word ptr [ecx + 0xa], ax
// 004adb59  c20400               ret 4
// copied from an identical function in another client (function ?setValue@RakPeer@ns_ROCX000001@@QAEXF@Z)

namespace ns_ROCX000001 {
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
