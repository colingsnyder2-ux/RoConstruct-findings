// from server: 72% by colin
// roc 2008-06 004bbd90  unit: ProfiledRakPeer  size: 57 bytes
// library Roblox/Network/Peer.cpp (function ?getDutyCycle@ProfiledRakPeer@@QAENXZ)

extern float _flt_819778;

struct ProfiledRakPeer {
    char pad[0x6d4];
    unsigned int m_count;      // 0x6d4
    char pad2[0x4];
    int m_accum;               // 0x6dc
    double getDutyCycle();
};

double ProfiledRakPeer::getDutyCycle()
{
    unsigned int count = m_count;
    if (count != 0)
        return 0.0;
    int accum = m_accum;
    double dAccum = (double)accum;
    if (accum < 0)
        dAccum += (double)_flt_819778;
    double dCount = (double)count;
    if ((int)count < 0)
        dCount += (double)_flt_819778;
    return dAccum / dCount;
}
